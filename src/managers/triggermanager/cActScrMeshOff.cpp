// src/managers/triggermanager/cActScrMeshOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrMeshOff.h"

extern undefined DAT_01dbe1e8;  // cActScrMeshOff static descriptor returned by vf00

// 00C8D3C0  Trigger::cActScrMeshOff::vf08  size=1  [class]
void Trigger::cActScrMeshOff::vf08()
{
}

// 00C8D3D0  Trigger::cActScrMeshOff::vf0C  size=1  [class]
void Trigger::cActScrMeshOff::vf0C()
{
}

// 00C8D3E0  Trigger::cActScrMeshOff::vf10  size=1  [class]
void Trigger::cActScrMeshOff::vf10()
{
}

// 00C8D3F0  Trigger::cActScrMeshOff::vf14  size=1  [class]
void Trigger::cActScrMeshOff::vf14()
{
}

// 00C93A90  Trigger::cActScrMeshOff::vf00  size=6  [class]
void *Trigger::cActScrMeshOff::vf00()
{
    return &DAT_01dbe1e8;
}

// 00C93AA0  Trigger::cActScrMeshOff::vf04  size=31  [class]
Trigger::cActScrMeshOff *Trigger::cActScrMeshOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
