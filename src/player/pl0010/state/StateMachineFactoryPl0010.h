// REFINED
// StateMachineFactoryPl0010 -- creates the nodes of Raiden's (Pl0010) state machine: vf00 maps a
// state id (1..0x46) to a newly allocated state object (see the switch in
// StateMachineFactoryPl0010.cpp for the id -> class table).  The class adds no fields.
#pragma once
#include "StateMachineFactory.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct StateMachineFactoryPl0010 : public StateMachineFactory {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(undefined4 stateId);  // 00B91CC0 slot 0x0  overrides StateMachineFactory (create the node of a state id)
    virtual undefined4 * vf04(byte flags);  // 00B84B50 slot 0x4  overrides StateMachineFactory (scalar deleting destructor)
};
