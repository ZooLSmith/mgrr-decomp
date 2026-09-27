// src/managers/triggermanager/cActReqShotMissile.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActReqShotMissile.h"

extern undefined DAT_01dbe230;  // cActReqShotMissile static descriptor returned by vf00

// 00C8DF90  Trigger::cActReqShotMissile::vf08  size=1  [class]
void Trigger::cActReqShotMissile::vf08()
{
}

// 00C8DFA0  Trigger::cActReqShotMissile::vf0C  size=1  [class]
void Trigger::cActReqShotMissile::vf0C()
{
}

// 00C8DFB0  Trigger::cActReqShotMissile::vf10  size=1  [class]
void Trigger::cActReqShotMissile::vf10()
{
}

// 00C8DFC0  Trigger::cActReqShotMissile::vf14  size=1  [class]
void Trigger::cActReqShotMissile::vf14()
{
}

// 00C93F70  Trigger::cActReqShotMissile::vf00  size=6  [class]
void *Trigger::cActReqShotMissile::vf00()
{
    return &DAT_01dbe230;
}

// 00C93F80  Trigger::cActReqShotMissile::vf04  size=31  [class]
Trigger::cActReqShotMissile *Trigger::cActReqShotMissile::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
