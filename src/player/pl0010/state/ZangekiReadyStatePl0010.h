// REFINED
// ZangekiReadyStatePl0010 -- Raiden (Pl0010 state machine) blade-mode "zangeki ready" state.
// vf08 (enter) plays motion 0xED and remembers its handle; qteSafeCheck (per frame) watches the
// motion frames (12.0 = release point) to request the next states and to trigger the slow-motion
// effect, and accumulates the time a button of maskE50 is not held (capped at 5.0); vf20 (leave)
// stops the motion.  vf18 is a tail jump to the base.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiReadyStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83850 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B918E0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BE4C10 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB8000 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE4D00 slot 0x10  overrides StateMachineNode (per-frame update)
    virtual void vf14(undefined4 * param_2);  // 00BB8110 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00B83800 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BD2460 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83810 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &frameCount()    { return *(float *)((char *)this + 0x30); }  // +0x30 frames since enter (0.0 on enter, +1.0 per qteSafeCheck)
    int   &pressed()       { return *(int *)((char *)this + 0x34); }    // +0x34 set to 1 when a button of maskE50 is pressed (inputTrigger)
    int   &motionId()      { return *(int *)((char *)this + 0x38); }    // +0x38 motion played on enter (0xED)
    int   &motionHandle()  { return *(int *)((char *)this + 0x3C); }    // +0x3C handle of that motion (-1 = none / stopped on leave)
    float &releaseFrame()  { return *(float *)((char *)this + 0x40); }  // +0x40 motion frame of the release point (12.0)
    int   &released()      { return *(int *)((char *)this + 0x44); }    // +0x44 1 once the motion passed the release frame
    float &blend4C()       { return *(float *)((char *)this + 0x4C); }  // +0x4C eased towards 1.0 (x0.25 per frame) while flag50 is set
    int   &flag50()        { return *(int *)((char *)this + 0x50); }    // +0x50 cleared on enter and when blend4C passes 0.99
    float *vec60()         { return (float *)((char *)this + 0x60); }   // +0x60 float[4], (0, 0, 0, 1) on enter
    float &value80()       { return *(float *)((char *)this + 0x80); }  // +0x80 0.0 on enter
    float &idleTime()      { return *(float *)((char *)this + 0x84); }  // +0x84 time accumulated while no maskE50 button is held (capped at 5.0)
    float &slowPending()   { return *(float *)((char *)this + 0x88); }  // +0x88 1.0 while the slow-motion effect waits for its end frame
    float &timer8C()       { return *(float *)((char *)this + 0x8C); }  // +0x8C 10.0 when the effect ends, counts down by 1.0 per frame
    float &value90()       { return *(float *)((char *)this + 0x90); }  // +0x90 0.1 when the effect ends
};
