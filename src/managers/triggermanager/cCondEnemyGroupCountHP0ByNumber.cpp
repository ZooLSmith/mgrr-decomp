// src/managers/triggermanager/cCondEnemyGroupCountHP0ByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupCountHP0ByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern undefined DAT_016a9994;  // debug error message
extern undefined DAT_016a995c;  // debug error message

namespace cCondEnemyGroupCountHP0ByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00dd5650: printf-style debug error report (functions.h declares it without parameters)
inline void reportError(const void *format) { ((void (__cdecl *)(const void *, ...))FUN_00dd5650)(format); }

// FUN_00c18c10: nonzero while the numbered enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18c10)(DAT_01c78cb0, groupNo, enemyNo); }

// FUN_00c19970: number of HP-0 enemies of the numbered set in the group
inline int enemyGroupCountHP0ByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c19970)(DAT_01c78cb0, groupNo, enemyNo); }

} // namespace cCondEnemyGroupCountHP0ByNumber_p1

// 00C7BF10  Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber  size=32  [class]
Trigger::cCondEnemyGroupCountHP0ByNumber::cCondEnemyGroupCountHP0ByNumber()
{
    using namespace cCondEnemyGroupCountHP0ByNumber_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupCountHP0ByNumber::vftable (0x016A9938)
    compareOp() = 0;
    groupNo() = -1;
    enemyNo() = -1;
}

// 00C7BF40  Trigger::cCondEnemyGroupCountHP0ByNumber::vf14  size=163  [class]
bool Trigger::cCondEnemyGroupCountHP0ByNumber::vf14()
{
    using namespace cCondEnemyGroupCountHP0ByNumber_p1;

    if (groupNo() == -1) {
        reportError(&DAT_016a9994);   // group number not set
    }
    else {
        if (enemyNo() == -1) {
            reportError(&DAT_016a995c);   // enemy set number not set
            return false;
        }
        if (enemyGroupSetByNumber(groupNo(), enemyNo()) != 0) {
            int count = enemyGroupCountHP0ByNumber(groupNo(), enemyNo());
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

// 00C7C000  Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupCountHP0ByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupCountHP0ByNumber_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyNo() = record[5];
}

// 00C86240  Trigger::cCondEnemyGroupCountHP0ByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupCountHP0ByNumber *Trigger::cCondEnemyGroupCountHP0ByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
