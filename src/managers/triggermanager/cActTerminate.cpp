// src/managers/triggermanager/cActTerminate.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTerminate.h"

extern undefined DAT_01dbe0a4;  // cActTerminate static descriptor returned by vf00

// 00C89F10  Trigger::cActTerminate::vf08  size=1  [class]
void Trigger::cActTerminate::vf08()
{
}

// 00C89F20  Trigger::cActTerminate::vf0C  size=1  [class]
void Trigger::cActTerminate::vf0C()
{
}

// 00C89F30  Trigger::cActTerminate::vf10  size=1  [class]
void Trigger::cActTerminate::vf10()
{
}

// 00C89F40  Trigger::cActTerminate::vf14  size=1  [class]
void Trigger::cActTerminate::vf14()
{
}

// 00C91F00  Trigger::cActTerminate::vf00  size=6  [class]
void *Trigger::cActTerminate::vf00()
{
    return &DAT_01dbe0a4;
}

// 00C91F10  Trigger::cActTerminate::vf04  size=31  [class]
Trigger::cActTerminate *Trigger::cActTerminate::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
