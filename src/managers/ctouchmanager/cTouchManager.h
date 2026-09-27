// REFINED
// cTouchManager -- keeps touch nodes in an active list (+0x18 .. end sentinel +0x1C) and a free
// list (+0x14); node +0x3C prev, +0x40 next, node +0x4 key (high word group, low word id).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cTouchManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00983780 slot 0x0 (scalar deleting destructor)
    // non-virtual members
    cTouchManager();  // 009835F0
    ~cTouchManager();  // 00983640

    // fields (absolute offsets from object start)
    int &field04()        { return *(int *)((char *)this + 0x04); }   // +0x04
    int &field08()        { return *(int *)((char *)this + 0x08); }   // +0x08
    int &activeCount()    { return *(int *)((char *)this + 0x10); }   // +0x10 nodes in the active list
    int &freeList()       { return *(int *)((char *)this + 0x14); }   // +0x14 first free node
    int &activeList()     { return *(int *)((char *)this + 0x18); }   // +0x18 first active node
    int &activeEnd()      { return *(int *)((char *)this + 0x1C); }   // +0x1C end sentinel of the active list
    int &field20()        { return *(int *)((char *)this + 0x20); }   // +0x20
    int &field24()        { return *(int *)((char *)this + 0x24); }   // +0x24
    int &field28()        { return *(int *)((char *)this + 0x28); }   // +0x28
    int &field2C()        { return *(int *)((char *)this + 0x2C); }   // +0x2C
    int &field30()        { return *(int *)((char *)this + 0x30); }   // +0x30
    int &field34()        { return *(int *)((char *)this + 0x34); }   // +0x34
    int &field38()        { return *(int *)((char *)this + 0x38); }   // +0x38
    int &field3C()        { return *(int *)((char *)this + 0x3C); }   // +0x3C
    int &field40()        { return *(int *)((char *)this + 0x40); }   // +0x40
    int &field44()        { return *(int *)((char *)this + 0x44); }   // +0x44
    int &field48()        { return *(int *)((char *)this + 0x48); }   // +0x48
    int &field4C()        { return *(int *)((char *)this + 0x4C); }   // +0x4C
    int &field50()        { return *(int *)((char *)this + 0x50); }   // +0x50 init 1
    int &field5C()        { return *(int *)((char *)this + 0x5C); }   // +0x5C
};
