// src/managers/triggermanager/cActVmPlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVmPlay.h"

extern undefined DAT_01dbe1ec;  // cActVmPlay static descriptor returned by vf00

// 00C8D460  Trigger::cActVmPlay::vf08  size=1  [class]
void Trigger::cActVmPlay::vf08()
{
}

// 00C8D470  Trigger::cActVmPlay::vf0C  size=1  [class]
void Trigger::cActVmPlay::vf0C()
{
}

// 00C8D480  Trigger::cActVmPlay::vf10  size=1  [class]
void Trigger::cActVmPlay::vf10()
{
}

// 00C8D490  Trigger::cActVmPlay::vf14  size=1  [class]
void Trigger::cActVmPlay::vf14()
{
}

// 00C93AD0  Trigger::cActVmPlay::vf00  size=6  [class]
void *Trigger::cActVmPlay::vf00()
{
    return &DAT_01dbe1ec;
}

// 00C93AE0  Trigger::cActVmPlay::vf04  size=31  [class]
Trigger::cActVmPlay *Trigger::cActVmPlay::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
