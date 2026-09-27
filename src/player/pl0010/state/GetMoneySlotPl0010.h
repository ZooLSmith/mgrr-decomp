// REFINED
// GetMoneySlotPl0010 -- event slot of Raiden (Pl0010) that reacts to event 0xE (money picked up):
// it notifies the picked-up object, counts the pickup on the owner and plays a controller
// vibration.  Slot's own fields (owner at +0x4) are declared by Slot.
#pragma once
#include "Slot.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct GetMoneySlotPl0010 : public Slot {
    // virtual functions, in vftable order (slot = byte offset / 4)
    // Slot.h declares vf00() and vf18() with other prototypes; the binary's slot 0x0 is this
    // scalar deleting destructor (ret 4) and slot 0x18 takes 2 stack arguments (ret 8), so both
    // are declared here without `virtual`.
    undefined4 *vf00(byte flags);  // 00B79DA0 slot 0x0  (scalar deleting destructor)
    virtual void vf10();  // 00B79D80 slot 0x10  overrides Slot (empty)
    virtual void vf14();  // 00B79D90 slot 0x14  overrides Slot (empty)
    void vf18(int eventId, undefined4 *sender);  // 00B84A40 slot 0x18  (event handler)
};
