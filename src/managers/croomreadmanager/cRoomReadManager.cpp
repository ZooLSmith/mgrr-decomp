// src/managers/croomreadmanager/cRoomReadManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cRoomReadManager.h"

// Data referenced by this part
extern unsigned char DAT_01661db0[];  // debug message: no free room slot (argument: room id)

namespace cRoomReadManager_p1 {

// __cdecl call of a function (symbol or address) with the argument list seen at the call site.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

const int kRoomSlots = 8;

} // namespace cRoomReadManager_p1

// 00A4C9F0  cRoomReadManager::setCommonRoom  size=262  [class]
undefined4 cRoomReadManager::setCommonRoom()
{
    using namespace cRoomReadManager_p1;
    unsigned int room;
    unsigned int low;
    unsigned int index;
    unsigned int slot;
    unsigned int *id;
    unsigned int *other;
    int *freeSlot;

    index = 0;
    id = roomIds();
    do {
        room = *id;
        if (room != 0xffffffff && 0xff < (int)room) {
            low = room & 0xff;
            if (low < 0x20) {
                room = room & 0xf00;
            }
            else if (low < 0x40) {
                room = room & 0xf00 | 0x20;
            }
            else if (low < 0x60) {
                room = room & 0xf00 | 0x40;
            }
            else if (low < 0x80) {
                room = room & 0xf00 | 0x60;
            }
            else if (low < 0xa0) {
                room = room & 0xf00 | 0x80;
            }
            else if (low < 0xc0) {
                room = room & 0xf00 | 0xa0;
            }
            else {
                if (0xdf < low) goto next;
                room = room & 0xf00 | 0xc0;
            }
            if (room != 0 && room != 0xffffffff) {
                // already listed?
                slot = 0;
                other = roomIds();
                do {
                    if (*other == room) goto next;
                    slot = slot + 1;
                    other = other + 1;
                } while (slot < kRoomSlots);
                // first free slot
                slot = 0;
                freeSlot = (int *)roomIds();
                while (*freeSlot != -1) {
                    slot = slot + 1;
                    freeSlot = freeSlot + 1;
                    if (7 < slot) {
                        cdeclcall<void>(FUN_00dd5650, DAT_01661db0, room);
                        return 0;
                    }
                }
                roomIds()[slot] = room;
            }
        }
next:
        index = index + 1;
        id = id + 1;
        if (7 < index) {
            return 1;
        }
    } while (true);
}
