// REFINED
// Trigger::cActPlAnimation -- trigger action (vftable 0x016AF900).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlAnimation>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlAnimation.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlAnimation : public cAction<cActPlAnimation> {
public:
    // vftable (0x016AF900), in slot order (slot = byte offset)
    virtual void *vf00();                                // +0x00  00C92F10  address of this action type's static descriptor
    virtual cActPlAnimation *vf04(unsigned char flags);  // +0x04  00C92F20  scalar deleting destructor
    virtual void vf08();                                 // +0x08  00C8BD40  (empty)
    virtual void vf0C();                                 // +0x0C  00C8BD50  (empty)
    virtual void vf10();                                 // +0x10  00C8BD60  (empty)
    virtual void vf14();                                 // +0x14  00C8BD70  (empty)
    // +0x18  00C87830  inherited vf18
    // +0x1C  00C8BD80  inherited cAction<cActPlAnimation>::vf1C
    // +0x20  00C8BD90  inherited cAction<cActPlAnimation>::vf20
};

} // namespace Trigger
