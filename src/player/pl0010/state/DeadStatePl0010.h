// REFINED
// DeadStatePl0010 -- Raiden (Pl0010 state machine) death state.  It owns an embedded
// cEspControler at +0x30 and on enter sets the context's death flags.  Fields below 0x30 belong
// to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct DeadStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81320 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90EF0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B90E10 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B81280 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00B90EA0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B81290 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B812A0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00B812B0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B812D0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    DeadStatePl0010(undefined4 param_2);  // 00B812F0

    // fields (absolute byte offsets from the start of the object)
    void   *espControler()  { return (char *)this + 0x30; }                // +0x30 embedded cEspControler
};
