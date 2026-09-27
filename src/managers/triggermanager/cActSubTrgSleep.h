// REFINED
// Trigger::cActSubTrgSleep -- trigger action (vftable 0x016B0BA4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSubTrgSleep>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSubTrgSleep.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSubTrgSleep : public cAction<cActSubTrgSleep> {
public:
    // vftable (0x016B0BA4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94E40  address of this action type's static descriptor
    virtual cActSubTrgSleep *vf04(unsigned char flags); // +0x04  00C94E50  scalar deleting destructor
    // +0x08  00C90150  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf08
    // +0x0C  00C90160  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf0C
    // +0x10  00C90170  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf10
    // +0x14  00C90180  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf14
    // +0x18  00C81970  inherited Trigger::Act::SUB_TRG_SLEEP
    // +0x1C  00C90190  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf1C
    // +0x20  00C901A0  inherited Trigger::cAction<Trigger::cActSubTrgSleep>::vf20
};

} // namespace Trigger
