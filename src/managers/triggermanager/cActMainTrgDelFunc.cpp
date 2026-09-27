// src/managers/triggermanager/cActMainTrgDelFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMainTrgDelFunc.h"

extern undefined DAT_01dbe2f8;                 // cActMainTrgDelFunc static descriptor returned by vf00

// 00C94F00  Trigger::cActMainTrgDelFunc::vf00  size=6  [class]
void *Trigger::cActMainTrgDelFunc::vf00()
{
    return &DAT_01dbe2f8;
}

// 00C94F10  Trigger::cActMainTrgDelFunc::vf04  size=31  [class]
Trigger::cActMainTrgDelFunc *Trigger::cActMainTrgDelFunc::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
