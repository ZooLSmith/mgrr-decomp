// REFINED
// cSceneBgManager -- no RTTI; reconstructed from its one named method. Loads the background
// layouts of a scene: +0x4 points at the layout list (count +0x8, 0x14-byte entries from +0x14),
// +0x10 is the next layout to request, +0x2278 holds up to 16 object ids being read.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cSceneBgManager {
    // non-virtual members
    // 009351C0: `this` in ECX, no stack arguments.
    void moveReadLayoutRequest();

    // fields (absolute offsets from object start)
    undefined4 &name()       { return *(undefined4 *)((char *)this + 0x0); }   // +0x0  printed in the debug messages
    int &layoutList()        { return *(int *)((char *)this + 0x4); }          // +0x4  layout list (count at +0x8)
    int &state()             { return *(int *)((char *)this + 0xC); }          // +0xC  read state (2..6)
    int &nextLayout()        { return *(int *)((char *)this + 0x10); }         // +0x10 index of the next layout to request
    int &field14()           { return *(int *)((char *)this + 0x14); }         // +0x14
    int *loadedList()        { return (int *)((char *)this + 0x30); }          // +0x30 cFixedList of loaded ids
    int *readingIds()        { return (int *)((char *)this + 0x2278); }        // +0x2278 int[16], -1 = free
};
