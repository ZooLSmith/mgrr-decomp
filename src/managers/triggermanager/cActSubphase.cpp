// src/managers/triggermanager/cActSubphase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSubphase.h"

extern undefined DAT_01dbd21c;  // cActSubphase static descriptor returned by vf00

// 00C890B0  Trigger::cActSubphase::vf08  size=1  [class]
void Trigger::cActSubphase::vf08()
{
}

// 00C890C0  Trigger::cActSubphase::vf0C  size=1  [class]
void Trigger::cActSubphase::vf0C()
{
}

// 00C890D0  Trigger::cActSubphase::vf10  size=1  [class]
void Trigger::cActSubphase::vf10()
{
}

// 00C890E0  Trigger::cActSubphase::vf14  size=1  [class]
void Trigger::cActSubphase::vf14()
{
}

// 00C91670  Trigger::cActSubphase::vf00  size=6  [class]
void *Trigger::cActSubphase::vf00()
{
    return &DAT_01dbd21c;
}

// 00C91680  Trigger::cActSubphase::vf04  size=31  [class]
Trigger::cActSubphase *Trigger::cActSubphase::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
