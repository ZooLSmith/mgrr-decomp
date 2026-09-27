// REFINED
// ZangekiLandingStatePl0010 -- Raiden (Pl0010 state machine) landing in blade mode.  On enter it
// starts motion 0x13F (FUN_00aa4080) and resets the player's +0x890 rotation; vf14 requests
// state 0x3D once the tracked motion (+0x30) has ended.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiLandingStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83610 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91850 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB6C40 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B835A0 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00B835B0 slot 0x10  overrides StateMachineNode (tail jump to the base)
    virtual void vf14(undefined4 * param_2);  // 00BB6D20 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B835C0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB6DA0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B835D0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motionId() { return *(int *)((char *)this + 0x30); }  // +0x30 tracked motion (0 on enter, -1 on leave; -1 = none)
};
