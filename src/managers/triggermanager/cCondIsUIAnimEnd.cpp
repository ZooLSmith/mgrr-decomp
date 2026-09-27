// src/managers/triggermanager/cCondIsUIAnimEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsUIAnimEnd.h"

extern int DAT_01dc2d6c;  // UI animation ended flag

// 00C7BB90  Trigger::cCondIsUIAnimEnd::vf14  size=6  [class]
int Trigger::cCondIsUIAnimEnd::vf14()
{
    return DAT_01dc2d6c;
}

// 00C861C0  Trigger::cCondIsUIAnimEnd::vf00  size=31  [class]
Trigger::cCondIsUIAnimEnd *Trigger::cCondIsUIAnimEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
