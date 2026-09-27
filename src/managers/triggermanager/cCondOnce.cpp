// src/managers/triggermanager/cCondOnce.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondOnce.h"

// 00C79800  Trigger::cCondOnce::vf10  size=13  [class]
void Trigger::cCondOnce::vf10()
{
    if (updateCount() < 2) {
        updateCount() = updateCount() + 1;
    }
}

// 00C79810  Trigger::cCondOnce::vf14  size=10  [class]
bool Trigger::cCondOnce::vf14()
{
    return updateCount() == 1;
}

// 00C79820  Trigger::cCondOnce::vf1C  size=10  [class]
void Trigger::cCondOnce::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C84D90  Trigger::cCondOnce::vf00  size=31  [class]
Trigger::cCondOnce *Trigger::cCondOnce::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
