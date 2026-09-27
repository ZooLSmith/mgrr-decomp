// src/managers/triggermanager/cActActionMessageFlagClear.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActActionMessageFlagClear.h"

extern undefined DAT_01dbe1f8;  // cActActionMessageFlagClear static descriptor returned by vf00

// 00C8D640  Trigger::cActActionMessageFlagClear::vf08  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf08()
{
}

// 00C8D650  Trigger::cActActionMessageFlagClear::vf0C  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf0C()
{
}

// 00C8D660  Trigger::cActActionMessageFlagClear::vf10  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf10()
{
}

// 00C8D670  Trigger::cActActionMessageFlagClear::vf14  size=1  [class]
void Trigger::cActActionMessageFlagClear::vf14()
{
}

// 00C93B90  Trigger::cActActionMessageFlagClear::vf00  size=6  [class]
void *Trigger::cActActionMessageFlagClear::vf00()
{
    return &DAT_01dbe1f8;
}

// 00C93BA0  Trigger::cActActionMessageFlagClear::vf04  size=31  [class]
Trigger::cActActionMessageFlagClear *Trigger::cActActionMessageFlagClear::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
