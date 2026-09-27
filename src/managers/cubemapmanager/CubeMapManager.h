// REFINED
// CubeMapManager -- no RTTI; reconstructed from CubeMapManager.cpp. Holds six cube-map slots
// (one per room, 0x388 bytes each: room number, "CT2" data block, up to 32 Hw::cTexture of
// 0x1C bytes) and a queue of up to eight pending (room, data) registrations (setData).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct CubeMapManager {
    enum { kSlotCount = 6, kSlotSize = 0x388, kTextureSize = 0x1C, kMaxPending = 8 };

    void setData(int roomNo, char *data);            // 00EAF900
    int getCubeTexIndex(int roomNo, int texNo);      // 00EB3F70

    // Slot i (i < 6): +0x0 room number (-1 = free), +0x4 CT2 data, +0x8 textures (0x1C each).
    int *slot(unsigned int i)          { return (int *)((char *)this + i * kSlotSize); }       // +0x0
    int &pendingCount()                { return *(int *)((char *)this + 0x1538); }             // +0x1538 <= 8
    int &pendingRoomNo(unsigned int i) { return *(int *)((char *)this + 0x153C + i * 4); }     // +0x153C int[8]
    char *&pendingData(unsigned int i) { return *(char **)((char *)this + 0x155C + i * 4); }   // +0x155C char *[8]
    int &positionSet()                 { return *(int *)((char *)this + 0x1830); }             // +0x1830 set by FUN_00eaf9d0
    undefined4 *position()             { return (undefined4 *)((char *)this + 0x1834); }       // +0x1834 3 dwords
};
