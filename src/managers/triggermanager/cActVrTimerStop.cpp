// src/managers/triggermanager/cActVrTimerStop.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrTimerStop.h"

extern undefined DAT_01dbe2b4;  // cActVrTimerStop static descriptor returned by vf00

// 00C8F4D0  Trigger::cActVrTimerStop::vf08  size=1  [class]
void Trigger::cActVrTimerStop::vf08()
{
}

// 00C8F4E0  Trigger::cActVrTimerStop::vf0C  size=1  [class]
void Trigger::cActVrTimerStop::vf0C()
{
}

// 00C8F4F0  Trigger::cActVrTimerStop::vf10  size=1  [class]
void Trigger::cActVrTimerStop::vf10()
{
}

// 00C8F500  Trigger::cActVrTimerStop::vf14  size=1  [class]
void Trigger::cActVrTimerStop::vf14()
{
}

// 00C94A00  Trigger::cActVrTimerStop::vf00  size=6  [class]
void *Trigger::cActVrTimerStop::vf00()
{
    return &DAT_01dbe2b4;
}

// 00C94A10  Trigger::cActVrTimerStop::vf04  size=31  [class]
Trigger::cActVrTimerStop *Trigger::cActVrTimerStop::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
