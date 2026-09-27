// src/managers/triggermanager/cActAddExp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAddExp.h"

extern undefined DAT_01dbe280;  // cActAddExp static descriptor returned by vf00

// 00C8EC10  Trigger::cActAddExp::vf08  size=1  [class]
void Trigger::cActAddExp::vf08()
{
}

// 00C8EC20  Trigger::cActAddExp::vf0C  size=1  [class]
void Trigger::cActAddExp::vf0C()
{
}

// 00C8EC30  Trigger::cActAddExp::vf10  size=1  [class]
void Trigger::cActAddExp::vf10()
{
}

// 00C8EC40  Trigger::cActAddExp::vf14  size=1  [class]
void Trigger::cActAddExp::vf14()
{
}

// 00C94690  Trigger::cActAddExp::vf00  size=6  [class]
void *Trigger::cActAddExp::vf00()
{
    return &DAT_01dbe280;
}

// 00C946A0  Trigger::cActAddExp::vf04  size=31  [class]
Trigger::cActAddExp *Trigger::cActAddExp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
