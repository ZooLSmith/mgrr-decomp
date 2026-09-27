// src/managers/triggermanager/cActCollision.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCollision.h"

extern undefined DAT_01dbe0f4;           // cActCollision static descriptor returned by vf00

// 00C8AE10  Trigger::cActCollision::vf08  size=1  [class]
void Trigger::cActCollision::vf08()
{
}

// 00C8AE20  Trigger::cActCollision::vf0C  size=1  [class]
void Trigger::cActCollision::vf0C()
{
}

// 00C8AE30  Trigger::cActCollision::vf10  size=1  [class]
void Trigger::cActCollision::vf10()
{
}

// 00C8AE40  Trigger::cActCollision::vf14  size=1  [class]
void Trigger::cActCollision::vf14()
{
}

// 00C924D0  Trigger::cActCollision::vf00  size=6  [class]
void *Trigger::cActCollision::vf00()
{
    return &DAT_01dbe0f4;
}

// 00C924E0  Trigger::cActCollision::vf04  size=31  [class]
Trigger::cActCollision *Trigger::cActCollision::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
