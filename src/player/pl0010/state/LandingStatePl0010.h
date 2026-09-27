// REFINED
// LandingStatePl0010 -- Raiden (Pl0010 state machine) landing after a jump / fall.  SafeCheck
// picks the landing motion (0x64..0x70) from the previous state, the stick input and a list of
// actions, then selects the landing effect (FUN_00aa92c0); vf14 waits for the motion to end or
// for the cancel time and hands over to the idle / run states.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct LandingStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81830 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91000 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B817C0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BABD30 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF1A0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCAA10 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BAC1F0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAC290 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B817F0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motionId() { return *(int *)((char *)this + 0x30); }  // +0x30 landing motion (0x64..0x70); -1 on enter
    int &field34()  { return *(int *)((char *)this + 0x34); }  // +0x34 zeroed on enter
};
