// src/managers/triggermanager/cActDoorDispOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorDispOff.h"

extern undefined DAT_01dbe27c;           // cActDoorDispOff static descriptor returned by vf00

// 00C8EB70  Trigger::cActDoorDispOff::vf08  size=1  [class]
void Trigger::cActDoorDispOff::vf08()
{
}

// 00C8EB80  Trigger::cActDoorDispOff::vf0C  size=1  [class]
void Trigger::cActDoorDispOff::vf0C()
{
}

// 00C8EB90  Trigger::cActDoorDispOff::vf10  size=1  [class]
void Trigger::cActDoorDispOff::vf10()
{
}

// 00C8EBA0  Trigger::cActDoorDispOff::vf14  size=1  [class]
void Trigger::cActDoorDispOff::vf14()
{
}

// 00C94650  Trigger::cActDoorDispOff::vf00  size=6  [class]
void *Trigger::cActDoorDispOff::vf00()
{
    return &DAT_01dbe27c;
}

// 00C94660  Trigger::cActDoorDispOff::vf04  size=31  [class]
Trigger::cActDoorDispOff *Trigger::cActDoorDispOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
