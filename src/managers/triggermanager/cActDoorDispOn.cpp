// src/managers/triggermanager/cActDoorDispOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorDispOn.h"

extern undefined DAT_01dbe278;           // cActDoorDispOn static descriptor returned by vf00

// 00C8EAD0  Trigger::cActDoorDispOn::vf08  size=1  [class]
void Trigger::cActDoorDispOn::vf08()
{
}

// 00C8EAE0  Trigger::cActDoorDispOn::vf0C  size=1  [class]
void Trigger::cActDoorDispOn::vf0C()
{
}

// 00C8EAF0  Trigger::cActDoorDispOn::vf10  size=1  [class]
void Trigger::cActDoorDispOn::vf10()
{
}

// 00C8EB00  Trigger::cActDoorDispOn::vf14  size=1  [class]
void Trigger::cActDoorDispOn::vf14()
{
}

// 00C94610  Trigger::cActDoorDispOn::vf00  size=6  [class]
void *Trigger::cActDoorDispOn::vf00()
{
    return &DAT_01dbe278;
}

// 00C94620  Trigger::cActDoorDispOn::vf04  size=31  [class]
Trigger::cActDoorDispOn *Trigger::cActDoorDispOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
