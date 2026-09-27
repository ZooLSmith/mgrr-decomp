// REFINED
// Trigger::cActPhaseSubphase -- trigger action (vftable 0x016AF0D4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPhaseSubphase>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPhaseSubphase.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPhaseSubphase : public cAction<cActPhaseSubphase> {
public:
    // vftable (0x016AF0D4), in slot order (slot = byte offset)
    virtual void *vf00();                                  // +0x00  00C92100  address of this action type's static descriptor
    virtual cActPhaseSubphase *vf04(unsigned char flags);  // +0x04  00C92110  scalar deleting destructor
    virtual void vf08();                                   // +0x08  00C8A410  (empty)
    virtual void vf0C();                                   // +0x0C  00C8A420  (empty)
    virtual void vf10();                                   // +0x10  00C8A430  (empty)
    virtual void vf14();                                   // +0x14  00C8A440  (empty)
    // +0x18  00C7F0B0  inherited vf18
    // +0x1C  00C8A450  inherited cAction<cActPhaseSubphase>::vf1C
    // +0x20  00C8A460  inherited cAction<cActPhaseSubphase>::vf20
};

} // namespace Trigger
