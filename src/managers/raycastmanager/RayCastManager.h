// REFINED
// RayCastManager -- keeps the RayCastWork objects handed out through "handles". A handle is an
// int slot owned by the caller that holds the work pointer; the work stores the address of its
// handle at +0x10, which is how a stale handle is detected. The instance lives at 0x01B35DF8.
#pragma once
#include "ghidra_types.h"
#include "auto/fwd.h"

struct RayCastManager {
    // Growable array used by the manager (0x14 bytes): data is freed with FUN_00dd48d0 when owned.
    struct WorkArray {
        int  unk00;       // +0x00  cleared by the constructor, otherwise unused here
        int *data;        // +0x04
        int  capacity;    // +0x08
        int  count;       // +0x0C
        int  ownsMemory;  // +0x10
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 0090BB80 slot 0x0  scalar deleting destructor
    // non-virtual members
    // 00905E50: releases the work held by `handle` (flags it at +0x1A) and clears the handle.
    void getWork(int *handle);
    // 00905EE0: stores `value` into the byte at +0x1D of the work held by `handle`.
    static void getWork_2(int *handle, unsigned char value);
    // 00907DC0: registers `work` in the work array and binds it to `handle` (1 = ok, 0 = full).
    int set(int *work, int *handle, const char *name);
    ~RayCastManager();  // 0090BAE0
    RayCastManager();  // 0090D7E0

    // fields
    int       &field08()     { return *(int *)((char *)this + 0x8); }          // +0x8
    int       &heapVftable() { return *(int *)((char *)this + 0x10); }         // +0x10  vftable of the embedded heap
    WorkArray &works()       { return *(WorkArray *)((char *)this + 0x68); }   // +0x68  registered works
    WorkArray *arrays()      { return (WorkArray *)((char *)this + 0x7C); }    // +0x7C  five more arrays [5]
    int       &field100()    { return *(int *)((char *)this + 0x100); }        // +0x100
    int       &field120()    { return *(int *)((char *)this + 0x120); }        // +0x120
    int       &field12C()    { return *(int *)((char *)this + 0x12C); }        // +0x12C
    int       &field130()    { return *(int *)((char *)this + 0x130); }        // +0x130
    int       &enabled()     { return *(int *)((char *)this + 0x134); }        // +0x134  0 = handles are just cleared
};
