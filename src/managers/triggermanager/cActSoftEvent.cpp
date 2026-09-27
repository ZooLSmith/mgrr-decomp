// src/managers/triggermanager/cActSoftEvent.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSoftEvent.h"

extern undefined DAT_01dbe058;  // cActSoftEvent static descriptor returned by vf00

// 00C895B0  Trigger::cActSoftEvent::vf08  size=1  [class]
void Trigger::cActSoftEvent::vf08()
{
}

// 00C895C0  Trigger::cActSoftEvent::vf0C  size=1  [class]
void Trigger::cActSoftEvent::vf0C()
{
}

// 00C895D0  Trigger::cActSoftEvent::vf10  size=1  [class]
void Trigger::cActSoftEvent::vf10()
{
}

// 00C895E0  Trigger::cActSoftEvent::vf14  size=1  [class]
void Trigger::cActSoftEvent::vf14()
{
}

// 00C91870  Trigger::cActSoftEvent::vf00  size=6  [class]
void *Trigger::cActSoftEvent::vf00()
{
    return &DAT_01dbe058;
}

// 00C91880  Trigger::cActSoftEvent::vf04  size=31  [class]
Trigger::cActSoftEvent *Trigger::cActSoftEvent::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
