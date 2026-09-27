// REFINED
// DiveRollStatePl0010 -- Raiden (Pl0010 state machine) free-run dive roll (action 0x30, then
// 0x31 on the ground or 0x32 in the air).  During 0x31 the player keeps rolling with the saved
// velocity, damped every frame by the parameter +0x164.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct DiveRollStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B813D0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90F20 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81350 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAA3F0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDE500 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCA190 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81380 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAA4C0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81390 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float  &rollSpeedScale(){ return *(float *)((char *)this + 0x30); }    // +0x30 1.0 on enter, multiplied by the parameter +0x164 each frame of 0x31
};
