// REFINED
// AvoidMiddleOverJumpStatePl0010 -- Raiden (Pl0010 state machine) free-run vault over a
// middle-height obstacle: action 0xA8 (take-off), 0xAA (over), then the landing action kept in
// +0x30 (0xAB).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct AvoidMiddleOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B80F30 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90C60 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B80EC0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BA9180 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDD120 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BC97C0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BA9290 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BA9340 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B80EF0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int    &landingAction() { return *(int *)((char *)this + 0x30); }      // +0x30 action played after 0xAA (0xAB)
    int    &landingStarted(){ return *(int *)((char *)this + 0x34); }      // +0x34 set when 0xAA ended and landingAction was started
    int    &landed()        { return *(int *)((char *)this + 0x38); }      // +0x38 set when landingAction ended
};
