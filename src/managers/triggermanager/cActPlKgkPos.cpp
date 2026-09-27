// src/managers/triggermanager/cActPlKgkPos.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlKgkPos.h"

extern undefined DAT_01dbe2c4;  // cActPlKgkPos static descriptor returned by vf00

// 00C8F750  Trigger::cActPlKgkPos::vf08  size=1  [class]
void Trigger::cActPlKgkPos::vf08()
{
}

// 00C8F760  Trigger::cActPlKgkPos::vf0C  size=1  [class]
void Trigger::cActPlKgkPos::vf0C()
{
}

// 00C8F770  Trigger::cActPlKgkPos::vf10  size=1  [class]
void Trigger::cActPlKgkPos::vf10()
{
}

// 00C8F780  Trigger::cActPlKgkPos::vf14  size=1  [class]
void Trigger::cActPlKgkPos::vf14()
{
}

// 00C94B00  Trigger::cActPlKgkPos::vf00  size=6  [class]
void *Trigger::cActPlKgkPos::vf00()
{
    return &DAT_01dbe2c4;
}

// 00C94B10  Trigger::cActPlKgkPos::vf04  size=31  [class]
Trigger::cActPlKgkPos *Trigger::cActPlKgkPos::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
