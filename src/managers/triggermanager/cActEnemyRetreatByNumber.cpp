// src/managers/triggermanager/cActEnemyRetreatByNumber.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEnemyRetreatByNumber.h"

extern undefined DAT_01dbe078;                 // cActEnemyRetreatByNumber static descriptor returned by vf00

// 00C89830  Trigger::cActEnemyRetreatByNumber::vf08  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf08()
{
}

// 00C89840  Trigger::cActEnemyRetreatByNumber::vf0C  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf0C()
{
}

// 00C89850  Trigger::cActEnemyRetreatByNumber::vf10  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf10()
{
}

// 00C89860  Trigger::cActEnemyRetreatByNumber::vf14  size=1  [class]
void Trigger::cActEnemyRetreatByNumber::vf14()
{
}

// 00C91A70  Trigger::cActEnemyRetreatByNumber::vf00  size=6  [class]
void *Trigger::cActEnemyRetreatByNumber::vf00()
{
    return &DAT_01dbe078;
}

// 00C91A80  Trigger::cActEnemyRetreatByNumber::vf04  size=31  [class]
Trigger::cActEnemyRetreatByNumber *Trigger::cActEnemyRetreatByNumber::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
