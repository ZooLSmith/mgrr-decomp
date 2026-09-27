// REFINED
// cCkMsgManager -- codec message manager (two channels, see the per-channel arrays below).
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct cCkMsgManager {
    // Per-channel block at +0x14 (0x18 bytes).
    struct ChannelState {
        int flag;               // +0x00 1 after construction
        int values[5];          // +0x04
    };
    // Per-channel block at +0x44 (0x1C bytes).
    struct ChannelWork {
        int values[7];          // +0x00
    };
    // lib dynamic array header (freed with FUN_00dd48d0 when it owns its storage).
    struct DynArray {
        int unk00;              // +0x00
        int data;               // +0x04
        int capacity;           // +0x08
        int count;              // +0x0C
        int ownsMemory;         // +0x10
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 vf00(byte flags);  // 00D0DDB0 slot 0x0  scalar deleting destructor
    // non-virtual members
    cCkMsgManager();  // 00CF8220
    ~cCkMsgManager();  // 00CF82E0

    // fields (absolute offsets from object start)
    int          &field04()        { return *(int *)((char *)this + 0x4); }             // +0x04
    int          *channelField08() { return (int *)((char *)this + 0x8); }              // +0x08 int[2]
    int          &field10()        { return *(int *)((char *)this + 0x10); }            // +0x10
    ChannelState *channelStates()  { return (ChannelState *)((char *)this + 0x14); }    // +0x14 ChannelState[2]
    ChannelWork  *channelWorks()   { return (ChannelWork *)((char *)this + 0x44); }     // +0x44 ChannelWork[2]
    int          *channelIds()     { return (int *)((char *)this + 0x7C); }             // +0x7C int[2], -1 = none
    int          *channelFlags()   { return (int *)((char *)this + 0x84); }             // +0x84 int[2]
    int          &id8C()           { return *(int *)((char *)this + 0x8C); }            // +0x8C -1 = none
    int          &id90()           { return *(int *)((char *)this + 0x90); }            // +0x90 -1 = none
    DynArray     &array94()        { return *(DynArray *)((char *)this + 0x94); }       // +0x94
    int          &idA8()           { return *(int *)((char *)this + 0xA8); }            // +0xA8 -1 = none
    DynArray     &arrayAC()        { return *(DynArray *)((char *)this + 0xAC); }       // +0xAC
};
