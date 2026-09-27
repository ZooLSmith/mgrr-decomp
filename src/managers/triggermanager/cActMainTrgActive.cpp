// src/managers/triggermanager/cActMainTrgActive.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMainTrgActive.h"

extern undefined DAT_01dbe2e0;                 // cActMainTrgActive static descriptor returned by vf00

// 00C94D80  Trigger::cActMainTrgActive::vf00  size=6  [class]
void *Trigger::cActMainTrgActive::vf00()
{
    return &DAT_01dbe2e0;
}

// 00C94D90  Trigger::cActMainTrgActive::vf04  size=31  [class]
Trigger::cActMainTrgActive *Trigger::cActMainTrgActive::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
