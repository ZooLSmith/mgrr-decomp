// src/managers/triggermanager/cActItemGet.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActItemGet.h"

extern undefined DAT_01dbe1f0;                 // cActItemGet static descriptor returned by vf00

// 00C8D500  Trigger::cActItemGet::vf08  size=1  [class]
void Trigger::cActItemGet::vf08()
{
}

// 00C8D510  Trigger::cActItemGet::vf0C  size=1  [class]
void Trigger::cActItemGet::vf0C()
{
}

// 00C8D520  Trigger::cActItemGet::vf10  size=1  [class]
void Trigger::cActItemGet::vf10()
{
}

// 00C8D530  Trigger::cActItemGet::vf14  size=1  [class]
void Trigger::cActItemGet::vf14()
{
}

// 00C93B10  Trigger::cActItemGet::vf00  size=6  [class]
void *Trigger::cActItemGet::vf00()
{
    return &DAT_01dbe1f0;
}

// 00C93B20  Trigger::cActItemGet::vf04  size=31  [class]
Trigger::cActItemGet *Trigger::cActItemGet::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
