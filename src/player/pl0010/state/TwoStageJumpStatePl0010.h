// REFINED
// TwoStageJumpStatePl0010 -- Raiden (Pl0010 state machine) second-stage jump (state id 0x2A):
// action 0xBA, then 0xBB; saves the camera angles (Pl0000+0x417C..0x4184 into +0x4188..0x4190)
// on the first update and restores them on leave.  The class adds no fields: everything below
// 0x30 belongs to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct TwoStageJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B828E0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B912F0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82870 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB2030 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BE0D50 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCCB70 slot 0x14  overrides StateMachineNode (update)
    virtual undefined4 vf18(undefined4 context);  // 00B82890 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB2140 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B828A0 slot 0x24  overrides StateMachineNode
};
