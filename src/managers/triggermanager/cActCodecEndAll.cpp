// src/managers/triggermanager/cActCodecEndAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCodecEndAll.h"

extern undefined DAT_01dbe264;           // cActCodecEndAll static descriptor returned by vf00

// 00C8E7B0  Trigger::cActCodecEndAll::vf08  size=1  [class]
void Trigger::cActCodecEndAll::vf08()
{
}

// 00C8E7C0  Trigger::cActCodecEndAll::vf0C  size=1  [class]
void Trigger::cActCodecEndAll::vf0C()
{
}

// 00C8E7D0  Trigger::cActCodecEndAll::vf10  size=1  [class]
void Trigger::cActCodecEndAll::vf10()
{
}

// 00C8E7E0  Trigger::cActCodecEndAll::vf14  size=1  [class]
void Trigger::cActCodecEndAll::vf14()
{
}

// 00C944D0  Trigger::cActCodecEndAll::vf00  size=6  [class]
void *Trigger::cActCodecEndAll::vf00()
{
    return &DAT_01dbe264;
}

// 00C944E0  Trigger::cActCodecEndAll::vf04  size=31  [class]
Trigger::cActCodecEndAll *Trigger::cActCodecEndAll::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
