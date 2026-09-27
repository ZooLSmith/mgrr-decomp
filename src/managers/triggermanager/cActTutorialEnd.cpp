// src/managers/triggermanager/cActTutorialEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTutorialEnd.h"

extern undefined DAT_01dbe144;  // cActTutorialEnd static descriptor returned by vf00

// 00C8BA90  Trigger::cActTutorialEnd::vf08  size=1  [class]
void Trigger::cActTutorialEnd::vf08()
{
}

// 00C8BAA0  Trigger::cActTutorialEnd::vf0C  size=1  [class]
void Trigger::cActTutorialEnd::vf0C()
{
}

// 00C8BAB0  Trigger::cActTutorialEnd::vf10  size=1  [class]
void Trigger::cActTutorialEnd::vf10()
{
}

// 00C8BAC0  Trigger::cActTutorialEnd::vf14  size=1  [class]
void Trigger::cActTutorialEnd::vf14()
{
}

// 00C92CC0  Trigger::cActTutorialEnd::vf00  size=6  [class]
void *Trigger::cActTutorialEnd::vf00()
{
    return &DAT_01dbe144;
}

// 00C92CD0  Trigger::cActTutorialEnd::vf04  size=31  [class]
Trigger::cActTutorialEnd *Trigger::cActTutorialEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
