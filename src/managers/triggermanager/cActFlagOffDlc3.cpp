// src/managers/triggermanager/cActFlagOffDlc3.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOffDlc3.h"

extern undefined DAT_01dbe324;                 // cActFlagOffDlc3 static descriptor returned by vf00

// 00C8FCE0  Trigger::cActFlagOffDlc3::vf00  size=6  [class]
void *Trigger::cActFlagOffDlc3::vf00()
{
    return &DAT_01dbe324;
}

// 00C8FCF0  Trigger::cActFlagOffDlc3::vf08  size=1  [class]
void Trigger::cActFlagOffDlc3::vf08()
{
}

// 00C8FD00  Trigger::cActFlagOffDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOffDlc3::vf0C()
{
}

// 00C8FD10  Trigger::cActFlagOffDlc3::vf10  size=1  [class]
void Trigger::cActFlagOffDlc3::vf10()
{
}

// 00C8FD20  Trigger::cActFlagOffDlc3::vf14  size=1  [class]
void Trigger::cActFlagOffDlc3::vf14()
{
}

// 00C94D10  Trigger::cActFlagOffDlc3::vf04  size=31  [class]
Trigger::cActFlagOffDlc3 *Trigger::cActFlagOffDlc3::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
