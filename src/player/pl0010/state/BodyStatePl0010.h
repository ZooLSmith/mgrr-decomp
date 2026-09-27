// REFINED
// BodyStatePl0010 -- Raiden (Pl0010 state machine) root "body" node.  On enter it creates its
// first child state through the context's factory: 10 when the player's +0xD28 exceeds the squared
// parameter +0x14C and a button of maskE48 is held, otherwise 0x11.  It has no fields of its own; fields below
// 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct BodyStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81080 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90CA0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BA95E0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B80FE0 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00B80FF0 slot 0x10  overrides StateMachineNode (tail jump to the base)
    virtual void vf14(undefined4 * param_2);  // 00B81000 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B81010 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00B81020 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81040 slot 0x24  overrides StateMachineNode
};
