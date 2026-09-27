// src/managers/triggermanager/cActForceBattleFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActForceBattleFlag.h"

extern undefined DAT_01dbe190;                 // cActForceBattleFlag static descriptor returned by vf00

// 00C8C240  Trigger::cActForceBattleFlag::vf08  size=1  [class]
void Trigger::cActForceBattleFlag::vf08()
{
}

// 00C8C250  Trigger::cActForceBattleFlag::vf0C  size=1  [class]
void Trigger::cActForceBattleFlag::vf0C()
{
}

// 00C8C260  Trigger::cActForceBattleFlag::vf10  size=1  [class]
void Trigger::cActForceBattleFlag::vf10()
{
}

// 00C8C270  Trigger::cActForceBattleFlag::vf14  size=1  [class]
void Trigger::cActForceBattleFlag::vf14()
{
}

// 00C932F0  Trigger::cActForceBattleFlag::vf00  size=6  [class]
void *Trigger::cActForceBattleFlag::vf00()
{
    return &DAT_01dbe190;
}

// 00C93300  Trigger::cActForceBattleFlag::vf04  size=31  [class]
Trigger::cActForceBattleFlag *Trigger::cActForceBattleFlag::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
