// REFINED
// DebrisManagerImplement -- list of debris entity handles (+0x8) plus an array of
// {handle, float} entries (+0xC) rebuilt and sorted by vf24, guarded by a CRITICAL_SECTION.
// Created by create() (0x40 bytes), instance pointer DAT_01bea18c.
#pragma once
#include "DebrisManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DebrisManagerImplement : public DebrisManager {
    // Entity list object (vf00(1) = delete, vf08(&handle) = append).
    struct EntityList {
        void        *vftable;   // +0x0
        int         *data;      // +0x4  entity handles
        unsigned int count;     // +0x8
        int          capacity;  // +0xC
    };
    // Entry of the sorted array (8 bytes).
    struct SortEntry {
        undefined4 handle;  // +0x0  entity handle (FUN_00a7c940 copy)
        float      value;   // +0x4  sort key (+0x524 of the entity)
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);   // 00C62B90 slot 0x0  scalar deleting destructor
    virtual void vf04(undefined4 entity);    // 00C1C600 slot 0x4  list->vf08(&entity)
    virtual void vf08(int entity);           // 00C50F40 slot 0x8  removes `entity` from the list
    virtual int vf0C();                      // 00C62AD0 slot 0xC  capacity - vf10()
    virtual undefined4 vf10();               // 00C62AF0 slot 0x10 list count
    virtual void vf14();                     // 00C2DC20 slot 0x14
    virtual void vf18();                     // 00C448C0 slot 0x18
    virtual void vf1C();                     // 00C448F0 slot 0x1C
    virtual undefined4 vf20();               // 00C2DC60 slot 0x20 sorted entry count
    virtual void vf24();                     // 00C50FB0 slot 0x24 rebuilds and sorts the array
    virtual void vf28();                     // 00C510B0 slot 0x28
    // non-virtual members
    static bool create(undefined4 heap);       // 00C64820 (was a "constructor")
    static bool createThunk(undefined4 heap);  // 00C64880 jmp create

    undefined4 &heap()          { return *(undefined4 *)((char *)this + 0x4); }   // +0x4
    EntityList *&entities()     { return *(EntityList **)((char *)this + 0x8); }  // +0x8
    void *sortedArray()         { return (char *)this + 0xC; }                    // +0xC  array object
    SortEntry *&sortedData()    { return *(SortEntry **)((char *)this + 0x10); }  // +0x10
    int &sortedCapacity()       { return *(int *)((char *)this + 0x14); }         // +0x14
    int &sortedCount()          { return *(int *)((char *)this + 0x18); }         // +0x18
    int &sortedOwnsData()       { return *(int *)((char *)this + 0x1C); }         // +0x1C
    void *lock()                { return (char *)this + 0x20; }                   // +0x20 CRITICAL_SECTION
    int &lockEnabled()          { return *(int *)((char *)this + 0x38); }         // +0x38 (lock + 0x18)
};
