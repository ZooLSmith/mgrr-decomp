// src/managers/cubemapmanager/CubeMapManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "CubeMapManager.h"

// Debug message formats passed to the (empty) debug print FUN_00dd5650.
extern char DAT_016d2b20[];  // "R%03x: the cube-map texture data version is too old."
extern char DAT_016d2b60[];  // "R%03x: the cube-map data sets exceed the work limit"
extern char DAT_016d2ba0[];  // "CubeMapManager::setData() : too many cube-map replacement entries registered!"
extern char DAT_016d2d28[];  // "CubeMapManager::getCubeTexIndex() : room number -1 was set ..."
extern char DAT_016d2e30[];  // "CubeMapManager::getCubeTexIndex() : cube-map replacement [R%03x No:%d] is not registered!"

namespace CubeMapManager_p1 {

// FUN_00dd5650 is a variadic debug print (empty in the release build).
typedef void (*DebugPrintFn)(const char *format, ...);

}  // namespace CubeMapManager_p1

// 00EAF820  FUN_00eaf820  size=107  [callgraph]
// Fills a free cube-map slot (ECX) with room `roomNo` and the "CT2" block `data`, creating one
// texture per non-null entry of its offset table.
void FUN_00eaf820(undefined4 *slot, undefined4 roomNo, char *data)
{
    if (data[0] == 'C' && data[1] == 'T' && data[2] == '2') {
        slot[0] = roomNo;
        slot[1] = (undefined4)data;
        int *offsets = (int *)(data + 8);
        for (unsigned int i = 0; i < *(unsigned int *)(data + 4); i++, offsets++) {
            if (*offsets != 0 && data + *offsets != 0) {
                // ECX: texture i of the slot (slot + 8 + i * 0x1C)
                FUN_00fa25d0((int)(slot + 2) + i * 0x1C, (undefined4)(data + *offsets));
            }
        }
        return;
    }
    ((CubeMapManager_p1::DebugPrintFn)FUN_00dd5650)(DAT_016d2b20, roomNo);
}

// 00EAF890  FUN_00eaf890  size=108  [callgraph]
// Releases a cube-map slot: frees each texture and marks the slot free (room -1).
void __fastcall FUN_00eaf890(int *slot)
{
    if (slot[0] != -1) {
        for (unsigned int i = 0; i < *(unsigned int *)(slot[1] + 4); i++) {
            int offset = *(int *)(slot[1] + 8 + i * 4);
            if (offset != 0 && slot[1] + offset != 0) {
                undefined4 *resource = FUN_00f99270(slot[1] + offset);
                if (resource != 0) {
                    FUN_00fa3830(resource);
                }
                FUN_00f972f0((int)(slot + 2) + i * 0x1C);  // ECX: texture i of the slot
            }
        }
        slot[0] = -1;
        slot[1] = 0;
    }
}

// 00EAF900  CubeMapManager::setData  size=200  [class]
// Queues (roomNo, data), then places every queued entry into the first free slot.
void CubeMapManager::setData(int roomNo, char *data)
{
    typedef CubeMapManager_p1::DebugPrintFn DebugPrintFn;

    if (pendingCount() == kMaxPending) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d2b60, roomNo);
        return;
    }
    pendingRoomNo(pendingCount()) = roomNo;
    pendingData(pendingCount()) = data;
    if (++pendingCount() != 0) {
        for (unsigned int i = 0; i < (unsigned int)pendingCount(); i++) {
            unsigned int s = 0;
            do {
                if (slot(s)[0] == -1) {
                    FUN_00eaf820((undefined4 *)slot(s), pendingRoomNo(i), pendingData(i));
                    break;
                }
                s++;
            } while (s < kSlotCount);
            if (s == kSlotCount) {
                ((DebugPrintFn)FUN_00dd5650)(DAT_016d2ba0);
            }
            pendingRoomNo(i) = -1;
            pendingData(i) = 0;
        }
        pendingCount() = 0;
    }
}

// 00EAF9D0  FUN_00eaf9d0  size=70  [callgraph]
// Registers `data` for the fixed room 0xFFFF together with a position (3 dwords).
void FUN_00eaf9d0(int self, int data, undefined4 *position)
{
    if (data != 0) {
        CubeMapManager *manager = (CubeMapManager *)self;
        manager->positionSet() = 1;
        manager->position()[0] = position[0];
        manager->position()[1] = position[1];
        manager->position()[2] = position[2];
        manager->setData(0xFFFF, (char *)data);  // tail call
    }
}

// 00EB3F70  CubeMapManager::getCubeTexIndex  size=109  [class]
// Returns slotIndex * 0x100 + texNo for the slot of `roomNo` that has texture `texNo`, else -1.
int CubeMapManager::getCubeTexIndex(int roomNo, int texNo)
{
    typedef CubeMapManager_p1::DebugPrintFn DebugPrintFn;

    if (roomNo == -1) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d2d28);
        return -1;
    }
    for (unsigned int s = 0; s < kSlotCount; s++) {
        int *entry = slot(s);
        if (entry[0] == roomNo) {
            int offset = *(int *)(entry[1] + 8 + texNo * 4);
            if (offset != 0 && entry[1] + offset != 0) {
                return s * 0x100 + texNo;
            }
        }
    }
    if (texNo != 0) {
        ((DebugPrintFn)FUN_00dd5650)(DAT_016d2e30, roomNo, texNo);
    }
    return -1;
}
