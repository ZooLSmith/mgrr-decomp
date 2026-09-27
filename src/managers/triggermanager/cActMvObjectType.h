// REFINED
// Trigger::cActMvObjectType -- trigger action (vftable 0x016AFC90).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMvObjectType>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMvObjectType.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMvObjectType : public cAction<cActMvObjectType> {
public:
    // vftable (0x016AFC90), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C934B0  address of this action type's static descriptor
    virtual cActMvObjectType *vf04(unsigned char flags); // +0x04  00C934C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C600  (empty)
    virtual void vf0C();                         // +0x0C  00C8C610  (empty)
    virtual void vf10();                         // +0x10  00C8C620  (empty)
    virtual void vf14();                         // +0x14  00C8C630  (empty)
    // +0x18  00C87CE0  inherited cAction<cActMvObjectType>::vf18
    // +0x1C  00C8C640  inherited cAction<cActMvObjectType>::vf1C
    // +0x20  00C8C650  inherited cAction<cActMvObjectType>::vf20
};

} // namespace Trigger
