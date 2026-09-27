// REFINED
// ZangekiEventQteStatePl0010 -- Raiden (Pl0010 state machine) "zangeki event QTE": the blade-mode
// state entered for scripted QTE finishers.  vf08 (enter) picks the QTE kind from the player
// (+0x3DF0) into the context (+0x330), sets the context's permission flags and resets the rig;
// SafeCheck / qteSafeCheck dispatch per QTE kind.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiEventQteStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82F90 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91610 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BCDBC0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BE2090 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00C05F10 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B82F10 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82F20 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BCE980 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82F30 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiEventQteStatePl0010(undefined4 owner);  // 00B82F50 (owner is forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    cObj  *&target()        { return *(cObj **)((char *)this + 0x30); }   // +0x30 QTE target object (resolved from the global handle DAT_01d61ab8)
    void   *handle38()      { return (void *)((char *)this + 0x38); }      // +0x38 embedded object handle (FUN_00a7c930 init, FUN_00a7c950 reset)
    int    &field3C()       { return *(int *)((char *)this + 0x3C); }      // +0x3C -1 on enter
    int    &field40()       { return *(int *)((char *)this + 0x40); }      // +0x40
    int    &qteMode()       { return *(int *)((char *)this + 0x44); }      // +0x44 -1 / 2 (kind 4) / 3 (kind 3), set on enter
    float  *rot50()         { return (float *)((char *)this + 0x50); }     // +0x50 float[4] reset to (0,0,0,1)
    float  &field60()       { return *(float *)((char *)this + 0x60); }    // +0x60
    float  &field64()       { return *(float *)((char *)this + 0x64); }    // +0x64
    float  *vec70()         { return (float *)((char *)this + 0x70); }     // +0x70 float[4] (0,0,0,1) / bone / context +0x540
    float  *vec80()         { return (float *)((char *)this + 0x80); }     // +0x80 float[4] copy of vec70
    float  *vecA0()         { return (float *)((char *)this + 0xA0); }     // +0xA0 float[4] reset to (0,0,0,1) by qteSafeCheck
    float  *vecB0()         { return (float *)((char *)this + 0xB0); }     // +0xB0 float[4] reset to (0,0,0,1) by qteSafeCheck
    float  &fieldCC()       { return *(float *)((char *)this + 0xCC); }    // +0xCC
    void   *objD0()         { return (void *)((char *)this + 0xD0); }      // +0xD0 embedded object (FUN_00a831e0 init; FUN_00a82610 / FUN_00a83270 / FUN_00a83990)
    float  &field1A0()      { return *(float *)((char *)this + 0x1A0); }   // +0x1A0 1.0 on enter
    float  &angle1A4()      { return *(float *)((char *)this + 0x1A4); }   // +0x1A4 pi/2 on enter
    float  &savedY1B0()     { return *(float *)((char *)this + 0x1B0); }   // +0x1B0 player position y (kind 8)
    float  &savedY1B4()     { return *(float *)((char *)this + 0x1B4); }   // +0x1B4 player vf84()[1] (kind 0xF)
    float  *vec1C0()        { return (float *)((char *)this + 0x1C0); }    // +0x1C0 float[4] player vf84() snapshot; restored through vf88 on leave
    float  &field1D0()      { return *(float *)((char *)this + 0x1D0); }   // +0x1D0
    int    &field1D4()      { return *(int *)((char *)this + 0x1D4); }     // +0x1D4 -1, or +0x83C of the object behind player +0x91C (kind 4)
    void   *handle1D8()     { return (void *)((char *)this + 0x1D8); }     // +0x1D8 embedded object handle (set from context +0x4BC)
    int    &field1E0()      { return *(int *)((char *)this + 0x1E0); }     // +0x1E0 1 on enter
    float  *vec1F0()        { return (float *)((char *)this + 0x1F0); }    // +0x1F0 float[4] passed to player vf7C on leave
    int    &restored200()   { return *(int *)((char *)this + 0x200); }     // +0x200 1: nothing to restore on leave (0 after kind 8's SafeCheck)
};
