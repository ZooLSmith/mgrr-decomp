// src/managers/triggermanager/cActBattleAreaOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActBattleAreaOn.h"

extern undefined DAT_01dbe228;  // cActBattleAreaOn static descriptor returned by vf00

// 00C8DE50  Trigger::cActBattleAreaOn::vf08  size=1  [class]
void Trigger::cActBattleAreaOn::vf08()
{
}

// 00C8DE60  Trigger::cActBattleAreaOn::vf0C  size=1  [class]
void Trigger::cActBattleAreaOn::vf0C()
{
}

// 00C8DE70  Trigger::cActBattleAreaOn::vf10  size=1  [class]
void Trigger::cActBattleAreaOn::vf10()
{
}

// 00C8DE80  Trigger::cActBattleAreaOn::vf14  size=1  [class]
void Trigger::cActBattleAreaOn::vf14()
{
}

// 00C93EF0  Trigger::cActBattleAreaOn::vf00  size=6  [class]
void *Trigger::cActBattleAreaOn::vf00()
{
    return &DAT_01dbe228;
}

// 00C93F00  Trigger::cActBattleAreaOn::vf04  size=31  [class]
Trigger::cActBattleAreaOn *Trigger::cActBattleAreaOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
