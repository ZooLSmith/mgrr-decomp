// REFINED
// Trigger::cActDoorCloseDelay -- trigger action (vftable 0x016B0A14).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActDoorCloseDelay>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActDoorCloseDelay.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActDoorCloseDelay : public cAction<cActDoorCloseDelay> {
public:
    // vftable (0x016B0A14), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94C00  address of this action type's static descriptor
    virtual cActDoorCloseDelay *vf04(unsigned char flags); // +0x04  00C94C10  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F9D0  (empty)
    virtual void vf0C();                         // +0x0C  00C8F9E0  (empty)
    virtual void vf10();                         // +0x10  00C8F9F0  (empty)
    virtual void vf14();                         // +0x14  00C8FA00  (empty)
    virtual int vf18();                          // +0x18  00C81800  FUN_00c317b0 on the door named by the record
    // +0x1C  00C8FA10  inherited cAction<cActDoorCloseDelay>::vf1C
    // +0x20  00C8FA20  inherited cAction<cActDoorCloseDelay>::vf20
};

} // namespace Trigger
