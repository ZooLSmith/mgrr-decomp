// src/managers/triggermanager/cActBoss.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActBoss.h"

extern undefined DAT_01dbe060;  // cActBoss static descriptor returned by vf00

// 00C7EBE0  Trigger::cActBoss::vf24  size=4  [class]
int Trigger::cActBoss::vf24()
{
    return -1;
}

// 00C96640  Trigger::cActBoss::vf00  size=6  [class]
void *Trigger::cActBoss::vf00()
{
    return &DAT_01dbe060;
}

// 00C96650  Trigger::cActBoss::vf04  size=31  [class]
Trigger::cActBoss *Trigger::cActBoss::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
