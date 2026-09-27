// src/managers/triggermanager/cActSetUIAnimStartNone.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSetUIAnimStartNone.h"

extern undefined DAT_01dbe1dc;  // cActSetUIAnimStartNone static descriptor returned by vf00

// 00C8D1E0  Trigger::cActSetUIAnimStartNone::vf08  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf08()
{
}

// 00C8D1F0  Trigger::cActSetUIAnimStartNone::vf0C  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf0C()
{
}

// 00C8D200  Trigger::cActSetUIAnimStartNone::vf10  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf10()
{
}

// 00C8D210  Trigger::cActSetUIAnimStartNone::vf14  size=1  [class]
void Trigger::cActSetUIAnimStartNone::vf14()
{
}

// 00C939D0  Trigger::cActSetUIAnimStartNone::vf00  size=6  [class]
void *Trigger::cActSetUIAnimStartNone::vf00()
{
    return &DAT_01dbe1dc;
}

// 00C939E0  Trigger::cActSetUIAnimStartNone::vf04  size=31  [class]
Trigger::cActSetUIAnimStartNone *Trigger::cActSetUIAnimStartNone::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
