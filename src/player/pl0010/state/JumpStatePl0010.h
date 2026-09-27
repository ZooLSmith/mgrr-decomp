// REFINED
// JumpStatePl0010 -- Raiden (Pl0010 state machine) jump state.  SafeCheck starts the take-off
// motion (0x5B moving / 0x5C standing); vf14 switches to the air motion (0x5E / 0x5F) and
// captures the move vector; qteSafeCheck drives the rise (a timed upward push plus the air
// move vector, applied through vf70) and hands over to landing (0x13) or falling (0xE) once
// the player drops below the take-off height.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct JumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B817A0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90FE0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BAB8B0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAB960 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDEE30 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BABA60 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BABBC0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BABCA0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81760 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &startY()      { return *(float *)((char *)this + 0x30); }  // +0x30 player height (+0x44) on enter
    int   &inAir()       { return *(int *)((char *)this + 0x38); }    // +0x38 air motion 0x5E / 0x5F has started
    float &airTime()     { return *(float *)((char *)this + 0x3C); }  // +0x3C time since the rise started
    float &prevRise()    { return *(float *)((char *)this + 0x40); }  // +0x40 riseSpeed * airTime of the previous frame
    float &field44()     { return *(float *)((char *)this + 0x44); }  // +0x44 zeroed on enter
    float *gravityAcc()  { return (float *)((char *)this + 0x50); }   // +0x50 float[4] accumulated gravity (FUN_00a8bac0)
    float &pushTime()    { return *(float *)((char *)this + 0x60); }  // +0x60 remaining upward push time (0 .. 1/6 s)
    int   &rising()      { return *(int *)((char *)this + 0x64); }    // +0x64 the upward push is applied
    float *moveVec()     { return (float *)((char *)this + 0x70); }   // +0x70 float[4] air move vector (decays by 0.8 without input)
    float &currentY()    { return *(float *)((char *)this + 0x80); }  // +0x80 player height (+0x44) this frame
    int   &falling()     { return *(int *)((char *)this + 0x84); }    // +0x84 dropped more than 0.001 below currentY
    float &riseSpeed()   { return *(float *)((char *)this + 0x88); }  // +0x88 upward speed (set outside this file)
    float &field8C()     { return *(float *)((char *)this + 0x8C); }  // +0x8C zeroed on enter
    int   &phase()       { return *(int *)((char *)this + 0x90); }    // +0x90 1 take-off, 2 air, 3 air motion near its end
    int   &riseStarted() { return *(int *)((char *)this + 0x94); }    // +0x94 the rise initialisation has run
    int   &motion()      { return *(int *)((char *)this + 0x98); }    // +0x98 current motion: 0x5B / 0x5C / 0x5E / 0x5F
};
