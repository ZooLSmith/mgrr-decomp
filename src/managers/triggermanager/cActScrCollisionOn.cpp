// src/managers/triggermanager/cActScrCollisionOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrCollisionOn.h"

extern undefined DAT_01dbe204;  // cActScrCollisionOn static descriptor returned by vf00

// 00C8D820  Trigger::cActScrCollisionOn::vf08  size=1  [class]
void Trigger::cActScrCollisionOn::vf08()
{
}

// 00C8D830  Trigger::cActScrCollisionOn::vf0C  size=1  [class]
void Trigger::cActScrCollisionOn::vf0C()
{
}

// 00C8D840  Trigger::cActScrCollisionOn::vf10  size=1  [class]
void Trigger::cActScrCollisionOn::vf10()
{
}

// 00C8D850  Trigger::cActScrCollisionOn::vf14  size=1  [class]
void Trigger::cActScrCollisionOn::vf14()
{
}

// 00C93C50  Trigger::cActScrCollisionOn::vf00  size=6  [class]
void *Trigger::cActScrCollisionOn::vf00()
{
    return &DAT_01dbe204;
}

// 00C93C60  Trigger::cActScrCollisionOn::vf04  size=31  [class]
Trigger::cActScrCollisionOn *Trigger::cActScrCollisionOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
