// REFINED
// FreeFallStatePl0010 -- Raiden (Pl0010 state machine) "free fall" state.  On entry it picks the
// fall motion (0x73 / 0x74 / 0x75), each frame it sums the vertical distance fallen into the
// context and scales the air movement vector, and it hands over to state 0x13 (landing) once the
// ground is close.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct FreeFallStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81500 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90F60 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81490 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAA6C0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDE9A0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BAA8A0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BAA9A0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAAA40 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B814C0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &fallMotion()    { return *(int *)((char *)this + 0x30); }    // +0x30 fall action: 0x75, 0x73 (input held) or 0x74
    int   &motionPending() { return *(int *)((char *)this + 0x34); }    // +0x34 fallMotion still has to be started (vf14)
    float *prevPos()       { return (float *)((char *)this + 0x40); }   // +0x40 float[4] player position (+0x40) of the previous frame
    float &fallScale()     { return *(float *)((char *)this + 0x50); }  // +0x50 1.0 on enter; multiplied by the params' +0x164 every frame
};
