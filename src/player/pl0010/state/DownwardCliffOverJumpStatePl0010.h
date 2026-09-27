// REFINED
// DownwardCliffOverJumpStatePl0010 -- Raiden (Pl0010 state machine) free-run jump down a cliff.
// A long drop plays actions 0xCF -> 0xD0 -> 0xD1 along a ballistic arc (angle / speed from
// FUN_00d83290) and lands in state 0x13; a short one plays 0x33 or 0x34 instead.  Fields below
// 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct DownwardCliffOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81470 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90F40 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B813F0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BDE5D0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDE790 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCA480 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BAA570 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAA620 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81430 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float  &jumpAngle()     { return *(float *)((char *)this + 0x30); }    // +0x30 launch angle (radians) from FUN_00d83290
    float  &jumpSpeed()     { return *(float *)((char *)this + 0x34); }    // +0x34 launch speed (14.0)
    float  &prevForward()   { return *(float *)((char *)this + 0x38); }    // +0x38 forward offset of the previous frame (cos part)
    float  &prevUp()        { return *(float *)((char *)this + 0x3C); }    // +0x3C upward offset of the previous frame (sin part)
    int    &landing()       { return *(int *)((char *)this + 0x40); }      // +0x40 set once the player moves down: land near the ground
    int    &airborne()      { return *(int *)((char *)this + 0x44); }      // +0x44 set when action 0xD1 was started
    float  &airTime()       { return *(float *)((char *)this + 0x48); }    // +0x48 time since take-off (+= frame time)
    float  &startHeight()   { return *(float *)((char *)this + 0x4C); }    // +0x4C player +0x44 (height) at the start
    int    &action()        { return *(int *)((char *)this + 0x50); }      // +0x50 current action: 0xCF / 0xD0 (long) or 0x33 / 0x34 (short)
    int    &shortDrop()     { return *(int *)((char *)this + 0x54); }      // +0x54 set for the short drop (0x33 / 0x34)
};
