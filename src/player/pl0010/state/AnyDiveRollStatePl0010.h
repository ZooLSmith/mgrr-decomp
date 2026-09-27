// REFINED
// AnyDiveRollStatePl0010 -- Raiden (Pl0010 state machine) dive roll.  SafeCheck starts motion 0x30
// and saves the player's +0x417C..+0x4184 values (restored by vf20); qteSafeCheck handles the
// follow-up transitions.  The class adds no fields: everything below 0x30 belongs to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct AnyDiveRollStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B80C10 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B90BC0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B80BA0 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * context);  // 00BA8700 slot 0xC  overrides StateMachineNode (enter)
    virtual void qteSafeCheck(undefined4 * context);  // 00BDC910 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BC93E0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B80BC0 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BA8800 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B80BD0 slot 0x24  overrides StateMachineNode
};
