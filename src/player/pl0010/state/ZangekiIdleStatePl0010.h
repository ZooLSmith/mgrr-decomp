// REFINED
// ZangekiIdleStatePl0010 -- Raiden (Pl0010 state machine) blade-mode idle.  On enter it starts
// motion 0xEB with the layer motion from FUN_00bbc5f0 (FUN_00bd6370); each frame it runs the
// zangeki input checks and may request state 0x35.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiIdleStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83500 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91810 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BE3E60 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B91780 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE3F10 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B834A0 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B834B0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB6A70 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B834C0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int          &motion()      { return *(int *)((char *)this + 0x30); }           // +0x30 0xEB on enter
    unsigned int &layerMotion() { return *(unsigned int *)((char *)this + 0x34); }  // +0x34 from FUN_00bbc5f0; blended out on leave (player mode 8), then -1
};
