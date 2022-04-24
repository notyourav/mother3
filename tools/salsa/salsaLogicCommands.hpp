#pragma once

#include <algorithm>
#include <cassert>
#include <cstring>
#include <list>
#include <sstream>
#include <vector>
#include "salsa.hpp"
#include "salsaLogic.hpp"

namespace logic {

// Retrieves messages from a file called eng_script.txt, based on text id.
struct MsgCommentHelper {
    static bool loaded;
    static std::vector<std::string> comments;

    static std::string find_msg(const std::string& bank, const std::string& idx) {
        if (!loaded) {
            std::ifstream ifs("eng_script.txt");
            std::string line;
            while (std::getline(ifs, line)) {
                comments.push_back(line);
            }
            loaded = true;
        }

        auto id_str = bank + "-" + idx + ":";
        for (auto& comment : comments) {
            if (comment.find(id_str) == 0) {
                return comment;
            }
        }
        return "Unknown Message ???";
    }

    static std::string find_glob_msg(const std::string& idx) { return find_msg("0", idx); }
};

struct Frame2StackCommand : Command {
    Frame2StackCommand() = default;
    ~Frame2StackCommand() final = default;

    Frame2StackCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        value = (raw >> 16) & 0xFFFF;
    }

    const char* getName() const final { return "LOAD_REG"; }
    const char* getFormat() const final { return "(%d, %hd)"; }
    std::string toString() const final { return toStringImpl(frame, value); }
    void fromString(const char* str) final { fromStringImpl(str, &frame, &value); }

    u32 frame = 0;
    s16 value = 0;
};

struct PushImmCommand : Command {
    PushImmCommand() = default;
    ~PushImmCommand() final = default;

    PushImmCommand(u32 raw) { value = sign_extend<s32>(raw >> 8, 24); }

    const char* getName() const final { return "PUSH"; }
    const char* getFormat() const final { return "(%d)"; }
    const char* getFormatInline() const final { return "%d"; }
    std::string toString() const final { return toStringImpl(value); }
    void fromString(const char* str) final { fromStringImpl(str, &value); }
    void fromStringInline(const char* str) final { sscanf(str, getFormatInline(), &value); }
    std::string getValueAsArg() const final { return mkstr("%d", value); }

    s32 value = 0;
};

struct FrameAddrCommand : Command {
    FrameAddrCommand() = default;
    ~FrameAddrCommand() final = default;

    FrameAddrCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        value = (raw >> 16) & 0xFFFF;
    }

    const char* getName() const final { return "REG_ADDR"; }
    const char* getFormat() const final { return "(%d, %d)"; }
    std::string toString() const final { return toStringImpl(frame, value); }
    void fromString(const char* str) final { fromStringImpl(str, &frame, &value); }

    u32 frame = 0;
    s32 value = 0;
};

struct Stack2FrameCommand : Command {
    Stack2FrameCommand() = default;
    ~Stack2FrameCommand() final = default;

    Stack2FrameCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        value = (raw >> 16) & 0xFFFF;
    }

    void process(Command::iterator it) final { arg = *--it; }

    const char* getName() const final { return "STORE_REG"; }

    std::string toString() const final {
        std::stringstream ss;
        if (disable_inline) {
            ss << arg->toString() << "\n";
            ss << getName() << "(" << frame << "," << value << ")";
        } else {
            ss << getName() << "(" << arg->getValueAsArg() << "," << frame << "," << value << ")";
        }
        return ss.str();
    }

    u32 getArgc() const final { return arg != nullptr ? 1 : 0; }
    u32 getCommandCount() const final {
        int count = 1;
        if (arg != nullptr) {
            count += arg->getCommandCount();
        }
        return count;
    }
    void disableInlineAll() final {
        disable_inline = true;
        if (arg != nullptr) {
            arg->disableInlineAll();
        }
    }

    u32 frame = 0;
    s16 value = 0;
    Command* arg = nullptr;
};

struct ExtendedCommand : Command {
    ExtendedCommand() = default;
    ~ExtendedCommand() final = default;

    ExtendedCommand(u32 raw) {
        func = raw >> 16;
        assert(func <= 0xFF);
    }

    void process(Command::iterator it) final {
        // Look up the argument count
        argc = logic_argmap[func];
        if (argc == 0)
            return;

        args.reserve(argc);

        // Assume all arguments are loaded right before the call.
        it -= argc;
        for (int i = 0; i < argc; i++) {
            args.emplace_back(*it++);
        }
        assert(*it == this);
    }

