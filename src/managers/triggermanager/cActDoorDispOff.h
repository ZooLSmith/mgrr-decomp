// REFINED
// Trigger::cActDoorDispOff -- trigger action (vftable 0x016B067C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorDispOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorDispOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorDispOff : public cAction<cActDoorDispOff> {
public:
    // vftable (0x016B067C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94650  address of this action type's static descriptor
    virtual cActDoorDispOff *vf04(unsigned char flags); // +0x04  00C94660  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EB70  (empty)
    virtual void vf0C();                         // +0x0C  00C8EB80  (empty)
    virtual void vf10();                         // +0x10  00C8EB90  (empty)
    virtual void vf14();                         // +0x14  00C8EBA0  (empty)
    // +0x18  00C813B0  Act::DOOR_DISP_OFF (actions/TrgActDoorDispOff.cpp)
    // +0x1C  00C8EBB0  inherited cAction<cActDoorDispOff>::vf1C
    // +0x20  00C8EBC0  inherited cAction<cActDoorDispOff>::vf20
};

} // namespace Trigger
