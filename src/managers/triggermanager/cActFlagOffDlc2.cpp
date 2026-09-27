// src/managers/triggermanager/cActFlagOffDlc2.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOffDlc2.h"

extern undefined DAT_01dbe32c;                 // cActFlagOffDlc2 static descriptor returned by vf00

// 00C8FBA0  Trigger::cActFlagOffDlc2::vf00  size=6  [class]
void *Trigger::cActFlagOffDlc2::vf00()
{
    return &DAT_01dbe32c;
}

// 00C8FBB0  Trigger::cActFlagOffDlc2::vf08  size=1  [class]
void Trigger::cActFlagOffDlc2::vf08()
{
}

// 00C8FBC0  Trigger::cActFlagOffDlc2::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc2::vf0C()
{
}

// 00C8FBD0  Trigger::cActFlagOffDlc2::vf10  size=1  [class]
void Trigger::cActFlagOffDlc2::vf10()
{
}

// 00C8FBE0  Trigger::cActFlagOffDlc2::vf14  size=1  [class]
void Trigger::cActFlagOffDlc2::vf14()
{
}

// 00C94CB0  Trigger::cActFlagOffDlc2::vf04  size=31  [class]
Trigger::cActFlagOffDlc2 *Trigger::cActFlagOffDlc2::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
