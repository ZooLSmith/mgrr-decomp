// src/managers/triggermanager/cActScrCollisionOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActScrCollisionOff.h"

extern undefined DAT_01dbe208;  // cActScrCollisionOff static descriptor returned by vf00

// 00C8D8C0  Trigger::cActScrCollisionOff::vf08  size=1  [class]
void Trigger::cActScrCollisionOff::vf08()
{
}

// 00C8D8D0  Trigger::cActScrCollisionOff::vf0C  size=1  [class]
void Trigger::cActScrCollisionOff::vf0C()
{
}

// 00C8D8E0  Trigger::cActScrCollisionOff::vf10  size=1  [class]
void Trigger::cActScrCollisionOff::vf10()
{
}

// 00C8D8F0  Trigger::cActScrCollisionOff::vf14  size=1  [class]
void Trigger::cActScrCollisionOff::vf14()
{
}

// 00C93C90  Trigger::cActScrCollisionOff::vf00  size=6  [class]
void *Trigger::cActScrCollisionOff::vf00()
{
    return &DAT_01dbe208;
}

// 00C93CA0  Trigger::cActScrCollisionOff::vf04  size=31  [class]
Trigger::cActScrCollisionOff *Trigger::cActScrCollisionOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
