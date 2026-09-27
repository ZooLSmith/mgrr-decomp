// src/managers/triggermanager/cActObjectDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActObjectDisp.h"

extern undefined DAT_01dbe238;  // cActObjectDisp static descriptor returned by vf00

// 00C8E0D0  Trigger::cActObjectDisp::vf08  size=1  [class]
void Trigger::cActObjectDisp::vf08()
{
}

// 00C8E0E0  Trigger::cActObjectDisp::vf0C  size=1  [class]
void Trigger::cActObjectDisp::vf0C()
{
}

// 00C8E0F0  Trigger::cActObjectDisp::vf10  size=1  [class]
void Trigger::cActObjectDisp::vf10()
{
}

// 00C8E100  Trigger::cActObjectDisp::vf14  size=1  [class]
void Trigger::cActObjectDisp::vf14()
{
}

// 00C94210  Trigger::cActObjectDisp::vf00  size=6  [class]
void *Trigger::cActObjectDisp::vf00()
{
    return &DAT_01dbe238;
}

// 00C94220  Trigger::cActObjectDisp::vf04  size=31  [class]
Trigger::cActObjectDisp *Trigger::cActObjectDisp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
