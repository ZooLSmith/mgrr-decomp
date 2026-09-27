// src/managers/triggermanager/cActVrBm6000Off.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrBm6000Off.h"

extern undefined DAT_01dbe2d0;  // cActVrBm6000Off static descriptor returned by vf00

// 00C8F890  Trigger::cActVrBm6000Off::vf08  size=1  [class]
void Trigger::cActVrBm6000Off::vf08()
{
}

// 00C8F8A0  Trigger::cActVrBm6000Off::vf0C  size=1  [class]
void Trigger::cActVrBm6000Off::vf0C()
{
}

// 00C8F8B0  Trigger::cActVrBm6000Off::vf10  size=1  [class]
void Trigger::cActVrBm6000Off::vf10()
{
}

// 00C8F8C0  Trigger::cActVrBm6000Off::vf14  size=1  [class]
void Trigger::cActVrBm6000Off::vf14()
{
}

// 00C94BC0  Trigger::cActVrBm6000Off::vf00  size=6  [class]
void *Trigger::cActVrBm6000Off::vf00()
{
    return &DAT_01dbe2d0;
}

// 00C94BD0  Trigger::cActVrBm6000Off::vf04  size=31  [class]
Trigger::cActVrBm6000Off *Trigger::cActVrBm6000Off::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
