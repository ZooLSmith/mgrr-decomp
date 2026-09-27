// REFINED
// cEnemyCautionStateManager -- caution-state bookkeeping object embedded in enemy behaviours
// (at +0xC10 of the object destroyed by 004ECE70, at +0x1B90 / +0x1C60 in some enemies).
// Its destructor is always inlined; the FILEMAP "~cEnemyCautionStateManager" entries are the
// destructors of the embedding objects and are declared below under address-based names.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cEnemyCautionStateManager {
    // Block of the array at +0x54 (0x24 bytes).
    struct CautionBlock {
        int   flag;             // +0x00
        float values[8];        // +0x04
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 004EC010 slot 0x0  scalar deleting destructor
    // non-virtual members
    cEnemyCautionStateManager();  // 004EC410
    // The four functions below run with `this` = the embedding object, not the manager.
    // 004ECE70 (FILEMAP: ~cEnemyCautionStateManager): destructor of the object embedding the
    // manager at +0xC10 (tail-calls Behavior::~Behavior; BehaviorAppBase ?).
    void dtor_004ECE70();
    // 00AACF30 (FILEMAP: ~cEnemyCautionStateManager): enemy destructor, manager at +0x1B90 (Em0080 ?).
    void dtor_00AACF30();
    // 00AB2CD0 (FILEMAP: ~cEnemyCautionStateManager): enemy destructor, manager at +0x1C60 (Emc080 ?).
    void dtor_00AB2CD0();
    // 00AB5410 (FILEMAP: ~cEnemyCautionStateManager): enemy destructor, manager at +0x1C60 (Em8080 ?).
    void dtor_00AB5410();

    // fields (absolute offsets from object start)
    int          &field14()     { return *(int *)((char *)this + 0x14); }            // +0x014
    float        &field18()     { return *(float *)((char *)this + 0x18); }          // +0x018
    float        &field1C()     { return *(float *)((char *)this + 0x1C); }          // +0x01C
    int          &field20()     { return *(int *)((char *)this + 0x20); }            // +0x020
    float        *values24()    { return (float *)((char *)this + 0x24); }           // +0x024 float[6]
    void         *object40()    { return (char *)this + 0x40; }                      // +0x040 embedded (FUN_00a7c930 / FUN_00a7c950)
    void         *handle48()    { return (char *)this + 0x48; }                      // +0x048 embedded handle (FUN_00904d60 / FUN_00905ce0)
    float        &field4C()     { return *(float *)((char *)this + 0x4C); }          // +0x04C
    float        &field50()     { return *(float *)((char *)this + 0x50); }          // +0x050
    CautionBlock *blocks()      { return (CautionBlock *)((char *)this + 0x54); }    // +0x054 CautionBlock[5]
    float        &field108()    { return *(float *)((char *)this + 0x108); }         // +0x108 -1.0 after construction
    int          &field10C()    { return *(int *)((char *)this + 0x10C); }           // +0x10C
    int          &field114()    { return *(int *)((char *)this + 0x114); }           // +0x114
    int          &field118()    { return *(int *)((char *)this + 0x118); }           // +0x118 1 after construction
    float        *values120()   { return (float *)((char *)this + 0x120); }          // +0x120 float[3]
    void         *object130()   { return (char *)this + 0x130; }                     // +0x130 embedded (FUN_00a7c930)
    int          &field134()    { return *(int *)((char *)this + 0x134); }           // +0x134
    char         *handles13C()  { return (char *)this + 0x13C; }                     // +0x13C 10 embedded handles (4 bytes each)
};
