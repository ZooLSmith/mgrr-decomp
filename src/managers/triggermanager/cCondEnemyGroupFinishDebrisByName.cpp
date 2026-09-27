// src/managers/triggermanager/cCondEnemyGroupFinishDebrisByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupFinishDebrisByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern unsigned int DAT_01bea060;  // global flags (0x400: enemy finish checks suspended)
extern undefined DAT_016ac5f8;  // debug error message

namespace cCondEnemyGroupFinishDebrisByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18cc0: nonzero while the numbered enemy set is placed (? see cCondEnemyNotSetByNumber)
inline int enemySetByNumber(int number) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c18cc0)(DAT_01c78cb0, number); }

// FUN_00c18f40: dismemberment-finish state of the whole group ("all")
inline int enemyGroupFinishDebrisAll(int groupNo) { return ((int (__thiscall *)(void *, int))(void *)FUN_00c18f40)(DAT_01c78cb0, groupNo); }

// FUN_00c18c70: nonzero while the named enemy set is placed (? see cCondEnemyNotSetByName)
inline int enemySetByName(char *name) { return ((int (__thiscall *)(void *, char *))(void *)FUN_00c18c70)(DAT_01c78cb0, name); }

// FUN_00c18fa0: dismemberment-finish state of the named enemy set of the group
inline int enemyGroupFinishDebrisByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18fa0)(DAT_01c78cb0, groupNo, name); }

} // namespace cCondEnemyGroupFinishDebrisByName_p1

// 00C7C660  Trigger::cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName  size=35  [class]
Trigger::cCondEnemyGroupFinishDebrisByName::cCondEnemyGroupFinishDebrisByName()
{
    using namespace cCondEnemyGroupFinishDebrisByName_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupFinishDebrisByName::vftable (0x016A9CC0)
    enemyName() = 0;
    groupNo() = 0;
    finishState() = 0;
    allSetState() = 0;
}

// 00C7C6A0  Trigger::cCondEnemyGroupFinishDebrisByName::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupFinishDebrisByName::vf1C(int *record)
{
    using namespace cCondEnemyGroupFinishDebrisByName_p1;

    conditionRecord(this) = record;
    enemyName() = (char *)(record + 3);   // name string at record+0x0C
    groupNo() = record[2];
}

// 00C7C6C0  Trigger::cCondEnemyGroupFinishDebrisByName::vf20  size=13  [class]
int Trigger::cCondEnemyGroupFinishDebrisByName::vf20()
{
    finishState() = 0;
    return 1;
}

// 00C863F0  Trigger::cCondEnemyGroupFinishDebrisByName::vf00  size=31  [class]
Trigger::cCondEnemyGroupFinishDebrisByName *Trigger::cCondEnemyGroupFinishDebrisByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C86410  Trigger::cCondEnemyGroupFinishDebrisByName::vf14  size=173  [class]
bool Trigger::cCondEnemyGroupFinishDebrisByName::vf14()
{
    using namespace cCondEnemyGroupFinishDebrisByName_p1;

    if (enemyName() == 0) {
        reportError(&DAT_016ac5f8);   // enemy set name not set
    }
    else if ((DAT_01bea060 & 0x400) == 0) {
        if (finishState() == 0) {
            if (__stricmp((char *)"all", enemyName()) == 0) {
                if (allSetState() == 0) {
                    allSetState() = enemySetByNumber(groupNo());
                }
                if (allSetState() == 1) {
                    finishState() = enemyGroupFinishDebrisAll(groupNo());
                }
            }
            else if (enemySetByName(enemyName()) == 1) {
                finishState() = enemyGroupFinishDebrisByName(groupNo(), enemyName());
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
