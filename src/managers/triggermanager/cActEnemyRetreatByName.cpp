// src/managers/triggermanager/cActEnemyRetreatByName.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRetreatByName.h"

extern undefined DAT_01dbe074;                 // cActEnemyRetreatByName static descriptor returned by vf00

// 00C89790  Trigger::cActEnemyRetreatByName::vf08  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf08()
{
}

// 00C897A0  Trigger::cActEnemyRetreatByName::vf0C  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf0C()
{
}

// 00C897B0  Trigger::cActEnemyRetreatByName::vf10  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf10()
{
}

// 00C897C0  Trigger::cActEnemyRetreatByName::vf14  size=1  [class]
void Trigger::cActEnemyRetreatByName::vf14()
{
}

// 00C91A30  Trigger::cActEnemyRetreatByName::vf00  size=6  [class]
void *Trigger::cActEnemyRetreatByName::vf00()
{
    return &DAT_01dbe074;
}

// 00C91A40  Trigger::cActEnemyRetreatByName::vf04  size=31  [class]
Trigger::cActEnemyRetreatByName *Trigger::cActEnemyRetreatByName::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
