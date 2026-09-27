// REFINED
// DashStatePl0010 -- Raiden (Pl0010 state machine) "dash" (ninja run) state.  It keeps a gear
// level (2/3) that rises while the dash button is held, leans the body into turns, watches the
// stick for a quick reverse flick and switches the upper-body motions (0x29A / 0x29B, 0x482 /
// 0x483).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct DashStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81260 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90DF0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B90D00 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BC9C70 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDD4E0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BAA0F0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81210 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAA250 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81220 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float  &field30()       { return *(float *)((char *)this + 0x30); }    // +0x30 zeroed on enter
    float  &field34()       { return *(float *)((char *)this + 0x34); }    // +0x34 zeroed on enter
    float  &stopTimer()     { return *(float *)((char *)this + 0x38); }    // +0x38 count-down (1/6 s) while the dash input is released
    int    &motionHandle()  { return *(int *)((char *)this + 0x3C); }      // +0x3C -1 on enter; result of FUN_00a9f560 / FUN_00aa9280
    float  &gearCharge()    { return *(float *)((char *)this + 0x44); }    // +0x44 time held towards the next gear (1.6666666 s); saved in the context +0x38
    float  &gearCooldown()  { return *(float *)((char *)this + 0x48); }    // +0x48 1.0 after a gear change, counts down; saved in the context +0x3C
    int    &gearLevel()     { return *(int *)((char *)this + 0x4C); }      // +0x4C 2 or 3 (raised while < 3); saved in the context +0x40
    int    &gearUpAllowed() { return *(int *)((char *)this + 0x50); }      // +0x50 non-zero: holding the input can raise the gear
    float  &maxLean()       { return *(float *)((char *)this + 0x54); }    // +0x54 60.0: lean clamp (degrees)
    float  &lean()          { return *(float *)((char *)this + 0x58); }    // +0x58 smoothed lean angle (degrees)
    int    &flickActive()   { return *(int *)((char *)this + 0x5C); }      // +0x5C stick flick being timed
    float  &flickTimer()    { return *(float *)((char *)this + 0x60); }    // +0x60 time since the flick started (limit 1/12 s)
    float  *prevStick()     { return (float *)((char *)this + 0x70); }     // +0x70 float[4] stick vector of the previous frame
    float  *flickStick()    { return (float *)((char *)this + 0x80); }     // +0x80 float[4] stick vector when the flick started
    float  &upperTimer()    { return *(float *)((char *)this + 0x90); }    // +0x90 -1.0 = idle; 2.0 after the upper-body motion is released
    int    &startFlag94()   { return *(int *)((char *)this + 0x94); }      // +0x94 argument of FUN_00ba9bf0 (1 = from SafeCheck)
    int    &field98()       { return *(int *)((char *)this + 0x98); }      // +0x98 keeps the stop timer running
    float  *vecA0()         { return (float *)((char *)this + 0xA0); }     // +0xA0 float[4] zeroed on enter
    int    &stopping()      { return *(int *)((char *)this + 0xB0); }      // +0xB0 set while stopTimer runs
    float  &inputHeldTime() { return *(float *)((char *)this + 0xB4); }    // +0xB4 time the dash input has been held (+1/60 per frame)
};
