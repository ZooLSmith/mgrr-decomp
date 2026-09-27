// src/managers/triggermanager/cActCameraAngle.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraAngle.h"

extern undefined DAT_01dbe0bc;           // cActCameraAngle static descriptor returned by vf00

// 00C8A2D0  Trigger::cActCameraAngle::vf08  size=1  [class]
void Trigger::cActCameraAngle::vf08()
{
}

// 00C8A2E0  Trigger::cActCameraAngle::vf0C  size=1  [class]
void Trigger::cActCameraAngle::vf0C()
{
}

// 00C8A2F0  Trigger::cActCameraAngle::vf10  size=1  [class]
void Trigger::cActCameraAngle::vf10()
{
}

// 00C8A300  Trigger::cActCameraAngle::vf14  size=1  [class]
void Trigger::cActCameraAngle::vf14()
{
}

// 00C92080  Trigger::cActCameraAngle::vf00  size=6  [class]
void *Trigger::cActCameraAngle::vf00()
{
    return &DAT_01dbe0bc;
}

// 00C92090  Trigger::cActCameraAngle::vf04  size=31  [class]
Trigger::cActCameraAngle *Trigger::cActCameraAngle::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
