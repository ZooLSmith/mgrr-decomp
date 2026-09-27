// src/managers/triggermanager/cActBattleAreaOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActBattleAreaOff.h"

extern undefined DAT_01dbe22c;  // cActBattleAreaOff static descriptor returned by vf00

// 00C8DEF0  Trigger::cActBattleAreaOff::vf08  size=1  [class]
void Trigger::cActBattleAreaOff::vf08()
{
}

// 00C8DF00  Trigger::cActBattleAreaOff::vf0C  size=1  [class]
void Trigger::cActBattleAreaOff::vf0C()
{
}

// 00C8DF10  Trigger::cActBattleAreaOff::vf10  size=1  [class]
void Trigger::cActBattleAreaOff::vf10()
{
}

// 00C8DF20  Trigger::cActBattleAreaOff::vf14  size=1  [class]
void Trigger::cActBattleAreaOff::vf14()
{
}

// 00C93F30  Trigger::cActBattleAreaOff::vf00  size=6  [class]
void *Trigger::cActBattleAreaOff::vf00()
{
    return &DAT_01dbe22c;
}

// 00C93F40  Trigger::cActBattleAreaOff::vf04  size=31  [class]
Trigger::cActBattleAreaOff *Trigger::cActBattleAreaOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
