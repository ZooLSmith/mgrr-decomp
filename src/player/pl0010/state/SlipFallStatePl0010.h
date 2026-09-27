// REFINED
// SlipFallStatePl0010 -- Raiden (Pl0010 state machine) slip-fall state: while falling the
// position is nudged by the vectors of FUN_00a925a0 / FUN_00a92640; landing goes to state 0xE
// (ground reached) or 0x13 (ground close, <= 0.36).  The node adds no fields of its own
// (fields below 0x30 belong to StateMachineNode).
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct SlipFallStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82720 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91290 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82680 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00B826A0 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * context);  // 00BB19A0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BB1B00 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B826B0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * context);  // 00B826C0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B826E0 slot 0x24  overrides StateMachineNode
};
