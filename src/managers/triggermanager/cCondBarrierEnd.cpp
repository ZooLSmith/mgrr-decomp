// src/managers/triggermanager/cCondBarrierEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondBarrierEnd.h"

// 00C79BE0  Trigger::cCondBarrierEnd::vf0C  size=3  [class]
int Trigger::cCondBarrierEnd::vf0C()
{
    return 0;
}

// 00C79BF0  Trigger::cCondBarrierEnd::vf14  size=3  [class]
int Trigger::cCondBarrierEnd::vf14()
{
    return 0;
}

// 00C79C00  Trigger::cCondBarrierEnd::vf1C  size=16  [class]
void Trigger::cCondBarrierEnd::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) /* cCondition+0x04: record */ = record;
    barrierId() = record[2];  // record+0x08
}

// 00C84E10  Trigger::cCondBarrierEnd::vf00  size=31  [class]
Trigger::cCondBarrierEnd *Trigger::cCondBarrierEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
