// src/managers/triggermanager/cActResultRecStartClear.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResultRecStartClear.h"

extern undefined DAT_01dbe2dc;  // cActResultRecStartClear static descriptor returned by vf00

// 00C8FD90  Trigger::cActResultRecStartClear::vf08  size=1  [class]
void Trigger::cActResultRecStartClear::vf08()
{
}

// 00C8FDA0  Trigger::cActResultRecStartClear::vf0C  size=1  [class]
void Trigger::cActResultRecStartClear::vf0C()
{
}

// 00C8FDB0  Trigger::cActResultRecStartClear::vf10  size=1  [class]
void Trigger::cActResultRecStartClear::vf10()
{
}

// 00C8FDC0  Trigger::cActResultRecStartClear::vf14  size=1  [class]
void Trigger::cActResultRecStartClear::vf14()
{
}

// 00C94D40  Trigger::cActResultRecStartClear::vf00  size=6  [class]
void *Trigger::cActResultRecStartClear::vf00()
{
    return &DAT_01dbe2dc;
}

// 00C94D50  Trigger::cActResultRecStartClear::vf04  size=31  [class]
Trigger::cActResultRecStartClear *Trigger::cActResultRecStartClear::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
