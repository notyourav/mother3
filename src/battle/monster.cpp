#include "battle/monster.h"

extern "C" void* get_misctext_msg(u32, u16);
extern "C" u16 get_misctext_len(u32);

Msg getMonsterName(u32 idx) {
    return Msg::genMisctextMsg(get_misctext_msg(7, idx), get_misctext_len(7));
}

extern "C" const MonsterData gMonsterData[];

extern ClockData gUnknown_0810B278;
extern ClockData gUnknown_0810B280;

Monster::Monster(u16 a, u16 idx) {
    _f8 = a;
    _fa = idx;
    _fc = &gMonsterData[idx];
    _114 = gMonsterData[idx].death_anim;
    _100 = 0;
    _104 = _fc->hp;
    _130 = 0;

    sub_08080B60();
    sub_08080CE4();
    sub_08080D48();
    _13c = new GfxThing(this);
    listen(BattleSingleton::get(), RoundBegin(), gUnknown_0810B278);
    listen(BattleSingleton::get(), RoundEnd(), gUnknown_0810B280);
}
