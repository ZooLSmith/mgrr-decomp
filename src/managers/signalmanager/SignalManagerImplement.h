// REFINED
// SignalManagerImplement -- the signal registry (vftable 0x016C2638).  Holds a
// lib::Array<Signal *> at +0x4 (vftable, data, count, capacity); vf00 finds or creates the
// Signal record of an id, vf04 only finds it.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "SignalManager.h"

struct SignalManagerImplement : public SignalManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual int * vf00(int id);  // 00D8A710 slot 0x0  overrides SignalManager
    virtual int * vf04(int id);  // 00D8A5C0 slot 0x4  overrides SignalManager
    virtual undefined4 * vf08(byte flags);  // 00D8A6F0 slot 0x8  overrides SignalManager

    // fields: lib::Array<Signal *> at +0x4
    void    *signalArray()        { return (char *)this + 0x4; }                 // +0x04 (the array object)
    void   *&signalArrayVftable() { return *(void **)((char *)this + 0x4); }    // +0x04
    Signal **&signals()           { return *(Signal ***)((char *)this + 0x8); } // +0x08 data
    int     &signalCount()        { return *(int *)((char *)this + 0xC); }      // +0x0C count
    int     &signalCapacity()     { return *(int *)((char *)this + 0x10); }     // +0x10 capacity
};
