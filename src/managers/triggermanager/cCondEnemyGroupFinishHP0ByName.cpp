// src/managers/triggermanager/cCondEnemyGroupFinishHP0ByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupFinishHP0ByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern unsigned int DAT_01bea060;  // global flags (0x400: enemy finish checks suspended)
extern undefined DAT_016ac620;  // debug error message
extern int DAT_01d5bad4;

namespace cCondEnemyGroupFinishHP0ByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18cc0: nonzero while the numbered enemy set is placed (? see cCondEnemyNotSetByNumber)
inline int enemySetByNumber(int number) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c18cc0)(DAT_01c78cb0, number); }

// FUN_00c18dd0: HP-0 state of the whole group ("all")
inline int enemyGroupFinishHP0All(int groupNo) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c18dd0)(DAT_01c78cb0, groupNo); }

// FUN_00c18c40: nonzero while the named enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18c40)(DAT_01c78cb0, groupNo, name); }

// FUN_00c18e30: HP-0 state of the named enemy set of the group
inline int enemyGroupFinishHP0ByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18e30)(DAT_01c78cb0, groupNo, name); }

} // namespace cCondEnemyGroupFinishHP0ByName_p1

// 00C7B920  Trigger::cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName  size=35  [class]
Trigger::cCondEnemyGroupFinishHP0ByName::cCondEnemyGroupFinishHP0ByName()
{
    using namespace cCondEnemyGroupFinishHP0ByName_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupFinishHP0ByName::vftable (0x016A96B4)
    enemyName() = 0;
    groupNo() = 0;
    finishState() = 0;
    allSetState() = 0;
}

// 00C7B960  Trigger::cCondEnemyGroupFinishHP0ByName::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupFinishHP0ByName::vf1C(int *record)
{
    using namespace cCondEnemyGroupFinishHP0ByName_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyName() = (char *)(record + 3);   // name string at record+0x0C
}

// 00C7B980  Trigger::cCondEnemyGroupFinishHP0ByName::vf20  size=13  [class]
int Trigger::cCondEnemyGroupFinishHP0ByName::vf20()
{
    finishState() = 0;
    return 1;
}

// 00C86080  Trigger::cCondEnemyGroupFinishHP0ByName::vf00  size=31  [class]
Trigger::cCondEnemyGroupFinishHP0ByName *Trigger::cCondEnemyGroupFinishHP0ByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C860A0  Trigger::cCondEnemyGroupFinishHP0ByName::vf14  size=179  [class]
bool Trigger::cCondEnemyGroupFinishHP0ByName::vf14()
{
    using namespace cCondEnemyGroupFinishHP0ByName_p1;

    if (enemyName() == 0) {
        reportError(&DAT_016ac620);   // enemy set name not set
    }
    else if ((DAT_01bea060 & 0x400) == 0) {
        if (finishState() == 0) {
            if (__stricmp((char *)"all", enemyName()) == 0) {
                if (allSetState() == 0) {
                    allSetState() = enemySetByNumber(DAT_01d5bad4);   // ? a global, not groupNo() as in the sibling classes
                }
                if (allSetState() == 1) {
                    finishState() = enemyGroupFinishHP0All(groupNo());
                }
            }
            else if (enemyGroupSetByName(groupNo(), enemyName()) == 1) {
                finishState() = enemyGroupFinishHP0ByName(groupNo(), enemyName());
            }
        }
        bool finished = finishState() == 1;
        if (finished) {
            finishState() = 0;
        }
        return finished;
    }
    return false;
}
