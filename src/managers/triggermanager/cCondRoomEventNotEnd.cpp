// src/managers/triggermanager/cCondRoomEventNotEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondRoomEventNotEnd.h"

// 00C7B7C0  Trigger::cCondRoomEventNotEnd::vf1C  size=16  [class]
void Trigger::cCondRoomEventNotEnd::vf1C(int *record)
{
    this->record() = record;
    eventId() = record[2];  // record+0x08
}

// 00C85F70  Trigger::cCondRoomEventNotEnd::vf00  size=31  [class]
Trigger::cCondRoomEventNotEnd *Trigger::cCondRoomEventNotEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
