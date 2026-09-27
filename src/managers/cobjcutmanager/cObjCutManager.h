// REFINED
// cObjCutManager -- no RTTI; reconstructed from its one named method. startup() allocates two
// work pools (0x10 and 0x800 entries) and resets the bookkeeping that follows each of them.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct cObjCutManager {
    // non-virtual members
    // 00D8CF50: `this` in ECX, no stack arguments; returns 1 on success, 0 on failure.
    undefined4 startup();

    // fields (absolute offsets from object start)
    int &field128() { return *(int *)((char *)this + 0x128); }  // +0x128
    int &field12C() { return *(int *)((char *)this + 0x12C); }  // +0x12C
    int &field130() { return *(int *)((char *)this + 0x130); }  // +0x130
    int &field134() { return *(int *)((char *)this + 0x134); }  // +0x134
    int &field138() { return *(int *)((char *)this + 0x138); }  // +0x138
    int &field178() { return *(int *)((char *)this + 0x178); }  // +0x178
    int &field17C() { return *(int *)((char *)this + 0x17C); }  // +0x17C
    int &field180() { return *(int *)((char *)this + 0x180); }  // +0x180  init 100
    int &field184() { return *(int *)((char *)this + 0x184); }  // +0x184
    int &field188() { return *(int *)((char *)this + 0x188); }  // +0x188  init 100
    int &field18C() { return *(int *)((char *)this + 0x18C); }  // +0x18C
    int &field190() { return *(int *)((char *)this + 0x190); }  // +0x190
    int &field194() { return *(int *)((char *)this + 0x194); }  // +0x194
    int &field198() { return *(int *)((char *)this + 0x198); }  // +0x198
};
