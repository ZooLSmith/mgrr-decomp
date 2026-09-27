// REFINED
// GlobalStatePl0010 -- the always-active global state of Raiden's (Pl0010) state machine.  On
// entry it resets the dash gear in the context, builds the table of action pairs handed to
// FUN_00a95e20 and raises the controller's gravity; on leave it restores gravity and frees the
// table.  The per-frame callbacks are the StateMachineNode ones (tail jumps).  Fields below 0x30
// belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct GlobalStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81600 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90F80 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BAAAD0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B81550 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00B81560 slot 0x10  overrides StateMachineNode (tail jump to the base)
    virtual void vf14(undefined4 * param_2);  // 00B81570 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B81580 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf1C(undefined4 param_2);  // 00B81590 slot 0x1C  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAAF90 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B815A0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int *&actionPairs()     { return *(int **)((char *)this + 0x30); }  // +0x30 heap table (200 bytes) of packed action pairs, built in vf08
    int  &actionPairCount() { return *(int *)((char *)this + 0x34); }   // +0x34 entries used in actionPairs
};
