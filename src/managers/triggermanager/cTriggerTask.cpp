// src/managers/triggermanager/cTriggerTask.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cTriggerTask.h"

// 00C77530  Trigger::cTriggerTask::vf04  size=5  [class]
void Trigger::cTriggerTask::vf04()
{
    flags() = flags() | 1;
}

// 00C77540  Trigger::cTriggerTask::vf08  size=9  [class]
void Trigger::cTriggerTask::vf08()
{
    owner() = 0;
    flags() = 0;
}

// 00C83E40  Trigger::cTriggerTask::vf00  size=31  [class]
Trigger::cTriggerTask *Trigger::cTriggerTask::vf00(unsigned char flags)
{
    // vftable = Trigger::cTriggerTask::vftable (0x016A8908)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
