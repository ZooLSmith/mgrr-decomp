// src/managers/triggermanager/cActMesDispOffSkip.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMesDispOffSkip.h"

extern undefined DAT_01dbe214;                 // cActMesDispOffSkip static descriptor returned by vf00

// 00C8DB30  Trigger::cActMesDispOffSkip::vf08  size=1  [class]
void Trigger::cActMesDispOffSkip::vf08()
{
}

// 00C8DB40  Trigger::cActMesDispOffSkip::vf0C  size=1  [class]
void Trigger::cActMesDispOffSkip::vf0C()
{
}

// 00C8DB50  Trigger::cActMesDispOffSkip::vf10  size=1  [class]
void Trigger::cActMesDispOffSkip::vf10()
{
}

// 00C8DB60  Trigger::cActMesDispOffSkip::vf14  size=1  [class]
void Trigger::cActMesDispOffSkip::vf14()
{
}

// 00C93DB0  Trigger::cActMesDispOffSkip::vf00  size=6  [class]
void *Trigger::cActMesDispOffSkip::vf00()
{
    return &DAT_01dbe214;
}

// 00C93DC0  Trigger::cActMesDispOffSkip::vf04  size=31  [class]
Trigger::cActMesDispOffSkip *Trigger::cActMesDispOffSkip::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
