// src/managers/triggermanager/cActLoadRoom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActLoadRoom.h"

extern undefined DAT_01dbe534;                 // cActLoadRoom static descriptor returned by vf00

// 00C8A9A0  Trigger::cActLoadRoom::vf00  size=6  [class]
void *Trigger::cActLoadRoom::vf00()
{
    return &DAT_01dbe534;
}

// 00C8A9B0  Trigger::cActLoadRoom::vf08  size=1  [class]
void Trigger::cActLoadRoom::vf08()
{
}

// 00C8A9C0  Trigger::cActLoadRoom::vf0C  size=1  [class]
void Trigger::cActLoadRoom::vf0C()
{
}

// 00C8A9D0  Trigger::cActLoadRoom::vf10  size=1  [class]
void Trigger::cActLoadRoom::vf10()
{
}

// 00C8A9E0  Trigger::cActLoadRoom::vf14  size=1  [class]
void Trigger::cActLoadRoom::vf14()
{
}

// 00C92320  Trigger::cActLoadRoom::vf04  size=31  [class]
Trigger::cActLoadRoom *Trigger::cActLoadRoom::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
