// REFINED
// Trigger::cActPhase -- trigger action (vftable 0x016AEC08).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPhase>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPhase.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPhase : public cAction<cActPhase> {
public:
    // vftable (0x016AEC08), in slot order (slot = byte offset)
    virtual void *vf00();                          // +0x00  00C918B0  address of this action type's static descriptor
    virtual cActPhase *vf04(unsigned char flags);  // +0x04  00C918C0  scalar deleting destructor
    virtual void vf08();                           // +0x08  00C89650  (empty)
    virtual void vf0C();                           // +0x0C  00C89660  (empty)
    virtual void vf10();                           // +0x10  00C89670  (empty)
    virtual void vf14();                           // +0x14  00C89680  (empty)
    // +0x18  00C7EB80  inherited vf18
    // +0x1C  00C89690  inherited cAction<cActPhase>::vf1C
    // +0x20  00C896A0  inherited cAction<cActPhase>::vf20
};

} // namespace Trigger
