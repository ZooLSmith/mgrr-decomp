// src/managers/triggermanager/cActFlagOn.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOn.h"

extern undefined DAT_01dbe53c;                 // cActFlagOn static descriptor returned by vf00

// 00C8A860  Trigger::cActFlagOn::vf00  size=6  [class]
void *Trigger::cActFlagOn::vf00()
{
    return &DAT_01dbe53c;
}

// 00C8A870  Trigger::cActFlagOn::vf08  size=1  [class]
void Trigger::cActFlagOn::vf08()
{
}

// 00C8A880  Trigger::cActFlagOn::vf0C  size=1  [class]
void Trigger::cActFlagOn::vf0C()
{
}

// 00C8A890  Trigger::cActFlagOn::vf10  size=1  [class]
void Trigger::cActFlagOn::vf10()
{
}

// 00C8A8A0  Trigger::cActFlagOn::vf14  size=1  [class]
void Trigger::cActFlagOn::vf14()
{
}

// 00C922C0  Trigger::cActFlagOn::vf04  size=31  [class]
Trigger::cActFlagOn *Trigger::cActFlagOn::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
