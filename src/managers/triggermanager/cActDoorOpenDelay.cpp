// src/managers/triggermanager/cActDoorOpenDelay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorOpenDelay.h"

extern undefined DAT_01dbe2d8;           // cActDoorOpenDelay static descriptor returned by vf00

// 00C8FA70  Trigger::cActDoorOpenDelay::vf08  size=1  [class]
void Trigger::cActDoorOpenDelay::vf08()
{
}

// 00C8FA80  Trigger::cActDoorOpenDelay::vf0C  size=1  [class]
void Trigger::cActDoorOpenDelay::vf0C()
{
}

// 00C8FA90  Trigger::cActDoorOpenDelay::vf10  size=1  [class]
void Trigger::cActDoorOpenDelay::vf10()
{
}

// 00C8FAA0  Trigger::cActDoorOpenDelay::vf14  size=1  [class]
void Trigger::cActDoorOpenDelay::vf14()
{
}

// 00C94C40  Trigger::cActDoorOpenDelay::vf00  size=6  [class]
void *Trigger::cActDoorOpenDelay::vf00()
{
    return &DAT_01dbe2d8;
}

// 00C94C50  Trigger::cActDoorOpenDelay::vf04  size=31  [class]
Trigger::cActDoorOpenDelay *Trigger::cActDoorOpenDelay::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
