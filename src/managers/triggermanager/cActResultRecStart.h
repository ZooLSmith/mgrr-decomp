// REFINED
// Trigger::cActResultRecStart -- trigger action (vftable 0x016B0120).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResultRecStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResultRecStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResultRecStart : public cAction<cActResultRecStart> {
public:
    // vftable (0x016B0120), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C93BD0  address of this action type's static descriptor
    virtual cActResultRecStart *vf04(unsigned char flags);  // +0x04  00C93BE0  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C8D6E0  (empty)
    virtual void vf0C();                                    // +0x0C  00C8D6F0  (empty)
    virtual void vf10();                                    // +0x10  00C8D700  (empty)
    virtual void vf14();                                    // +0x14  00C8D710  (empty)
    // +0x18  00C807E0  inherited vf18
    // +0x1C  00C8D720  inherited cAction<cActResultRecStart>::vf1C
    // +0x20  00C8D730  inherited cAction<cActResultRecStart>::vf20
};

} // namespace Trigger
