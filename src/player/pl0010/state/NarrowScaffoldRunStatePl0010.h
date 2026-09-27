// REFINED
// NarrowScaffoldRunStatePl0010 -- Raiden (Pl0010 state machine) running along a narrow scaffold
// (beam / ledge).  qteSafeCheck probes the four sides facing the stick direction with downward
// "narrow" ray casts and nudges the player (Behavior vf70) away from each edge it finds;
// SafeCheck / vf20 toggle the motion controller (player +0x764, +0x104) and the player's flag at
// +0x4170.  The class adds no fields: everything below 0x30 belongs to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct NarrowScaffoldRunStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81DD0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B91100 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B81D50 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * context);  // 00BAE330 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BAE3E0 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00B81D70 slot 0x14  overrides StateMachineNode (jmp to base; FILEMAP: thunk_vf14)
    virtual undefined4 vf18(undefined4 context);  // 00B81D80 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BAEBE0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B81D90 slot 0x24  overrides StateMachineNode
};
