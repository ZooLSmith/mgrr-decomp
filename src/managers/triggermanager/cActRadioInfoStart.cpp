// src/managers/triggermanager/cActRadioInfoStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActRadioInfoStart.h"

extern undefined DAT_01dbe128;  // cActRadioInfoStart static descriptor returned by vf00

// 00C8B630  Trigger::cActRadioInfoStart::vf08  size=1  [class]
void Trigger::cActRadioInfoStart::vf08()
{
}

// 00C8B640  Trigger::cActRadioInfoStart::vf0C  size=1  [class]
void Trigger::cActRadioInfoStart::vf0C()
{
}

// 00C8B650  Trigger::cActRadioInfoStart::vf10  size=1  [class]
void Trigger::cActRadioInfoStart::vf10()
{
}

// 00C8B660  Trigger::cActRadioInfoStart::vf14  size=1  [class]
void Trigger::cActRadioInfoStart::vf14()
{
}

// 00C92B00  Trigger::cActRadioInfoStart::vf00  size=6  [class]
void *Trigger::cActRadioInfoStart::vf00()
{
    return &DAT_01dbe128;
}

// 00C92B10  Trigger::cActRadioInfoStart::vf04  size=31  [class]
Trigger::cActRadioInfoStart *Trigger::cActRadioInfoStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
