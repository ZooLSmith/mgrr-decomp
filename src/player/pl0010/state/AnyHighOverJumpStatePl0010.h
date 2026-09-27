// REFINED
// AnyHighOverJumpStatePl0010 -- Raiden (Pl0010 state machine) high over-jump (vaulting a high obstacle).  SafeCheck starts motion 0xB3,
// computes the launch (FUN_00d83250) and saves the player's +0x417C..+0x4184 values (restored by
// vf20); qteSafeCheck integrates the jump arc each frame while animation 0xB5 plays and moves the
// player through its vf70.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct AnyHighOverJumpStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B80CC0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B90BE0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B80C30 slot 0x8  overrides StateMachineNode (resets the jump fields)
    virtual void SafeCheck(undefined4 * context);  // 00BA88B0 slot 0xC  overrides StateMachineNode (enter)
    virtual void qteSafeCheck(undefined4 * context);  // 00BDC9E0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00BC94A0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 context);  // 00B80C70 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BA8A30 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B80C80 slot 0x24  overrides StateMachineNode

    // fields (absolute offsets from object start)
    float        &launchAngle()     { return *(float *)((char *)this + 0x30); }         // +0x30 ? output 1 of FUN_00d83250 (cos -> forward, sin -> up)
    float        &launchSpeed()     { return *(float *)((char *)this + 0x34); }         // +0x34 ? output 2 of FUN_00d83250
    float        &lastForward()     { return *(float *)((char *)this + 0x38); }         // +0x38 forward offset of the previous frame
    float        &lastUp()          { return *(float *)((char *)this + 0x3C); }         // +0x3C upward offset of the previous frame
    int          &canLand()         { return *(int *)((char *)this + 0x40); }           // +0x40 set once time >= 1/3
    float        &startY()          { return *(float *)((char *)this + 0x44); }         // +0x44 player +0x44 at the start
    float        &time()            { return *(float *)((char *)this + 0x48); }         // +0x48 accumulated frame time
    float        &gravityDrop()     { return *(float *)((char *)this + 0x4C); }         // +0x4C accumulated gravity term
    int          &field50()         { return *(int *)((char *)this + 0x50); }           // +0x50
    int          &interrupted()     { return *(int *)((char *)this + 0x54); }           // +0x54 set from player +0x4268 (+0x94 / +0x24)
    float        &speedScale()      { return *(float *)((char *)this + 0x58); }         // +0x58 0.8 (0.5 when context value +0x548 < 1)
    unsigned int &savedController1C0() { return *(unsigned int *)((char *)this + 0x5C); }  // +0x5C motion controller +0x1C0, restored by vf20
    unsigned int &savedController1CC() { return *(unsigned int *)((char *)this + 0x60); }  // +0x60 motion controller +0x1CC, restored by vf20
};
