// src/managers/triggermanager/cCondEnemyGroupFinishByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupFinishByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern unsigned int DAT_01bea060;  // global flags (0x400: enemy finish checks suspended)

namespace cCondEnemyGroupFinishByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00c18c10: nonzero while the numbered enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18c10)(DAT_01c78cb0, groupNo, enemyNo); }

// FUN_00c18d20: finish state of the numbered enemy set of the group
inline int enemyGroupFinishByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18d20)(DAT_01c78cb0, groupNo, enemyNo); }

} // namespace cCondEnemyGroupFinishByNumber_p1

// 00C7B860  Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber  size=32  [class]
Trigger::cCondEnemyGroupFinishByNumber::cCondEnemyGroupFinishByNumber()
{
    using namespace cCondEnemyGroupFinishByNumber_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupFinishByNumber::vftable (0x016A968C)
    groupNo() = 0;
    enemyNo() = 0;
    finishState() = 0;
}

// 00C7B890  Trigger::cCondEnemyGroupFinishByNumber::vf14  size=95  [class]
bool Trigger::cCondEnemyGroupFinishByNumber::vf14()
{
    using namespace cCondEnemyGroupFinishByNumber_p1;

    if ((DAT_01bea060 & 0x400) != 0) {
        return false;
    }
    if (finishState() == 0) {
        if (enemyGroupSetByNumber(groupNo(), enemyNo()) == 1) {
            finishState() = enemyGroupFinishByNumber(groupNo(), enemyNo());
        }
    }
    bool finished = finishState() == 1;
    if (finished) {
        finishState() = 0;
    }
    return finished;
}

// 00C7B8F0  Trigger::cCondEnemyGroupFinishByNumber::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupFinishByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupFinishByNumber_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyNo() = record[3];
}

// 00C7B910  Trigger::cCondEnemyGroupFinishByNumber::vf20  size=13  [class]
int Trigger::cCondEnemyGroupFinishByNumber::vf20()
{
    finishState() = 0;
    return 1;
}

// 00C86060  Trigger::cCondEnemyGroupFinishByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupFinishByNumber *Trigger::cCondEnemyGroupFinishByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
