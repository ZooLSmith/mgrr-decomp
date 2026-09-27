// REFINED
// Trigger::cActStopObjectType -- trigger action (vftable 0x016AFC68).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStopObjectType>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStopObjectType.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStopObjectType : public cAction<cActStopObjectType> {
public:
    // vftable (0x016AFC68), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93470  address of this action type's static descriptor
    virtual cActStopObjectType *vf04(unsigned char flags); // +0x04  00C93480  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C560  (empty)
    virtual void vf0C();                         // +0x0C  00C8C570  (empty)
    virtual void vf10();                         // +0x10  00C8C580  (empty)
    virtual void vf14();                         // +0x14  00C8C590  (empty)
    // +0x18  00C87C40  inherited Trigger::Act::STP_OBJECT_TYPE
    // +0x1C  00C8C5A0  inherited Trigger::cAction<Trigger::cActStopObjectType>::vf1C
    // +0x20  00C8C5B0  inherited Trigger::cAction<Trigger::cActStopObjectType>::vf20
};

} // namespace Trigger
