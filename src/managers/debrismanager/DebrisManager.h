// REFINED
// DebrisManager -- interface of the debris entity list. The only implementation is
// DebrisManagerImplement; the instance pointer is DAT_01bea18c.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct DebrisManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);   // 00C1C580 slot 0x0  scalar deleting destructor
    virtual void vf04(undefined4 entity) = 0; // slot 0x4  adds an entity handle
    virtual void vf08(int entity) = 0;        // slot 0x8  removes an entity handle
    virtual int vf0C() = 0;                   // slot 0xC  free room in the list
    virtual undefined4 vf10() = 0;            // slot 0x10 entity count
    virtual void vf14() = 0;                  // slot 0x14
    virtual void vf18() = 0;                  // slot 0x18
    virtual void vf1C() = 0;                  // slot 0x1C
    virtual undefined4 vf20() = 0;            // slot 0x20 sorted entry count
    virtual void vf24() = 0;                  // slot 0x24 rebuilds the sorted array
    virtual void vf28() = 0;                  // slot 0x28
    // non-virtual members
    void destroyAsImplement();                // 00C62B00 (was the "constructor"): = ~DebrisManagerImplement
};
