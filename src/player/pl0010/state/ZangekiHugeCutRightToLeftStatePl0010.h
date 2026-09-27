// REFINED
// ZangekiHugeCutRightToLeftStatePl0010 -- Raiden (Pl0010 state machine) blade-mode huge cut,
// right to left.  On enter it plays effect 0xF5 on object 0x20600 and sets the context heading
// (+0x3F8) to 90 degrees; qteSafeCheck drives the cut from the zangeki inputs.  The state has no
// fields of its own (fields below 0x30 belong to StateMachineNode).
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiHugeCutRightToLeftStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B833D0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91740 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB67A0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B83360 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE3BE0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B83370 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83380 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB68B0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83390 slot 0x24  overrides StateMachineNode
};
