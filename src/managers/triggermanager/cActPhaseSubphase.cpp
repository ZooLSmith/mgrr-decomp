// src/managers/triggermanager/cActPhaseSubphase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPhaseSubphase.h"

extern undefined DAT_01dbe0c4;  // cActPhaseSubphase static descriptor returned by vf00

// 00C8A410  Trigger::cActPhaseSubphase::vf08  size=1  [class]
void Trigger::cActPhaseSubphase::vf08()
{
}

// 00C8A420  Trigger::cActPhaseSubphase::vf0C  size=1  [class]
void Trigger::cActPhaseSubphase::vf0C()
{
}

// 00C8A430  Trigger::cActPhaseSubphase::vf10  size=1  [class]
void Trigger::cActPhaseSubphase::vf10()
{
}

// 00C8A440  Trigger::cActPhaseSubphase::vf14  size=1  [class]
void Trigger::cActPhaseSubphase::vf14()
{
}

// 00C92100  Trigger::cActPhaseSubphase::vf00  size=6  [class]
void *Trigger::cActPhaseSubphase::vf00()
{
    return &DAT_01dbe0c4;
}

// 00C92110  Trigger::cActPhaseSubphase::vf04  size=31  [class]
Trigger::cActPhaseSubphase *Trigger::cActPhaseSubphase::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
