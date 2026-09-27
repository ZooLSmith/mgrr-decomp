// REFINED
// LongCliffOverJumpStatePl0010 -- Raiden (Pl0010 state machine) jumping over a long cliff gap.
// SafeCheck plays the take-off motion (0x99 / 0x9B, alternating with the context flag +0x110)
// and vf14 chains the flight motion (0x9A / 0x9C) scaled to the jump length.  Fields below 0x30
// belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct LongCliffOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B818C0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91020 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81850 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAC320 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF390 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCAC70 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81870 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAC460 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81880 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &flightScale()   { return *(float *)((char *)this + 0x30); }  // +0x30 jump length parameter * 0.25
    float &flightBlend()   { return *(float *)((char *)this + 0x34); }  // +0x34 1 / flightScale, raised to 1.0 when not above it
    int   &takeOffMotion() { return *(int *)((char *)this + 0x38); }    // +0x38 0x99 or 0x9B
    int   &flightMotion()  { return *(int *)((char *)this + 0x3C); }    // +0x3C 0x9A or 0x9C
};
