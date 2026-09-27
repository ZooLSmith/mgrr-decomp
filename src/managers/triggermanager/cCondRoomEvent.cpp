// src/managers/triggermanager/cCondRoomEvent.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondRoomEvent.h"

namespace cCondRoomEvent_p1 {

// FUN_00e678d0 builds the event key {kind, id, -1} in a stack buffer (ECX) and returns it;
// FUN_00e7a6e0 reports the state of that event. (The raw decompilation dropped the buffer.)
inline undefined4 queryEvent(int kind, int id)
{
    int key[3];
    int *builtKey = FUN_00e678d0(key, kind, id, -1);
    return FUN_00e7a6e0((undefined4)builtKey);
}

}  // namespace cCondRoomEvent_p1

// 00C7ABF0  Trigger::cCondRoomEvent::vf14  size=61  [class]
// Condition type 0x2B queries event kind 1, type 0x39 kind 2 (event id = record+0x08); other types: 0.
int Trigger::cCondRoomEvent::vf14()
{
    using namespace cCondRoomEvent_p1;
    int *record = *(int **)((char *)this + 0x04);  // cCondition+0x04: condition record
    if (record[1] == 0x2B) {                       // record+0x04: condition type
        return queryEvent(1, record[2]);
    }
    if (record[1] != 0x39) {
        return 0;
    }
    return queryEvent(2, record[2]);
}

// 00C7AC30  Trigger::cCondRoomEvent::vf1C  size=16  [class]
void Trigger::cCondRoomEvent::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    eventId() = record[2];                    // record+0x08
}

// 00C85A70  Trigger::cCondRoomEvent::vf00  size=31  [class]
Trigger::cCondRoomEvent *Trigger::cCondRoomEvent::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
