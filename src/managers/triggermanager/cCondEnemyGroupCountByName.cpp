// src/managers/triggermanager/cCondEnemyGroupCountByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupCountByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern undefined DAT_016a97d4;  // debug error message
extern undefined DAT_016a97a0;  // debug error message

namespace cCondEnemyGroupCountByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18c40: nonzero while the named enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18c40)(DAT_01c78cb0, groupNo, name); }

// FUN_00c198c0: number of enemies of the named set in the group
inline int enemyGroupCountByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c198c0)(DAT_01c78cb0, groupNo, name); }

} // namespace cCondEnemyGroupCountByName_p1

// 00C7BBA0  Trigger::cCondEnemyGroupCountByName::cCondEnemyGroupCountByName  size=35  [class]
Trigger::cCondEnemyGroupCountByName::cCondEnemyGroupCountByName()
{
    using namespace cCondEnemyGroupCountByName_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupCountByName::vftable (0x016A977C)
    compareOp() = 0;
    groupNo() = -1;
    enemyName() = 0;
    field20() = 0;
}

// 00C7BBE0  Trigger::cCondEnemyGroupCountByName::vf14  size=162  [class]
bool Trigger::cCondEnemyGroupCountByName::vf14()
{
    using namespace cCondEnemyGroupCountByName_p1;

    if (groupNo() == -1) {
        reportError(&DAT_016a97d4);   // group number not set
    }
    else {
        if (enemyName() == 0) {
            reportError(&DAT_016a97a0);   // enemy set name not set
            return false;
        }
        if (enemyGroupSetByName(groupNo(), enemyName()) != 0) {
            int count = enemyGroupCountByName(groupNo(), enemyName());
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
    }
    return false;
}

// 00C7BCA0  Trigger::cCondEnemyGroupCountByName::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupCountByName::vf1C(int *record)
{
    using namespace cCondEnemyGroupCountByName_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyName() = (char *)(record + 5);   // name string at record+0x14
}

// 00C861E0  Trigger::cCondEnemyGroupCountByName::vf00  size=31  [class]
Trigger::cCondEnemyGroupCountByName *Trigger::cCondEnemyGroupCountByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
