// src/managers/triggermanager/cActScrMeshOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrMeshOn.h"

extern undefined DAT_01dbe1e4;  // cActScrMeshOn static descriptor returned by vf00

// 00C8D320  Trigger::cActScrMeshOn::vf08  size=1  [class]
void Trigger::cActScrMeshOn::vf08()
{
}

// 00C8D330  Trigger::cActScrMeshOn::vf0C  size=1  [class]
void Trigger::cActScrMeshOn::vf0C()
{
}

// 00C8D340  Trigger::cActScrMeshOn::vf10  size=1  [class]
void Trigger::cActScrMeshOn::vf10()
{
}

// 00C8D350  Trigger::cActScrMeshOn::vf14  size=1  [class]
void Trigger::cActScrMeshOn::vf14()
{
}

// 00C93A50  Trigger::cActScrMeshOn::vf00  size=6  [class]
void *Trigger::cActScrMeshOn::vf00()
{
    return &DAT_01dbe1e4;
}

// 00C93A60  Trigger::cActScrMeshOn::vf04  size=31  [class]
Trigger::cActScrMeshOn *Trigger::cActScrMeshOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
