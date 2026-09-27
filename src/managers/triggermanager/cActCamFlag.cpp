// src/managers/triggermanager/cActCamFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCamFlag.h"

extern undefined DAT_01dbe164;  // cActCamFlag static descriptor returned by vf00

// 00C8BFC0  Trigger::cActCamFlag::vf08  size=1  [class]
void Trigger::cActCamFlag::vf08()
{
}

// 00C8BFD0  Trigger::cActCamFlag::vf0C  size=1  [class]
void Trigger::cActCamFlag::vf0C()
{
}

// 00C8BFE0  Trigger::cActCamFlag::vf10  size=1  [class]
void Trigger::cActCamFlag::vf10()
{
}

// 00C8BFF0  Trigger::cActCamFlag::vf14  size=1  [class]
void Trigger::cActCamFlag::vf14()
{
}

// 00C93030  Trigger::cActCamFlag::vf00  size=6  [class]
void *Trigger::cActCamFlag::vf00()
{
    return &DAT_01dbe164;
}

// 00C93040  Trigger::cActCamFlag::vf04  size=31  [class]
Trigger::cActCamFlag *Trigger::cActCamFlag::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
