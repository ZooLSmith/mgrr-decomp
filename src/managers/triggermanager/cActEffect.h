// REFINED
// Trigger::cActEffect -- trigger action (vftable 0x016AEDAC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEffect>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEffect.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEffect : public cAction<cActEffect> {
public:
    // vftable (0x016AEDAC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91B30  address of this action type's static descriptor
    virtual cActEffect *vf04(unsigned char flags); // +0x04  00C91B40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89A10  (empty)
    virtual void vf0C();                         // +0x0C  00C89A20  (empty)
    virtual void vf10();                         // +0x10  00C89A30  (empty)
    virtual void vf14();                         // +0x14  00C89A40  (empty)
    // +0x18  00C96670  Act::EFFECT (actions/TrgActEffect.cpp)
    // +0x1C  00C89A50  inherited cAction<cActEffect>::vf1C
    // +0x20  00C89A60  inherited cAction<cActEffect>::vf20
};

} // namespace Trigger
