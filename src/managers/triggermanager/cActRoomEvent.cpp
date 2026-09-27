// src/managers/triggermanager/cActRoomEvent.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActRoomEvent.h"

extern undefined DAT_01dbe110;  // cActRoomEvent static descriptor returned by vf00

// 00C8B270  Trigger::cActRoomEvent::vf08  size=1  [class]
void Trigger::cActRoomEvent::vf08()
{
}

// 00C8B280  Trigger::cActRoomEvent::vf0C  size=1  [class]
void Trigger::cActRoomEvent::vf0C()
{
}

// 00C8B290  Trigger::cActRoomEvent::vf10  size=1  [class]
void Trigger::cActRoomEvent::vf10()
{
}

// 00C8B2A0  Trigger::cActRoomEvent::vf14  size=1  [class]
void Trigger::cActRoomEvent::vf14()
{
}

// 00C92980  Trigger::cActRoomEvent::vf00  size=6  [class]
void *Trigger::cActRoomEvent::vf00()
{
    return &DAT_01dbe110;
}

// 00C92990  Trigger::cActRoomEvent::vf04  size=31  [class]
Trigger::cActRoomEvent *Trigger::cActRoomEvent::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
