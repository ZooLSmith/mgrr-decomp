// REFINED
// SlidingStatePl0010 -- Raiden (Pl0010 state machine) sliding state: motion 0x2C, then the
// slide loop 0x2D; leaving the slide (motions 0x2E / 0x2F) either lands (state 0xE) or hands
// over through FUN_00bb8d00, and the stick direction class from FUN_00b8b610 selects the next
// state.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct SlidingStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82660 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91270 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B825E0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB17C0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BB1870 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCC900 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B82610 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB1900 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82620 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &field30()     { return *(float *)((char *)this + 0x30); }  // +0x30 1.0 on enter
    int   &slideLooping() { return *(int *)((char *)this + 0x34); }   // +0x34 set once motion 0x2C ended and the loop 0x2D started
};
