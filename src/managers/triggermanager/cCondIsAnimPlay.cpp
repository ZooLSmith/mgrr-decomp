// src/managers/triggermanager/cCondIsAnimPlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsAnimPlay.h"

// 00C7CFD0  Trigger::cCondIsAnimPlay::vf10  size=1  [class]
void Trigger::cCondIsAnimPlay::vf10()
{
}

// 00C866A0  Trigger::cCondIsAnimPlay::vf00  size=31  [class]
Trigger::cCondIsAnimPlay *Trigger::cCondIsAnimPlay::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
