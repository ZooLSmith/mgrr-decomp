// src/managers/triggermanager/cActFlagOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOff.h"

extern undefined DAT_01dbe538;                 // cActFlagOff static descriptor returned by vf00

// 00C8A900  Trigger::cActFlagOff::vf00  size=6  [class]
void *Trigger::cActFlagOff::vf00()
{
    return &DAT_01dbe538;
}

// 00C8A910  Trigger::cActFlagOff::vf08  size=1  [class]
void Trigger::cActFlagOff::vf08()
{
}

// 00C8A920  Trigger::cActFlagOff::vf0C  size=1  [class]
void Trigger::cActFlagOff::vf0C()
{
}

// 00C8A930  Trigger::cActFlagOff::vf10  size=1  [class]
void Trigger::cActFlagOff::vf10()
{
}

// 00C8A940  Trigger::cActFlagOff::vf14  size=1  [class]
void Trigger::cActFlagOff::vf14()
{
}

// 00C922F0  Trigger::cActFlagOff::vf04  size=31  [class]
Trigger::cActFlagOff *Trigger::cActFlagOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
