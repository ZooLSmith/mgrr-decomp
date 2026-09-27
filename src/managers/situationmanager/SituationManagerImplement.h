// REFINED
// SituationManagerImplement -- the situation (AI sense) manager (vftable 0x016A70C0).
// vf04 / vf08 allocate a Unit (0x20 bytes, from the heap at +0x4) and append it to the
// lib::AllocatedArray<SituationManagerImplement::Unit *> at +0x28 under the lock at +0x8.
// vf00 empties that array every frame, then walks the entity list DAT_01bebdbc..DAT_01bebdc0 for
// the enemies' "dashSense" (kind 7) and "touchSense" (kind 8) checks against the player.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "SituationManager.h"

struct SituationManagerImplement : public SituationManager {
    // One queued situation (0x20 bytes).  Not an RTTI class.
    struct Unit {
        int   &kind()          { return *(int *)((char *)this + 0x0); }    // +0x00
        int   &entityHandle()  { return *(int *)((char *)this + 0x4); }    // +0x04 entity handle (0 = none)
        int   &id()            { return *(int *)((char *)this + 0x8); }    // +0x08
        float *vector()        { return (float *)((char *)this + 0x10); }  // +0x10 float[4]

        // 00C3D390 (was FUN_00c3d390): initialise a Unit of `kind`; with an entity `source`,
        // copy its handle and take the id from its owner (+0x4B4).  ret 0xC
        Unit *init(int kind, int source, const float *vector);
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00C60BC0 slot 0x0  overrides SituationManager
    virtual int vf04(int kind, int source, const float *vector);  // 00C3D4C0 slot 0x4  overrides SituationManager
    virtual int vf08(int kind, int id, const float *vector);  // 00C3D400 slot 0x8  overrides SituationManager
    virtual undefined4 * vf0C(byte flags);  // 00C60B90 slot 0xC  overrides SituationManager

    // fields
    void  *&heap()          { return *(void **)((char *)this + 0x4); }   // +0x04 heap of the Units
    void   *lock()          { return (char *)this + 0x8; }               // +0x08 CRITICAL_SECTION (0x18 bytes)
    int    &lockEnabled()   { return *(int *)((char *)this + 0x20); }    // +0x20 non-zero: use the lock
    // +0x28 lib::AllocatedArray<Unit *> * (vftable; +0x4 data, +0x8 count; vf00 = scalar deleting
    // destructor, vf08 = append)
    int   *&units()         { return *(int **)((char *)this + 0x28); }   // +0x28
};
