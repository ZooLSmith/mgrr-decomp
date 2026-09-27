// src/managers/triggermanager/cActFade.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFade.h"

extern undefined DAT_01dbe26c;                 // cActFade static descriptor returned by vf00

// 00C8E8F0  Trigger::cActFade::vf08  size=1  [class]
void Trigger::cActFade::vf08()
{
}

// 00C8E900  Trigger::cActFade::vf0C  size=1  [class]
void Trigger::cActFade::vf0C()
{
}

// 00C8E910  Trigger::cActFade::vf10  size=1  [class]
void Trigger::cActFade::vf10()
{
}

// 00C8E920  Trigger::cActFade::vf14  size=1  [class]
void Trigger::cActFade::vf14()
{
}

// 00C94550  Trigger::cActFade::vf00  size=6  [class]
void *Trigger::cActFade::vf00()
{
    return &DAT_01dbe26c;
}

// 00C94560  Trigger::cActFade::vf04  size=31  [class]
Trigger::cActFade *Trigger::cActFade::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
