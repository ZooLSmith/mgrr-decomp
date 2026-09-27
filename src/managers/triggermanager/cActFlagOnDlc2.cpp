// src/managers/triggermanager/cActFlagOnDlc2.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOnDlc2.h"

extern undefined DAT_01dbe330;                 // cActFlagOnDlc2 static descriptor returned by vf00

// 00C8FB00  Trigger::cActFlagOnDlc2::vf00  size=6  [class]
void *Trigger::cActFlagOnDlc2::vf00()
{
    return &DAT_01dbe330;
}

// 00C8FB10  Trigger::cActFlagOnDlc2::vf08  size=1  [class]
void Trigger::cActFlagOnDlc2::vf08()
{
}

// 00C8FB20  Trigger::cActFlagOnDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc2::vf0C()
{
}

// 00C8FB30  Trigger::cActFlagOnDlc2::vf10  size=1  [class]
void Trigger::cActFlagOnDlc2::vf10()
{
}

// 00C8FB40  Trigger::cActFlagOnDlc2::vf14  size=1  [class]
void Trigger::cActFlagOnDlc2::vf14()
{
}

// 00C94C80  Trigger::cActFlagOnDlc2::vf04  size=31  [class]
Trigger::cActFlagOnDlc2 *Trigger::cActFlagOnDlc2::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
