// REFINED
// Trigger::cActLoadRoom -- trigger action (vftable 0x016AF23C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActLoadRoom>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActLoadRoom.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActLoadRoom : public cAction<cActLoadRoom> {
public:
    // vftable (0x016AF23C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8A9A0  address of this action type's static descriptor
    virtual cActLoadRoom *vf04(unsigned char flags); // +0x04  00C92320  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A9B0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A9C0  (empty)
    virtual void vf10();                         // +0x10  00C8A9D0  (empty)
    virtual void vf14();                         // +0x14  00C8A9E0  (empty)
    // +0x18  00C7F1C0  inherited cAction<cActLoadRoom>::vf18
    // +0x1C  00C8A9F0  inherited cAction<cActLoadRoom>::vf1C
    // +0x20  00C8AA00  inherited cAction<cActLoadRoom>::vf20
};

} // namespace Trigger
