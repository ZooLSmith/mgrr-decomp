// src/managers/triggermanager/cActSubTrgAddFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubTrgAddFunc.h"

extern undefined DAT_01dbe2f4;  // cActSubTrgAddFunc static descriptor returned by vf00

// 00C94EC0  Trigger::cActSubTrgAddFunc::vf00  size=6  [class]
void *Trigger::cActSubTrgAddFunc::vf00()
{
    return &DAT_01dbe2f4;
}

// 00C94ED0  Trigger::cActSubTrgAddFunc::vf04  size=31  [class]
Trigger::cActSubTrgAddFunc *Trigger::cActSubTrgAddFunc::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
