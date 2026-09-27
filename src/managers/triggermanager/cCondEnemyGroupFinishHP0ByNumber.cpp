// src/managers/triggermanager/cCondEnemyGroupFinishHP0ByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyGroupFinishHP0ByNumber.h"

extern unsigned char DAT_01c78cb0[];  // enemy set manager (ECX of the FUN_00c18xxx / FUN_00c19xxx calls)

extern unsigned int DAT_01bea060;  // global flags (0x400: enemy finish checks suspended)

namespace cCondEnemyGroupFinishHP0ByNumber_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

// Trigger::cCondition+0x08 / +0x0C: ? both set to -1 by the (inlined) base constructor
inline int &conditionField08(void *self) { return *(int *)((char *)self + 0x8); }
inline int &conditionField0C(void *self) { return *(int *)((char *)self + 0xC); }

// FUN_00c18c10: nonzero while the numbered enemy set of the group is placed (? see the NotSet conditions)
inline int enemyGroupSetByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18c10)(DAT_01c78cb0, groupNo, enemyNo); }

// FUN_00c18e00: HP-0 state of the numbered enemy set of the group
inline int enemyGroupFinishHP0ByNumber(int groupNo, int enemyNo) { return ((int (__thiscall *)(void *, int, int))(void *)FUN_00c18e00)(DAT_01c78cb0, groupNo, enemyNo); }

} // namespace cCondEnemyGroupFinishHP0ByNumber_p1

// 00C7B9B0  Trigger::cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber  size=32  [class]
Trigger::cCondEnemyGroupFinishHP0ByNumber::cCondEnemyGroupFinishHP0ByNumber()
{
    using namespace cCondEnemyGroupFinishHP0ByNumber_p1;

    conditionField0C(this) = -1;
    conditionRecord(this) = 0;
    conditionField08(this) = -1;
    // vftable = Trigger::cCondEnemyGroupFinishHP0ByNumber::vftable (0x016A96DC)
    groupNo() = 0;
    enemyNo() = 0;
    finishState() = 0;
}

// 00C7B9E0  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf14  size=95  [class]
bool Trigger::cCondEnemyGroupFinishHP0ByNumber::vf14()
{
    using namespace cCondEnemyGroupFinishHP0ByNumber_p1;

    if ((DAT_01bea060 & 0x400) != 0) {
        return false;
    }
    if (finishState() == 0) {
        if (enemyGroupSetByNumber(groupNo(), enemyNo()) == 1) {
            finishState() = enemyGroupFinishHP0ByNumber(groupNo(), enemyNo());
        }
    }
    bool finished = finishState() == 1;
    if (finished) {
        finishState() = 0;
    }
    return finished;
}

// 00C7BA40  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf1C  size=22  [class]
void Trigger::cCondEnemyGroupFinishHP0ByNumber::vf1C(int *record)
{
    using namespace cCondEnemyGroupFinishHP0ByNumber_p1;

    conditionRecord(this) = record;
    groupNo() = record[2];
    enemyNo() = record[3];
}

// 00C7BA60  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf20  size=13  [class]
int Trigger::cCondEnemyGroupFinishHP0ByNumber::vf20()
{
    finishState() = 0;
    return 1;
}

// 00C86160  Trigger::cCondEnemyGroupFinishHP0ByNumber::vf00  size=31  [class]
Trigger::cCondEnemyGroupFinishHP0ByNumber *Trigger::cCondEnemyGroupFinishHP0ByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
