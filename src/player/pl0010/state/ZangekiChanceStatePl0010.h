// REFINED
// ZangekiChanceStatePl0010 -- Raiden (Pl0010 state machine): the "Zangeki chance" (blade mode
// opportunity) state.  On enter it switches the BGM cue to bgm_Zangeki_Enter / _SP_Enter and
// pushes state 0x43.  Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiChanceStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B82C60 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B913B0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BCD120 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00BCD270 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BF89B0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * param_2);  // 00B82C00 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B82C10 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BCD2C0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B82C20 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    float &inputTimer() { return *(float *)((char *)this + 0x30); }  // +0x30 0 on enter; 20.0 when input bit 0x20 is pressed, counts down by the frame time
};
