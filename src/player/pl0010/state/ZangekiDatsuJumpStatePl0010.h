// REFINED
// ZangekiDatsuJumpStatePl0010 -- Raiden's (Pl0010) "zangeki datsu" jump state: the blade-mode
// finisher that jumps at a BehaviorDatsu target (enemy with a datsu/zandatsu point), plays the
// 0x521 / 0x522 / 0x523 motions and restores the player on a safe floor position afterwards.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct ZangekiDatsuJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82E60 slot 0x0  overrides StateMachineNode (type descriptor)
    virtual undefined4 * vf04(byte param_2);  // 00B915D0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BCD390 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BEF020 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BEF4C0 slot 0x10  overrides StateMachineNode (per-frame update)
    virtual void vf14(undefined4 * param_2);  // 00B82DF0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B82E00 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB2E30 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82E10 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiDatsuJumpStatePl0010(undefined4 param_2);  // 00B82E30 (argument forwarded to StateMachineNode)

    // fields (absolute offsets from the object start)
    int          &phase()        { return *(int *)((char *)this + 0x30); }           // +0x30 0..4, see qteSafeCheck
    int          &step()         { return *(int *)((char *)this + 0x34); }           // +0x34 sub-step inside a phase
    int          &motionNo()     { return *(int *)((char *)this + 0x3C); }           // +0x3C motion slot (0 on enter, -1 on leave)
    int          &cameraNo()     { return *(int *)((char *)this + 0x4C); }           // +0x4C 1 for some datsu target kinds (setCameraNo)
    undefined4   &targetHandle() { return *(undefined4 *)((char *)this + 0x50); }    // +0x50 object handle of the datsu target
    BehaviorDatsu *&target()     { return *(BehaviorDatsu **)((char *)this + 0x54); } // +0x54 resolved datsu target (or 0)
    undefined4   &handle58()     { return *(undefined4 *)((char *)this + 0x58); }    // +0x58 object handle (initialised in the ctor)
    float        &timer5C()      { return *(float *)((char *)this + 0x5C); }         // +0x5C set to 30.0 on enter
    int          &phaseDone()    { return *(int *)((char *)this + 0x60); }           // +0x60 set when the current phase's motion ended
    float        *vec70()        { return (float *)((char *)this + 0x70); }          // +0x70 float[4] (0,0,0,1) on enter
    float        *vec80()        { return (float *)((char *)this + 0x80); }          // +0x80 float[4] (0,0,0,1) on enter
    float        *vec90()        { return (float *)((char *)this + 0x90); }          // +0x90 float[4] (0,0,0,1) on enter
    float        *vecA0()        { return (float *)((char *)this + 0xA0); }          // +0xA0 float[2..4]; [0],[1] cleared on enter
    float        *jumpPos()      { return (float *)((char *)this + 0xB0); }          // +0xB0 float[4] player position; landing position
    float        *startPos()     { return (float *)((char *)this + 0xC0); }          // +0xC0 float[4] player position on enter
    int          &datsuEntered() { return *(int *)((char *)this + 0xD4); }           // +0xD4 set once the datsu input (0xB) was taken
    int          &followUp()     { return *(int *)((char *)this + 0xD8); }           // +0xD8 set once the input-0x20 follow-up started
    int          &fromParts()    { return *(int *)((char *)this + 0xDC); }           // +0xDC previous state (StateMachineNode+0x2C) was 0x34
};
