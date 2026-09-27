// REFINED
// WallPopStatePl0010 -- Raiden (Pl0010 state machine): popping up over a wall edge (action 0xC0,
// or 0xC1 when the context speed value is at least 2.0).  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct WallPopStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82BE0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91390 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B82B70 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB29C0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE1450 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCD000 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82B90 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB2AB0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82BA0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &motion() { return *(int *)((char *)this + 0x30); }  // +0x30 action started by SafeCheck: 0xC0 or 0xC1
};
