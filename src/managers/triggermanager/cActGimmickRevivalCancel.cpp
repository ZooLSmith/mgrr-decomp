// src/managers/triggermanager/cActGimmickRevivalCancel.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActGimmickRevivalCancel.h"

extern undefined DAT_01dbe25c;                 // cActGimmickRevivalCancel static descriptor returned by vf00

// 00C8E670  Trigger::cActGimmickRevivalCancel::vf08  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf08()
{
}

// 00C8E680  Trigger::cActGimmickRevivalCancel::vf0C  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf0C()
{
}

// 00C8E690  Trigger::cActGimmickRevivalCancel::vf10  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf10()
{
}

// 00C8E6A0  Trigger::cActGimmickRevivalCancel::vf14  size=1  [class]
void Trigger::cActGimmickRevivalCancel::vf14()
{
}

// 00C94450  Trigger::cActGimmickRevivalCancel::vf00  size=6  [class]
void *Trigger::cActGimmickRevivalCancel::vf00()
{
    return &DAT_01dbe25c;
}

// 00C94460  Trigger::cActGimmickRevivalCancel::vf04  size=31  [class]
Trigger::cActGimmickRevivalCancel *Trigger::cActGimmickRevivalCancel::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
