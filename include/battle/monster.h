#ifndef BATTLE_MONSTER_H
#define BATTLE_MONSTER_H

#include "global.h"
#include "battle/unit.h"
#include "battle.h"

struct MonsterData {
    u32 id;
    u32 smell;
    u16 overworld_sfx;
    u16 battle_bg;
    u16 encounter_bgm;
    u16 battle_bgm;
    u16 win_bgm;
    u16 level;
    u32 hp;
    u32 pp;
    u8 offense;
    u8 defense;
    u8 iq;
    u8 speed;
    u32 kindness;
    u8 offense_surprise;
    u8 defense_surprise;
    u8 iq_surprise;
    u8 speed_surprise;
    u32 kindness_surprise;
    u16 weaknesses[20];
    u16 skills[8];
    u16 attack_sfx;
    u8 encounter_msg;
    u8 death_msg;
    u8 death_anim;
    u32 battle_pos;
    u8 memory_height[2];
    u8 battle_height[2];
    u8 memory_back_sprite;
    u8 battle_back_sprite;
    u16 death_anim_last;
    u8 item1_no;
    u8 item1_chance;
    u16 item1_unk;
    u8 item2_no;
    u8 item2_chance;
    u16 item2_unk;
    u8 item3_no;
    u8 item3_chance;
    u16 item3_unk;
    u32 experience;
    u32 money;
    u16 smell_weaknesses[2];
};

struct GfxThing {
    GfxThing(Unit*);

    u8 filler[200];
};

class Monster : public Unit {
public:
    struct Substruct {
        Substruct();
    };
    struct Substruct2 {
        Substruct2() {
            val = 0;
        }
        u32 val;
    };

    Monster();
    Monster(u16 a, u16 idx);
    virtual ~Monster();

    virtual void* getInstance();

    virtual void monster_2c0();
    virtual void monster_2c8();
    virtual void monster_2d0();
    virtual void monster_2d8();
    virtual void monster_2e0();
    virtual void monster_2e8();
    virtual void monster_2f0();
    virtual void monster_2f8();
    virtual void monster_300(bool);
    virtual void monster_308();
    virtual void monster_310();
    virtual void monster_318();
    virtual void monster_320();
    virtual void monster_328();
    virtual void monster_330();
    virtual void monster_338();
    virtual void monster_340();
    virtual u32 monster_348();
    virtual u32 monster_350();
    virtual void monster_358();
    virtual void monster_360();
    virtual void monster_368();
    virtual void monster_370();
    virtual void monster_378();
    virtual bool monster_380();

    void sub_08080B60();
    void sub_08080CE4();
    void sub_08080D48();

    u16 _f8;
    u16 _fa;
    const MonsterData* _fc;
    u32 _100;
    s32 _104;
    Msg _108;
    u16 _114;
    u32 _118;
    Substruct2 _11c;
    u32 _120;
    u32 _124;
    u32 _128;
    u32 _12c;
    u16 _130;
    Substruct _134;
    u32 _138;
    GfxThing* _13c;
};

SINGLETON(Monster);

#endif // BATTLE_MONSTER_H
