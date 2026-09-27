// REFINED
// Trigger::cActTeleportIndex -- trigger action (vftable 0x016AEAF0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTeleportIndex>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTeleportIndex.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTeleportIndex : public cAction<cActTeleportIndex> {
public:
    // vftable (0x016AEAF0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C916F0  address of this action type's static descriptor
    virtual cActTeleportIndex *vf04(unsigned char flags); // +0x04  00C91700  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C891F0  (empty)
    virtual void vf0C();                         // +0x0C  00C89200  (empty)
    virtual void vf10();                         // +0x10  00C89210  (empty)
    virtual void vf14();                         // +0x14  00C89220  (empty)
    // +0x18  00C7E990  inherited Trigger::Act::POS_PL_2
    // +0x1C  00C89230  inherited Trigger::cAction<Trigger::cActTeleportIndex>::vf1C
    // +0x20  00C89240  inherited Trigger::cAction<Trigger::cActTeleportIndex>::vf20
};

} // namespace Trigger
