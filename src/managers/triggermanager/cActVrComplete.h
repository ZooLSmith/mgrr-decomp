// REFINED
// Trigger::cActVrComplete -- trigger action (vftable 0x016B044C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrComplete>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrComplete.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrComplete : public cAction<cActVrComplete> {
public:
    // vftable (0x016B044C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C942D0  address of this action type's static descriptor
    virtual cActVrComplete *vf04(unsigned char flags); // +0x04  00C942E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E2B0  (empty)
    virtual void vf0C();                         // +0x0C  00C8E2C0  (empty)
    virtual void vf10();                         // +0x10  00C8E2D0  (empty)
    virtual void vf14();                         // +0x14  00C8E2E0  (empty)
    // +0x18  00C81090  inherited Trigger::Act::VR_COMPLETE
    // +0x1C  00C8E2F0  inherited Trigger::cAction<Trigger::cActVrComplete>::vf1C
    // +0x20  00C8E300  inherited Trigger::cAction<Trigger::cActVrComplete>::vf20
};

} // namespace Trigger
