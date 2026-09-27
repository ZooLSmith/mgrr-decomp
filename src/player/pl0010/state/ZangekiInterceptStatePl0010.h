// REFINED
// ZangekiInterceptStatePl0010 -- Raiden (Pl0010 state machine) blade-mode intercept ("Zangeki SP",
// plays bgm_Zangeki_SP_Enter once).  On enter it sets player mode 0x14 and pushes state 0x43;
// SafeCheck sets the weapons' speed from objects 0x201A0 / 0x20020 and builds a request with
// FUN_004039a0; qteSafeCheck turns the player toward the target and updates the lock-on.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiInterceptStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83580 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91830 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BCFB70 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BCFC90 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BFF980 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B83520 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83530 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB6B30 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83540 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &timer()        { return *(float *)((char *)this + 0x30); }  // +0x30 300.0 on enter; minus Pl0000+0x910 per idle frame
    float &stickMoved()   { return *(float *)((char *)this + 0x34); }  // +0x34 0 on enter; 1.0 once a stick axis exceeds 100
    int   &weaponSpeedSet() { return *(int *)((char *)this + 0x38); }  // +0x38 1 once SafeCheck changed the weapons' speed
};
