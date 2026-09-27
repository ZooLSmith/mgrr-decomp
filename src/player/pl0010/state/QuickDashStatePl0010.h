// REFINED
// QuickDashStatePl0010 -- Raiden (Pl0010 state machine) quick dash (motion 0x39).  The state has
// no fields of its own; everything below 0x30 belongs to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct QuickDashStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82360 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B911F0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B822F0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB0AD0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BCC3A0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCC490 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82310 slot 0x18  overrides StateMachineNode (jmp to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB0B80 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82320 slot 0x24  overrides StateMachineNode
};
