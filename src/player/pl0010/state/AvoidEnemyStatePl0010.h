// REFINED
// AvoidEnemyStatePl0010 -- Raiden (Pl0010 state machine) "avoid enemy" free-run state: plays the
// vault motion 0x52 (optionally chained into 0x53 by a button press), lets the camera follow the
// motion and hands over to the run / dash states when it ends.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct AvoidEnemyStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B80EA0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90C40 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B80E20 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BA8EF0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDCEA0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BA8FF0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B80E50 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BA90B0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B80E60 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int    &motionId()      { return *(int *)((char *)this + 0x30); }      // +0x30 current action: 0x52 (vault) or 0x53 (follow-up)
    float  &field34()       { return *(float *)((char *)this + 0x34); }    // +0x34 zeroed on enter
    int    &field38()       { return *(int *)((char *)this + 0x38); }      // +0x38 zeroed on enter
    float  &nextFrame()     { return *(float *)((char *)this + 0x3C); }    // +0x3C motion frame after which the camera is re-aimed (0 = right away)
    int    &chainRequest()  { return *(int *)((char *)this + 0x40); }      // +0x40 button pressed in frames 0x14..0x1E: chain into 0x53
};
