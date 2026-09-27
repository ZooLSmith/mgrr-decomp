// src/managers/triggermanager/cCondTrue.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondTrue.h"

// 00C79C70  Trigger::cCondTrue::vf14  size=6  [class]
int Trigger::cCondTrue::vf14()
{
    return 1;
}

// 00C79C80  Trigger::cCondTrue::vf1C  size=10  [class]
void Trigger::cCondTrue::vf1C(int *record)
{
    this->record() = record;
}

// 00C84490  Trigger::cCondTrue::vf00  size=31  [class]
Trigger::cCondTrue *Trigger::cCondTrue::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
