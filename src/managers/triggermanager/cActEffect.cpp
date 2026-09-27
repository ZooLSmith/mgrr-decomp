// src/managers/triggermanager/cActEffect.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEffect.h"

extern undefined DAT_01dbe084;           // cActEffect static descriptor returned by vf00

// 00C89A10  Trigger::cActEffect::vf08  size=1  [class]
void Trigger::cActEffect::vf08()
{
}

// 00C89A20  Trigger::cActEffect::vf0C  size=1  [class]
void Trigger::cActEffect::vf0C()
{
}

// 00C89A30  Trigger::cActEffect::vf10  size=1  [class]
void Trigger::cActEffect::vf10()
{
}

// 00C89A40  Trigger::cActEffect::vf14  size=1  [class]
void Trigger::cActEffect::vf14()
{
}

// 00C91B30  Trigger::cActEffect::vf00  size=6  [class]
void *Trigger::cActEffect::vf00()
{
    return &DAT_01dbe084;
}

// 00C91B40  Trigger::cActEffect::vf04  size=31  [class]
Trigger::cActEffect *Trigger::cActEffect::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
