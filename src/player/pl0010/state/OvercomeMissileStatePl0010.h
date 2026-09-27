// REFINED
// OvercomeMissileStatePl0010 -- Raiden (Pl0010 state machine) jumping onto a missile.  On entry
// (SafeCheck) it takes the missile from the context, aims at its position (+0.5 up) and plays
// motion 0xB7 or 0xB8 depending on which side it is; qteSafeCheck steers the player towards it.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct OvercomeMissileStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82230 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B911B0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B82190 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB0460 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE03C0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCC260 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B821D0 slot 0x18  overrides StateMachineNode (jmp to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB0730 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B821E0 slot 0x24  overrides StateMachineNode
    // non-virtual members
    OvercomeMissileStatePl0010(undefined4 param_2);  // 00B82200 (argument forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    float &curve30()      { return *(float *)((char *)this + 0x30); }  // +0x30 output of FUN_00d83250
    float &curve34()      { return *(float *)((char *)this + 0x34); }  // +0x34 output of FUN_00d83250
    float &field38()      { return *(float *)((char *)this + 0x38); }  // +0x38 0 on entry
    float &field3C()      { return *(float *)((char *)this + 0x3C); }  // +0x3C 0 on entry
    int   &finished()     { return *(int *)((char *)this + 0x40); }    // +0x40 set when the jump is over (vf14 then leaves)
    float &startY()       { return *(float *)((char *)this + 0x44); }  // +0x44 player +0x44 on entry
    float &field48()      { return *(float *)((char *)this + 0x48); }  // +0x48 cleared by vf08
    float &field4C()      { return *(float *)((char *)this + 0x4C); }  // +0x4C 0 on entry
    int   &field50()      { return *(int *)((char *)this + 0x50); }    // +0x50 cleared by vf08
    int   &field54()      { return *(int *)((char *)this + 0x54); }    // +0x54 cleared by vf08
    float *targetPos()    { return (float *)((char *)this + 0x60); }   // +0x60 float[4] missile position (+0.5 on y)
    char  *missileHandle() { return (char *)this + 0x70; }             // +0x70 embedded entity handle
    int   &landed()       { return *(int *)((char *)this + 0x74); }    // +0x74 motion 0xB7/0xB8 finished or missile gone
};
