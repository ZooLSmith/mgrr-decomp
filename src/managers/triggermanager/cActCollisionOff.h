// REFINED
// Trigger::cActCollisionOff -- trigger action (vftable 0x016AF608).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCollisionOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCollisionOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCollisionOff : public cAction<cActCollisionOff> {
public:
    // vftable (0x016AF608), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92900  address of this action type's static descriptor
    virtual cActCollisionOff *vf04(unsigned char flags); // +0x04  00C92910  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B130  (empty)
    virtual void vf0C();                         // +0x0C  00C8B140  (empty)
    virtual void vf10();                         // +0x10  00C8B150  (empty)
    virtual void vf14();                         // +0x14  00C8B160  (empty)
    // +0x18  00C7F410  Act::AreaCollisionOff (actions/TrgActAreacollisionoff.cpp)
    // +0x1C  00C8B170  inherited cAction<cActCollisionOff>::vf1C
    // +0x20  00C8B180  inherited cAction<cActCollisionOff>::vf20
};

} // namespace Trigger
