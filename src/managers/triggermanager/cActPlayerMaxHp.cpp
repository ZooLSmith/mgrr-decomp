// src/managers/triggermanager/cActPlayerMaxHp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerMaxHp.h"

extern undefined DAT_01dbe2a0;  // cActPlayerMaxHp static descriptor returned by vf00

// 00C8F1B0  Trigger::cActPlayerMaxHp::vf08  size=1  [class]
void Trigger::cActPlayerMaxHp::vf08()
{
}

// 00C8F1C0  Trigger::cActPlayerMaxHp::vf0C  size=1  [class]
void Trigger::cActPlayerMaxHp::vf0C()
{
}

// 00C8F1D0  Trigger::cActPlayerMaxHp::vf10  size=1  [class]
void Trigger::cActPlayerMaxHp::vf10()
{
}

// 00C8F1E0  Trigger::cActPlayerMaxHp::vf14  size=1  [class]
void Trigger::cActPlayerMaxHp::vf14()
{
}

// 00C948C0  Trigger::cActPlayerMaxHp::vf00  size=6  [class]
void *Trigger::cActPlayerMaxHp::vf00()
{
    return &DAT_01dbe2a0;
}

// 00C948D0  Trigger::cActPlayerMaxHp::vf04  size=31  [class]
Trigger::cActPlayerMaxHp *Trigger::cActPlayerMaxHp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
