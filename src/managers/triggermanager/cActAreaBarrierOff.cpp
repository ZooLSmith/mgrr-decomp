// src/managers/triggermanager/cActAreaBarrierOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAreaBarrierOff.h"

extern undefined DAT_01dbe148;  // cActAreaBarrierOff static descriptor returned by vf00

// 00C8BB30  Trigger::cActAreaBarrierOff::vf08  size=1  [class]
void Trigger::cActAreaBarrierOff::vf08()
{
}

// 00C8BB40  Trigger::cActAreaBarrierOff::vf0C  size=1  [class]
void Trigger::cActAreaBarrierOff::vf0C()
{
}

// 00C8BB50  Trigger::cActAreaBarrierOff::vf10  size=1  [class]
void Trigger::cActAreaBarrierOff::vf10()
{
}

// 00C8BB60  Trigger::cActAreaBarrierOff::vf14  size=1  [class]
void Trigger::cActAreaBarrierOff::vf14()
{
}

// 00C92D00  Trigger::cActAreaBarrierOff::vf00  size=6  [class]
void *Trigger::cActAreaBarrierOff::vf00()
{
    return &DAT_01dbe148;
}

// 00C92D10  Trigger::cActAreaBarrierOff::vf04  size=31  [class]
Trigger::cActAreaBarrierOff *Trigger::cActAreaBarrierOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
