// REFINED
// Trigger::cActSubTrgDelFunc -- trigger action (vftable 0x016B0C44).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubTrgDelFunc>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubTrgDelFunc.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubTrgDelFunc : public cAction<cActSubTrgDelFunc> {
public:
    // vftable (0x016B0C44), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94F40  address of this action type's static descriptor
    virtual cActSubTrgDelFunc *vf04(unsigned char flags); // +0x04  00C94F50  scalar deleting destructor
    // +0x08  00C903D0  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf08
    // +0x0C  00C903E0  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf0C
    // +0x10  00C903F0  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf10
    // +0x14  00C90400  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf14
    // +0x18  00C81A40  inherited Trigger::Act::SUB_TRG_DEL_FUNC
    // +0x1C  00C90410  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf1C
    // +0x20  00C90420  inherited Trigger::cAction<Trigger::cActSubTrgDelFunc>::vf20
};

} // namespace Trigger
