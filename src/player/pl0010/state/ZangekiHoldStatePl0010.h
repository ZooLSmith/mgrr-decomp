// REFINED
// ZangekiHoldStatePl0010 -- Raiden (Pl0010 state machine) blade-mode "zangeki hold" state: while
// held, the analog stick steers the player's heading (context +0x3F8) with a smoothed blend
// (FUN_00bb5fa0) and a camera matrix is built from the player's root parts (qteSafeCheck).
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiHoldStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83100 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B916A0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BE2410 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B83090 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE2560 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B830A0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B830B0 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB5E40 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B830C0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int          &motionA()        { return *(int *)((char *)this + 0x30); }           // +0x30 0xEB on enter (passed to FUN_00bd6680)
    int          &motionB()        { return *(int *)((char *)this + 0x34); }           // +0x34 0x143 on enter (passed to FUN_00bd6680)
    int          &motionC()        { return *(int *)((char *)this + 0x38); }           // +0x38 0xEF on enter
    unsigned int &layerMotion0()   { return *(unsigned int *)((char *)this + 0x3C); }  // +0x3C motion id from FUN_00bbc680; blended out on leave, then -1
    unsigned int &layerMotion1()   { return *(unsigned int *)((char *)this + 0x40); }  // +0x40 3 on enter; blended out on leave, then -1
    unsigned int &layerMotion2()   { return *(unsigned int *)((char *)this + 0x44); }  // +0x44 1 on enter; blended out on leave, then -1
    float        &yaw48()          { return *(float *)((char *)this + 0x48); }         // +0x48 atan2 of the stick on enter; stick yaw in degrees afterwards
    unsigned int &holdFrames()     { return *(unsigned int *)((char *)this + 0x4C); }  // +0x4C frames with blend() > 0.1, clamped to holdFramesMax()
    unsigned int &holdFramesMax()  { return *(unsigned int *)((char *)this + 0x50); }  // +0x50 (0 on enter)
    float        *stickDir()       { return (float *)((char *)this + 0x60); }          // +0x60 float[4] last stick direction (x, 0, y, w)
    float        &param70()        { return *(float *)((char *)this + 0x70); }         // +0x70 0.5 on enter
    float        &param74()        { return *(float *)((char *)this + 0x74); }         // +0x74 0.8 on enter
    float        &blend()          { return *(float *)((char *)this + 0x78); }         // +0x78 smoothed stick magnitude (moves toward blendTarget)
    float        &blendTarget()    { return *(float *)((char *)this + 0x7C); }         // +0x7C 0, or 0.5..1.0 from the stick magnitude
    float        &blendRate()      { return *(float *)((char *)this + 0x80); }         // +0x80 blendTarget^2 (0.4 when zero, 0.2 in player mode 0x13)
    float        &timer84()        { return *(float *)((char *)this + 0x84); }         // +0x84 count-down by the animation frame step
    float        &timerFired88()   { return *(float *)((char *)this + 0x88); }         // +0x88 1.0 once timer84 went below zero
    float        &rate8C()         { return *(float *)((char *)this + 0x8C); }         // +0x8C 20.0; rate8C / 60 is passed to FUN_00e25450
    float        &param90()        { return *(float *)((char *)this + 0x90); }         // +0x90 5.0 on enter
};
