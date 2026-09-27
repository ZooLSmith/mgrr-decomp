// REFINED
// ZangekiNormalStatePl0010 -- Raiden (Pl0010 state machine) blade-mode "zangeki normal" state.
// vf08 (enter) sets the player's zangeki mode (+0x40C8) to 1 and attaches child state 0x43,
// qteSafeCheck (per frame) counts frames and runs the shared blade-mode updates, vf20 (leave)
// resets the player's zangeki mode to 0.  SafeCheck, vf14 and vf18 are tail jumps to the base.
// Fields below 0x30 belong to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct ZangekiNormalStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B83740 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte param_2);  // 00B91890 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 param_1);  // 00BB7550 slot 0x8  overrides StateMachineNode (enter)
    virtual void SafeCheck(undefined4 * param_2);  // 00B836D0 slot 0xC  overrides StateMachineNode (tail jump to the base)
    virtual void qteSafeCheck(undefined4 * param_2);  // 00BF1190 slot 0x10  overrides StateMachineNode (per-frame update)
    virtual void vf14(undefined4 * param_2);  // 00B836E0 slot 0x14  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf18(undefined4 param_2);  // 00B836F0 slot 0x18  overrides StateMachineNode (tail jump to the base)
    virtual undefined4 vf20(undefined4 * param_1);  // 00BCFEC0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 param_1);  // 00B83700 slot 0x24  overrides StateMachineNode

    // fields (absolute byte offsets from the start of the object)
    int   &value30()     { return *(int *)((char *)this + 0x30); }  // +0x30 set to 0xB4 (180) on enter
    int   &frameCount()  { return *(int *)((char *)this + 0x34); }  // +0x34 cleared on enter, incremented every qteSafeCheck
    int   &value38()     { return *(int *)((char *)this + 0x38); }  // +0x38 cleared on enter
    int   &value3C()     { return *(int *)((char *)this + 0x3C); }  // +0x3C set to 1 on enter
};
