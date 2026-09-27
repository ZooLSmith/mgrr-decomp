// REFINED
// WallEdgeGrabFromOverStatePl0010 -- Raiden (Pl0010 state machine): grabbing a wall edge from
// above (motion 0xC4, followed by 0xC6 or 0xC7).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct WallEdgeGrabFromOverStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82B50 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91370 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B82AD0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB2870 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE1300 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCCEE0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82B00 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB2930 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82B10 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motion()        { return *(int *)((char *)this + 0x30); }  // +0x30 current action: 0xC4 grab, then 0xC6 or 0xC7
    int &climbReady()    { return *(int *)((char *)this + 0x34); }  // +0x34 set by qteSafeCheck (height check passed or input latched)
    int &field38()       { return *(int *)((char *)this + 0x38); }  // +0x38 zeroed on enter / first update; with climbReady selects 0xC6
    int &inputLatched()  { return *(int *)((char *)this + 0x3C); }  // +0x3C set when the player's input block (+0x4268) reports +0x94 or +0x24
};
