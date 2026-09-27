// REFINED
// OvercomeBridgeStatePl0010 -- Raiden (Pl0010 state machine) running across the collapsing
// bridge (Ba0033 objects 0xF0033..0xF0036, "BridgeRun" animation).  On entry (SafeCheck) it
// builds a 4-point path from the player's position to the bridge frame and hands it to the
// path follower at +0x54; qteSafeCheck steers the player along it; vf14 runs the motion
// sequence 0xDA -> 0xD8 -> 0xDB / 0xDC.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct OvercomeBridgeStatePl0010 : public StateMachineNode {
    // Point list allocated on entry (0x14 bytes, FUN_00dd3500) -- elements are float[3].
    struct PointList {
        int    field0;      // +0x0
        float *points;      // +0x4  element i at points + i*3
        int    capacity;    // +0x8
        int    count;       // +0xC
        int    ownsBuffer;  // +0x10 buffer freed with FUN_00dd48d0 when nonzero
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82000 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91140 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81F60 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BCB190 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BAF730 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCB5B0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81FA0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BDFA10 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81FB0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    OvercomeBridgeStatePl0010(undefined4 param_2);  // 00B81FD0 (argument forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    int        &exitRequested() { return *(int *)((char *)this + 0x30); }         // +0x30 set once the run should end (triggers motion 0xD8)
    int        &motionId()      { return *(int *)((char *)this + 0x34); }         // +0x34 current motion: 0xDA run, 0xD8, 0xDB, 0xDC
    float      &holdTime()      { return *(float *)((char *)this + 0x38); }       // +0x38 accumulated frame time (x60) during motion 0xD8
    float      *startPos()      { return (float *)((char *)this + 0x40); }        // +0x40 float[4] player position on entry
    PointList *&pointList()     { return *(PointList **)((char *)this + 0x50); }  // +0x50 path points (owned)
    char       *pathFollower()  { return (char *)this + 0x54; }                   // +0x54 embedded member (FUN_00a603a0 / 0x00A60400)
};
