// src/managers/triggermanager/cCondEnemyGroupEntityCountHP0ByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupEntityCountHP0ByName.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern undefined DAT_016a9b7c;  // debug error message
extern undefined DAT_016a9b38;  // debug error message

namespace cCondEnemyGroupEntityCountHP0ByName_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18c40: nonzero while the named enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c18c40)(DAT_01c78cb0, groupNo, name); }

// FUN_00c197e0: HP-0 entity count of the named set in the group
inline int enemyGroupEntityCountHP0ByName(int groupNo, char *name) { return ((int (__thiscall *)(void *, int, char *))(void *)FUN_00c197e0)(DAT_01c78cb0, groupNo, name); }

} // namespace cCondEnemyGroupEntityCountHP0ByName_p1

// 00C7C280  Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName  size=35  [class]
Trigger::cCondEnemyGroupEntityCountHP0ByName::cCondEnemyGroupEntityCountHP0ByName()
{
    using namespace cCondEnemyGroupEntityCountHP0ByName_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupEntityCountHP0ByName::vftable (0x016A9B14)
    compareOp() = 0;
    groupNo() = -1;
    enemyName() = 0;
    field20() = 0;
}

// 00C7C2C0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14  size=162  [class]
bool Trigger::cCondEnemyGroupEntityCountHP0ByName::vf14()
{
    using namespace cCondEnemyGroupEntityCountHP0ByName_p1;

    if (groupNo() == -1) {
        reportError(&DAT_016a9b7c);   // group number not set
    }
    else {
        if (enemyName() == 0) {
            reportError(&DAT_016a9b38);   // enemy set name not set
            return false;
        }
        if (enemyGroupSetByName(groupNo(), enemyName()) != 0) {
            int count = enemyGroupEntityCountHP0ByName(groupNo(), enemyName());
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

// 00C7C380  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupEntityCountHP0ByName::vf1C(int *record)
{
    using namespace cCondEnemyGroupEntityCountHP0ByName_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyName() = (char *)(record + 5);   // name string at record+0x14
}

// 00C862A0  Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00  size=31  [class]
Trigger::cCondEnemyGroupEntityCountHP0ByName *Trigger::cCondEnemyGroupEntityCountHP0ByName::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
