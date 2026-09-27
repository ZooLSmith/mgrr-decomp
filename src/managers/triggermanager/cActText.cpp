// src/managers/triggermanager/cActText.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActText.h"

extern undefined DAT_01dbe0d8;  // cActText static descriptor returned by vf00

// 00C8A730  Trigger::cActText::vf08  size=1  [class]
void Trigger::cActText::vf08()
{
}

// 00C8A740  Trigger::cActText::vf0C  size=1  [class]
void Trigger::cActText::vf0C()
{
}

// 00C8A750  Trigger::cActText::vf10  size=1  [class]
void Trigger::cActText::vf10()
{
}

// 00C8A760  Trigger::cActText::vf14  size=1  [class]
void Trigger::cActText::vf14()
{
}

// 00C92240  Trigger::cActText::vf00  size=6  [class]
void *Trigger::cActText::vf00()
{
    return &DAT_01dbe0d8;
}

// 00C92250  Trigger::cActText::vf04  size=31  [class]
Trigger::cActText *Trigger::cActText::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
