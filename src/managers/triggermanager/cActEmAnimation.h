// REFINED
// Trigger::cActEmAnimation -- trigger action (vftable 0x016AF8D8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEmAnimation>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEmAnimation.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEmAnimation : public cAction<cActEmAnimation> {
public:
    // vftable (0x016AF8D8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92EA0  address of this action type's static descriptor
    virtual cActEmAnimation *vf04(unsigned char flags); // +0x04  00C92EB0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8BCA0  (empty)
    virtual void vf0C();                         // +0x0C  00C8BCB0  (empty)
    virtual void vf10();                         // +0x10  00C8BCC0  (empty)
    virtual void vf14();                         // +0x14  00C8BCD0  (empty)
    // +0x18  00C7F7A0  Act::EM_ANIM (actions/TrgActEmAnim.cpp)
    // +0x1C  00C8BCE0  inherited cAction<cActEmAnimation>::vf1C
    // +0x20  00C8BCF0  inherited cAction<cActEmAnimation>::vf20
};

} // namespace Trigger
