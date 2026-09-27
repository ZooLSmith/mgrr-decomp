// REFINED
// Trigger::cActPathWayStart -- trigger action (vftable 0x016AF7E8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPathWayStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPathWayStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPathWayStart : public cAction<cActPathWayStart> {
public:
    // vftable (0x016AF7E8), in slot order (slot = byte offset)
    virtual void *vf00();                                 // +0x00  00C92C00  address of this action type's static descriptor
    virtual cActPathWayStart *vf04(unsigned char flags);  // +0x04  00C92C10  scalar deleting destructor
    virtual void vf08();                                  // +0x08  00C8B8B0  (empty)
    virtual void vf0C();                                  // +0x0C  00C8B8C0  (empty)
    virtual void vf10();                                  // +0x10  00C8B8D0  (empty)
    virtual void vf14();                                  // +0x14  00C8B8E0  (empty)
    // +0x18  00C7F670  inherited vf18
    // +0x1C  00C8B8F0  inherited cAction<cActPathWayStart>::vf1C
    // +0x20  00C8B900  inherited cAction<cActPathWayStart>::vf20
};

} // namespace Trigger
