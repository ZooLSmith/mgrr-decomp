// src/managers/triggermanager/cActResultRecEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResultRecEnd.h"

extern undefined DAT_01dbe200;  // cActResultRecEnd static descriptor returned by vf00

// 00C8D780  Trigger::cActResultRecEnd::vf08  size=1  [class]
void Trigger::cActResultRecEnd::vf08()
{
}

// 00C8D790  Trigger::cActResultRecEnd::vf0C  size=1  [class]
void Trigger::cActResultRecEnd::vf0C()
{
}

// 00C8D7A0  Trigger::cActResultRecEnd::vf10  size=1  [class]
void Trigger::cActResultRecEnd::vf10()
{
}

// 00C8D7B0  Trigger::cActResultRecEnd::vf14  size=1  [class]
void Trigger::cActResultRecEnd::vf14()
{
}

// 00C93C10  Trigger::cActResultRecEnd::vf00  size=6  [class]
void *Trigger::cActResultRecEnd::vf00()
{
    return &DAT_01dbe200;
}

// 00C93C20  Trigger::cActResultRecEnd::vf04  size=31  [class]
Trigger::cActResultRecEnd *Trigger::cActResultRecEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
