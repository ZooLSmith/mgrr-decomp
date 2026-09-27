// src/managers/triggermanager/cActPlAnimation.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlAnimation.h"

extern undefined DAT_01dbe154;  // cActPlAnimation static descriptor returned by vf00

// 00C8BD40  Trigger::cActPlAnimation::vf08  size=1  [class]
void Trigger::cActPlAnimation::vf08()
{
}

// 00C8BD50  Trigger::cActPlAnimation::vf0C  size=1  [class]
void Trigger::cActPlAnimation::vf0C()
{
}

// 00C8BD60  Trigger::cActPlAnimation::vf10  size=1  [class]
void Trigger::cActPlAnimation::vf10()
{
}

// 00C8BD70  Trigger::cActPlAnimation::vf14  size=1  [class]
void Trigger::cActPlAnimation::vf14()
{
}

// 00C92F10  Trigger::cActPlAnimation::vf00  size=6  [class]
void *Trigger::cActPlAnimation::vf00()
{
    return &DAT_01dbe154;
}

// 00C92F20  Trigger::cActPlAnimation::vf04  size=31  [class]
Trigger::cActPlAnimation *Trigger::cActPlAnimation::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
