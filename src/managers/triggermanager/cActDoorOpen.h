// REFINED
// Trigger::cActDoorOpen -- trigger action (vftable 0x016AEB18).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorOpen>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorOpen.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorOpen : public cAction<cActDoorOpen> {
public:
    // vftable (0x016AEB18), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91730  address of this action type's static descriptor
    virtual cActDoorOpen *vf04(unsigned char flags); // +0x04  00C91740  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89290  (empty)
    virtual void vf0C();                         // +0x0C  00C892A0  (empty)
    virtual void vf10();                         // +0x10  00C892B0  (empty)
    virtual void vf14();                         // +0x14  00C892C0  (empty)
    // +0x18  00C7EA30  Act::DOOR_OPEN (actions/TrgActDoorOpen.cpp)
    // +0x1C  00C892D0  inherited cAction<cActDoorOpen>::vf1C
    // +0x20  00C892E0  inherited cAction<cActDoorOpen>::vf20
};

} // namespace Trigger
