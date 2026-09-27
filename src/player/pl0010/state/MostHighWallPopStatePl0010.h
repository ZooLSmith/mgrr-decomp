// REFINED
// MostHighWallPopStatePl0010 -- Raiden (Pl0010 state machine) popping over the highest wall
// type.  SafeCheck / vf20 raise and clear the player's flag at +0x4170; qteSafeCheck clears the
// two motion-controller flags every frame.  The class adds no fields: everything below 0x30
// belongs to StateMachineNode.
#pragma once
#include "StateMachineNode.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct MostHighWallPopStatePl0010 : public StateMachineNode {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined * vf00();  // 00B81BC0 slot 0x0  overrides StateMachineNode (returns the type record)
    virtual undefined4 * vf04(byte flags);  // 00B910C0 slot 0x4  overrides StateMachineNode (scalar deleting destructor)
    virtual bool vf08(undefined4 context);  // 00B81B40 slot 0x8  overrides StateMachineNode
    virtual void SafeCheck(undefined4 * context);  // 00BACEE0 slot 0xC  overrides StateMachineNode
    virtual void qteSafeCheck(undefined4 * context);  // 00BACF50 slot 0x10  overrides StateMachineNode
    virtual void vf14(undefined4 * context);  // 00B81B60 slot 0x14  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf18(undefined4 context);  // 00B81B70 slot 0x18  overrides StateMachineNode (jmp to base)
    virtual undefined4 vf20(undefined4 * context);  // 00BACFD0 slot 0x20  overrides StateMachineNode (leave)
    virtual bool vf24(undefined4 context);  // 00B81B80 slot 0x24  overrides StateMachineNode
};
