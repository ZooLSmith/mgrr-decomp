// REFINED
// Trigger::cActMainTrgDelFunc -- trigger action (vftable 0x016B0C1C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMainTrgDelFunc>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMainTrgDelFunc.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMainTrgDelFunc : public cAction<cActMainTrgDelFunc> {
public:
    // vftable (0x016B0C1C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94F00  address of this action type's static descriptor
    virtual cActMainTrgDelFunc *vf04(unsigned char flags); // +0x04  00C94F10  scalar deleting destructor
    // +0x08  00C90330  inherited cAction<cActMainTrgDelFunc>::vf08
    // +0x0C  00C90340  inherited cAction<cActMainTrgDelFunc>::vf0C
    // +0x10  00C90350  inherited cAction<cActMainTrgDelFunc>::vf10
    // +0x14  00C90360  inherited cAction<cActMainTrgDelFunc>::vf14
    // +0x18  00C81A10  inherited cAction<cActMainTrgDelFunc>::vf18
    // +0x1C  00C90370  inherited cAction<cActMainTrgDelFunc>::vf1C
    // +0x20  00C90380  inherited cAction<cActMainTrgDelFunc>::vf20
};

} // namespace Trigger
