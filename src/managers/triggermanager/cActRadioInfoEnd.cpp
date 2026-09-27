// src/managers/triggermanager/cActRadioInfoEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActRadioInfoEnd.h"

extern undefined DAT_01dbe12c;  // cActRadioInfoEnd static descriptor returned by vf00

// 00C8B6D0  Trigger::cActRadioInfoEnd::vf08  size=1  [class]
void Trigger::cActRadioInfoEnd::vf08()
{
}

// 00C8B6E0  Trigger::cActRadioInfoEnd::vf0C  size=1  [class]
void Trigger::cActRadioInfoEnd::vf0C()
{
}

// 00C8B6F0  Trigger::cActRadioInfoEnd::vf10  size=1  [class]
void Trigger::cActRadioInfoEnd::vf10()
{
}

// 00C8B700  Trigger::cActRadioInfoEnd::vf14  size=1  [class]
void Trigger::cActRadioInfoEnd::vf14()
{
}

// 00C92B40  Trigger::cActRadioInfoEnd::vf00  size=6  [class]
void *Trigger::cActRadioInfoEnd::vf00()
{
    return &DAT_01dbe12c;
}

// 00C92B50  Trigger::cActRadioInfoEnd::vf04  size=31  [class]
Trigger::cActRadioInfoEnd *Trigger::cActRadioInfoEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
