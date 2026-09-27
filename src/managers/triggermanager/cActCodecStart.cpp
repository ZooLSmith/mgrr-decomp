// src/managers/triggermanager/cActCodecStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCodecStart.h"

extern undefined DAT_01dbe1b0;           // cActCodecStart static descriptor returned by vf00

// 00C8C920  Trigger::cActCodecStart::vf08  size=1  [class]
void Trigger::cActCodecStart::vf08()
{
}

// 00C8C930  Trigger::cActCodecStart::vf0C  size=1  [class]
void Trigger::cActCodecStart::vf0C()
{
}

// 00C8C940  Trigger::cActCodecStart::vf10  size=1  [class]
void Trigger::cActCodecStart::vf10()
{
}

// 00C8C950  Trigger::cActCodecStart::vf14  size=1  [class]
void Trigger::cActCodecStart::vf14()
{
}

// 00C935F0  Trigger::cActCodecStart::vf00  size=6  [class]
void *Trigger::cActCodecStart::vf00()
{
    return &DAT_01dbe1b0;
}

// 00C93600  Trigger::cActCodecStart::vf04  size=31  [class]
Trigger::cActCodecStart *Trigger::cActCodecStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
