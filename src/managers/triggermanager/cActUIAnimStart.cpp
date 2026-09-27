// src/managers/triggermanager/cActUIAnimStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActUIAnimStart.h"

extern undefined DAT_01dbe1d4;  // cActUIAnimStart static descriptor returned by vf00

// 00C8CF60  Trigger::cActUIAnimStart::vf08  size=1  [class]
void Trigger::cActUIAnimStart::vf08()
{
}

// 00C8CF70  Trigger::cActUIAnimStart::vf0C  size=1  [class]
void Trigger::cActUIAnimStart::vf0C()
{
}

// 00C8CF80  Trigger::cActUIAnimStart::vf10  size=1  [class]
void Trigger::cActUIAnimStart::vf10()
{
}

// 00C8CF90  Trigger::cActUIAnimStart::vf14  size=1  [class]
void Trigger::cActUIAnimStart::vf14()
{
}

// 00C938D0  Trigger::cActUIAnimStart::vf00  size=6  [class]
void *Trigger::cActUIAnimStart::vf00()
{
    return &DAT_01dbe1d4;
}

// 00C938E0  Trigger::cActUIAnimStart::vf04  size=31  [class]
Trigger::cActUIAnimStart *Trigger::cActUIAnimStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
