// src/managers/triggermanager/cActSE.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSE.h"

extern undefined DAT_01dbe090;  // cActSE static descriptor returned by vf00

// 00C89BF0  Trigger::cActSE::vf08  size=1  [class]
void Trigger::cActSE::vf08()
{
}

// 00C89C00  Trigger::cActSE::vf0C  size=1  [class]
void Trigger::cActSE::vf0C()
{
}

// 00C89C10  Trigger::cActSE::vf10  size=1  [class]
void Trigger::cActSE::vf10()
{
}

// 00C89C20  Trigger::cActSE::vf14  size=1  [class]
void Trigger::cActSE::vf14()
{
}

// 00C91BF0  Trigger::cActSE::vf00  size=6  [class]
void *Trigger::cActSE::vf00()
{
    return &DAT_01dbe090;
}

// 00C91C00  Trigger::cActSE::vf04  size=31  [class]
Trigger::cActSE *Trigger::cActSE::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
