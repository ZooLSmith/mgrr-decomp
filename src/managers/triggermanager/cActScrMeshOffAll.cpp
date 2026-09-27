// src/managers/triggermanager/cActScrMeshOffAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrMeshOffAll.h"

extern undefined DAT_01dbe274;  // cActScrMeshOffAll static descriptor returned by vf00

// 00C8EA30  Trigger::cActScrMeshOffAll::vf08  size=1  [class]
void Trigger::cActScrMeshOffAll::vf08()
{
}

// 00C8EA40  Trigger::cActScrMeshOffAll::vf0C  size=1  [class]
void Trigger::cActScrMeshOffAll::vf0C()
{
}

// 00C8EA50  Trigger::cActScrMeshOffAll::vf10  size=1  [class]
void Trigger::cActScrMeshOffAll::vf10()
{
}

// 00C8EA60  Trigger::cActScrMeshOffAll::vf14  size=1  [class]
void Trigger::cActScrMeshOffAll::vf14()
{
}

// 00C945D0  Trigger::cActScrMeshOffAll::vf00  size=6  [class]
void *Trigger::cActScrMeshOffAll::vf00()
{
    return &DAT_01dbe274;
}

// 00C945E0  Trigger::cActScrMeshOffAll::vf04  size=31  [class]
Trigger::cActScrMeshOffAll *Trigger::cActScrMeshOffAll::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
