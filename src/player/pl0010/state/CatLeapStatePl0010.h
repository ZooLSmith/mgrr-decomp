// REFINED
// CatLeapStatePl0010 -- Raiden (Pl0010 state machine) free-run "cat leap" jump (actions 0xCA ->
// 0xCB -> 0xCC).  While airborne it moves the player along a ballistic arc (angle / speed from
// FUN_00d83250, then fixed to 50 deg / 17.0) and lands in state 0x13 near the ground.  Fields below
// 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct CatLeapStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81120 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90CC0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B810A0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BA9690 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDD2F0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BA97C0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B810D0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BA98F0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B810E0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float  &jumpAngle()     { return *(float *)((char *)this + 0x30); }    // +0x30 launch angle (radians; 0.8726646 = 50 deg)
    float  &jumpSpeed()     { return *(float *)((char *)this + 0x34); }    // +0x34 launch speed (17.0)
    float  &prevForward()   { return *(float *)((char *)this + 0x38); }    // +0x38 forward offset of the previous frame (cos part)
    float  &prevUp()        { return *(float *)((char *)this + 0x3C); }    // +0x3C upward offset of the previous frame (sin part)
    int    &landing()       { return *(int *)((char *)this + 0x40); }      // +0x40 set once the player moves down: land near the ground
    int    &airborne()      { return *(int *)((char *)this + 0x44); }      // +0x44 set when action 0xCC was started
    float  &airTime()       { return *(float *)((char *)this + 0x48); }    // +0x48 time since take-off (+= frame time)
    float  &startHeight()   { return *(float *)((char *)this + 0x4C); }    // +0x4C player +0x44 (height) at the start
};
