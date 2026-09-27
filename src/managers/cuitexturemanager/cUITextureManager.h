// REFINED
// cUITextureManager -- owns a heap buffer (+0xC, freed with FUN_00dd48d0) whose cursors
// (+0x18/+0x1C/+0x20) are reset to the base value at +0x8 when it is released. A global
// instance lives at 0x018B571C.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cUITextureManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00D0D320 slot 0x0  scalar deleting destructor
    // non-virtual members
    ~cUITextureManager();                   // 00D0D2D0
    static void destroyGlobalInstance();    // 015F04F0  atexit destructor of the instance at 0x018B571C

    undefined4 &base()     { return *(undefined4 *)((char *)this + 0x8); }   // +0x8  initial cursor value
    undefined4 &buffer()   { return *(undefined4 *)((char *)this + 0xC); }   // +0xC  heap buffer
    undefined4 &field10()  { return *(undefined4 *)((char *)this + 0x10); }  // +0x10
    undefined4 &field14()  { return *(undefined4 *)((char *)this + 0x14); }  // +0x14
    undefined4 &cursor18() { return *(undefined4 *)((char *)this + 0x18); }  // +0x18
    undefined4 &cursor1C() { return *(undefined4 *)((char *)this + 0x1C); }  // +0x1C
    undefined4 &cursor20() { return *(undefined4 *)((char *)this + 0x20); }  // +0x20
};
