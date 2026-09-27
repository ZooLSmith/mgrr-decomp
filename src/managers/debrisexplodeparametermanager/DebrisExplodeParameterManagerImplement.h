// REFINED
// DebrisExplodeParameterManagerImplement -- reference-counted cache of
// DebrisExplodeParameterImplement objects (one per id, loaded from "debrisExplodeParameter.bxm"),
// guarded by a CRITICAL_SECTION.
#pragma once
#include "DebrisExplodeParameterManager.h"
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DebrisExplodeParameterManagerImplement : public DebrisExplodeParameterManager {
    // One cached parameter set (0x10 bytes, allocated in vf04).
    struct ParamEntry {
        int   refCount;   // +0x0
        int   released;   // +0x4  set when refCount drops to 0 (vf08)
        int   id;         // +0x8
        void *parameter;  // +0xC  DebrisExplodeParameterImplement (vf2C(1) = delete)
    };
    // Polymorphic array of ParamEntry * (vf00(1) = delete, vf08(&entry) = append).
    struct ParamList {
        void        *vftable;   // +0x0
        ParamEntry **data;      // +0x4
        unsigned int count;     // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();                               // 009428D0 slot 0x0  jumps to removeReleasedParameters
    virtual int vf04(int id, undefined4 param);        // 00944640 slot 0x4  get / load parameter `id`, refCount++
    virtual void vf08(int id);                         // 0093FDC0 slot 0x8  refCount--, flags it released at 0
    virtual void vf0C(undefined4 param);               // 00943DC0 slot 0xC  vf04 for each preloaded object name
    virtual undefined4 vf10(int id);                   // 00943E00 slot 0x10 parameter of `id` or 0
    virtual undefined4 vf14(int id);                   // 00943E40 slot 0x14 1 when `id` is cached
    virtual int vf18(int id);                          // 00943E80 slot 0x18 list index of `id` or -1
    virtual undefined4 * vf1C(byte flags);             // 00943EE0 slot 0x1C scalar deleting destructor
    // non-virtual members
    void removeReleasedParameters();                   // 00942810

    int &heap()               { return *(int *)((char *)this + 0x4); }            // +0x4  allocation heap
    void *lock()              { return (char *)this + 0x8; }                      // +0x8  CRITICAL_SECTION
    int &lockEnabled()        { return *(int *)((char *)this + 0x20); }           // +0x20 (lock + 0x18)
    ParamList *&parameters()  { return *(ParamList **)((char *)this + 0x28); }    // +0x28
};
