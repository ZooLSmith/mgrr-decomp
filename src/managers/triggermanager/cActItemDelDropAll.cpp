// src/managers/triggermanager/cActItemDelDropAll.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActItemDelDropAll.h"

extern undefined DAT_01dbe28c;                 // cActItemDelDropAll static descriptor returned by vf00

// 00C8EDF0  Trigger::cActItemDelDropAll::vf08  size=1  [class]
void Trigger::cActItemDelDropAll::vf08()
{
}

// 00C8EE00  Trigger::cActItemDelDropAll::vf0C  size=1  [class]
void Trigger::cActItemDelDropAll::vf0C()
{
}

// 00C8EE10  Trigger::cActItemDelDropAll::vf10  size=1  [class]
void Trigger::cActItemDelDropAll::vf10()
{
}

// 00C8EE20  Trigger::cActItemDelDropAll::vf14  size=1  [class]
void Trigger::cActItemDelDropAll::vf14()
{
}

// 00C94750  Trigger::cActItemDelDropAll::vf00  size=6  [class]
void *Trigger::cActItemDelDropAll::vf00()
{
    return &DAT_01dbe28c;
}

// 00C94760  Trigger::cActItemDelDropAll::vf04  size=31  [class]
Trigger::cActItemDelDropAll *Trigger::cActItemDelDropAll::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
