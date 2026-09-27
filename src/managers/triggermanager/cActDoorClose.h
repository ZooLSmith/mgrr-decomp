// REFINED
// Trigger::cActDoorClose -- trigger action (vftable 0x016AF0FC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorClose>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorClose.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorClose : public cAction<cActDoorClose> {
public:
    // vftable (0x016AF0FC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92140  address of this action type's static descriptor
    virtual cActDoorClose *vf04(unsigned char flags); // +0x04  00C92150  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A4B0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A4C0  (empty)
    virtual void vf10();                         // +0x10  00C8A4D0  (empty)
    virtual void vf14();                         // +0x14  00C8A4E0  (empty)
    // +0x18  00C7F0E0  Act::DOOR_CLOSE (actions/TrgActDoorClose.cpp)
    // +0x1C  00C8A4F0  inherited cAction<cActDoorClose>::vf1C
    // +0x20  00C8A500  inherited cAction<cActDoorClose>::vf20
};

} // namespace Trigger
