// src/managers/triggermanager/cActReqBehaviorInstruction.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActReqBehaviorInstruction.h"

extern undefined DAT_01dbe120;  // cActReqBehaviorInstruction static descriptor returned by vf00

// 00C8B4F0  Trigger::cActReqBehaviorInstruction::vf08  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf08()
{
}

// 00C8B500  Trigger::cActReqBehaviorInstruction::vf0C  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf0C()
{
}

// 00C8B510  Trigger::cActReqBehaviorInstruction::vf10  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf10()
{
}

// 00C8B520  Trigger::cActReqBehaviorInstruction::vf14  size=1  [class]
void Trigger::cActReqBehaviorInstruction::vf14()
{
}

// 00C92A80  Trigger::cActReqBehaviorInstruction::vf00  size=6  [class]
void *Trigger::cActReqBehaviorInstruction::vf00()
{
    return &DAT_01dbe120;
}

// 00C92A90  Trigger::cActReqBehaviorInstruction::vf04  size=31  [class]
Trigger::cActReqBehaviorInstruction *Trigger::cActReqBehaviorInstruction::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
