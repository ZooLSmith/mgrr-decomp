// REFINED
// cGameUIManager -- game UI manager: three owned arrays (released in the destructor), a handle at
// +0x5C and a block of fields cleared by the constructor (+0xBC initialised to 1.0f).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cGameUIManager {
    // Array header (0x14 bytes); the buffer is freed with FUN_00dd48d0 only when ownsData != 0.
    struct UiArray {
        int data;       // +0x00 buffer
        int field04;    // +0x04
        int count;      // +0x08
        int ownsData;   // +0x0C
        int field10;    // +0x10
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00CF6540 slot 0x0  scalar deleting destructor
    // non-virtual members
    ~cGameUIManager();  // 00CF64C0
    cGameUIManager();  // 00CF6610

    // fields (absolute offsets from object start)
    int     &field10()  { return *(int *)((char *)this + 0x10); }       // +0x10
    int     &field14()  { return *(int *)((char *)this + 0x14); }       // +0x14
    int     &field18()  { return *(int *)((char *)this + 0x18); }       // +0x18
    int     &field1C()  { return *(int *)((char *)this + 0x1C); }       // +0x1C
    UiArray &array20()  { return *(UiArray *)((char *)this + 0x20); }   // +0x20 .. +0x33
    UiArray &array34()  { return *(UiArray *)((char *)this + 0x34); }   // +0x34 .. +0x47
    UiArray &array48()  { return *(UiArray *)((char *)this + 0x48); }   // +0x48 .. +0x5B
    int     *handle5C() { return (int *)((char *)this + 0x5C); }        // +0x5C cleared by FUN_00a7c930
    int     &field60()  { return *(int *)((char *)this + 0x60); }       // +0x60
    int     &field64()  { return *(int *)((char *)this + 0x64); }       // +0x64
    int     &field68()  { return *(int *)((char *)this + 0x68); }       // +0x68
    int     &field6C()  { return *(int *)((char *)this + 0x6C); }       // +0x6C
    int     &field70()  { return *(int *)((char *)this + 0x70); }       // +0x70
    int     &field74()  { return *(int *)((char *)this + 0x74); }       // +0x74
    int     &field78()  { return *(int *)((char *)this + 0x78); }       // +0x78
    int     &field7C()  { return *(int *)((char *)this + 0x7C); }       // +0x7C
    int     &field80()  { return *(int *)((char *)this + 0x80); }       // +0x80
    int     &field84()  { return *(int *)((char *)this + 0x84); }       // +0x84
    int     &field88()  { return *(int *)((char *)this + 0x88); }       // +0x88
    int     &field8C()  { return *(int *)((char *)this + 0x8C); }       // +0x8C
    int     &field90()  { return *(int *)((char *)this + 0x90); }       // +0x90
    int     &field94()  { return *(int *)((char *)this + 0x94); }       // +0x94
    int     &field98()  { return *(int *)((char *)this + 0x98); }       // +0x98
    int     &fieldB0()  { return *(int *)((char *)this + 0xB0); }       // +0xB0
    int     &fieldB4()  { return *(int *)((char *)this + 0xB4); }       // +0xB4
    int     &fieldB8()  { return *(int *)((char *)this + 0xB8); }       // +0xB8
    float   &scaleBC()  { return *(float *)((char *)this + 0xBC); }     // +0xBC initialised to 1.0f
};
