// src/managers/triggermanager/cActMainTrgSleep.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMainTrgSleep.h"

extern undefined DAT_01dbe2e4;                 // cActMainTrgSleep static descriptor returned by vf00

// 00C94DC0  Trigger::cActMainTrgSleep::vf00  size=6  [class]
void *Trigger::cActMainTrgSleep::vf00()
{
    return &DAT_01dbe2e4;
}

// 00C94DD0  Trigger::cActMainTrgSleep::vf04  size=31  [class]
Trigger::cActMainTrgSleep *Trigger::cActMainTrgSleep::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
