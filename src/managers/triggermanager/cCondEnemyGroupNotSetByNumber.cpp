// src/managers/triggermanager/cCondEnemyGroupNotSetByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupNotSetByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

namespace cCondEnemyGroupNotSetByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// FUN_00c18c10: nonzero while the numbered enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18c10)(DAT_01c78cb0, groupNo, enemyNo); }

} // namespace cCondEnemyGroupNotSetByNumber_p1

// 00C7BB20  Trigger::cCondEnemyGroupNotSetByNumber::vf14  size=24  [class]
bool Trigger::cCondEnemyGroupNotSetByNumber::vf14()
{
    using namespace cCondEnemyGroupNotSetByNumber_p1;

    return enemyGroupSetByNumber(groupNo(), enemyNo()) == 0;
}

// 00C7BB40  Trigger::cCondEnemyGroupNotSetByNumber::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupNotSetByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupNotSetByNumber_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyNo() = record[3];
}

// 00C861A0  Trigger::cCondEnemyGroupNotSetByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupNotSetByNumber *Trigger::cCondEnemyGroupNotSetByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
