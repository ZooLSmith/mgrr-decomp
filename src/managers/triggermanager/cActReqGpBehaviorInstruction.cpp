// src/managers/triggermanager/cActReqGpBehaviorInstruction.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActReqGpBehaviorInstruction.h"

extern undefined DAT_01dbe1d0;  // cActReqGpBehaviorInstruction static descriptor returned by vf00

// 00C8CE20  Trigger::cActReqGpBehaviorInstruction::vf08  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf08()
{
}

// 00C8CE30  Trigger::cActReqGpBehaviorInstruction::vf0C  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf0C()
{
}

// 00C8CE40  Trigger::cActReqGpBehaviorInstruction::vf10  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf10()
{
}

// 00C8CE50  Trigger::cActReqGpBehaviorInstruction::vf14  size=1  [class]
void Trigger::cActReqGpBehaviorInstruction::vf14()
{
}

// 00C93850  Trigger::cActReqGpBehaviorInstruction::vf00  size=6  [class]
void *Trigger::cActReqGpBehaviorInstruction::vf00()
{
    return &DAT_01dbe1d0;
}

// 00C93860  Trigger::cActReqGpBehaviorInstruction::vf04  size=31  [class]
Trigger::cActReqGpBehaviorInstruction *Trigger::cActReqGpBehaviorInstruction::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
