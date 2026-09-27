// src/managers/triggermanager/cActEnemyClearByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyClearByNumber.h"

extern undefined DAT_01dbe080;           // cActEnemyClearByNumber static descriptor returned by vf00

// 00C89970  Trigger::cActEnemyClearByNumber::vf08  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf08()
{
}

// 00C89980  Trigger::cActEnemyClearByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf0C()
{
}

// 00C89990  Trigger::cActEnemyClearByNumber::vf10  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf10()
{
}

// 00C899A0  Trigger::cActEnemyClearByNumber::vf14  size=1  [class]
void Trigger::cActEnemyClearByNumber::vf14()
{
}

// 00C91AF0  Trigger::cActEnemyClearByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyClearByNumber::vf00()
{
    return &DAT_01dbe080;
}

// 00C91B00  Trigger::cActEnemyClearByNumber::vf04  size=31  [class]
Trigger::cActEnemyClearByNumber *Trigger::cActEnemyClearByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
