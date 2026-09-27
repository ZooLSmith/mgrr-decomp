// src/managers/triggermanager/cActEnemyAppearResetPosByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyAppearResetPosByNumber.h"

extern undefined DAT_01dbe290;           // cActEnemyAppearResetPosByNumber static descriptor returned by vf00

// 00C8EF30  Trigger::cActEnemyAppearResetPosByNumber::vf08  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf08()
{
}

// 00C8EF40  Trigger::cActEnemyAppearResetPosByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf0C()
{
}

// 00C8EF50  Trigger::cActEnemyAppearResetPosByNumber::vf10  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf10()
{
}

// 00C8EF60  Trigger::cActEnemyAppearResetPosByNumber::vf14  size=1  [class]
void Trigger::cActEnemyAppearResetPosByNumber::vf14()
{
}

// 00C947C0  Trigger::cActEnemyAppearResetPosByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyAppearResetPosByNumber::vf00()
{
    return &DAT_01dbe290;
}

// 00C947D0  Trigger::cActEnemyAppearResetPosByNumber::vf04  size=31  [class]
Trigger::cActEnemyAppearResetPosByNumber *Trigger::cActEnemyAppearResetPosByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
