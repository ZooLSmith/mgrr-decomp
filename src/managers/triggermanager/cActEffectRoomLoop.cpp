// src/managers/triggermanager/cActEffectRoomLoop.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEffectRoomLoop.h"

extern undefined DAT_01dbe20c;           // cActEffectRoomLoop static descriptor returned by vf00

// 00C8D9F0  Trigger::cActEffectRoomLoop::vf08  size=1  [class]
void Trigger::cActEffectRoomLoop::vf08()
{
}

// 00C8DA00  Trigger::cActEffectRoomLoop::vf0C  size=1  [class]
void Trigger::cActEffectRoomLoop::vf0C()
{
}

// 00C8DA10  Trigger::cActEffectRoomLoop::vf10  size=1  [class]
void Trigger::cActEffectRoomLoop::vf10()
{
}

// 00C8DA20  Trigger::cActEffectRoomLoop::vf14  size=1  [class]
void Trigger::cActEffectRoomLoop::vf14()
{
}

// 00C93D30  Trigger::cActEffectRoomLoop::vf00  size=6  [class]
void *Trigger::cActEffectRoomLoop::vf00()
{
    return &DAT_01dbe20c;
}

// 00C93D40  Trigger::cActEffectRoomLoop::vf04  size=31  [class]
Trigger::cActEffectRoomLoop *Trigger::cActEffectRoomLoop::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
