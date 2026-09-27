// src/managers/triggermanager/cCondEnemyEntityCountHP0ByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondEnemyEntityCountHP0ByNumber.h"

// 00C7B6A0  Trigger::cCondEnemyEntityCountHP0ByNumber::vf1C  size=28  [class]
void Trigger::cCondEnemyEntityCountHP0ByNumber::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    compareOp() = record[2];    // record+0x08
    threshold() = record[3];    // record+0x0C
    enemyNumber() = record[4];  // record+0x10
}

// 00C85E50  Trigger::cCondEnemyEntityCountHP0ByNumber::vf00  size=31  [class]
Trigger::cCondEnemyEntityCountHP0ByNumber *Trigger::cCondEnemyEntityCountHP0ByNumber::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
