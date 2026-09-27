// src/managers/triggermanager/cActTeleportExplicit.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTeleportExplicit.h"

extern undefined DAT_01dbe040;  // cActTeleportExplicit static descriptor returned by vf00

// 00C89150  Trigger::cActTeleportExplicit::vf08  size=1  [class]
void Trigger::cActTeleportExplicit::vf08()
{
}

// 00C89160  Trigger::cActTeleportExplicit::vf0C  size=1  [class]
void Trigger::cActTeleportExplicit::vf0C()
{
}

// 00C89170  Trigger::cActTeleportExplicit::vf10  size=1  [class]
void Trigger::cActTeleportExplicit::vf10()
{
}

// 00C89180  Trigger::cActTeleportExplicit::vf14  size=1  [class]
void Trigger::cActTeleportExplicit::vf14()
{
}

// 00C916B0  Trigger::cActTeleportExplicit::vf00  size=6  [class]
void *Trigger::cActTeleportExplicit::vf00()
{
    return &DAT_01dbe040;
}

// 00C916C0  Trigger::cActTeleportExplicit::vf04  size=31  [class]
Trigger::cActTeleportExplicit *Trigger::cActTeleportExplicit::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
