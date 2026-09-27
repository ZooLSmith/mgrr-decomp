// src/managers/triggermanager/cActEmAnimation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEmAnimation.h"

extern undefined DAT_01dbe150;           // cActEmAnimation static descriptor returned by vf00

// 00C8BCA0  Trigger::cActEmAnimation::vf08  size=1  [class]
void Trigger::cActEmAnimation::vf08()
{
}

// 00C8BCB0  Trigger::cActEmAnimation::vf0C  size=1  [class]
void Trigger::cActEmAnimation::vf0C()
{
}

// 00C8BCC0  Trigger::cActEmAnimation::vf10  size=1  [class]
void Trigger::cActEmAnimation::vf10()
{
}

// 00C8BCD0  Trigger::cActEmAnimation::vf14  size=1  [class]
void Trigger::cActEmAnimation::vf14()
{
}

// 00C92EA0  Trigger::cActEmAnimation::vf00  size=6  [class]
void *Trigger::cActEmAnimation::vf00()
{
    return &DAT_01dbe150;
}

// 00C92EB0  Trigger::cActEmAnimation::vf04  size=31  [class]
Trigger::cActEmAnimation *Trigger::cActEmAnimation::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
