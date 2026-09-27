// REFINED
// Trigger::cActDoorOpenDelay -- trigger action (vftable 0x016B0A3C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorOpenDelay>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorOpenDelay.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorOpenDelay : public cAction<cActDoorOpenDelay> {
public:
    // vftable (0x016B0A3C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94C40  address of this action type's static descriptor
    virtual cActDoorOpenDelay *vf04(unsigned char flags); // +0x04  00C94C50  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8FA70  (empty)
    virtual void vf0C();                         // +0x0C  00C8FA80  (empty)
    virtual void vf10();                         // +0x10  00C8FA90  (empty)
    virtual void vf14();                         // +0x14  00C8FAA0  (empty)
    // +0x18  00C81840  Act::DOOR_OPEN_2 (actions/TrgActDoorOpen.cpp)
    // +0x1C  00C8FAB0  inherited cAction<cActDoorOpenDelay>::vf1C
    // +0x20  00C8FAC0  inherited cAction<cActDoorOpenDelay>::vf20
};

} // namespace Trigger
