// src/managers/triggermanager/cActDoorClose.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorClose.h"

extern undefined DAT_01dbe0c8;           // cActDoorClose static descriptor returned by vf00

// 00C8A4B0  Trigger::cActDoorClose::vf08  size=1  [class]
void Trigger::cActDoorClose::vf08()
{
}

// 00C8A4C0  Trigger::cActDoorClose::vf0C  size=1  [class]
void Trigger::cActDoorClose::vf0C()
{
}

// 00C8A4D0  Trigger::cActDoorClose::vf10  size=1  [class]
void Trigger::cActDoorClose::vf10()
{
}

// 00C8A4E0  Trigger::cActDoorClose::vf14  size=1  [class]
void Trigger::cActDoorClose::vf14()
{
}

// 00C92140  Trigger::cActDoorClose::vf00  size=6  [class]
void *Trigger::cActDoorClose::vf00()
{
    return &DAT_01dbe0c8;
}

// 00C92150  Trigger::cActDoorClose::vf04  size=31  [class]
Trigger::cActDoorClose *Trigger::cActDoorClose::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
