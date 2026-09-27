// REFINED
// cCutDataManager -- no RTTI / generated header; reconstructed from cCutDataManager::entryData.
// Hands out _CUT_DATA_WORK records (0x210 bytes, "data after cutting") from a lock-free free list
// (Hw::cHwLFFreeListTemp<cCutDataManager::_CUT_DATA_WORK>) and queues them on an active list.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cCutDataManager {
    // cCutDataManager::_CUT_DATA_WORK (0x210 bytes).
    struct CutDataWork {
        int  field000;          // +0x000 cleared by entryData
        char pad004[0xC];       // +0x004
        char sub010[0x100];     // +0x010 initialised by FUN_00a15130
        char sub110[0xE0];      // +0x110 initialised by FUN_00a16570
        int  field1F0;          // +0x1F0
        int  field1F4;          // +0x1F4 1 when entered
        int  field1F8;          // +0x1F8
        int  field1FC;          // +0x1FC
        char pad200[0x10];      // +0x200
    };

    // non-virtual members
    // 00D8D310: takes a record from the free list, initialises it and queues it; returns its
    // index in the record pool, or 0xFFFFFFFF (with a debug message when none is available).
    uint entryData();

    // fields (absolute offsets from object start)
    void        *freeList()   { return (char *)this + 0x8; }                     // +0x08 embedded free list (FUN_00d8b200 pops)
    CutDataWork *&works()     { return *(CutDataWork **)((char *)this + 0x18); } // +0x18 record pool
    int         &workCount()  { return *(int *)((char *)this + 0x1C); }          // +0x1C
    void        *activeList() { return (char *)this + 0x28; }                    // +0x28 embedded list (FUN_00d8ae30 pushes)
};
