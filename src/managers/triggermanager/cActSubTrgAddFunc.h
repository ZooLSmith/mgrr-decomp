// REFINED
// Trigger::cActSubTrgAddFunc -- trigger action (vftable 0x016B0BF4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubTrgAddFunc>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubTrgAddFunc.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubTrgAddFunc : public cAction<cActSubTrgAddFunc> {
public:
    // vftable (0x016B0BF4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94EC0  address of this action type's static descriptor
    virtual cActSubTrgAddFunc *vf04(unsigned char flags); // +0x04  00C94ED0  scalar deleting destructor
    // +0x08  00C90290  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf08
    // +0x0C  00C902A0  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf0C
    // +0x10  00C902B0  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf10
    // +0x14  00C902C0  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf14
    // +0x18  00C819D0  inherited Trigger::Act::SUB_TRG_ADD_FUNC
    // +0x1C  00C902D0  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf1C
    // +0x20  00C902E0  inherited Trigger::cAction<Trigger::cActSubTrgAddFunc>::vf20
};

} // namespace Trigger
