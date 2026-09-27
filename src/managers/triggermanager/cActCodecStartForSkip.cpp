// src/managers/triggermanager/cActCodecStartForSkip.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCodecStartForSkip.h"

extern undefined DAT_01dbe284;           // cActCodecStartForSkip static descriptor returned by vf00

// 00C8ECB0  Trigger::cActCodecStartForSkip::vf08  size=1  [class]
void Trigger::cActCodecStartForSkip::vf08()
{
}

// 00C8ECC0  Trigger::cActCodecStartForSkip::vf0C  size=1  [class]
void Trigger::cActCodecStartForSkip::vf0C()
{
}

// 00C8ECD0  Trigger::cActCodecStartForSkip::vf10  size=1  [class]
void Trigger::cActCodecStartForSkip::vf10()
{
}

// 00C8ECE0  Trigger::cActCodecStartForSkip::vf14  size=1  [class]
void Trigger::cActCodecStartForSkip::vf14()
{
}

// 00C946D0  Trigger::cActCodecStartForSkip::vf00  size=6  [class]
void *Trigger::cActCodecStartForSkip::vf00()
{
    return &DAT_01dbe284;
}

// 00C946E0  Trigger::cActCodecStartForSkip::vf04  size=31  [class]
Trigger::cActCodecStartForSkip *Trigger::cActCodecStartForSkip::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
