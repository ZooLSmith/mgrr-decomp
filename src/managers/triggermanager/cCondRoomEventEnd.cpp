// src/managers/triggermanager/cCondRoomEventEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondRoomEventEnd.h"

namespace cCondRoomEventEnd_p1 {

// FUN_00e678d0 builds the event key {kind, id, -1} in a stack buffer (ECX) and returns it;
// FUN_00e7a6e0 reports the state of that event. (The raw decompilation dropped the buffer.)
inline unsigned int queryEvent(int kind, int id)
{
    int key[3];
    int *builtKey = FUN_00e678d0(key, kind, id, -1);
    return FUN_00e7a6e0((undefined4)builtKey);
}

}  // namespace cCondRoomEventEnd_p1

// 00C7AC70  Trigger::cCondRoomEventEnd::vf14  size=83  [class]
// Condition type 0x2C queries event kind 1, type 0x3A kind 2 (other types: state 0). The first
// nonzero state is latched in +0x14; when that latched state is 1 the result is inverted.
unsigned int Trigger::cCondRoomEventEnd::vf14()
{
    using namespace cCondRoomEventEnd_p1;
    int type = (*(int **)((char *)this + 0x04))[1];  // cCondition+0x04: record; record+0x04: type
    unsigned int state = 0;
    if (type == 0x2C) {
        state = queryEvent(1, eventId());
    }
    else if (type == 0x3A) {
        state = queryEvent(2, eventId());
    }
    if (initialState() == 0) {
        initialState() = state;
    }
    if (initialState() == 1) {
        state = state ^ 1;
    }
    return state;
}

// 00C7ACD0  Trigger::cCondRoomEventEnd::vf1C  size=16  [class]
void Trigger::cCondRoomEventEnd::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    eventId() = record[2];                    // record+0x08
}

// 00C85A90  Trigger::cCondRoomEventEnd::vf00  size=31  [class]
Trigger::cCondRoomEventEnd *Trigger::cCondRoomEventEnd::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
