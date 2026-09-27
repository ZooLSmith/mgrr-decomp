// src/managers/triggermanager/cActCameraFocus.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraFocus.h"

extern undefined DAT_01dbe0b4;           // cActCameraFocus static descriptor returned by vf00

// 00C8A190  Trigger::cActCameraFocus::vf08  size=1  [class]
void Trigger::cActCameraFocus::vf08()
{
}

// 00C8A1A0  Trigger::cActCameraFocus::vf0C  size=1  [class]
void Trigger::cActCameraFocus::vf0C()
{
}

// 00C8A1B0  Trigger::cActCameraFocus::vf10  size=1  [class]
void Trigger::cActCameraFocus::vf10()
{
}

// 00C8A1C0  Trigger::cActCameraFocus::vf14  size=1  [class]
void Trigger::cActCameraFocus::vf14()
{
}

// 00C92000  Trigger::cActCameraFocus::vf00  size=6  [class]
void *Trigger::cActCameraFocus::vf00()
{
    return &DAT_01dbe0b4;
}

// 00C92010  Trigger::cActCameraFocus::vf04  size=31  [class]
Trigger::cActCameraFocus *Trigger::cActCameraFocus::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
