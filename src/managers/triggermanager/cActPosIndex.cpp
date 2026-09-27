// src/managers/triggermanager/cActPosIndex.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPosIndex.h"

extern undefined DAT_01dbe0e4;  // cActPosIndex static descriptor returned by vf00

// 00C8AB90  Trigger::cActPosIndex::vf08  size=1  [class]
void Trigger::cActPosIndex::vf08()
{
}

// 00C8ABA0  Trigger::cActPosIndex::vf0C  size=1  [class]
void Trigger::cActPosIndex::vf0C()
{
}

// 00C8ABB0  Trigger::cActPosIndex::vf10  size=1  [class]
void Trigger::cActPosIndex::vf10()
{
}

// 00C8ABC0  Trigger::cActPosIndex::vf14  size=1  [class]
void Trigger::cActPosIndex::vf14()
{
}

// 00C923C0  Trigger::cActPosIndex::vf00  size=6  [class]
void *Trigger::cActPosIndex::vf00()
{
    return &DAT_01dbe0e4;
}

// 00C923D0  Trigger::cActPosIndex::vf04  size=31  [class]
Trigger::cActPosIndex *Trigger::cActPosIndex::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
