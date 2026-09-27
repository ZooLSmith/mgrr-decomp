// REFINED
// Trigger::cActDoorDispOn -- trigger action (vftable 0x016B0654).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorDispOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorDispOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorDispOn : public cAction<cActDoorDispOn> {
public:
    // vftable (0x016B0654), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94610  address of this action type's static descriptor
    virtual cActDoorDispOn *vf04(unsigned char flags); // +0x04  00C94620  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EAD0  (empty)
    virtual void vf0C();                         // +0x0C  00C8EAE0  (empty)
    virtual void vf10();                         // +0x10  00C8EAF0  (empty)
    virtual void vf14();                         // +0x14  00C8EB00  (empty)
    // +0x18  00C81380  Act::DOOR_DISP_ON (actions/TrgActDoorDispOn.cpp)
    // +0x1C  00C8EB10  inherited cAction<cActDoorDispOn>::vf1C
    // +0x20  00C8EB20  inherited cAction<cActDoorDispOn>::vf20
};

} // namespace Trigger
