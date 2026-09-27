// src/managers/triggermanager/cActSubTrgDelFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubTrgDelFunc.h"

extern undefined DAT_01dbe2fc;  // cActSubTrgDelFunc static descriptor returned by vf00

// 00C94F40  Trigger::cActSubTrgDelFunc::vf00  size=6  [class]
void *Trigger::cActSubTrgDelFunc::vf00()
{
    return &DAT_01dbe2fc;
}

// 00C94F50  Trigger::cActSubTrgDelFunc::vf04  size=31  [class]
Trigger::cActSubTrgDelFunc *Trigger::cActSubTrgDelFunc::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
