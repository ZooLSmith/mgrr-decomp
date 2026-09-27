// src/managers/triggermanager/cActEnemyMove.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyMove.h"

extern undefined DAT_01dbe11c;                 // cActEnemyMove static descriptor returned by vf00

// 00C8B450  Trigger::cActEnemyMove::vf08  size=1  [class]
void Trigger::cActEnemyMove::vf08()
{
}

// 00C8B460  Trigger::cActEnemyMove::vf0C  size=1  [class]
void Trigger::cActEnemyMove::vf0C()
{
}

// 00C8B470  Trigger::cActEnemyMove::vf10  size=1  [class]
void Trigger::cActEnemyMove::vf10()
{
}

// 00C8B480  Trigger::cActEnemyMove::vf14  size=1  [class]
void Trigger::cActEnemyMove::vf14()
{
}

// 00C92A40  Trigger::cActEnemyMove::vf00  size=6  [class]
void *Trigger::cActEnemyMove::vf00()
{
    return &DAT_01dbe11c;
}

// 00C92A50  Trigger::cActEnemyMove::vf04  size=31  [class]
Trigger::cActEnemyMove *Trigger::cActEnemyMove::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
