// src/managers/triggermanager/cActTask.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTask.h"

extern undefined DAT_01dbe098;  // cActTask static descriptor returned by vf00

// 00C89D30  Trigger::cActTask::vf08  size=1  [class]
void Trigger::cActTask::vf08()
{
}

// 00C89D40  Trigger::cActTask::vf0C  size=1  [class]
void Trigger::cActTask::vf0C()
{
}

// 00C89D50  Trigger::cActTask::vf10  size=1  [class]
void Trigger::cActTask::vf10()
{
}

// 00C89D60  Trigger::cActTask::vf14  size=1  [class]
void Trigger::cActTask::vf14()
{
}

// 00C91DE0  Trigger::cActTask::vf00  size=6  [class]
void *Trigger::cActTask::vf00()
{
    return &DAT_01dbe098;
}

// 00C91DF0  Trigger::cActTask::vf04  size=31  [class]
Trigger::cActTask *Trigger::cActTask::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
