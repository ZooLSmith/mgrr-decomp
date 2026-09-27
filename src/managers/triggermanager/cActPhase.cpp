// src/managers/triggermanager/cActPhase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPhase.h"

extern undefined DAT_01dbe05c;  // cActPhase static descriptor returned by vf00

// 00C89650  Trigger::cActPhase::vf08  size=1  [class]
void Trigger::cActPhase::vf08()
{
}

// 00C89660  Trigger::cActPhase::vf0C  size=1  [class]
void Trigger::cActPhase::vf0C()
{
}

// 00C89670  Trigger::cActPhase::vf10  size=1  [class]
void Trigger::cActPhase::vf10()
{
}

// 00C89680  Trigger::cActPhase::vf14  size=1  [class]
void Trigger::cActPhase::vf14()
{
}

// 00C918B0  Trigger::cActPhase::vf00  size=6  [class]
void *Trigger::cActPhase::vf00()
{
    return &DAT_01dbe05c;
}

// 00C918C0  Trigger::cActPhase::vf04  size=31  [class]
Trigger::cActPhase *Trigger::cActPhase::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
