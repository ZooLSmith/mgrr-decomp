// REFINED
// Trigger::cActTeleportExplicit -- trigger action (vftable 0x016AEAC8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTeleportExplicit>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTeleportExplicit.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTeleportExplicit : public cAction<cActTeleportExplicit> {
public:
    // vftable (0x016AEAC8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C916B0  address of this action type's static descriptor
    virtual cActTeleportExplicit *vf04(unsigned char flags); // +0x04  00C916C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89150  (empty)
    virtual void vf0C();                         // +0x0C  00C89160  (empty)
    virtual void vf10();                         // +0x10  00C89170  (empty)
    virtual void vf14();                         // +0x14  00C89180  (empty)
    // +0x18  00C7E920  inherited Trigger::Act::POS_PL
    // +0x1C  00C89190  inherited Trigger::cAction<Trigger::cActTeleportExplicit>::vf1C
    // +0x20  00C891A0  inherited Trigger::cAction<Trigger::cActTeleportExplicit>::vf20
};

} // namespace Trigger
