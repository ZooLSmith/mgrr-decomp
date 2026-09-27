// REFINED
// OvercomeContainerStatePl0010 -- Raiden (Pl0010 state machine) climbing over a container.
// FUN_00baf9c0 (same file) picks motion 0xB7 / 0xB8 from the side the target is on and computes
// the climb height into +0x30; qteSafeCheck turns the player towards the target and moves him
// along it (Behavior vf70 / vf74) while the climb motion plays; vf14 re-queries the target when
// one of the climb motions (0xB5 / 0xB7 / 0xB8) is playing.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct OvercomeContainerStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B820B0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91170 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82030 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BAFC00 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BDFB70 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCC000 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B82060 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BAFCD0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82070 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &climbHeight()  { return *(float *)((char *)this + 0x30); }  // +0x30 2 * (target y - player y), at least 4.0 (scales the vf74 lift)
    int   &climbPending() { return *(int *)((char *)this + 0x34); }    // +0x34 set while a climb motion (0xB5/0xB7/0xB8) plays; cleared on enter and by FUN_00baf9c0
};
