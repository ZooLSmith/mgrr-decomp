// src/managers/triggermanager/cActPathWayEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPathWayEnd.h"

extern undefined DAT_01dbe13c;  // cActPathWayEnd static descriptor returned by vf00

// 00C8B950  Trigger::cActPathWayEnd::vf08  size=1  [class]
void Trigger::cActPathWayEnd::vf08()
{
}

// 00C8B960  Trigger::cActPathWayEnd::vf0C  size=1  [class]
void Trigger::cActPathWayEnd::vf0C()
{
}

// 00C8B970  Trigger::cActPathWayEnd::vf10  size=1  [class]
void Trigger::cActPathWayEnd::vf10()
{
}

// 00C8B980  Trigger::cActPathWayEnd::vf14  size=1  [class]
void Trigger::cActPathWayEnd::vf14()
{
}

// 00C92C40  Trigger::cActPathWayEnd::vf00  size=6  [class]
void *Trigger::cActPathWayEnd::vf00()
{
    return &DAT_01dbe13c;
}

// 00C92C50  Trigger::cActPathWayEnd::vf04  size=31  [class]
Trigger::cActPathWayEnd *Trigger::cActPathWayEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
