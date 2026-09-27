// REFINED
// SlashStartSlotPl0010 -- event slot of Raiden (Pl0010): event 0x11 from a sender of type
// DAT_01dc53d8 copies the sender's value (+0x4) into the owner (+0x41A8); event 0xE plays a
// controller vibration.  Slot's own fields (owner at +0x4) are declared by Slot.
#pragma once
#include "Slot.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct SlashStartSlotPl0010 : public Slot {
    // virtual functions, in vftable order (slot = byte offset / 4)
    // Slot.h declares vf00() and vf18() with other prototypes; the binary's slot 0x0 is this
    // scalar deleting destructor (ret 4) and slot 0x18 takes 2 stack arguments (ret 8), so both
    // are declared here without `virtual`.
    undefined4 *vf00(byte flags);  // 00B84B70 slot 0x0  (scalar deleting destructor)
    virtual void vf10();  // 00B79DF0 slot 0x10  overrides Slot (empty)
    virtual void vf14();  // 00B79E00 slot 0x14  overrides Slot (empty)
    void vf18(int eventId, undefined4 *sender);  // 00B84AC0 slot 0x18  (event handler)
};
