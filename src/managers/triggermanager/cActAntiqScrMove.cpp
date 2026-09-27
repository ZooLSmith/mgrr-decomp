// src/managers/triggermanager/cActAntiqScrMove.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAntiqScrMove.h"

extern undefined DAT_01dbe220;  // cActAntiqScrMove static descriptor returned by vf00

// 00C8DD10  Trigger::cActAntiqScrMove::vf08  size=1  [class]
void Trigger::cActAntiqScrMove::vf08()
{
}

// 00C8DD20  Trigger::cActAntiqScrMove::vf0C  size=1  [class]
void Trigger::cActAntiqScrMove::vf0C()
{
}

// 00C8DD30  Trigger::cActAntiqScrMove::vf10  size=1  [class]
void Trigger::cActAntiqScrMove::vf10()
{
}

// 00C8DD40  Trigger::cActAntiqScrMove::vf14  size=1  [class]
void Trigger::cActAntiqScrMove::vf14()
{
}

// 00C93E70  Trigger::cActAntiqScrMove::vf00  size=6  [class]
void *Trigger::cActAntiqScrMove::vf00()
{
    return &DAT_01dbe220;
}

// 00C93E80  Trigger::cActAntiqScrMove::vf04  size=31  [class]
Trigger::cActAntiqScrMove *Trigger::cActAntiqScrMove::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
