// REFINED
// Trigger::cActFlagOff -- trigger action (vftable 0x016AF214).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOff : public cAction<cActFlagOff> {
public:
    // vftable (0x016AF214), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8A900  address of this action type's static descriptor
    virtual cActFlagOff *vf04(unsigned char flags); // +0x04  00C922F0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A910  (empty)
    virtual void vf0C();                         // +0x0C  00C8A920  (empty)
    virtual void vf10();                         // +0x10  00C8A930  (empty)
    virtual void vf14();                         // +0x14  00C8A940  (empty)
    // +0x18  00C87400  inherited cAction<cActFlagOff>::vf18
    // +0x1C  00C8A950  inherited cAction<cActFlagOff>::vf1C
    // +0x20  00C8A960  inherited cAction<cActFlagOff>::vf20
};

} // namespace Trigger
