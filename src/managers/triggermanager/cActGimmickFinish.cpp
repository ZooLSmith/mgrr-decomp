// src/managers/triggermanager/cActGimmickFinish.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGimmickFinish.h"

extern undefined DAT_01dbe24c;                 // cActGimmickFinish static descriptor returned by vf00

// 00C8E3F0  Trigger::cActGimmickFinish::vf08  size=1  [class]
void Trigger::cActGimmickFinish::vf08()
{
}

// 00C8E400  Trigger::cActGimmickFinish::vf0C  size=1  [class]
void Trigger::cActGimmickFinish::vf0C()
{
}

// 00C8E410  Trigger::cActGimmickFinish::vf10  size=1  [class]
void Trigger::cActGimmickFinish::vf10()
{
}

// 00C8E420  Trigger::cActGimmickFinish::vf14  size=1  [class]
void Trigger::cActGimmickFinish::vf14()
{
}

// 00C94350  Trigger::cActGimmickFinish::vf00  size=6  [class]
void *Trigger::cActGimmickFinish::vf00()
{
    return &DAT_01dbe24c;
}

// 00C94360  Trigger::cActGimmickFinish::vf04  size=31  [class]
Trigger::cActGimmickFinish *Trigger::cActGimmickFinish::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
