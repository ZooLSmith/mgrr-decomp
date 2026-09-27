// src/managers/triggermanager/cActEnemyByNumberForce.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyByNumberForce.h"

extern undefined DAT_01dbe070;           // cActEnemyByNumberForce static descriptor returned by vf00

// 00C7ED00  Trigger::cActEnemyByNumberForce::vf24  size=15  [class]
int Trigger::cActEnemyByNumberForce::vf24()
{
    if (record() == 0) {
        return -1;
    }
    return *(int *)((char *)record() + 8);  // enemy number
}

// 00C919F0  Trigger::cActEnemyByNumberForce::vf00  size=6  [class]
void *Trigger::cActEnemyByNumberForce::vf00()
{
    return &DAT_01dbe070;
}

// 00C91A00  Trigger::cActEnemyByNumberForce::vf04  size=31  [class]
Trigger::cActEnemyByNumberForce *Trigger::cActEnemyByNumberForce::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
