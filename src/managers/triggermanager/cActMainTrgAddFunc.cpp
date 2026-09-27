// src/managers/triggermanager/cActMainTrgAddFunc.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMainTrgAddFunc.h"

extern undefined DAT_01dbe2f0;                 // cActMainTrgAddFunc static descriptor returned by vf00

// 00C94E80  Trigger::cActMainTrgAddFunc::vf00  size=6  [class]
void *Trigger::cActMainTrgAddFunc::vf00()
{
    return &DAT_01dbe2f0;
}

// 00C94E90  Trigger::cActMainTrgAddFunc::vf04  size=31  [class]
Trigger::cActMainTrgAddFunc *Trigger::cActMainTrgAddFunc::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
