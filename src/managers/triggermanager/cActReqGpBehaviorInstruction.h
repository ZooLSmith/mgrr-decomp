// REFINED
// Trigger::cActReqGpBehaviorInstruction -- trigger action (vftable 0x016AFEF0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActReqGpBehaviorInstruction>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActReqGpBehaviorInstruction.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActReqGpBehaviorInstruction : public cAction<cActReqGpBehaviorInstruction> {
public:
    // vftable (0x016AFEF0), in slot order (slot = byte offset)
    virtual void *vf00();                                             // +0x00  00C93850  address of this action type's static descriptor
    virtual cActReqGpBehaviorInstruction *vf04(unsigned char flags);  // +0x04  00C93860  scalar deleting destructor
    virtual void vf08();                                              // +0x08  00C8CE20  (empty)
    virtual void vf0C();                                              // +0x0C  00C8CE30  (empty)
    virtual void vf10();                                              // +0x10  00C8CE40  (empty)
    virtual void vf14();                                              // +0x14  00C8CE50  (empty)
    // +0x18  00C9D540  inherited vf18
    // +0x1C  00C8CE60  inherited cAction<cActReqGpBehaviorInstruction>::vf1C
    // +0x20  00C8CE70  inherited cAction<cActReqGpBehaviorInstruction>::vf20
};

} // namespace Trigger
