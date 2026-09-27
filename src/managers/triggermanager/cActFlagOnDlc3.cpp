// src/managers/triggermanager/cActFlagOnDlc3.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFlagOnDlc3.h"

extern undefined DAT_01dbe328;                 // cActFlagOnDlc3 static descriptor returned by vf00

// 00C8FC40  Trigger::cActFlagOnDlc3::vf00  size=6  [class]
void *Trigger::cActFlagOnDlc3::vf00()
{
    return &DAT_01dbe328;
}

// 00C8FC50  Trigger::cActFlagOnDlc3::vf08  size=1  [class]
void Trigger::cActFlagOnDlc3::vf08()
{
}

// 00C8FC60  Trigger::cActFlagOnDlc3::vf0C  size=1  [class]
void Trigger::cActFlagOnDlc3::vf0C()
{
}

// 00C8FC70  Trigger::cActFlagOnDlc3::vf10  size=1  [class]
void Trigger::cActFlagOnDlc3::vf10()
{
}

// 00C8FC80  Trigger::cActFlagOnDlc3::vf14  size=1  [class]
void Trigger::cActFlagOnDlc3::vf14()
{
}

// 00C94CE0  Trigger::cActFlagOnDlc3::vf04  size=31  [class]
Trigger::cActFlagOnDlc3 *Trigger::cActFlagOnDlc3::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
