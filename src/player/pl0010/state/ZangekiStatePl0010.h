// REFINED
// ZangekiStatePl0010 -- Raiden (Pl0010 state machine) "zangeki": the free blade-mode state.
// vf08 (enter) allocates the context's slash-trail arrays and plays the blade-mode motion,
// qteSafeCheck (per frame) aims the blade from the player's matrix and updates the three
// slash trails, vf20 (leave) frees the arrays and restores the player.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B838E0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91900 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BF1210 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BE5120 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BD2570 slot 0x10  overrides StateMachineNode (per-frame update)
    virtual void vf14(undefined4 * param_2);  // 00B83870 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83880 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BD2F70 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83890 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiStatePl0010(undefined4 owner);  // 00B838B0 (owner is forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    int   &targetAhead()   { return *(int *)((char *)this + 0x30); }    // +0x30 set to 1 when the locked target is within the front cone
    int   &releaseTarget() { return *(int *)((char *)this + 0x34); }    // +0x34 nonzero: clear the TargetManager target every frame
    // +0x38: embedded member built by FUN_009003e0
    float &timer48()       { return *(float *)((char *)this + 0x48); }  // +0x48 set to 30.0 by SafeCheck
    float &cutAngle()      { return *(float *)((char *)this + 0x4C); }  // +0x4C copy of context +0x374 (blade angle)
    int   *trailPartsNo()  { return (int *)((char *)this + 0x50); }     // +0x50 int[3] player parts numbers (1, 2, 3) of the three slash trails
    float &value5C()       { return *(float *)((char *)this + 0x5C); }  // +0x5C cleared on enter
    int   &value60()       { return *(int *)((char *)this + 0x60); }    // +0x60 cleared on enter
};
