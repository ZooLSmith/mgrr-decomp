// REFINED
// Trigger::cActSubTrgActive -- trigger action (vftable 0x016B0B7C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubTrgActive>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubTrgActive.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubTrgActive : public cAction<cActSubTrgActive> {
public:
    // vftable (0x016B0B7C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94E00  address of this action type's static descriptor
    virtual cActSubTrgActive *vf04(unsigned char flags); // +0x04  00C94E10  scalar deleting destructor
    // +0x08  00C900B0  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf08
    // +0x0C  00C900C0  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf0C
    // +0x10  00C900D0  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf10
    // +0x14  00C900E0  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf14
    // +0x18  00C81940  inherited Trigger::Act::SUB_TRG_ACTIVE
    // +0x1C  00C900F0  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf1C
    // +0x20  00C90100  inherited Trigger::cAction<Trigger::cActSubTrgActive>::vf20
};

} // namespace Trigger
