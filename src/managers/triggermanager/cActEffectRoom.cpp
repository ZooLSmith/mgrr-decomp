// src/managers/triggermanager/cActEffectRoom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEffectRoom.h"

extern undefined DAT_01dbe114;           // cActEffectRoom static descriptor returned by vf00

// 00C8B310  Trigger::cActEffectRoom::vf08  size=1  [class]
void Trigger::cActEffectRoom::vf08()
{
}

// 00C8B320  Trigger::cActEffectRoom::vf0C  size=1  [class]
void Trigger::cActEffectRoom::vf0C()
{
}

// 00C8B330  Trigger::cActEffectRoom::vf10  size=1  [class]
void Trigger::cActEffectRoom::vf10()
{
}

// 00C8B340  Trigger::cActEffectRoom::vf14  size=1  [class]
void Trigger::cActEffectRoom::vf14()
{
}

// 00C929C0  Trigger::cActEffectRoom::vf00  size=6  [class]
void *Trigger::cActEffectRoom::vf00()
{
    return &DAT_01dbe114;
}

// 00C929D0  Trigger::cActEffectRoom::vf04  size=31  [class]
Trigger::cActEffectRoom *Trigger::cActEffectRoom::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
