// REFINED
// SlipLandingStatePl0010 -- Raiden (Pl0010 state machine) slip-landing state: plays motion 0x2C
// with the sliding camera angles; leaves to state 0xE (ground reached) or 0x13 (ground close,
// <= 0.36).  The node adds no fields of its own (fields below 0x30 belong to StateMachineNode).
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct SlipLandingStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B827B0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B912B0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82740 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB1BE0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BB1C90 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BB1D40 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B82760 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB1E20 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82770 slot 0x24  overrides StateMachineNode
};
