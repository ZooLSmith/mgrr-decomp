// src/managers/triggermanager/cActPlayerDie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActPlayerDie.h"

extern undefined DAT_01dbe118;  // cActPlayerDie static descriptor returned by vf00

// 00C8B3B0  Trigger::cActPlayerDie::vf08  size=1  [class]
void Trigger::cActPlayerDie::vf08()
{
}

// 00C8B3C0  Trigger::cActPlayerDie::vf0C  size=1  [class]
void Trigger::cActPlayerDie::vf0C()
{
}

// 00C8B3D0  Trigger::cActPlayerDie::vf10  size=1  [class]
void Trigger::cActPlayerDie::vf10()
{
}

// 00C8B3E0  Trigger::cActPlayerDie::vf14  size=1  [class]
void Trigger::cActPlayerDie::vf14()
{
}

// 00C92A00  Trigger::cActPlayerDie::vf00  size=6  [class]
void *Trigger::cActPlayerDie::vf00()
{
    return &DAT_01dbe118;
}

// 00C92A10  Trigger::cActPlayerDie::vf04  size=31  [class]
Trigger::cActPlayerDie *Trigger::cActPlayerDie::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
