// REFINED
// WalkStatePl0010 -- Raiden (Pl0010 state machine) walking (state id 0x2C): action 0x1C / 0x1D,
// then 0x1E; qteSafeCheck switches to the idle (0x11) or dash (10) state from the stick speed
// and to the free fall (0xE) state when the ground is lost.  The class adds no fields:
// everything below 0x30 belongs to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct WalkStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82A10 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91330 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B829A0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB2550 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BCCC40 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BB2600 slot 0x14  overrides StateMachineNode (update)
    virtual undefined4 vf18(undefined4 context);  // 00B829C0 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB2690 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B829D0 slot 0x24  overrides StateMachineNode
};
