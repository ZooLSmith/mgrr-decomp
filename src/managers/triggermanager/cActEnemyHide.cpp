// src/managers/triggermanager/cActEnemyHide.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyHide.h"

extern undefined DAT_01dbe254;                 // cActEnemyHide static descriptor returned by vf00

// 00C8E530  Trigger::cActEnemyHide::vf08  size=1  [class]
void Trigger::cActEnemyHide::vf08()
{
}

// 00C8E540  Trigger::cActEnemyHide::vf0C  size=1  [class]
void Trigger::cActEnemyHide::vf0C()
{
}

// 00C8E550  Trigger::cActEnemyHide::vf10  size=1  [class]
void Trigger::cActEnemyHide::vf10()
{
}

// 00C8E560  Trigger::cActEnemyHide::vf14  size=1  [class]
void Trigger::cActEnemyHide::vf14()
{
}

// 00C943D0  Trigger::cActEnemyHide::vf00  size=6  [class]
void *Trigger::cActEnemyHide::vf00()
{
    return &DAT_01dbe254;
}

// 00C943E0  Trigger::cActEnemyHide::vf04  size=31  [class]
Trigger::cActEnemyHide *Trigger::cActEnemyHide::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
