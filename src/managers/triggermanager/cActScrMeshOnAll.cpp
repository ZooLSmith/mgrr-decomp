// src/managers/triggermanager/cActScrMeshOnAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrMeshOnAll.h"

extern undefined DAT_01dbe270;  // cActScrMeshOnAll static descriptor returned by vf00

// 00C8E990  Trigger::cActScrMeshOnAll::vf08  size=1  [class]
void Trigger::cActScrMeshOnAll::vf08()
{
}

// 00C8E9A0  Trigger::cActScrMeshOnAll::vf0C  size=1  [class]
void Trigger::cActScrMeshOnAll::vf0C()
{
}

// 00C8E9B0  Trigger::cActScrMeshOnAll::vf10  size=1  [class]
void Trigger::cActScrMeshOnAll::vf10()
{
}

// 00C8E9C0  Trigger::cActScrMeshOnAll::vf14  size=1  [class]
void Trigger::cActScrMeshOnAll::vf14()
{
}

// 00C94590  Trigger::cActScrMeshOnAll::vf00  size=6  [class]
void *Trigger::cActScrMeshOnAll::vf00()
{
    return &DAT_01dbe270;
}

// 00C945A0  Trigger::cActScrMeshOnAll::vf04  size=31  [class]
Trigger::cActScrMeshOnAll *Trigger::cActScrMeshOnAll::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
