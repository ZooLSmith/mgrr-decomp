// src/managers/triggermanager/cCondEnemyCountByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyCountByName.h"

extern undefined DAT_016ac478;  // debug message
extern undefined4 DAT_01d5bad4;  // argument of FUN_00c18cc0 for "all"

namespace cCondEnemyCountByName_p1 {

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

} // namespace cCondEnemyCountByName_p1

// 00C7A280  Trigger::cCondEnemyCountByName::cCondEnemyCountByName  size=32  [class]
Trigger::cCondEnemyCountByName::cCondEnemyCountByName()
{
    // inlined Trigger::cCondition constructor
    *(int *)((char *)this + 0x0C) /* cCondition+0x0C: ? */ = -1;
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = 0;
    *(int *)((char *)this + 0x08) /* cCondition+0x08: ? */ = -1;
    // vftable = Trigger::cCondEnemyCountByName::vftable (0x016A8EE8)
    compareOp() = 0;
    enemyName() = 0;
    allRegistered() = 0;
}

// 00C7A2B0  Trigger::cCondEnemyCountByName::vf1C  size=28  [class]
void Trigger::cCondEnemyCountByName::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    compareOp() = record[2];               // record+0x08
    threshold() = record[3];               // record+0x0C
    enemyName() = (char *)record + 0x10;   // name string stored in the record
}

// 00C85230  Trigger::cCondEnemyCountByName::vf00  size=31  [class]
Trigger::cCondEnemyCountByName *Trigger::cCondEnemyCountByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C85250  Trigger::cCondEnemyCountByName::vf14  size=197  [class]
bool Trigger::cCondEnemyCountByName::vf14()
{
    using namespace cCondEnemyCountByName_p1;
    int count;

    if (enemyName() == 0) {
        cdeclcall<void>(FUN_00dd5650, &DAT_016ac478);  // debug message
    }
    else {
        if (__stricmp((char *)"all", enemyName()) == 0) {
            if (allRegistered() == 0) {
                if (thiscall<int>(FUN_00c18cc0, (void *)0x01C78CB0, DAT_01d5bad4) == 0) {  // ECX = 0x01C78CB0 (enemy manager)
                    return false;
                }
                allRegistered() = 1;
            }
            count = thiscall<int>(FUN_00c195b0, (void *)0x01C78CB0);  // ECX = 0x01C78CB0
        }
        else {
            if (thiscall<int>(FUN_00c18c70, (void *)0x01C78CB0, enemyName()) == 0) {  // ECX = 0x01C78CB0 (enemy manager)
                return false;
            }
            count = thiscall<int>(FUN_00c19920, (void *)0x01C78CB0, enemyName());  // ECX = 0x01C78CB0 (enemy manager)
        }
        switch (compareOp()) {
        case 1:
            return count < threshold();
        case 2:
            return count <= threshold();
        case 3:
            return count == threshold();
        case 4:
            return threshold() < count;
        case 5:
            return threshold() <= count;
        }
    }
    return false;
}
