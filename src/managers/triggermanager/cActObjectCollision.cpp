// src/managers/triggermanager/cActObjectCollision.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActObjectCollision.h"

extern undefined DAT_01dbe240;                 // cActObjectCollision static descriptor returned by vf00

// 00C8E210  Trigger::cActObjectCollision::vf08  size=1  [class]
void Trigger::cActObjectCollision::vf08()
{
}

// 00C8E220  Trigger::cActObjectCollision::vf0C  size=1  [class]
void Trigger::cActObjectCollision::vf0C()
{
}

// 00C8E230  Trigger::cActObjectCollision::vf10  size=1  [class]
void Trigger::cActObjectCollision::vf10()
{
}

// 00C8E240  Trigger::cActObjectCollision::vf14  size=1  [class]
void Trigger::cActObjectCollision::vf14()
{
}

// 00C94290  Trigger::cActObjectCollision::vf00  size=6  [class]
void *Trigger::cActObjectCollision::vf00()
{
    return &DAT_01dbe240;
}

// 00C942A0  Trigger::cActObjectCollision::vf04  size=31  [class]
Trigger::cActObjectCollision *Trigger::cActObjectCollision::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
