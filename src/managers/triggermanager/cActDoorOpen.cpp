// src/managers/triggermanager/cActDoorOpen.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorOpen.h"

extern undefined DAT_01dbe048;           // cActDoorOpen static descriptor returned by vf00

// 00C89290  Trigger::cActDoorOpen::vf08  size=1  [class]
void Trigger::cActDoorOpen::vf08()
{
}

// 00C892A0  Trigger::cActDoorOpen::vf0C  size=1  [class]
void Trigger::cActDoorOpen::vf0C()
{
}

// 00C892B0  Trigger::cActDoorOpen::vf10  size=1  [class]
void Trigger::cActDoorOpen::vf10()
{
}

// 00C892C0  Trigger::cActDoorOpen::vf14  size=1  [class]
void Trigger::cActDoorOpen::vf14()
{
}

// 00C91730  Trigger::cActDoorOpen::vf00  size=6  [class]
void *Trigger::cActDoorOpen::vf00()
{
    return &DAT_01dbe048;
}

// 00C91740  Trigger::cActDoorOpen::vf04  size=31  [class]
Trigger::cActDoorOpen *Trigger::cActDoorOpen::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
