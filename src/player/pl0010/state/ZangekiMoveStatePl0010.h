// REFINED
// ZangekiMoveStatePl0010 -- Raiden (Pl0010 state machine) blade-mode movement.  On enter it
// builds two blend sets ("ZangekiMove": 18 directional motions 0x50C..0x51F in 3 rows,
// "ZangekiMoveCircle": 11 motions 0x109..0x113); each frame the left stick moves the player,
// the right stick sets the heading (context +0x3F8) and the blend weights, and the camera matrix
// DAT_01d618e0 is rebuilt from the player's root parts.  Fields below 0x30 belong to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiMoveStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B836B0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91870 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB6E70 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B83630 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BE4030 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B83640 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B83650 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BB7470 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83660 slot 0x24  overrides StateMachineNode
    // non-virtual members
    ZangekiMoveStatePl0010(undefined4 param_2);  // 00B83680

    // fields (absolute byte offsets from the start of the object)
    int          &motionA()     { return *(int *)((char *)this + 0x34); }           // +0x34 0x143 on enter
    int          &motionB()     { return *(int *)((char *)this + 0x38); }           // +0x38 0xEF on enter
    int          &motionC()     { return *(int *)((char *)this + 0x3C); }           // +0x3C 0x109 on enter
    unsigned int &moveLayer()   { return *(unsigned int *)((char *)this + 0x40); }  // +0x40 layer of the "ZangekiMove" blend set (0); -1 after leave
    int          &layer44()     { return *(int *)((char *)this + 0x44); }           // +0x44 3 on enter
    unsigned int &circleLayer() { return *(unsigned int *)((char *)this + 0x48); }  // +0x48 layer of the "ZangekiMoveCircle" blend set (1); -1 after leave
    int          &layer4C()     { return *(int *)((char *)this + 0x4C); }           // +0x4C 2 on enter
    float        &stepTimer()   { return *(float *)((char *)this + 0x54); }         // +0x54 advanced by (1.3 - 0.5 x stick) x frame time, wraps past stepPeriod
    float        &stepPeriod()  { return *(float *)((char *)this + 0x58); }         // +0x58 63.0
    int          &turnLocked()  { return *(int *)((char *)this + 0x5C); }           // +0x5C 1 while the snapped turn angle is held
    float        &turnAngle()   { return *(float *)((char *)this + 0x60); }         // +0x60 snapped turn angle (radians)
    void         *moveControl() { return (char *)this + 0x70; }                     // +0x70 embedded object built by FUN_00a826e0 (flags word first)
    unsigned int &moveControlFlags() { return *(unsigned int *)((char *)this + 0x70); }  // +0x70 |= 2 on enter
};
