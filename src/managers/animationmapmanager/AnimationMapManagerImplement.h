// REFINED
// AnimationMapManagerImplement -- reference-counted table of animation maps, guarded by a
// critical section.  Entries whose count drops to zero are marked released by vf08 and freed by vf00.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "AnimationMapManager.h"

struct AnimationMapManagerImplement : public AnimationMapManager {
    // Object owned by an entry; its first word is a polymorphic object deleted with vf00(1).
    struct Resource {
        int *object;            // +0x0
    };
    // One table entry (allocated separately, freed with FUN_00dd4920).
    struct Entry {
        int       refCount;     // +0x0
        int       released;     // +0x4  1 once refCount dropped below 1
        int       id;           // +0x8
        Resource *resource;     // +0xC
    };
    // lib array header of Entry pointers; vftable slot 0x0 = scalar deleting destructor.
    struct EntryArray {
        void         *vftable;  // +0x0
        Entry       **data;     // +0x4
        unsigned int  count;    // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 008D8ED0 slot 0x0  overrides AnimationMapManager (jmp 008D8DE0)
    virtual int addReference(int param_2, undefined4 param_3);  // 008DA6C0 slot 0x4  overrides AnimationMapManager
    virtual void vf08(int id);  // 008D8110 slot 0x8  overrides AnimationMapManager (release one reference)
    virtual undefined4 * vf0C(byte flags);  // 008D9E20 slot 0xC  overrides AnimationMapManager (scalar deleting dtor)
    // non-virtual members
    void purgeReleased();  // 008D8DE0 (FILEMAP: AnimationMapManagerImplement::vf00) frees released entries

    // fields (absolute offsets from object start)
    void        *lock()            { return (char *)this + 0x8; }                   // +0x08 CRITICAL_SECTION (0x18 bytes)
    int         &lockInitialized() { return *(int *)((char *)this + 0x20); }         // +0x20
    EntryArray *&entries()         { return *(EntryArray **)((char *)this + 0x28); } // +0x28
};
