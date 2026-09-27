// src/managers/triggermanager/cCondEnemyGroupEntityCountByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupEntityCountByNumber.h"

namespace cCondEnemyGroupEntityCountByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

} // namespace cCondEnemyGroupEntityCountByNumber_p1

// 00C7C160  Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber  size=32  [class]
Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber()
{
    using namespace cCondEnemyGroupEntityCountByNumber_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupEntityCountByNumber::vftable (0x016A9A70)
    compareOp() = 0;
    groupNo() = -1;
    enemyNo() = -1;
}

// 00C7C250  Trigger::cCondEnemyGroupEntityCountByNumber::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupEntityCountByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupEntityCountByNumber_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyNo() = record[5];
}

// 00C86280  Trigger::cCondEnemyGroupEntityCountByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupEntityCountByNumber *Trigger::cCondEnemyGroupEntityCountByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
