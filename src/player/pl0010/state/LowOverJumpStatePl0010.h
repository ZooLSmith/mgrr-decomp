// REFINED
// LowOverJumpStatePl0010 -- Raiden (Pl0010 state machine) vaulting over a low obstacle
// (motion 0xA6, speed scaled to the obstacle).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct LowOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81950 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91040 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B818E0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAC520 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF470 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCADE0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81900 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAC670 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81910 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motionId() { return *(int *)((char *)this + 0x30); }  // +0x30 vault motion (0xA6; 0xA4 / 0xA5 also tested)
};
