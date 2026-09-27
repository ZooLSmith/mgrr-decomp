// src/managers/triggermanager/cActObjectivePosSet.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActObjectivePosSet.h"

extern undefined DAT_01dbe1bc;  // cActObjectivePosSet static descriptor returned by vf00

// 00C8CC40  Trigger::cActObjectivePosSet::vf08  size=1  [class]
void Trigger::cActObjectivePosSet::vf08()
{
}

// 00C8CC50  Trigger::cActObjectivePosSet::vf0C  size=1  [class]
void Trigger::cActObjectivePosSet::vf0C()
{
}

// 00C8CC60  Trigger::cActObjectivePosSet::vf10  size=1  [class]
void Trigger::cActObjectivePosSet::vf10()
{
}

// 00C8CC70  Trigger::cActObjectivePosSet::vf14  size=1  [class]
void Trigger::cActObjectivePosSet::vf14()
{
}

// 00C93710  Trigger::cActObjectivePosSet::vf00  size=6  [class]
void *Trigger::cActObjectivePosSet::vf00()
{
    return &DAT_01dbe1bc;
}

// 00C93720  Trigger::cActObjectivePosSet::vf04  size=31  [class]
Trigger::cActObjectivePosSet *Trigger::cActObjectivePosSet::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
