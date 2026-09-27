// src/managers/triggermanager/cActEnemyAppear.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyAppear.h"

extern undefined DAT_01dbe258;           // cActEnemyAppear static descriptor returned by vf00

// 00C8E5D0  Trigger::cActEnemyAppear::vf08  size=1  [class]
void Trigger::cActEnemyAppear::vf08()
{
}

// 00C8E5E0  Trigger::cActEnemyAppear::vf0C  size=1  [class]
void Trigger::cActEnemyAppear::vf0C()
{
}

// 00C8E5F0  Trigger::cActEnemyAppear::vf10  size=1  [class]
void Trigger::cActEnemyAppear::vf10()
{
}

// 00C8E600  Trigger::cActEnemyAppear::vf14  size=1  [class]
void Trigger::cActEnemyAppear::vf14()
{
}

// 00C94410  Trigger::cActEnemyAppear::vf00  size=6  [class]
void *Trigger::cActEnemyAppear::vf00()
{
    return &DAT_01dbe258;
}

// 00C94420  Trigger::cActEnemyAppear::vf04  size=31  [class]
Trigger::cActEnemyAppear *Trigger::cActEnemyAppear::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