    std::string toString() const final {
        std::stringstream ss;

        if (disable_inline) {
            for (int i = 0; i < argc; i++) {
                ss << args[i]->toString() << "\n";
            }
            ss << ext_cmd_names[func] << "()";
        } else {
            ss << ext_cmd_names[func];
            ss << "(";
            for (int i = 0; i < argc; i++) {
                if (i != 0)
                    ss << ", ";
                ss << args[i]->getValueAsArg();
            }
            ss << ")";
        }

        // Write out the message being retrieved by text disp commands
        if (func == 0x32) {
            ss << " // local bank msg " << args[2]->getValueAsArg();
        } else if (func == 0x33) {
            ss << " // " << MsgCommentHelper::find_glob_msg(args[2]->getValueAsArg());
        }

        return ss.str();
    }

    void fromString(const char* str) final {
        std::string s = str;
        auto lparen_idx = s.find_first_of("(");
        auto rparen_idx = s.find_last_of(")");
        auto func_name = s.substr(0, lparen_idx);
        auto args_str = s.substr(lparen_idx + 1, rparen_idx - lparen_idx - 1);

        func =
            std::distance(ext_cmd_names.begin(),
                          std::find(ext_cmd_names.begin(), ext_cmd_names.end(), func_name.c_str()));
        if (func == ext_cmd_names.size()) {
            std::cerr << "Unknown extended command: " << str << "\n";
            exit(-1);
        }

        argc = logic_argmap[func];

        if (lparen_idx + 1 == rparen_idx) {
            // empty call, do nothing
            return;
        }

        auto get_cmd_len = [](const std::string& s) {
            int scope = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(') {
                    scope++;
                } else if (s[i] == ')') {
                    scope--;
                } else if (s[i] == ',' && scope == 0) {
                    return i;
                }
            }
            return -1;
        };

        size_t pos = std::string::npos;
        for (int i = 0; i < argc - 1; i++) {
            pos = args_str.find(",");
            assert(pos != std::string::npos);

            Command* c = nullptr;
            // if we find a "(" before a "," it's a command
            if (args_str.find("(") < pos) {
                // we do this to account for the case where we have a "," in the argument
                int cmd_len = get_cmd_len(args_str);
                if (cmd_len == -1) {
                    std::cerr << "Invalid argument: " << str << "\n";
                    exit(-1);
                }

                c = parseCommand(args_str.substr(0, cmd_len));
                args_str.erase(0, cmd_len + 1);
            } else {
                c = new PushImmCommand();
                c->fromStringInline(args_str.substr(0, pos).c_str());
                // std::cerr << "c value " << c->getValueAsArg() << "\n";
                args_str.erase(0, pos + 1);
            }
            args.emplace_back(c);
        }
        // last arg
        if (args_str.find("(") != std::string::npos) {
            args.emplace_back(parseCommand(args_str));
        } else {
            Command* c = new PushImmCommand();
            c->fromStringInline(args_str.c_str());
            // std::cerr << "c value " << c->getValueAsArg() << "\n";
            args.emplace_back(c);
        }

        assert(args.size() == argc);
    }

    u32 getArgc() const final { return argc; }
    u32 getCommandCount() const final {
        int count = 1;
        for (auto& arg : args) {
            count += arg->getCommandCount();
        }
        return count;
    }
    void disableInlineAll() final {
        disable_inline = true;
        for (auto& arg : args) {
            arg->disableInlineAll();
        }
    }

    u32 func = 0;
    u32 argc = 0;
    std::vector<Command*> args;
};

struct CallfCommand : Command {
    CallfCommand() = default;
    ~CallfCommand() final = default;

    CallfCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        func = (raw >> 16) & 0xFFFF;
    }

    std::string toString() const final {
        std::stringstream ss;
        ss << cmd_names[Callf] << "(" << frame << ", func_" << func << ")";
        return ss.str();
    }

    u32 frame = 0;
    u32 func = 0;
};

struct RetfCommand : Command {
    RetfCommand() = default;
    ~RetfCommand() final = default;

    RetfCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        value = (raw >> 16) & 0xFFFF;
    }

    const char* getName() const final { return "RET_REG"; }
    const char* getFormat() const final { return "(%d, %d)"; }
    std::string toString() const final { return toStringImpl(frame, value); }
    void fromString(const char* str) final { fromStringImpl(str, &frame, &value); }

    u32 frame = 0;
    u32 value = 0;
};

