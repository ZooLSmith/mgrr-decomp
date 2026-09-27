// src/managers/triggermanager/cActVrComplete.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrComplete.h"

extern undefined DAT_01dbe244;  // cActVrComplete static descriptor returned by vf00

// 00C8E2B0  Trigger::cActVrComplete::vf08  size=1  [class]
void Trigger::cActVrComplete::vf08()
{
}

// 00C8E2C0  Trigger::cActVrComplete::vf0C  size=1  [class]
void Trigger::cActVrComplete::vf0C()
{
}

// 00C8E2D0  Trigger::cActVrComplete::vf10  size=1  [class]
void Trigger::cActVrComplete::vf10()
{
}

// 00C8E2E0  Trigger::cActVrComplete::vf14  size=1  [class]
void Trigger::cActVrComplete::vf14()
{
}

// 00C942D0  Trigger::cActVrComplete::vf00  size=6  [class]
void *Trigger::cActVrComplete::vf00()
{
    return &DAT_01dbe244;
}

// 00C942E0  Trigger::cActVrComplete::vf04  size=31  [class]
Trigger::cActVrComplete *Trigger::cActVrComplete::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
