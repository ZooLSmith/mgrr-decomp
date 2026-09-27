// REFINED
// DatsuSetTableManagerImplement -- reference-counted cache of DatsuSetTableImplement objects
// (one per table id, loaded from "datsuSetTable.bxm"), guarded by a CRITICAL_SECTION.
#pragma once
#include "DatsuSetTableManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DatsuSetTableManagerImplement : public DatsuSetTableManager {
    // One cached table (0x10 bytes, allocated in vf04).
    struct TableEntry {
        int   refCount;   // +0x0
        int   released;   // +0x4  set when refCount drops to 0 (vf08)
        int   id;         // +0x8
        void *table;      // +0xC  DatsuSetTableImplement (vf20(1) = delete)
    };
    // Polymorphic array of TableEntry * (vf00(1) = delete, vf08(&entry) = append).
    struct TableList {
        void        *vftable;   // +0x0
        TableEntry **data;      // +0x4
        unsigned int count;     // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();                               // 0093C8A0 slot 0x0  jumps to removeReleasedTables
    virtual int vf04(int id, undefined4 param);        // 0093D760 slot 0x4  get / load table `id`, refCount++
    virtual void vf08(int id);                         // 0093C3A0 slot 0x8  refCount--, flags it released at 0
    virtual void vf0C(undefined4 param);               // 0093D040 slot 0xC  vf04(0..6, param)
    virtual undefined4 vf10(int id);                   // 0093D070 slot 0x10 table of `id` or 0
    virtual undefined4 * vf14(byte flags);             // 0093D0D0 slot 0x14 scalar deleting destructor
    // non-virtual members
    void removeReleasedTables();                       // 0093C7E0

    int &heap()               { return *(int *)((char *)this + 0x4); }            // +0x4  allocation heap
    void *lock()              { return (char *)this + 0x8; }                      // +0x8  CRITICAL_SECTION
    int &lockEnabled()        { return *(int *)((char *)this + 0x20); }           // +0x20 (lock + 0x18)
    TableList *&tables()      { return *(TableList **)((char *)this + 0x28); }    // +0x28
};
