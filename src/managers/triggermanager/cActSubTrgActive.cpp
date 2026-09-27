// src/managers/triggermanager/cActSubTrgActive.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubTrgActive.h"

extern undefined DAT_01dbe2e8;  // cActSubTrgActive static descriptor returned by vf00

// 00C94E00  Trigger::cActSubTrgActive::vf00  size=6  [class]
void *Trigger::cActSubTrgActive::vf00()
{
    return &DAT_01dbe2e8;
}

// 00C94E10  Trigger::cActSubTrgActive::vf04  size=31  [class]
Trigger::cActSubTrgActive *Trigger::cActSubTrgActive::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
