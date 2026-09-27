// src/managers/triggermanager/cActSceneMovie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSceneMovie.h"

extern undefined DAT_01dbe1a4;  // cActSceneMovie static descriptor returned by vf00

// 00C8C4C0  Trigger::cActSceneMovie::vf08  size=1  [class]
void Trigger::cActSceneMovie::vf08()
{
}

// 00C8C4D0  Trigger::cActSceneMovie::vf0C  size=1  [class]
void Trigger::cActSceneMovie::vf0C()
{
}

// 00C8C4E0  Trigger::cActSceneMovie::vf10  size=1  [class]
void Trigger::cActSceneMovie::vf10()
{
}

// 00C8C4F0  Trigger::cActSceneMovie::vf14  size=1  [class]
void Trigger::cActSceneMovie::vf14()
{
}

// 00C93430  Trigger::cActSceneMovie::vf00  size=6  [class]
void *Trigger::cActSceneMovie::vf00()
{
    return &DAT_01dbe1a4;
}

// 00C93440  Trigger::cActSceneMovie::vf04  size=31  [class]
Trigger::cActSceneMovie *Trigger::cActSceneMovie::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
