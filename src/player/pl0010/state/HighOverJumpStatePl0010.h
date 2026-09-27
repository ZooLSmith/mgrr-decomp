// REFINED
// HighOverJumpStatePl0010 -- Raiden (Pl0010 state machine) "high over jump" state (motions
// 0xB3 / 0xB4 take-off, 0xB5 in the air).  SafeCheck solves the launch angle and speed
// (FUN_00d83250) for the obstacle height; qteSafeCheck then moves the player along the
// ballistic arc through vf70 and hands over to landing / wall states.  Fields below 0x30 belong
// to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct HighOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B816B0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B90FA0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81620 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAB090 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDEB40 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCA620 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B81660 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAB230 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B81670 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &launchAngle()     { return *(float *)((char *)this + 0x30); }  // +0x30 radians, solved by FUN_00d83250
    float &launchSpeed()     { return *(float *)((char *)this + 0x34); }  // +0x34 solved by FUN_00d83250
    float &prevForward()     { return *(float *)((char *)this + 0x38); }  // +0x38 forward offset (cos part) of the previous frame
    float &prevUp()          { return *(float *)((char *)this + 0x3C); }  // +0x3C upward offset (sin part) of the previous frame
    int   &pastApex()        { return *(int *)((char *)this + 0x40); }    // +0x40 set once airTime > 1.0; vf14 then allows landing
    float &startY()          { return *(float *)((char *)this + 0x44); }  // +0x44 player height (+0x44) at take-off
    float &airTime()         { return *(float *)((char *)this + 0x48); }  // +0x48 time in motion 0xB5 (scaled into the arc)
    float &gravityDrop()     { return *(float *)((char *)this + 0x4C); }  // +0x4C accumulated gravity term of the arc
    int   &mayFall()         { return *(int *)((char *)this + 0x50); }    // +0x50 falling below the arc hands over (FUN_00bb91f0)
    int   &wallHit()         { return *(int *)((char *)this + 0x54); }    // +0x54 a wall / ceiling contact was reported (Pl0000+0x4268)
    float &speedScale()      { return *(float *)((char *)this + 0x58); }  // +0x58 0.8 on enter, 0.5 for low obstacles
    int   &savedCtrl1C0()    { return *(int *)((char *)this + 0x5C); }    // +0x5C controller +0x1C0, restored on leave (FUN_008e0b70)
    int   &savedCtrl1CC()    { return *(int *)((char *)this + 0x60); }    // +0x60 controller +0x1CC, restored on leave (FUN_008e0ba0)
};
