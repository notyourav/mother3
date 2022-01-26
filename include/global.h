#ifndef GUARD_GLOBAL_H
#define GUARD_GLOBAL_H

#include "gba/types.h"

#define asm_unified(x) asm(".syntax unified\n" x "\n.syntax divided")
#define NAKED __attribute__((naked))
#define NULL 0

#if NON_MATCHING
#define ASM_FUNC(path, decl)
#else
#define ASM_FUNC(path, decl)                                                                       \
    NAKED decl { asm(".include " #path); }
#endif

#if NON_MATCHING
#define NONMATCH(path, decl) decl
#define END_NONMATCH
#else
#define NONMATCH(path, decl)                                                                       \
    NAKED decl {                                                                                   \
        asm(".include " #path);                                                                    \
        if (0)
#define END_NONMATCH }
#endif

#endif  // GUARD_GLOBAL_H
