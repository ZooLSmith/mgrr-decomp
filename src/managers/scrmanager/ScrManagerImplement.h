// REFINED
// ScrManagerImplement -- the stage-model ("scr") manager (vftable 0x016A3D3C).
// Layout: +0x4 owner (constructor argument), 8 scr slots of 0x888 bytes from +0x8, and a
// countdown timer at +0x4448..+0x4454.  A slot starts with 0x200 entity handles; the helpers at
// 0x00935xxx (unit_00935480.cpp) are __thiscall on a slot.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "ScrManager.h"

struct ScrManagerImplement : public ScrManager {
    // One scr slot (0x888 bytes; slot i starts at this + 0x8 + i * 0x888).  Offsets below are
    // from the start of the slot.
    struct Slot {
        int  *entities()     { return (int *)this; }                              // +0x000 [0x200] entity handles
        int  *extra()        { return (int *)((char *)this + 0x800); }            // +0x800 (returned by vf28)
        int  &entityCount()  { return *(int *)((char *)this + 0x840); }           // +0x840
        int  &scrId()        { return *(int *)((char *)this + 0x844); }           // +0x844 (-1: none)
        int  &info()         { return *(int *)((char *)this + 0x848); }           // +0x848 (vf28 *out)
        int  &loaded()       { return *(int *)((char *)this + 0x84C); }           // +0x84C
        void *texture0()     { return (char *)this + 0x850; }                     // +0x850 Hw::cTexture
        void *texture1()     { return (char *)this + 0x86C; }                     // +0x86C Hw::cTexture
    };
    enum { kSlotCount = 8, kSlotSize = 0x888 };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00C14AE0 slot 0x0  overrides ScrManager
    virtual undefined4 vf04();  // 00C14AD0 slot 0x4  overrides ScrManager
    virtual void vf08();  // 00C14A80 slot 0x8  overrides ScrManager
    virtual void vf0C(int scrId);  // 00C14A40 slot 0xC  overrides ScrManager
    virtual void vf10(undefined4 * request);  // 00C149A0 slot 0x10  overrides ScrManager
    virtual void vf14(undefined4 param_2, undefined4 param_3, int scrId);  // 00C14440 slot 0x14  overrides ScrManager
    virtual int vf18(int index, int scrId);  // 00C14490 slot 0x18  overrides ScrManager
    virtual int vf1C(undefined4 nameHash, int scrId);  // 00C143A0 slot 0x1C  overrides ScrManager
    virtual int vf20(undefined4 param_2, int scrId);  // 00C143F0 slot 0x20  overrides ScrManager
    virtual int vf24();  // 00C14320 slot 0x24  overrides ScrManager
    virtual int * vf28(int * outInfo, int scrId);  // 00C14500 slot 0x28  overrides ScrManager
    virtual int vf2C(undefined4 param_2);  // 00C14590 slot 0x2C  overrides ScrManager
    virtual undefined4 vf30(undefined4 param_2, int scrId);  // 00C14550 slot 0x30  overrides ScrManager
    virtual int vf34(undefined4 param_2);  // 00C145D0 slot 0x34  overrides ScrManager
    virtual undefined4 vf38(int index);  // 00C147C0 slot 0x38  overrides ScrManager
    virtual void vf3C(int scrId);  // 00C14830 slot 0x3C  overrides ScrManager
    virtual void vf40(undefined4 param_2, undefined4 param_3, int scrId);  // 00C14680 slot 0x40  overrides ScrManager
    virtual void vf44(undefined4 param_2, undefined4 param_3);  // 00C14640 slot 0x44  overrides ScrManager
    virtual void vf48(undefined4 param_2);  // 00C14610 slot 0x48  overrides ScrManager
    virtual undefined4 vf4C(undefined4 param_2, int scrId);  // 00C14720 slot 0x4C  overrides ScrManager
    virtual undefined4 vf50(undefined4 param_2);  // 00C146D0 slot 0x50  overrides ScrManager
    virtual void vf54(undefined4 param_2, undefined4 param_3);  // 00C14780 slot 0x54  overrides ScrManager
    virtual void vf58(int scrId, undefined4 param_3);  // 00C14880 slot 0x58  overrides ScrManager
    virtual void vf5C(undefined4 param_2, undefined4 param_3);  // 00C148C0 slot 0x5C  overrides ScrManager
    virtual void vf60(int scrId, undefined4 param_3, undefined4 param_4);  // 00C14900 slot 0x60  overrides ScrManager
    virtual void vf64(int scrId, undefined4 param_3, undefined4 param_4);  // 00C14950 slot 0x64  overrides ScrManager
    virtual void vf68(undefined4 param_2);  // 00C14B80 slot 0x68  overrides ScrManager
    virtual void vf6C(undefined4 param_2, undefined4 param_3);  // 00C14BA0 slot 0x6C  overrides ScrManager
    virtual void vf70();  // 00C14B90 slot 0x70  overrides ScrManager
    virtual undefined4 * vf74(byte flags);  // 00C24C30 slot 0x74  overrides ScrManager
    // non-virtual members
    ScrManagerImplement(undefined4 owner);  // 00C24B60
    ~ScrManagerImplement();  // 00C24BC0

    // fields
    undefined4 &owner()        { return *(undefined4 *)((char *)this + 0x4); }      // +0x4
    Slot       *slot(int index) { return (Slot *)((char *)this + 0x8 + index * kSlotSize); }  // +0x8 [8]
    int        &timerActive()  { return *(int *)((char *)this + 0x4448); }          // +0x4448
    int        &timerDone()    { return *(int *)((char *)this + 0x444C); }          // +0x444C
    float      &timer()        { return *(float *)((char *)this + 0x4450); }        // +0x4450 seconds
    int        &field4454()    { return *(int *)((char *)this + 0x4454); }          // +0x4454
};
