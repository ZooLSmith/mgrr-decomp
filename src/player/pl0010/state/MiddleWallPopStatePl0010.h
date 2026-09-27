// REFINED
// MiddleWallPopStatePl0010 -- Raiden (Pl0010 state machine) popping up a middle-height wall
// (motion 0xA9, speed scaled from the player parameters).  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct MiddleWallPopStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81B20 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B910A0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81AB0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BACBB0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF960 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BACCC0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81AD0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BACE20 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81AE0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &climbRate() { return *(float *)((char *)this + 0x30); }  // +0x30 parameter +0x31C / +0xD4 (animation speed)
};
