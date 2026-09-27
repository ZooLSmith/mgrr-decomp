// REFINED
// Trigger::cActSubphase -- trigger action (vftable 0x016AEAA0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubphase>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubphase.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubphase : public cAction<cActSubphase> {
public:
    // vftable (0x016AEAA0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91670  address of this action type's static descriptor
    virtual cActSubphase *vf04(unsigned char flags); // +0x04  00C91680  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C890B0  (empty)
    virtual void vf0C();                         // +0x0C  00C890C0  (empty)
    virtual void vf10();                         // +0x10  00C890D0  (empty)
    virtual void vf14();                         // +0x14  00C890E0  (empty)
    // +0x18  00C7E8F0  inherited Trigger::Act::SUBPHASE
    // +0x1C  00C890F0  inherited Trigger::cAction<Trigger::cActSubphase>::vf1C
    // +0x20  00C89100  inherited Trigger::cAction<Trigger::cActSubphase>::vf20
};

} // namespace Trigger
