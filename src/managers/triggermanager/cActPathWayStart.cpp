// src/managers/triggermanager/cActPathWayStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPathWayStart.h"

extern undefined DAT_01dbe138;  // cActPathWayStart static descriptor returned by vf00

// 00C8B8B0  Trigger::cActPathWayStart::vf08  size=1  [class]
void Trigger::cActPathWayStart::vf08()
{
}

// 00C8B8C0  Trigger::cActPathWayStart::vf0C  size=1  [class]
void Trigger::cActPathWayStart::vf0C()
{
}

// 00C8B8D0  Trigger::cActPathWayStart::vf10  size=1  [class]
void Trigger::cActPathWayStart::vf10()
{
}

// 00C8B8E0  Trigger::cActPathWayStart::vf14  size=1  [class]
void Trigger::cActPathWayStart::vf14()
{
}

// 00C92C00  Trigger::cActPathWayStart::vf00  size=6  [class]
void *Trigger::cActPathWayStart::vf00()
{
    return &DAT_01dbe138;
}

// 00C92C10  Trigger::cActPathWayStart::vf04  size=31  [class]
Trigger::cActPathWayStart *Trigger::cActPathWayStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
