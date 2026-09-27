// src/managers/triggermanager/cActEnemyDestroyByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyDestroyByNumber.h"

extern undefined DAT_01dbe298;           // cActEnemyDestroyByNumber static descriptor returned by vf00

// 00C8F070  Trigger::cActEnemyDestroyByNumber::vf08  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf08()
{
}

// 00C8F080  Trigger::cActEnemyDestroyByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf0C()
{
}

// 00C8F090  Trigger::cActEnemyDestroyByNumber::vf10  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf10()
{
}

// 00C8F0A0  Trigger::cActEnemyDestroyByNumber::vf14  size=1  [class]
void Trigger::cActEnemyDestroyByNumber::vf14()
{
}

// 00C94840  Trigger::cActEnemyDestroyByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyDestroyByNumber::vf00()
{
    return &DAT_01dbe298;
}

// 00C94850  Trigger::cActEnemyDestroyByNumber::vf04  size=31  [class]
Trigger::cActEnemyDestroyByNumber *Trigger::cActEnemyDestroyByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
