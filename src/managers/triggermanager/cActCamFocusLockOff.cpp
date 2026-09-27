// src/managers/triggermanager/cActCamFocusLockOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCamFocusLockOff.h"

extern undefined DAT_01dbe2bc;           // cActCamFocusLockOff static descriptor returned by vf00

// 00C8F610  Trigger::cActCamFocusLockOff::vf08  size=1  [class]
void Trigger::cActCamFocusLockOff::vf08()
{
}

// 00C8F620  Trigger::cActCamFocusLockOff::vf0C  size=1  [class]
void Trigger::cActCamFocusLockOff::vf0C()
{
}

// 00C8F630  Trigger::cActCamFocusLockOff::vf10  size=1  [class]
void Trigger::cActCamFocusLockOff::vf10()
{
}

// 00C8F640  Trigger::cActCamFocusLockOff::vf14  size=1  [class]
void Trigger::cActCamFocusLockOff::vf14()
{
}

// 00C94A80  Trigger::cActCamFocusLockOff::vf00  size=6  [class]
void *Trigger::cActCamFocusLockOff::vf00()
{
    return &DAT_01dbe2bc;
}

// 00C94A90  Trigger::cActCamFocusLockOff::vf04  size=31  [class]
Trigger::cActCamFocusLockOff *Trigger::cActCamFocusLockOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
