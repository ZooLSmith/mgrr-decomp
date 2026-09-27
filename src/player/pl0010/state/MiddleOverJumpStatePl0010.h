// REFINED
// MiddleOverJumpStatePl0010 -- Raiden (Pl0010 state machine) vaulting over a middle-height
// obstacle: motion 0xA8 -> 0xAA -> landing 0xAB / 0xAC, or 0xB0 when the run continues.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct MiddleOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81A90 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91080 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81A10 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAC920 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF6E0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCB0F0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BACA50 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BACB00 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81A50 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &landMotion()    { return *(int *)((char *)this + 0x30); }    // +0x30 0xAB, 0xAC or 0xB0
    int   &continueRun()   { return *(int *)((char *)this + 0x34); }    // +0x34 switch the landing to 0xB0
    int   &runRequested()  { return *(int *)((char *)this + 0x38); }    // +0x38 latched by the early 0xAB check
    float &runStartFrame() { return *(float *)((char *)this + 0x3C); }  // +0x3C frame of 0xAB passed to FUN_00aa42d0
    float &height()        { return *(float *)((char *)this + 0x40); }  // +0x40 player parameter +0x2B4 (2.0 / 0.35 thresholds)
    float &vaultRate()     { return *(float *)((char *)this + 0x44); }  // +0x44 parameter +0x2AC / +0xD4 (FUN_00a95ff0 middle)
    int   &landStarted()   { return *(int *)((char *)this + 0x48); }    // +0x48 set once the landing motion started
    int   &landEnded()     { return *(int *)((char *)this + 0x4C); }    // +0x4C set when the landing motion finished
};
