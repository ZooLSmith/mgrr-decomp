// REFINED
// Trigger::cActResultRecEnd -- trigger action (vftable 0x016B0148).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResultRecEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResultRecEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResultRecEnd : public cAction<cActResultRecEnd> {
public:
    // vftable (0x016B0148), in slot order (slot = byte offset)
    virtual void *vf00();                                 // +0x00  00C93C10  address of this action type's static descriptor
    virtual cActResultRecEnd *vf04(unsigned char flags);  // +0x04  00C93C20  scalar deleting destructor
    virtual void vf08();                                  // +0x08  00C8D780  (empty)
    virtual void vf0C();                                  // +0x0C  00C8D790  (empty)
    virtual void vf10();                                  // +0x10  00C8D7A0  (empty)
    virtual void vf14();                                  // +0x14  00C8D7B0  (empty)
    // +0x18  00C80840  inherited vf18
    // +0x1C  00C8D7C0  inherited cAction<cActResultRecEnd>::vf1C
    // +0x20  00C8D7D0  inherited cAction<cActResultRecEnd>::vf20
};

} // namespace Trigger
