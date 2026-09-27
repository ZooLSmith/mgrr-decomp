// REFINED
// BattleParameterManagerImplement -- reference-counted table of battle parameter objects, guarded
// by a critical section.  Entries whose count drops to zero are marked released by vf08 and freed by vf00.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "BattleParameterManager.h"

struct BattleParameterManagerImplement : public BattleParameterManager {
    // One table entry (allocated separately, freed with FUN_00dd4920).
    struct Entry {
        int  refCount;          // +0x0
        int  released;          // +0x4  1 once refCount dropped below 1
        int  id;                // +0x8
        int *parameter;         // +0xC  polymorphic object, deleted with its vf98(1)
    };
    // lib array header of Entry pointers; vftable slot 0x0 = scalar deleting destructor.
    struct EntryArray {
        void         *vftable;  // +0x0
        Entry       **data;     // +0x4
        unsigned int  count;    // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00D73D00 slot 0x0  overrides BattleParameterManager (jmp 00D73C20)
    virtual undefined addReference();  // 00D76860 slot 0x4  overrides BattleParameterManager
    virtual void vf08(int id);  // 00D731A0 slot 0x8  overrides BattleParameterManager (release one reference)
    virtual undefined4 * vf0C(byte flags);  // 00D76190 slot 0xC  overrides BattleParameterManager (scalar deleting dtor)
    // non-virtual members
    void purgeReleased();  // 00D73C20 (FILEMAP: BattleParameterManagerImplement::vf00) frees released entries

    // fields (absolute offsets from object start)
    void        *lock()            { return (char *)this + 0x8; }                   // +0x08 CRITICAL_SECTION (0x18 bytes)
    int         &lockInitialized() { return *(int *)((char *)this + 0x20); }         // +0x20
    EntryArray *&entries()         { return *(EntryArray **)((char *)this + 0x28); } // +0x28
};
