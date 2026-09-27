// src/managers/triggermanager/cActGimmickRevert.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGimmickRevert.h"

extern undefined DAT_01dbe250;                 // cActGimmickRevert static descriptor returned by vf00

// 00C8E490  Trigger::cActGimmickRevert::vf08  size=1  [class]
void Trigger::cActGimmickRevert::vf08()
{
}

// 00C8E4A0  Trigger::cActGimmickRevert::vf0C  size=1  [class]
void Trigger::cActGimmickRevert::vf0C()
{
}

// 00C8E4B0  Trigger::cActGimmickRevert::vf10  size=1  [class]
void Trigger::cActGimmickRevert::vf10()
{
}

// 00C8E4C0  Trigger::cActGimmickRevert::vf14  size=1  [class]
void Trigger::cActGimmickRevert::vf14()
{
}

// 00C94390  Trigger::cActGimmickRevert::vf00  size=6  [class]
void *Trigger::cActGimmickRevert::vf00()
{
    return &DAT_01dbe250;
}

// 00C943A0  Trigger::cActGimmickRevert::vf04  size=31  [class]
Trigger::cActGimmickRevert *Trigger::cActGimmickRevert::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
