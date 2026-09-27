// src/managers/triggermanager/cCondResultEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondResultEnd.h"

extern int DAT_01dc1308;  // result display flag

// 00C7CE10  Trigger::cCondResultEnd::vf0C  size=6  [class]
int Trigger::cCondResultEnd::vf0C()
{
    return 1;
}

// 00C7CE20  Trigger::cCondResultEnd::vf14  size=28  [class]
// The first call latches DAT_01dc1308 and returns 0; later calls return 1 once its bit 0 is clear.
unsigned int Trigger::cCondResultEnd::vf14()
{
    if (latched() == 0) {
        latched() = DAT_01dc1308;
        return 0;
    }
    return ~(unsigned int)DAT_01dc1308 & 1;
}

// 00C7CE40  Trigger::cCondResultEnd::vf1C  size=10  [class]
void Trigger::cCondResultEnd::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C7CE50  Trigger::cCondResultEnd::vf20  size=13  [class]
int Trigger::cCondResultEnd::vf20()
{
    latched() = 0;
    return 1;
}

// 00C86620  Trigger::cCondResultEnd::vf00  size=31  [class]
Trigger::cCondResultEnd *Trigger::cCondResultEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
