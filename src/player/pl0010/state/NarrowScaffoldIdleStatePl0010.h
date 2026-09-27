// REFINED
// NarrowScaffoldIdleStatePl0010 -- Raiden (Pl0010 state machine) standing still on a narrow
// scaffold (beam / ledge).  qteSafeCheck probes the scaffold edges with eight downward ray casts
// ("narrow") and snaps the player back onto it; SafeCheck / vf20 toggle the motion controller
// (player +0x764, +0x104).  The class adds no fields: everything below 0x30 belongs to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct NarrowScaffoldIdleStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81D30 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B910E0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B81CB0 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * context);  // 00BAD050 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BAD100 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00B81CD0 slot 0x14  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf18(undefined4 context);  // 00B81CE0 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BAE2B0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B81CF0 slot 0x24  overrides StateMachineNode
};
