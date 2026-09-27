// REFINED
// Trigger::cActRoomEvent -- trigger action (vftable 0x016AF658).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActRoomEvent>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActRoomEvent.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActRoomEvent : public cAction<cActRoomEvent> {
public:
    // vftable (0x016AF658), in slot order (slot = byte offset)
    virtual void *vf00();                              // +0x00  00C92980  address of this action type's static descriptor
    virtual cActRoomEvent *vf04(unsigned char flags);  // +0x04  00C92990  scalar deleting destructor
    virtual void vf08();                               // +0x08  00C8B270  (empty)
    virtual void vf0C();                               // +0x0C  00C8B280  (empty)
    virtual void vf10();                               // +0x10  00C8B290  (empty)
    virtual void vf14();                               // +0x14  00C8B2A0  (empty)
    // +0x18  00C7F450  inherited vf18
    // +0x1C  00C8B2B0  inherited cAction<cActRoomEvent>::vf1C
    // +0x20  00C8B2C0  inherited cAction<cActRoomEvent>::vf20
};

} // namespace Trigger
