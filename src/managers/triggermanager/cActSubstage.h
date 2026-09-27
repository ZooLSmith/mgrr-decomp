// REFINED
// Trigger::cActSubstage -- trigger action (vftable 0x016AF174).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubstage>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubstage.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubstage : public cAction<cActSubstage> {
public:
    // vftable (0x016AF174), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92200  address of this action type's static descriptor
    virtual cActSubstage *vf04(unsigned char flags); // +0x04  00C92210  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A690  (empty)
    virtual void vf0C();                         // +0x0C  00C8A6A0  (empty)
    virtual void vf10();                         // +0x10  00C8A6B0  (empty)
    virtual void vf14();                         // +0x14  00C8A6C0  (empty)
    virtual int vf18();                          // +0x18  00C7F140  always 0
    // +0x1C  00C8A6D0  inherited Trigger::cAction<Trigger::cActSubstage>::vf1C
    // +0x20  00C8A6E0  inherited Trigger::cAction<Trigger::cActSubstage>::vf20
};

} // namespace Trigger
