// src/managers/triggermanager/cActCollisionOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCollisionOff.h"

extern undefined DAT_01dbe108;           // cActCollisionOff static descriptor returned by vf00

// 00C8B130  Trigger::cActCollisionOff::vf08  size=1  [class]
void Trigger::cActCollisionOff::vf08()
{
}

// 00C8B140  Trigger::cActCollisionOff::vf0C  size=1  [class]
void Trigger::cActCollisionOff::vf0C()
{
}

// 00C8B150  Trigger::cActCollisionOff::vf10  size=1  [class]
void Trigger::cActCollisionOff::vf10()
{
}

// 00C8B160  Trigger::cActCollisionOff::vf14  size=1  [class]
void Trigger::cActCollisionOff::vf14()
{
}

// 00C92900  Trigger::cActCollisionOff::vf00  size=6  [class]
void *Trigger::cActCollisionOff::vf00()
{
    return &DAT_01dbe108;
}

// 00C92910  Trigger::cActCollisionOff::vf04  size=31  [class]
Trigger::cActCollisionOff *Trigger::cActCollisionOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
