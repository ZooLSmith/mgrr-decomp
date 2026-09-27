// REFINED
// UnevenCliffOverJumpStatePl0010 -- Raiden (Pl0010 state machine) jump over a cliff edge onto
// uneven ground (state id 0x2B): take-off action 0x9E or 0x9F (scaled to the cliff through
// FUN_00a95ff0 / FUN_00a96030), then the landing action kept in +0x34 (0xA0, 0xA1 for high
// cliffs, 0xA2 when the player keeps running).  Fields below 0x30 belong to StateMachineNode;
// the object is 0x54 bytes.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct UnevenCliffOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82980 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91310 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82900 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB21F0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BE0E30 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00B82930 slot 0x14  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf18(undefined4 context);  // 00BB23E0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * context);  // 00BB24A0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82940 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &cliffFlag()      { return *(int *)((char *)this + 0x30); }    // +0x30 copied from the context's jump data (+0x1D8)
    int   &landingMotion()  { return *(int *)((char *)this + 0x34); }    // +0x34 landing action: 0xA0, 0xA1 or 0xA2
    int   &keepRunning()    { return *(int *)((char *)this + 0x38); }    // +0x38 land into the running landing (0xA2)
    int   &keepRunLatched() { return *(int *)((char *)this + 0x3C); }    // +0x3C keepRunning forced from now on
    float &runStartFrame()  { return *(float *)((char *)this + 0x40); }  // +0x40 start frame of action 0xA2
    float &motionScaleY()   { return *(float *)((char *)this + 0x44); }  // +0x44 second component of the take-off scale
    float &motionScaleZ()   { return *(float *)((char *)this + 0x48); }  // +0x48 third component of the take-off scale
    float &cliffHeight()    { return *(float *)((char *)this + 0x4C); }  // +0x4C ? (from the jump data +0x1D4; >= 2.0 selects 0xA1)
    float &motionSpeed()    { return *(float *)((char *)this + 0x50); }  // +0x50 1 / motionScaleZ, at least 0.8
};
