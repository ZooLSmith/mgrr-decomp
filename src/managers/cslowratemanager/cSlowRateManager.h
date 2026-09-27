// REFINED
// cSlowRateManager -- no RTTI; reconstructed from its two named methods. Slow-rate "units" are
// 0x34-byte blocks from a pool (+0x18 base, +0x1C count, +0x20 owned flag), kept in a doubly
// linked list headed at +0x38 (unit +0x28 prev, +0x2C next).
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cSlowRateManager {
    // non-virtual members
    // 00E06230: `this` in ECX; returns a new unit (reference count 1) or 0.
    undefined4 * allocUnit();
    // 00E08740: `this` in ECX; unlinks and frees every unit, then the pool.
    void cleanup();

    // fields (absolute offsets from object start)
    int &field08()          { return *(int *)((char *)this + 0x08); }            // +0x08
    int &field0C()          { return *(int *)((char *)this + 0x0C); }            // +0x0C
    int &field10()          { return *(int *)((char *)this + 0x10); }            // +0x10
    unsigned int &pool()    { return *(unsigned int *)((char *)this + 0x18); }   // +0x18 unit pool
    int &poolCount()        { return *(int *)((char *)this + 0x1C); }            // +0x1C units in the pool
    int &poolOwned()        { return *(int *)((char *)this + 0x20); }            // +0x20 non-zero: free the pool in cleanup
    unsigned int &unitList(){ return *(unsigned int *)((char *)this + 0x38); }   // +0x38 first unit
};
