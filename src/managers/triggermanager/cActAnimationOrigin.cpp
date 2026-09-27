// src/managers/triggermanager/cActAnimationOrigin.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActAnimationOrigin.h"

extern undefined DAT_01dbe0a0;  // cActAnimationOrigin static descriptor returned by vf00

// 00C7EFA0  Trigger::cActAnimationOrigin::vf18  size=5  [class]
int Trigger::cActAnimationOrigin::vf18()
{
    return 0;
}

// 00C89E70  Trigger::cActAnimationOrigin::vf08  size=1  [class]
void Trigger::cActAnimationOrigin::vf08()
{
}

// 00C89E80  Trigger::cActAnimationOrigin::vf0C  size=1  [class]
void Trigger::cActAnimationOrigin::vf0C()
{
}

// 00C89E90  Trigger::cActAnimationOrigin::vf10  size=1  [class]
void Trigger::cActAnimationOrigin::vf10()
{
}

// 00C89EA0  Trigger::cActAnimationOrigin::vf14  size=1  [class]
void Trigger::cActAnimationOrigin::vf14()
{
}

// 00C91EA0  Trigger::cActAnimationOrigin::vf00  size=6  [class]
void *Trigger::cActAnimationOrigin::vf00()
{
    return &DAT_01dbe0a0;
}

// 00C91EB0  Trigger::cActAnimationOrigin::vf04  size=31  [class]
Trigger::cActAnimationOrigin *Trigger::cActAnimationOrigin::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
