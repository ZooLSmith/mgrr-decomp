// REFINED
// Trigger::cActFade -- trigger action (vftable 0x016B05DC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFade>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFade.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFade : public cAction<cActFade> {
public:
    // vftable (0x016B05DC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94550  address of this action type's static descriptor
    virtual cActFade *vf04(unsigned char flags); // +0x04  00C94560  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E8F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8E900  (empty)
    virtual void vf10();                         // +0x10  00C8E910  (empty)
    virtual void vf14();                         // +0x14  00C8E920  (empty)
    // +0x18  00C97E10  inherited cAction<cActFade>::vf18
    // +0x1C  00C8E930  inherited cAction<cActFade>::vf1C
    // +0x20  00C8E940  inherited cAction<cActFade>::vf20
};

} // namespace Trigger
