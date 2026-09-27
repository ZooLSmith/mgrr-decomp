// REFINED
// NarrowScaffoldWalkStatePl0010 -- Raiden (Pl0010 state machine) walking along a narrow scaffold
// (beam / ledge).  qteSafeCheck probes the four sides facing the stick direction with downward
// "narrow" ray casts and snaps the player onto the surface it hits (falling back to state 0x1A
// when nothing is hit); SafeCheck / vf20 toggle the motion controller (player +0x764, +0x104)
// and the player's flag at +0x4170.  The class adds no fields: everything below 0x30 belongs to
// StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct NarrowScaffoldWalkStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81F40 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91120 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B81EC0 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * context);  // 00BAEC70 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BAED20 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00B81EE0 slot 0x14  overrides StateMachineNode (jmp to base; FILEMAP: thunk_vf14)
    virtual undefined4 vf18(undefined4 context);  // 00B81EF0 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BAF6A0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B81F00 slot 0x24  overrides StateMachineNode
};
