// REFINED
// Trigger::cActSoftEvent -- trigger action (vftable 0x016AEBE0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSoftEvent>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSoftEvent.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSoftEvent : public cAction<cActSoftEvent> {
public:
    // vftable (0x016AEBE0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91870  address of this action type's static descriptor
    virtual cActSoftEvent *vf04(unsigned char flags); // +0x04  00C91880  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C895B0  (empty)
    virtual void vf0C();                         // +0x0C  00C895C0  (empty)
    virtual void vf10();                         // +0x10  00C895D0  (empty)
    virtual void vf14();                         // +0x14  00C895E0  (empty)
    // +0x18  00C7EB50  inherited Trigger::Act::SOFT_EVENT
    // +0x1C  00C895F0  inherited Trigger::cAction<Trigger::cActSoftEvent>::vf1C
    // +0x20  00C89600  inherited Trigger::cAction<Trigger::cActSoftEvent>::vf20
};

} // namespace Trigger
