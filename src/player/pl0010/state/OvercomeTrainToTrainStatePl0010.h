// REFINED
// OvercomeTrainToTrainStatePl0010 -- Raiden (Pl0010 state machine) jumping from one train to the
// next.  On entry (SafeCheck) it plays motion 0xB5 and records how far below the landing frame
// (context +0xC4) the player is; qteSafeCheck moves the player towards the frame along a cosine
// arc.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct OvercomeTrainToTrainStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B822D0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B911D0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B82250 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB07F0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE0670 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BB0940 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82280 slot 0x18  overrides StateMachineNode (thunk: jmp to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB0A00 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82290 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &heightDelta() { return *(float *)((char *)this + 0x30); }  // +0x30 landing frame y minus player y (when above)
    int   &jumpDone()    { return *(int *)((char *)this + 0x34); }    // +0x34 set when motion 0xB7 / 0xB8 / 0xB5 finished
};
