// REFINED
// Trigger::cActItemGet -- trigger action (vftable 0x016B00A8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActItemGet>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActItemGet.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActItemGet : public cAction<cActItemGet> {
public:
    // vftable (0x016B00A8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93B10  address of this action type's static descriptor
    virtual cActItemGet *vf04(unsigned char flags); // +0x04  00C93B20  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D500  (empty)
    virtual void vf0C();                         // +0x0C  00C8D510  (empty)
    virtual void vf10();                         // +0x10  00C8D520  (empty)
    virtual void vf14();                         // +0x14  00C8D530  (empty)
    // +0x18  00C80740  inherited cAction<cActItemGet>::vf18
    // +0x1C  00C8D540  inherited cAction<cActItemGet>::vf1C
    // +0x20  00C8D550  inherited cAction<cActItemGet>::vf20
};

} // namespace Trigger
