// src/managers/triggermanager/cActVrMistake.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrMistake.h"

extern undefined DAT_01dbe248;  // cActVrMistake static descriptor returned by vf00

// 00C8E350  Trigger::cActVrMistake::vf08  size=1  [class]
void Trigger::cActVrMistake::vf08()
{
}

// 00C8E360  Trigger::cActVrMistake::vf0C  size=1  [class]
void Trigger::cActVrMistake::vf0C()
{
}

// 00C8E370  Trigger::cActVrMistake::vf10  size=1  [class]
void Trigger::cActVrMistake::vf10()
{
}

// 00C8E380  Trigger::cActVrMistake::vf14  size=1  [class]
void Trigger::cActVrMistake::vf14()
{
}

// 00C94310  Trigger::cActVrMistake::vf00  size=6  [class]
void *Trigger::cActVrMistake::vf00()
{
    return &DAT_01dbe248;
}

// 00C94320  Trigger::cActVrMistake::vf04  size=31  [class]
Trigger::cActVrMistake *Trigger::cActVrMistake::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
