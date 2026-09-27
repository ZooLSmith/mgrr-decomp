// REFINED
// QuickTurnStatePl0010 -- Raiden (Pl0010 state machine) quick turn: motion 0x48 or 0x49 chosen
// on entry from FUN_00b8afd0.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct QuickTurnStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B823F0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91210 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B82380 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB0C10 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE08F0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCC570 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B823A0 slot 0x18  overrides StateMachineNode (jmp to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB0CE0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B823B0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &turnMotion() { return *(int *)((char *)this + 0x30); }  // +0x30 0x48 (FUN_00b8afd0 == 3) or 0x49
};
