// REFINED
// ZangekiOnPartsStatePl0010 -- Raiden (Pl0010 state machine) "zangeki on parts": the blade-mode
// state entered against a target's body part (Metal Gear RAY etc.).  It positions a camera-like
// rig from the target's parts matrices (FUN_00bd0700) and drives a phase/step sequence
// (qteSafeCheck).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiOnPartsStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B837D0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B918B0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB75F0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BCFF40 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BFFF20 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B83760 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B83770 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BD0590 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83780 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiOnPartsStatePl0010(undefined4 owner);  // 00B837A0 (owner is forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    int    &phase()        { return *(int *)((char *)this + 0x30); }      // +0x30 qteSafeCheck switch value (0xC = rig frozen)
    int    &step()         { return *(int *)((char *)this + 0x34); }      // +0x34 step counter inside the phase
    int    &partsKind()    { return *(int *)((char *)this + 0x38); }      // +0x38 1..0x10, derived from the target parts number / model id
    float  *vec40()        { return (float *)((char *)this + 0x40); }     // +0x40 float[4] (copied from the player's +0x40)
    float  *vec50()        { return (float *)((char *)this + 0x50); }     // +0x50 float[4] (from player vf84)
    float  *anchorPos()    { return (float *)((char *)this + 0x60); }     // +0x60 float[4] parts position (or blend of two)
    float  *offsetPos()    { return (float *)((char *)this + 0x70); }     // +0x70 float[4] anchorPos + rotated local offset
    float  *rot80()        { return (float *)((char *)this + 0x80); }     // +0x80 float[4] (0, yaw, 0, ?)
    float  &pitchA0()      { return *(float *)((char *)this + 0xA0); }    // +0xA0
    float  &yawA4()        { return *(float *)((char *)this + 0xA4); }    // +0xA4 atan2 of (anchorPos - offsetPos) in XZ
    float  *vecB0()        { return (float *)((char *)this + 0xB0); }     // +0xB0 float[4] second rotated point
    float  *vecC0()        { return (float *)((char *)this + 0xC0); }     // +0xC0 float[4] (context +0x430 / +0x440)
    float  &blendTime()    { return *(float *)((char *)this + 0xD8); }    // +0xD8 divisor of the player's timer (+0x341C)
    float  &distance()     { return *(float *)((char *)this + 0xDC); }    // +0xDC length of the local offset (context +0x410)
    float  &angleF4()      { return *(float *)((char *)this + 0xF4); }    // +0xF4
    float  &angleF8()      { return *(float *)((char *)this + 0xF8); }    // +0xF8
    // +0xFC: embedded member built by FUN_00a603a0, torn down by 00A60400 (cXml::cXml_7)
    float  &value15C()     { return *(float *)((char *)this + 0x15C); }   // +0x15C cleared when qteSafeCheck starts (phase 0)
    float  &value160()     { return *(float *)((char *)this + 0x160); }   // +0x160 set to 35.0 by SafeCheck
    float  *vec170()       { return (float *)((char *)this + 0x170); }    // +0x170 float[4]
    float  *vec180()       { return (float *)((char *)this + 0x180); }    // +0x180 float[4]
    float  &timer198()     { return *(float *)((char *)this + 0x198); }   // +0x198 phase 7: accumulated FUN_00a93060 time (-> phase 8 above 0.5)
    float  *rot1A0()       { return (float *)((char *)this + 0x1A0); }    // +0x1A0 float[4] player vf84 at the start of phase 1
    float  *rot1B0()       { return (float *)((char *)this + 0x1B0); }    // +0x1B0 float[4] rotation last given to the player (vf88) in phase 1
    float  *pos1C0()       { return (float *)((char *)this + 0x1C0); }    // +0x1C0 float[4] player position (phase 6)
    int   *&object1D0()    { return *(int **)((char *)this + 0x1D0); }    // +0x1D0 object orbited by FUN_00bd1d40 (Et000d effect / context +0x534 object)
    int    &effectPartsNo(){ return *(int *)((char *)this + 0x1D4); }     // +0x1D4 target parts number the effect is attached to (-1 after FUN_00a8caf0)
    float  *savedOffsetPos(){ return (float *)((char *)this + 0x1E0); }   // +0x1E0 float[4] copy of offsetPos kept by qteSafeCheck
    float  *savedRot()     { return (float *)((char *)this + 0x1F0); }    // +0x1F0 float[4] copy of rot80 kept by qteSafeCheck
    float  *vec210()       { return (float *)((char *)this + 0x210); }    // +0x210 float[4]
};
