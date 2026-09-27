// REFINED
// Trigger::cActResultRecStartClear -- trigger action (vftable 0x016B0B04).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResultRecStartClear>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResultRecStartClear.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResultRecStartClear : public cAction<cActResultRecStartClear> {
public:
    // vftable (0x016B0B04), in slot order (slot = byte offset)
    virtual void *vf00();                                        // +0x00  00C94D40  address of this action type's static descriptor
    virtual cActResultRecStartClear *vf04(unsigned char flags);  // +0x04  00C94D50  scalar deleting destructor
    virtual void vf08();                                         // +0x08  00C8FD90  (empty)
    virtual void vf0C();                                         // +0x0C  00C8FDA0  (empty)
    virtual void vf10();                                         // +0x10  00C8FDB0  (empty)
    virtual void vf14();                                         // +0x14  00C8FDC0  (empty)
    // +0x18  00C81880  inherited vf18
    // +0x1C  00C8FDD0  inherited cAction<cActResultRecStartClear>::vf1C
    // +0x20  00C8FDE0  inherited cAction<cActResultRecStartClear>::vf20
};

} // namespace Trigger
