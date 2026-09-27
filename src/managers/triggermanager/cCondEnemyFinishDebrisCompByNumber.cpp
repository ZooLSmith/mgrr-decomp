// src/managers/triggermanager/cCondEnemyFinishDebrisCompByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyFinishDebrisCompByNumber.h"

extern unsigned int DAT_01bea060;  // global flag word (0x400 blocks enemy-finish conditions)
extern int DAT_01dbd1d0;  // non-zero when DAT_01dbd1d8 is valid
extern int DAT_01dbd1d8;  // stage info: +0x0C stage id, +0x10 room id

namespace cCondEnemyFinishDebrisCompByNumber_p1 {

// call a function as __cdecl with exactly the arguments the raw call shows
// (used for the __cdecl callees; __thiscall callees go through thiscall() below)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function with an explicit ECX (`self`), recovered from the machine code
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

} // namespace cCondEnemyFinishDebrisCompByNumber_p1

// 00C7D540  Trigger::cCondEnemyFinishDebrisCompByNumber::vf14  size=185  [class]
int Trigger::cCondEnemyFinishDebrisCompByNumber::vf14()
{
    using namespace cCondEnemyFinishDebrisCompByNumber_p1;
    if ((DAT_01bea060 & 0x400) != 0) {
        return 0;
    }
    // stage 0x520 ("P520_RUN_SAVE" room): enemy set 0xD is ignored while flag 0x2000000 is set
    if (DAT_01dbd1d0 != 0 && *(int *)(DAT_01dbd1d8 + 0xc) == 0x520) {
        int currentRoom = *(int *)(DAT_01dbd1d8 + 0x10);
        if (currentRoom == cdeclcall<int>(FUN_00e03ea0, "P520_RUN_SAVE") && enemyNumber() == 0xd &&
            (DAT_01bea060 & 0x2000000) != 0) {
            return 0;
        }
    }
    if (finished() == 0) {
        if (thiscall<int>(FUN_00c18cc0, (void *)0x01C78CB0, enemyNumber()) == 1) {  // ECX = 0x01C78CB0 (enemy manager)
            finished() = thiscall<int>(FUN_00c19190, (void *)0x01C78CB0, enemyNumber());  // ECX = 0x01C78CB0 (enemy manager)
        }
    }
    if (finished() == 1) {
        if (delay() <= elapsed()) {  // raw: delay < elapsed != (delay == elapsed), i.e. x87 "<="
            finished() = 0;
            return 1;
        }
        double frameTime = thiscall<double>(FUN_00e03a90, (void *)0x01BE93B0, 0);  // ECX = 0x01BE93B0
        elapsed() = (float)(frameTime + elapsed());
    }
    return 0;
}

// 00C7D600  Trigger::cCondEnemyFinishDebrisCompByNumber::vf1C  size=28  [class]
void Trigger::cCondEnemyFinishDebrisCompByNumber::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    enemyNumber() = record[2];                                  // record+0x08
    delay() = *(float *)((char *)record + 0x0C) * 60.0f;        // seconds -> frames
}

// 00C7D620  Trigger::cCondEnemyFinishDebrisCompByNumber::vf20  size=18  [class]
int Trigger::cCondEnemyFinishDebrisCompByNumber::vf20()
{
    finished() = 0;
    elapsed() = 0.0f;
    return 1;
}

// 00C86900  Trigger::cCondEnemyFinishDebrisCompByNumber::vf00  size=31  [class]
Trigger::cCondEnemyFinishDebrisCompByNumber *Trigger::cCondEnemyFinishDebrisCompByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
