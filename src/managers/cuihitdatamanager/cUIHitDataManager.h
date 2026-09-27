// REFINED
// cUIHitDataManager -- (RTTI: UICollision::cUIHitDataManager; constructor and vf00 live in
// src/collision/UICollision.cpp). A lock-protected dictionary of UI hit data: entries of
// {key0, key1, cUIHitData *} (0xC bytes) in a vector at +0x30.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cUIHitDataManager {
    // One dictionary entry (0xC bytes).
    struct Entry {
        int   key0;     // +0x0
        int   key1;     // +0x4
        void *hitData;  // +0x8  UICollision::cUIHitData (0x48 bytes)
    };
    // Hit shape passed by value to Dictionary (8 dwords).
    struct HitShape {
        undefined4 data[8];
    };

    int Dictionary(int key0, int key1, int hitParam, HitShape shape, int enable);  // 00CFD880

    int &heap()              { return *(int *)((char *)this + 0x8); }      // +0x8  allocation heap
    void *lock()             { return (char *)this + 0x10; }               // +0x10 CRITICAL_SECTION
    int &lockEnabled()       { return *(int *)((char *)this + 0x28); }     // +0x28 (lock + 0x18)
    void *entryVector()      { return (char *)this + 0x30; }               // +0x30 vector object
    Entry *&entries()        { return *(Entry **)((char *)this + 0x34); }  // +0x34
    int &entryCapacity()     { return *(int *)((char *)this + 0x38); }     // +0x38
    int &entryCount()        { return *(int *)((char *)this + 0x3C); }     // +0x3C
    int &initialized()       { return *(int *)((char *)this + 0x44); }     // +0x44
    int &hitCounter()        { return *(int *)((char *)this + 0x48); }     // +0x48 last id given to a hit
};