struct CallCommand : Command {
    CallCommand() = default;
    ~CallCommand() final = default;

    CallCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        lbl = (raw >> 16) & 0xFFFF;
    }

    std::string toString() const final {
        std::stringstream ss;
        ss << cmd_names[Call] << "(" << frame << ","
           << "lbl_" << lbl << ")";
        return ss.str();
    }

    u32 frame = 0;
    u32 lbl = 0;
};

struct RetCommand : Command {
    RetCommand() = default;
    ~RetCommand() final = default;

    RetCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        func = (raw >> 16) & 0xFFFF;
    }

    std::string toString() const final {
        std::stringstream ss;
        ss << cmd_names[Ret] << "(" << frame << "," << func << ")";
        return ss.str();
    }

    u32 frame = 0;
    u32 func = 0;
};

struct EndCommand : Command {
    EndCommand() = default;
    ~EndCommand() final = default;

    EndCommand(u32 raw) {}

    const char* getName() const final { return "END"; }
};

struct FramePushCommand : Command {
    FramePushCommand() = default;
    ~FramePushCommand() final = default;

    FramePushCommand(u32 raw) {
        frame = (raw >> 8) & 0xFF;
        value = (raw >> 16) & 0xFFFF;
    }

    const char* getName() const final { return "PUSH_REG"; }
    const char* getFormat() const final { return "(%d, %hd)"; }
    std::string toString() const final { return toStringImpl(frame, value); }
    void fromString(const char* str) final { fromStringImpl(str, &frame, &value); }

    u32 frame = 0;
    s16 value = 0;
};

struct SpAllocCommand : Command {
    SpAllocCommand() = default;
    ~SpAllocCommand() final = default;

    SpAllocCommand(u32 raw) { value = raw >> 8; }

    const char* getName() const final { return "SP_ALLOC"; }
    const char* getFormat() const final { return "(%d)"; }
    std::string toString() const final { return toStringImpl(value); }
    void fromString(const char* str) final { fromStringImpl(str, &value); }

    u32 value = 0;
};

struct JumpCommand : Command {
    JumpCommand() = default;
    ~JumpCommand() final = default;
    JumpCommand(u32 raw) { dest = raw >> 16; }

    const char* getName() const final { return "GOTO"; }

    std::string toString() const final {
        std::stringstream ss;
        ss << getName() << " lbl_" << dest;
        return ss.str();
    }

    u32 dest = 0;
};

struct JumpIfCommand : Command {
    JumpIfCommand() = default;
    ~JumpIfCommand() final = default;

    JumpIfCommand(u32 raw) { dest = raw >> 16; }

    std::string toString() const final {
        std::stringstream ss;
        ss << cmd_names[JumpIf] << " lbl_" << dest;
        return ss.str();
    }

    u32 dest = 0;
};

struct MathCommand : Command {
    MathCommand() = default;
    ~MathCommand() final = default;

    MathCommand(u32 raw) {
        func = raw >> 8;
        assert(func <= 0x13);
    }

    void process(Command::iterator it) final {
        // argument count for the math command
        argc = math_argmap[func];
        if (argc == 0)
            return;

        args.reserve(argc);
        // lets assume everything is loaded right before the call
        it -= argc;
        for (int i = 0; i < argc; i++) {
            args.emplace_back(*it++);
        }
        assert(*it == this);
    }

    std::string toString() const final {
        std::stringstream ss;

        if (disable_inline) {
            for (int i = 0; i < argc; i++) {
                ss << args[i]->toString() << "\n";
            }
            ss << math_cmd_names[func] << "()";
        } else {
            ss << math_cmd_names[func];
            if (argc != 0) {
                ss << "(";
                for (int i = 0; i < argc; i++) {
                    if (i != 0)
                        ss << ", ";
                    ss << args[i]->getValueAsArg();
                }
                ss << ")";
            }
        }

        return ss.str();
    }

    u32 getArgc() const final { return argc; }
    u32 getCommandCount() const final {
        int count = 1;
        for (auto& arg : args) {
            count += arg->getCommandCount();
        }
        return count;
    }
    void disableInlineAll() final {
        disable_inline = true;
        for (auto& arg : args) {
            arg->disableInlineAll();
        }
    }

    u32 func = 0;
    u32 argc = 0;
    std::vector<Command*> args;
};

}  // namespace logic
