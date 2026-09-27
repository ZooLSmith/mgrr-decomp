// src/managers/triggermanager/cActTutorialStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActTutorialStart.h"

extern undefined DAT_01dbe140;  // cActTutorialStart static descriptor returned by vf00

// 00C8B9F0  Trigger::cActTutorialStart::vf08  size=1  [class]
void Trigger::cActTutorialStart::vf08()
{
}

// 00C8BA00  Trigger::cActTutorialStart::vf0C  size=1  [class]
void Trigger::cActTutorialStart::vf0C()
{
}

// 00C8BA10  Trigger::cActTutorialStart::vf10  size=1  [class]
void Trigger::cActTutorialStart::vf10()
{
}

// 00C8BA20  Trigger::cActTutorialStart::vf14  size=1  [class]
void Trigger::cActTutorialStart::vf14()
{
}

// 00C92C80  Trigger::cActTutorialStart::vf00  size=6  [class]
void *Trigger::cActTutorialStart::vf00()
{
    return &DAT_01dbe140;
}

// 00C92C90  Trigger::cActTutorialStart::vf04  size=31  [class]
Trigger::cActTutorialStart *Trigger::cActTutorialStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
