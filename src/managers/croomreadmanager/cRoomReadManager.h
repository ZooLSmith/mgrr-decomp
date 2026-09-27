// REFINED
// cRoomReadManager -- no RTTI; reconstructed from its one named method. Holds eight room ids to
// load (+0x214, 0xFFFFFFFF = free); setCommonRoom adds the "common" room of each (id & 0xF00 plus
// the low byte rounded down to a multiple of 0x20).
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cRoomReadManager {
    // non-virtual members
    // 00A4C9F0: `this` in ECX, no stack arguments; returns 0 when no free slot was left, else 1.
    undefined4 setCommonRoom();

    // fields (absolute offsets from object start)
    unsigned int *roomIds() { return (unsigned int *)((char *)this + 0x214); }  // +0x214 unsigned int[8]
};
