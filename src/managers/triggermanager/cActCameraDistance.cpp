// src/managers/triggermanager/cActCameraDistance.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraDistance.h"

extern undefined DAT_01dbe0ac;           // cActCameraDistance static descriptor returned by vf00

// 00C8A050  Trigger::cActCameraDistance::vf08  size=1  [class]
void Trigger::cActCameraDistance::vf08()
{
}

// 00C8A060  Trigger::cActCameraDistance::vf0C  size=1  [class]
void Trigger::cActCameraDistance::vf0C()
{
}

// 00C8A070  Trigger::cActCameraDistance::vf10  size=1  [class]
void Trigger::cActCameraDistance::vf10()
{
}

// 00C8A080  Trigger::cActCameraDistance::vf14  size=1  [class]
void Trigger::cActCameraDistance::vf14()
{
}

// 00C91F80  Trigger::cActCameraDistance::vf00  size=6  [class]
void *Trigger::cActCameraDistance::vf00()
{
    return &DAT_01dbe0ac;
}

// 00C91F90  Trigger::cActCameraDistance::vf04  size=31  [class]
Trigger::cActCameraDistance *Trigger::cActCameraDistance::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
