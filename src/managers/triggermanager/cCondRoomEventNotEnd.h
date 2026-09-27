// REFINED
// Trigger::cCondRoomEventNotEnd -- trigger condition "room event not ended" (vftable 0x016A9604).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondRoomEventNotEnd.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondRoomEventNotEnd : public cCondition {
public:
    // vftable (0x016A9604), in slot order (slot = byte offset)
    virtual cCondRoomEventNotEnd *vf00(unsigned char flags); // +0x00  00C85F70  scalar deleting destructor
    // +0x04..+0x10  inherited (cCondPhaseJump.cpp)
    // +0x14  00C7B760  Trigger::Cond::ROOM_EVENT_NOT_END (conditions/TrgCondRoomEventNotEnd.cpp)
    // +0x18  inherited
    virtual void vf1C(int *record);                          // +0x1C  00C7B7C0  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    int &eventId()      { return *(int *)((char *)this + 0x10); }  // +0x10  record+0x08
};

} // namespace Trigger
