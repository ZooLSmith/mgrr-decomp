// REFINED
// Trigger::cActAddExp -- trigger action (vftable 0x016B06A4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAddExp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAddExp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAddExp : public cAction<cActAddExp> {
public:
    // vftable (0x016B06A4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94690  address of this action type's static descriptor
    virtual cActAddExp *vf04(unsigned char flags); // +0x04  00C946A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EC10  (empty)
    virtual void vf0C();                         // +0x0C  00C8EC20  (empty)
    virtual void vf10();                         // +0x10  00C8EC30  (empty)
    virtual void vf14();                         // +0x14  00C8EC40  (empty)
    // +0x18  00C813E0  inherited vf18 (Trigger::Act::ADD_EXP)
    // +0x1C  00C8EC50  inherited Trigger::cAction<Trigger::cActAddExp>::vf1C
    // +0x20  00C8EC60  inherited Trigger::cAction<Trigger::cActAddExp>::vf20
};

} // namespace Trigger
