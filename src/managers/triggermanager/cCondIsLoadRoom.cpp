// src/managers/triggermanager/cCondIsLoadRoom.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsLoadRoom.h"
#include "PhaseManager.h"

namespace cCondIsLoadRoom_p1 {

// FUN_00a4c810 (__thiscall, ECX = 0x01BE8F30): nonzero when the room is loaded.
// functions.h declares it without the ECX argument, which the raw decompilation dropped.
inline int isRoomLoaded(unsigned int room)
{
    return ((int (__thiscall *)(int, unsigned int))FUN_00a4c810)(0x01BE8F30, room);
}

// ECX of PhaseManager::createReadRoomList (the phase manager at 0x018B9140)
PhaseManager *const kPhaseManager = (PhaseManager *)0x018B9140;

}  // namespace cCondIsLoadRoom_p1

// 00C7AEA0  Trigger::cCondIsLoadRoom::cCondIsLoadRoom  size=33  [class]
Trigger::cCondIsLoadRoom::cCondIsLoadRoom()
{
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    // vftable = Trigger::cCondIsLoadRoom::vftable (0x016A92FC)
    roomNo() = -2;
    useReadRoomList() = 0;
}

// 00C7AEE0  Trigger::cCondIsLoadRoom::vf14  size=163  [class]
// Either tests the single room at +0x10 (-2 when negative), or every room of the phase manager's
// read-room list (true for an empty list; otherwise the last room's result when all are loaded).
int Trigger::cCondIsLoadRoom::vf14()
{
    using namespace cCondIsLoadRoom_p1;
    if (useReadRoomList() != 1) {
        if (-1 < roomNo()) {
            return isRoomLoaded(roomNo());
        }
        return isRoomLoaded(0xFFFFFFFE);
    }
    int count = 0;
    unsigned int rooms[32];
    kPhaseManager->createReadRoomList(rooms, 0x20, &count);
    if (count == 0) {
        return 1;
    }
    int i = 0;
    if (0 < count) {
        int loaded;
        while (loaded = isRoomLoaded(rooms[i]), loaded != 0) {
            i = i + 1;
            if (count <= i) {
                return loaded;
            }
        }
    }
    return 0;
}

// 00C7AF90  Trigger::cCondIsLoadRoom::vf1C  size=22  [class]
void Trigger::cCondIsLoadRoom::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    roomNo() = record[2];                     // record+0x08
    useReadRoomList() = record[3];            // record+0x0C
}

// 00C85B10  Trigger::cCondIsLoadRoom::vf00  size=31  [class]
Trigger::cCondIsLoadRoom *Trigger::cCondIsLoadRoom::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
