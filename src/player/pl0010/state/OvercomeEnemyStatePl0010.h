// REFINED
// OvercomeEnemyStatePl0010 -- Raiden (Pl0010 state machine) vaulting over / grabbing an enemy.
// The object referenced by the handle at +0x50 decides the variant: an entity whose +0x4B4 id is
// 0x20010 runs the vault (motions 0xA8 -> 0xAA -> 0xAB, or 0x4C), one with id 0x20030 runs the
// grab sequence (motions 0xB5 -> 0x56..0x59).  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "../../../../include/ghidra_types.h"
#include "../../../../include/auto/fwd.h"

struct OvercomeEnemyStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82170 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91190 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B820E0 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BB0220 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE02E0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCC1F0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BB0340 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB03A0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82120 slot 0x24  overrides StateMachineNode
    // non-virtual members
    OvercomeEnemyStatePl0010(undefined4 param_2);  // 00B82140 (argument forwarded to StateMachineNode)

    // fields (absolute byte offsets from the start of the object)
    int   &landingMotion()  { return *(int *)((char *)this + 0x30); }    // +0x30 motion played after 0xAA: 0xAB, or 0x4C
    int   &useAltLanding()  { return *(int *)((char *)this + 0x34); }    // +0x34 nonzero: land with motion 0x4C
    int   &field38()        { return *(int *)((char *)this + 0x38); }    // +0x38 cleared on entry
    float &altLandingTime() { return *(float *)((char *)this + 0x3C); }  // +0x3C start time of motion 0x4C
    float &speedX()         { return *(float *)((char *)this + 0x40); }  // +0x40 1.0
    float &speedY()         { return *(float *)((char *)this + 0x44); }  // +0x44 1.6 / player param +0xD4
    int   &vaultDone()      { return *(int *)((char *)this + 0x48); }    // +0x48 set when motion 0xAA finished
    int   &landingDone()    { return *(int *)((char *)this + 0x4C); }    // +0x4C set when the landing motion finished
    char  *targetHandle()   { return (char *)this + 0x50; }              // +0x50 embedded entity handle (FUN_00a7c930 / FUN_00a7c960 / FUN_00a81330)
    int   &buttonPressed()  { return *(int *)((char *)this + 0x54); }    // +0x54 input bit 0x80 seen during motion 0xAB
    float &heightDelta()    { return *(float *)((char *)this + 0x58); }  // +0x58 target +0x44 minus player +0x44
    int   &grabbing()       { return *(int *)((char *)this + 0x5C); }    // +0x5C set once motion 0xB5 finished
};
