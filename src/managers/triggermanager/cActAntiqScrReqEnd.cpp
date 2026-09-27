// src/managers/triggermanager/cActAntiqScrReqEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAntiqScrReqEnd.h"

extern undefined DAT_01dbe224;  // cActAntiqScrReqEnd static descriptor returned by vf00

// 00C8DDB0  Trigger::cActAntiqScrReqEnd::vf08  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf08()
{
}

// 00C8DDC0  Trigger::cActAntiqScrReqEnd::vf0C  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf0C()
{
}

// 00C8DDD0  Trigger::cActAntiqScrReqEnd::vf10  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf10()
{
}

// 00C8DDE0  Trigger::cActAntiqScrReqEnd::vf14  size=1  [class]
void Trigger::cActAntiqScrReqEnd::vf14()
{
}

// 00C93EB0  Trigger::cActAntiqScrReqEnd::vf00  size=6  [class]
void *Trigger::cActAntiqScrReqEnd::vf00()
{
    return &DAT_01dbe224;
}

// 00C93EC0  Trigger::cActAntiqScrReqEnd::vf04  size=31  [class]
Trigger::cActAntiqScrReqEnd *Trigger::cActAntiqScrReqEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
