// REFINED
// Trigger::cActSeObject -- trigger action (vftable 0x016B085C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSeObject>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSeObject.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSeObject : public cAction<cActSeObject> {
public:
    // vftable (0x016B085C), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C94940  address of this action type's static descriptor
    virtual cActSeObject *vf04(unsigned char flags);  // +0x04  00C94950  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8F2F0  (empty)
    virtual void vf0C();                              // +0x0C  00C8F300  (empty)
    virtual void vf10();                              // +0x10  00C8F310  (empty)
    virtual void vf14();                              // +0x14  00C8F320  (empty)
    // +0x18  00C97E90  inherited vf18
    // +0x1C  00C8F330  inherited cAction<cActSeObject>::vf1C
    // +0x20  00C8F340  inherited cAction<cActSeObject>::vf20
};

} // namespace Trigger
