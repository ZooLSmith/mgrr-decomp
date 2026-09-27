// src/managers/triggermanager/cCondEnemyGroupEntityCountHP0ByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupEntityCountHP0ByNumber.h"

namespace cCondEnemyGroupEntityCountHP0ByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondEnemyGroupEntityCountHP0ByNumber_p1

// 00C7C4A0  Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf1C  size=34  [class]
void Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupEntityCountHP0ByNumber_p1;

    conditionRecord(this) = record;
    compareOp() = record[2];
    threshold() = record[3];
    groupNo() = record[4];
    enemyNo() = record[5];
}

// 00C862C0  Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupEntityCountHP0ByNumber *Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
