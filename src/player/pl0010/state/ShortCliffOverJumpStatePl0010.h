// REFINED
// ShortCliffOverJumpStatePl0010 -- Raiden (Pl0010 state machine) short "cliff over" jump.  The
// motion (0x82..0x8D) is chosen from free-run activity 1 (first jump) or 2 (chained jump) by
// FUN_00bb1110; 0x8C / 0x8D play the 6-slot "CliffOverShort" blend (FUN_00bb1260), the others
// a single motion whose rate / scale follow the activity's distance and height.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ShortCliffOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B825C0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91250 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B82540 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * context);  // 00BB14D0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BE0C60 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BCC5F0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B82570 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * context);  // 00BB16F0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B82580 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int &jumpMotion()   { return *(int *)((char *)this + 0x30); }  // +0x30 cliff-over motion id (0x82..0x8D), from FUN_00bb1110
    int &blendMotion()  { return *(int *)((char *)this + 0x34); }  // +0x34 -1 on enter; handle returned by FUN_00a9f4c0("CliffOverShort")
};
