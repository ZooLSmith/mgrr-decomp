// REFINED
// ZangekiHugeHoldStatePl0010 -- Raiden (Pl0010 state machine) blade-mode huge-cut hold.  On enter
// it sets two 10.0 values, plays effect 0xEE on object 0x20600 and sets context +0x3F4; each frame
// it runs the zangeki input checks (FUN_00bd61b0 / FUN_00bd6f70).  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiHugeHoldStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83480 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91760 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB6960 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B833F0 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE3E30 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B83400 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83410 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00B83420 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83440 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &value30() { return *(float *)((char *)this + 0x30); }  // +0x30 10.0 on enter
    float &value34() { return *(float *)((char *)this + 0x34); }  // +0x34 10.0 on enter
};
