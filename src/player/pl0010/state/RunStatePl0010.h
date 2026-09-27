// REFINED
// RunStatePl0010 -- Raiden (Pl0010 state machine) "run" state.  Entering it resets the dash
// gear saved in the context; coming from the dash (state 10, or action 100) it plays the
// "RunFromDash" motion, otherwise motion 0x11 / 0x13.  Every frame it switches to walk (0x11)
// when the stick is released and watches free-run activities 8 / 5 (states 0x16 / 0x15).
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct RunStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82490 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91230 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82410 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB0D60 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BE09A0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BB0F20 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B82440 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB0FC0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82450 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &runFromDashMotion() { return *(int *)((char *)this + 0x30); }    // +0x30 -1 on enter; handle returned by FUN_00a9f4c0("RunFromDash")
    float &activity8Timer()    { return *(float *)((char *)this + 0x34); }  // +0x34 time free-run activity 8 has been in reach (limit 1/6 s)
    float &activity5Timer()    { return *(float *)((char *)this + 0x38); }  // +0x38 time free-run activity 5 has been in reach
};
