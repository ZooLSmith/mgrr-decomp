// src/managers/triggermanager/cActResultRecStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResultRecStart.h"

extern undefined DAT_01dbe1fc;  // cActResultRecStart static descriptor returned by vf00

// 00C8D6E0  Trigger::cActResultRecStart::vf08  size=1  [class]
void Trigger::cActResultRecStart::vf08()
{
}

// 00C8D6F0  Trigger::cActResultRecStart::vf0C  size=1  [class]
void Trigger::cActResultRecStart::vf0C()
{
}

// 00C8D700  Trigger::cActResultRecStart::vf10  size=1  [class]
void Trigger::cActResultRecStart::vf10()
{
}

// 00C8D710  Trigger::cActResultRecStart::vf14  size=1  [class]
void Trigger::cActResultRecStart::vf14()
{
}

// 00C93BD0  Trigger::cActResultRecStart::vf00  size=6  [class]
void *Trigger::cActResultRecStart::vf00()
{
    return &DAT_01dbe1fc;
}

// 00C93BE0  Trigger::cActResultRecStart::vf04  size=31  [class]
Trigger::cActResultRecStart *Trigger::cActResultRecStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
