// REFINED
// IdleStatePl0010 -- Raiden (Pl0010 state machine) idle state.  On entry it picks the stop /
// idle motion from the previous state (FUN_00bab310), stops the dash upper-body motions, and
// each frame leaves for the walk/run states when the stick moves, plays the idle turn motion
// 0xD and requests fall states (0x15 / 0x16) when standing over a drop.  Fields below 0x30
// belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct IdleStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81740 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90FC0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B816D0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAB440 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BCA750 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BAB570 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BAB720 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAB7C0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81700 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &fromState44()  { return *(int *)((char *)this + 0x30); }  // +0x30 entered from state 0x44 (motion 6 running; ends with motion 7)
    int &motionHandle() { return *(int *)((char *)this + 0x34); }  // +0x34 -1 on enter; result of FUN_00aa3f60 / FUN_00aa9280
};
