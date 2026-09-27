// REFINED
// Trigger::cActReqBehaviorInstruction -- trigger action (vftable 0x016AF6F8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActReqBehaviorInstruction>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActReqBehaviorInstruction.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActReqBehaviorInstruction : public cAction<cActReqBehaviorInstruction> {
public:
    // vftable (0x016AF6F8), in slot order (slot = byte offset)
    virtual void *vf00();                                           // +0x00  00C92A80  address of this action type's static descriptor
    virtual cActReqBehaviorInstruction *vf04(unsigned char flags);  // +0x04  00C92A90  scalar deleting destructor
    virtual void vf08();                                            // +0x08  00C8B4F0  (empty)
    virtual void vf0C();                                            // +0x0C  00C8B500  (empty)
    virtual void vf10();                                            // +0x10  00C8B510  (empty)
    virtual void vf14();                                            // +0x14  00C8B520  (empty)
    // +0x18  00C7F4C0  inherited vf18
    // +0x1C  00C8B530  inherited cAction<cActReqBehaviorInstruction>::vf1C
    // +0x20  00C8B540  inherited cAction<cActReqBehaviorInstruction>::vf20
};

} // namespace Trigger
