// src/managers/triggermanager/cCondEnemyFinishHPCompByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyFinishHPCompByNumber.h"

extern unsigned int DAT_01bea060;  // global flag word (0x400 blocks enemy-finish conditions)

namespace cCondEnemyFinishHPCompByNumber_p1 {

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

} // namespace cCondEnemyFinishHPCompByNumber_p1

// 00C7D3B0  Trigger::cCondEnemyFinishHPCompByNumber::vf14  size=123  [class]
int Trigger::cCondEnemyFinishHPCompByNumber::vf14()
{
    using namespace cCondEnemyFinishHPCompByNumber_p1;
    if ((DAT_01bea060 & 0x400) != 0) {
        return 0;
    }
    if (finished() == 0) {
        if (thiscall<int>(FUN_00c18cc0, (void *)0x01C78CB0, enemyNumber()) == 1) {  // ECX = 0x01C78CB0 (enemy manager)
            finished() = thiscall<int>(FUN_00c19110, (void *)0x01C78CB0, enemyNumber());  // ECX = 0x01C78CB0 (enemy manager)
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

// 00C7D430  Trigger::cCondEnemyFinishHPCompByNumber::vf1C  size=28  [class]
void Trigger::cCondEnemyFinishHPCompByNumber::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    enemyNumber() = record[2];                                  // record+0x08
    delay() = *(float *)((char *)record + 0x0C) * 60.0f;        // seconds -> frames
}

// 00C7D450  Trigger::cCondEnemyFinishHPCompByNumber::vf20  size=18  [class]
int Trigger::cCondEnemyFinishHPCompByNumber::vf20()
{
    finished() = 0;
    elapsed() = 0.0f;
    return 1;
}

// 00C867F0  Trigger::cCondEnemyFinishHPCompByNumber::vf00  size=31  [class]
Trigger::cCondEnemyFinishHPCompByNumber *Trigger::cCondEnemyFinishHPCompByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
