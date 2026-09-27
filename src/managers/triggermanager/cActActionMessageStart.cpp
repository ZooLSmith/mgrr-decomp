// src/managers/triggermanager/cActActionMessageStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActActionMessageStart.h"

extern undefined DAT_01dbe1f4;  // cActActionMessageStart static descriptor returned by vf00

// 00C8D5A0  Trigger::cActActionMessageStart::vf08  size=1  [class]
void Trigger::cActActionMessageStart::vf08()
{
}

// 00C8D5B0  Trigger::cActActionMessageStart::vf0C  size=1  [class]
void Trigger::cActActionMessageStart::vf0C()
{
}

// 00C8D5C0  Trigger::cActActionMessageStart::vf10  size=1  [class]
void Trigger::cActActionMessageStart::vf10()
{
}

// 00C8D5D0  Trigger::cActActionMessageStart::vf14  size=1  [class]
void Trigger::cActActionMessageStart::vf14()
{
}

// 00C93B50  Trigger::cActActionMessageStart::vf00  size=6  [class]
void *Trigger::cActActionMessageStart::vf00()
{
    return &DAT_01dbe1f4;
}

// 00C93B60  Trigger::cActActionMessageStart::vf04  size=31  [class]
Trigger::cActActionMessageStart *Trigger::cActActionMessageStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
