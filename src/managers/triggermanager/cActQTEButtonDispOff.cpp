// src/managers/triggermanager/cActQTEButtonDispOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActQTEButtonDispOff.h"

extern undefined DAT_01dbe1b8;  // cActQTEButtonDispOff static descriptor returned by vf00

// 00C8CBA0  Trigger::cActQTEButtonDispOff::vf08  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf08()
{
}

// 00C8CBB0  Trigger::cActQTEButtonDispOff::vf0C  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf0C()
{
}

// 00C8CBC0  Trigger::cActQTEButtonDispOff::vf10  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf10()
{
}

// 00C8CBD0  Trigger::cActQTEButtonDispOff::vf14  size=1  [class]
void Trigger::cActQTEButtonDispOff::vf14()
{
}

// 00C936D0  Trigger::cActQTEButtonDispOff::vf00  size=6  [class]
void *Trigger::cActQTEButtonDispOff::vf00()
{
    return &DAT_01dbe1b8;
}

// 00C936E0  Trigger::cActQTEButtonDispOff::vf04  size=31  [class]
Trigger::cActQTEButtonDispOff *Trigger::cActQTEButtonDispOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
