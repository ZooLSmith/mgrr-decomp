// REFINED
// ContentsManager -- abstract interface of the manager that owns the game's "contents" objects
// (each with a vftable and an id at +0x8). The only implementation is ContentsManagerImplement.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct ContentsManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 008DC750 slot 0x0 (scalar deleting destructor)
    virtual void vf04() = 0;  // 00FDB68B slot 0x4
    virtual void addContent(int * content) = 0;  // 00FDB68B slot 0x8
    virtual void removeContent(int id) = 0;  // 00FDB68B slot 0xC
    virtual undefined4 nextId() = 0;  // 00FDB68B slot 0x10
    // non-virtual members
    void dtor_008DF780();  // 008DF780  ContentsManagerImplement destructor (base dtor inlined)
};
