// src/managers/triggermanager/cActTeleportIndex.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTeleportIndex.h"

extern undefined DAT_01dbe044;  // cActTeleportIndex static descriptor returned by vf00

// 00C891F0  Trigger::cActTeleportIndex::vf08  size=1  [class]
void Trigger::cActTeleportIndex::vf08()
{
}

// 00C89200  Trigger::cActTeleportIndex::vf0C  size=1  [class]
void Trigger::cActTeleportIndex::vf0C()
{
}

// 00C89210  Trigger::cActTeleportIndex::vf10  size=1  [class]
void Trigger::cActTeleportIndex::vf10()
{
}

// 00C89220  Trigger::cActTeleportIndex::vf14  size=1  [class]
void Trigger::cActTeleportIndex::vf14()
{
}

// 00C916F0  Trigger::cActTeleportIndex::vf00  size=6  [class]
void *Trigger::cActTeleportIndex::vf00()
{
    return &DAT_01dbe044;
}

// 00C91700  Trigger::cActTeleportIndex::vf04  size=31  [class]
Trigger::cActTeleportIndex *Trigger::cActTeleportIndex::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
