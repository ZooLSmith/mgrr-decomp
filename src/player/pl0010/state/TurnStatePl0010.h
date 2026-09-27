// REFINED
// TurnStatePl0010 -- Raiden (Pl0010 state machine) turning on the spot (state id 0x29).  The first
// update raises the player's turn flag (Pl0000+0x416C), leaving clears it; from the second update
// on vf14 lets the generic transitions run (FUN_00bb8ae0 / FUN_00bb8d00).  Fields below 0x30
// belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct TurnStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82850 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B912D0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B827D0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB1EB0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BB1F30 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCCAD0 slot 0x14  overrides StateMachineNode (update)
    virtual undefined4 vf18(undefined4 context);  // 00B82800 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB1FB0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82810 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object; the object is 0x38 bytes)
    int &field30()       { return *(int *)((char *)this + 0x30); }  // +0x30 ? (cleared by SafeCheck)
    int &updatedOnce()   { return *(int *)((char *)this + 0x34); }  // +0x34 0 on enter, 1 after the first vf14
};
