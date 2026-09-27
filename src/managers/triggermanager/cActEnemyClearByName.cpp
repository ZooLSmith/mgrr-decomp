// src/managers/triggermanager/cActEnemyClearByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyClearByName.h"

extern undefined DAT_01dbe07c;           // cActEnemyClearByName static descriptor returned by vf00

// 00C898D0  Trigger::cActEnemyClearByName::vf08  size=1  [class]
void Trigger::cActEnemyClearByName::vf08()
{
}

// 00C898E0  Trigger::cActEnemyClearByName::vf0C  size=1  [class]
void Trigger::cActEnemyClearByName::vf0C()
{
}

// 00C898F0  Trigger::cActEnemyClearByName::vf10  size=1  [class]
void Trigger::cActEnemyClearByName::vf10()
{
}

// 00C89900  Trigger::cActEnemyClearByName::vf14  size=1  [class]
void Trigger::cActEnemyClearByName::vf14()
{
}

// 00C91AB0  Trigger::cActEnemyClearByName::vf00  size=6  [class]
void *Trigger::cActEnemyClearByName::vf00()
{
    return &DAT_01dbe07c;
}

// 00C91AC0  Trigger::cActEnemyClearByName::vf04  size=31  [class]
Trigger::cActEnemyClearByName *Trigger::cActEnemyClearByName::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
