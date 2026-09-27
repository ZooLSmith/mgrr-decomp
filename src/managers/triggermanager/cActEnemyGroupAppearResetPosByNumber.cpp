// src/managers/triggermanager/cActEnemyGroupAppearResetPosByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyGroupAppearResetPosByNumber.h"

extern undefined DAT_01dbe294;                 // cActEnemyGroupAppearResetPosByNumber static descriptor returned by vf00

// 00C8EFD0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf08  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf08()
{
}

// 00C8EFE0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf0C()
{
}

// 00C8EFF0  Trigger::cActEnemyGroupAppearResetPosByNumber::vf10  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf10()
{
}

// 00C8F000  Trigger::cActEnemyGroupAppearResetPosByNumber::vf14  size=1  [class]
void Trigger::cActEnemyGroupAppearResetPosByNumber::vf14()
{
}

// 00C94800  Trigger::cActEnemyGroupAppearResetPosByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyGroupAppearResetPosByNumber::vf00()
{
    return &DAT_01dbe294;
}

// 00C94810  Trigger::cActEnemyGroupAppearResetPosByNumber::vf04  size=31  [class]
Trigger::cActEnemyGroupAppearResetPosByNumber *Trigger::cActEnemyGroupAppearResetPosByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
