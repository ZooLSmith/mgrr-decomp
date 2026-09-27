// src/managers/triggermanager/cActEnemy.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemy.h"

extern undefined DAT_01dbd210;           // cActEnemy static descriptor returned by vf00

// 00C918F0  Trigger::cActEnemy::vf00  size=6  [class]
void *Trigger::cActEnemy::vf00()
{
    return &DAT_01dbd210;
}

// 00C91900  Trigger::cActEnemy::vf04  size=31  [class]
Trigger::cActEnemy *Trigger::cActEnemy::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
