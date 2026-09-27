// src/managers/triggermanager/cActDoorLock.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActDoorLock.h"

extern undefined DAT_01dbe23c;           // cActDoorLock static descriptor returned by vf00

// 00C8E170  Trigger::cActDoorLock::vf08  size=1  [class]
void Trigger::cActDoorLock::vf08()
{
}

// 00C8E180  Trigger::cActDoorLock::vf0C  size=1  [class]
void Trigger::cActDoorLock::vf0C()
{
}

// 00C8E190  Trigger::cActDoorLock::vf10  size=1  [class]
void Trigger::cActDoorLock::vf10()
{
}

// 00C8E1A0  Trigger::cActDoorLock::vf14  size=1  [class]
void Trigger::cActDoorLock::vf14()
{
}

// 00C94250  Trigger::cActDoorLock::vf00  size=6  [class]
void *Trigger::cActDoorLock::vf00()
{
    return &DAT_01dbe23c;
}

// 00C94260  Trigger::cActDoorLock::vf04  size=31  [class]
Trigger::cActDoorLock *Trigger::cActDoorLock::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
