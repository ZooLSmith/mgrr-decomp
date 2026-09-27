// src/managers/triggermanager/cActUnloadRoom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActUnloadRoom.h"

extern undefined DAT_01dbe530;  // cActUnloadRoom static descriptor returned by vf00

// 00C8AA40  Trigger::cActUnloadRoom::vf00  size=6  [class]
void *Trigger::cActUnloadRoom::vf00()
{
    return &DAT_01dbe530;
}

// 00C8AA50  Trigger::cActUnloadRoom::vf08  size=1  [class]
void Trigger::cActUnloadRoom::vf08()
{
}

// 00C8AA60  Trigger::cActUnloadRoom::vf0C  size=1  [class]
void Trigger::cActUnloadRoom::vf0C()
{
}

// 00C8AA70  Trigger::cActUnloadRoom::vf10  size=1  [class]
void Trigger::cActUnloadRoom::vf10()
{
}

// 00C8AA80  Trigger::cActUnloadRoom::vf14  size=1  [class]
void Trigger::cActUnloadRoom::vf14()
{
}

// 00C92350  Trigger::cActUnloadRoom::vf04  size=31  [class]
Trigger::cActUnloadRoom *Trigger::cActUnloadRoom::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
