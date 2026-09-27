// REFINED
// Trigger::cActAreaBarrierOff -- trigger action (vftable 0x016AF888).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAreaBarrierOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAreaBarrierOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAreaBarrierOff : public cAction<cActAreaBarrierOff> {
public:
    // vftable (0x016AF888), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92D00  address of this action type's static descriptor
    virtual cActAreaBarrierOff *vf04(unsigned char flags); // +0x04  00C92D10  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8BB30  (empty)
    virtual void vf0C();                         // +0x0C  00C8BB40  (empty)
    virtual void vf10();                         // +0x10  00C8BB50  (empty)
    virtual void vf14();                         // +0x14  00C8BB60  (empty)
    // +0x18  00C7F730  inherited vf18 (Trigger::Act::AREA_BARRIER_OFF)
    // +0x1C  00C8BB70  inherited Trigger::cAction<Trigger::cActAreaBarrierOff>::vf1C
    // +0x20  00C8BB80  inherited Trigger::cAction<Trigger::cActAreaBarrierOff>::vf20
};

} // namespace Trigger
