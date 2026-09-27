// src/managers/triggermanager/cActEffectRoomLoopOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActEffectRoomLoopOff.h"

extern undefined DAT_01dbe210;           // cActEffectRoomLoopOff static descriptor returned by vf00

// 00C8DA90  Trigger::cActEffectRoomLoopOff::vf08  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf08()
{
}

// 00C8DAA0  Trigger::cActEffectRoomLoopOff::vf0C  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf0C()
{
}

// 00C8DAB0  Trigger::cActEffectRoomLoopOff::vf10  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf10()
{
}

// 00C8DAC0  Trigger::cActEffectRoomLoopOff::vf14  size=1  [class]
void Trigger::cActEffectRoomLoopOff::vf14()
{
}

// 00C93D70  Trigger::cActEffectRoomLoopOff::vf00  size=6  [class]
void *Trigger::cActEffectRoomLoopOff::vf00()
{
    return &DAT_01dbe210;
}

// 00C93D80  Trigger::cActEffectRoomLoopOff::vf04  size=31  [class]
Trigger::cActEffectRoomLoopOff *Trigger::cActEffectRoomLoopOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
