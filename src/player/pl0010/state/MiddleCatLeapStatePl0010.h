// REFINED
// MiddleCatLeapStatePl0010 -- Raiden (Pl0010 state machine) "cat leap" onto a middle-height
// ledge: an optional approach (0xAD -> 0xAE) followed by the leap motion (0xAF / 0xB1), whose
// speed comes from the player parameters.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct MiddleCatLeapStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B819F0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91060 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00B81970 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BAC720 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BDF590 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00BCAEE0 slot 0x14  overrides StateMachineNode
    virtual undefined4 vf18(undefined4 param_2);  // 00BCB030 slot 0x18  overrides StateMachineNode
    virtual undefined4 vf20(undefined4 * param_1);  // 00BAC870 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B819B0 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &field40()     { return *(int *)((char *)this + 0x40); }    // +0x40 zeroed on enter
    int   &field44()     { return *(int *)((char *)this + 0x44); }    // +0x44 zeroed on enter
    float &field48()     { return *(float *)((char *)this + 0x48); }  // +0x48 zeroed on enter
    int   &leapMotion()  { return *(int *)((char *)this + 0x50); }    // +0x50 0xAF or 0xB1
    int   &field54()     { return *(int *)((char *)this + 0x54); }    // +0x54 zeroed on enter
    int   &field58()     { return *(int *)((char *)this + 0x58); }    // +0x58 zeroed on enter
    float &field5C()     { return *(float *)((char *)this + 0x5C); }  // +0x5C zeroed on enter
    float &param394()    { return *(float *)((char *)this + 0x60); }  // +0x60 player parameter +0x394
    float &rateY()       { return *(float *)((char *)this + 0x64); }  // +0x64 player parameter +0x38C (middle of the FUN_00a95ff0 vector)
    float &rateXZ()      { return *(float *)((char *)this + 0x68); }  // +0x68 player parameter +0x388 (outer FUN_00a95ff0 components)
    int   &leapStarted() { return *(int *)((char *)this + 0x6C); }    // +0x6C set once the leap motion is playing
    int   &leapEnded()   { return *(int *)((char *)this + 0x70); }    // +0x70 set when the leap motion finished
};
