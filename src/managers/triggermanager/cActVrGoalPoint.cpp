// src/managers/triggermanager/cActVrGoalPoint.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrGoalPoint.h"

extern undefined DAT_01dbe268;  // cActVrGoalPoint static descriptor returned by vf00

// 00C8E850  Trigger::cActVrGoalPoint::vf08  size=1  [class]
void Trigger::cActVrGoalPoint::vf08()
{
}

// 00C8E860  Trigger::cActVrGoalPoint::vf0C  size=1  [class]
void Trigger::cActVrGoalPoint::vf0C()
{
}

// 00C8E870  Trigger::cActVrGoalPoint::vf10  size=1  [class]
void Trigger::cActVrGoalPoint::vf10()
{
}

// 00C8E880  Trigger::cActVrGoalPoint::vf14  size=1  [class]
void Trigger::cActVrGoalPoint::vf14()
{
}

// 00C94510  Trigger::cActVrGoalPoint::vf00  size=6  [class]
void *Trigger::cActVrGoalPoint::vf00()
{
    return &DAT_01dbe268;
}

// 00C94520  Trigger::cActVrGoalPoint::vf04  size=31  [class]
Trigger::cActVrGoalPoint *Trigger::cActVrGoalPoint::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
