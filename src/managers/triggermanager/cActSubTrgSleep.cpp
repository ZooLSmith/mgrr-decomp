// src/managers/triggermanager/cActSubTrgSleep.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubTrgSleep.h"

extern undefined DAT_01dbe2ec;  // cActSubTrgSleep static descriptor returned by vf00

// 00C94E40  Trigger::cActSubTrgSleep::vf00  size=6  [class]
void *Trigger::cActSubTrgSleep::vf00()
{
    return &DAT_01dbe2ec;
}

// 00C94E50  Trigger::cActSubTrgSleep::vf04  size=31  [class]
Trigger::cActSubTrgSleep *Trigger::cActSubTrgSleep::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
