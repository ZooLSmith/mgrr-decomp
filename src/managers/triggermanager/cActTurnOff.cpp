// src/managers/triggermanager/cActTurnOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTurnOff.h"

extern undefined DAT_01dbe08c;  // cActTurnOff static descriptor returned by vf00

// 00C89B50  Trigger::cActTurnOff::vf08  size=1  [class]
void Trigger::cActTurnOff::vf08()
{
}

// 00C89B60  Trigger::cActTurnOff::vf0C  size=1  [class]
void Trigger::cActTurnOff::vf0C()
{
}

// 00C89B70  Trigger::cActTurnOff::vf10  size=1  [class]
void Trigger::cActTurnOff::vf10()
{
}

// 00C89B80  Trigger::cActTurnOff::vf14  size=1  [class]
void Trigger::cActTurnOff::vf14()
{
}

// 00C91BB0  Trigger::cActTurnOff::vf00  size=6  [class]
void *Trigger::cActTurnOff::vf00()
{
    return &DAT_01dbe08c;
}

// 00C91BC0  Trigger::cActTurnOff::vf04  size=31  [class]
Trigger::cActTurnOff *Trigger::cActTurnOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
