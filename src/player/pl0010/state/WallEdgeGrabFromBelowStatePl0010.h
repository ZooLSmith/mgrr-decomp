// REFINED
// WallEdgeGrabFromBelowStatePl0010 -- Raiden (Pl0010 state machine) grabbing a wall edge from
// below (state id 0x2D): action 0xC5, then 0xC6 (keep moving) or 0xC7, kept in +0x30.  Fields
// below 0x30 belong to StateMachineNode; the object is 0x40 bytes.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct WallEdgeGrabFromBelowStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82AB0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91350 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82A30 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB2720 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BE11B0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCCDC0 slot 0x14  overrides StateMachineNode (update)
    virtual undefined4 vf18(undefined4 context);  // 00B82A60 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB27E0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82A70 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motionId()      { return *(int *)((char *)this + 0x30); }  // +0x30 current action: 0xC5, 0xC6 or 0xC7
    int &keepMoving()    { return *(int *)((char *)this + 0x34); }  // +0x34 fast enough (or latched) to continue moving
    int &field38()       { return *(int *)((char *)this + 0x38); }  // +0x38 ? (cleared on enter / first update, never set here)
    int &movingLatched() { return *(int *)((char *)this + 0x3C); }  // +0x3C keepMoving forced from now on
};
