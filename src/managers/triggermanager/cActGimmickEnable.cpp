// src/managers/triggermanager/cActGimmickEnable.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGimmickEnable.h"

extern undefined DAT_01dbe194;                 // cActGimmickEnable static descriptor returned by vf00

// 00C8C2E0  Trigger::cActGimmickEnable::vf08  size=1  [class]
void Trigger::cActGimmickEnable::vf08()
{
}

// 00C8C2F0  Trigger::cActGimmickEnable::vf0C  size=1  [class]
void Trigger::cActGimmickEnable::vf0C()
{
}

// 00C8C300  Trigger::cActGimmickEnable::vf10  size=1  [class]
void Trigger::cActGimmickEnable::vf10()
{
}

// 00C8C310  Trigger::cActGimmickEnable::vf14  size=1  [class]
void Trigger::cActGimmickEnable::vf14()
{
}

// 00C93330  Trigger::cActGimmickEnable::vf00  size=6  [class]
void *Trigger::cActGimmickEnable::vf00()
{
    return &DAT_01dbe194;
}

// 00C93340  Trigger::cActGimmickEnable::vf04  size=31  [class]
Trigger::cActGimmickEnable *Trigger::cActGimmickEnable::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
