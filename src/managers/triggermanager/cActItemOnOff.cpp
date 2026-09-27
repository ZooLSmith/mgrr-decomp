// src/managers/triggermanager/cActItemOnOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActItemOnOff.h"

extern undefined DAT_01dbe2ac;                 // cActItemOnOff static descriptor returned by vf00

// 00C8F390  Trigger::cActItemOnOff::vf08  size=1  [class]
void Trigger::cActItemOnOff::vf08()
{
}

// 00C8F3A0  Trigger::cActItemOnOff::vf0C  size=1  [class]
void Trigger::cActItemOnOff::vf0C()
{
}

// 00C8F3B0  Trigger::cActItemOnOff::vf10  size=1  [class]
void Trigger::cActItemOnOff::vf10()
{
}

// 00C8F3C0  Trigger::cActItemOnOff::vf14  size=1  [class]
void Trigger::cActItemOnOff::vf14()
{
}

// 00C94980  Trigger::cActItemOnOff::vf00  size=6  [class]
void *Trigger::cActItemOnOff::vf00()
{
    return &DAT_01dbe2ac;
}

// 00C94990  Trigger::cActItemOnOff::vf04  size=31  [class]
Trigger::cActItemOnOff *Trigger::cActItemOnOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
