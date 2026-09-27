// src/managers/triggermanager/cActCamFocusLock.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCamFocusLock.h"

extern undefined DAT_01dbe2b8;  // cActCamFocusLock static descriptor returned by vf00

// 00C8F570  Trigger::cActCamFocusLock::vf08  size=1  [class]
void Trigger::cActCamFocusLock::vf08()
{
}

// 00C8F580  Trigger::cActCamFocusLock::vf0C  size=1  [class]
void Trigger::cActCamFocusLock::vf0C()
{
}

// 00C8F590  Trigger::cActCamFocusLock::vf10  size=1  [class]
void Trigger::cActCamFocusLock::vf10()
{
}

// 00C8F5A0  Trigger::cActCamFocusLock::vf14  size=1  [class]
void Trigger::cActCamFocusLock::vf14()
{
}

// 00C94A40  Trigger::cActCamFocusLock::vf00  size=6  [class]
void *Trigger::cActCamFocusLock::vf00()
{
    return &DAT_01dbe2b8;
}

// 00C94A50  Trigger::cActCamFocusLock::vf04  size=31  [class]
Trigger::cActCamFocusLock *Trigger::cActCamFocusLock::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
