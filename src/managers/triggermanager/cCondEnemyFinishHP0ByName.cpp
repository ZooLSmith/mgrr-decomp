// src/managers/triggermanager/cCondEnemyFinishHP0ByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyFinishHP0ByName.h"

extern undefined DAT_016ac518;  // debug message
extern unsigned int DAT_01bea060;  // global flag word (0x400 blocks enemy-finish conditions)
extern undefined4 DAT_01d5bad4;  // argument of FUN_00c18cc0 for "all"

namespace cCondEnemyFinishHP0ByName_p1 {

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

} // namespace cCondEnemyFinishHP0ByName_p1

// 00C7A580  Trigger::cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName  size=37  [class]
Trigger::cCondEnemyFinishHP0ByName::cCondEnemyFinishHP0ByName()
{
    elapsed() = 0.0f;
    // inlined Trigger::cCondition constructor
    *(int *)((char *)this + 0x0C) /* cCondition+0x0C: ? */ = -1;
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = 0;
    *(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ = -1;
    // vftable = Trigger::cCondEnemyFinishHP0ByName::vftable (0x016A8F88)
    enemyName() = 0;
    finished() = 0;
    allRegistered() = 0;
}

// 00C7A5C0  Trigger::cCondEnemyFinishHP0ByName::vf1C  size=28  [class]
void Trigger::cCondEnemyFinishHP0ByName::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    enemyName() = (char *)record + 8;                           // name string stored in the record
    delay() = *(float *)((char *)record + 0x18) * 60.0f;        // seconds -> frames
}

// 00C7A5E0  Trigger::cCondEnemyFinishHP0ByName::vf20  size=18  [class]
int Trigger::cCondEnemyFinishHP0ByName::vf20()
{
    finished() = 0;
    elapsed() = 0.0f;
    return 1;
}

// 00C85490  Trigger::cCondEnemyFinishHP0ByName::vf00  size=31  [class]
Trigger::cCondEnemyFinishHP0ByName *Trigger::cCondEnemyFinishHP0ByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C854B0  Trigger::cCondEnemyFinishHP0ByName::vf14  size=203  [class]
int Trigger::cCondEnemyFinishHP0ByName::vf14()
{
    using namespace cCondEnemyFinishHP0ByName_p1;
    if (enemyName() == 0) {
        cdeclcall<void>(FUN_00dd5650, &DAT_016ac518);  // debug message
    }
    else if ((DAT_01bea060 & 0x400) == 0) {
        if (finished() == 0) {
            if (__stricmp((char *)"all", enemyName()) == 0) {
                if (allRegistered() == 0) {
                    allRegistered() = thiscall<int>(FUN_00c18cc0, (void *)0x01C78CB0, DAT_01d5bad4);  // ECX = 0x01C78CB0 (enemy manager)
                }
                if (allRegistered() == 1) {
                    finished() = thiscall<int>(FUN_00c18b90, (void *)0x01C78CB0);  // ECX = 0x01C78CB0 (enemy manager)
                }
            }
            else if (thiscall<int>(FUN_00c18c70, (void *)0x01C78CB0, enemyName()) == 1) {  // ECX = 0x01C78CB0 (enemy manager)
                finished() = thiscall<int>(FUN_00c18e60, (void *)0x01C78CB0, enemyName());  // ECX = 0x01C78CB0 (enemy manager)
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
    return 0;
}
