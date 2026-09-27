// REFINED
// ZangekiDatsuShortStatePl0010 -- Raiden (Pl0010 state machine) "zangeki datsu short": the short
// zandatsu (cut-and-take) state.  On enter it locks onto the datsu target (a BehaviorDatsu),
// SafeCheck starts the "Datsu_Blend" / datsu motions and computes the landing point (ray cast
// "zangekiDatsuJumpSafeCheck"), qteSafeCheck steers the player towards the target while the
// motion plays and runs the QTE / grab sequence.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiDatsuShortStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82EF0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B915F0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BCD870 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB2F50 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BF0530 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B82E80 slot 0x14  overrides StateMachineNode (jmp to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B82E90 slot 0x18  overrides StateMachineNode (jmp to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB3420 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82EA0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiDatsuShortStatePl0010(undefined4 owner);  // 00B82EC0 (owner is forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    int           &motionSlot()     { return *(int *)((char *)this + 0x34); }            // +0x34 motion slot of the datsu motion (0 on enter, -1 on leave)
    float         &savedSlowTimer() { return *(float *)((char *)this + 0x38); }          // +0x38 player +0x341C saved on enter
    float         &frameStart()     { return *(float *)((char *)this + 0x3C); }          // +0x3C steering window start (motion frame)
    float         &frameEnd()       { return *(float *)((char *)this + 0x40); }          // +0x40 steering window end (motion frame)
    float         &field44()        { return *(float *)((char *)this + 0x44); }          // +0x44 70.0f after SafeCheck
    unsigned int  &targetHandle()   { return *(unsigned int *)((char *)this + 0x48); }   // +0x48 handle of the datsu target (FUN_00a7c930 zeroes it)
    BehaviorDatsu *&target()        { return *(BehaviorDatsu **)((char *)this + 0x4C); } // +0x4C datsu target
    unsigned int  &handle50()       { return *(unsigned int *)((char *)this + 0x50); }   // +0x50 handle (zeroed by the constructor)
    float         *landingPos()     { return (float *)((char *)this + 0x60); }           // +0x60 float[4] player position / ray-cast hit
    int           &qteFinished()    { return *(int *)((char *)this + 0x80); }            // +0x80 set once the grab QTE (input 0xB) was taken
    int           &grabStarted()    { return *(int *)((char *)this + 0x84); }            // +0x84 set when input 0x20 found something (FUN_00bd5d10)
    int           &grabEnded()      { return *(int *)((char *)this + 0x88); }            // +0x88 set when the grab count-down ran out
};
