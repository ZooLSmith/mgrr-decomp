// src/managers/triggermanager/cCondEnemyGroupCountByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupCountByNumber.h"

namespace cCondEnemyGroupCountByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

} // namespace cCondEnemyGroupCountByNumber_p1

// 00C7BCD0  Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber  size=32  [class]
Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber()
{
    using namespace cCondEnemyGroupCountByNumber_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupCountByNumber::vftable (0x016A980C)
    compareOp() = 0;
    groupNo() = -1;
    enemyNo() = -1;
}

// 00C7BDC0  Trigger::cCondEnemyGroupCountByNumber::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupCountByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupCountByNumber_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyNo() = record[5];
}

// 00C86200  Trigger::cCondEnemyGroupCountByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupCountByNumber *Trigger::cCondEnemyGroupCountByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
