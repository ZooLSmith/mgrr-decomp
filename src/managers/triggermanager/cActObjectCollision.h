// REFINED
// Trigger::cActObjectCollision -- trigger action (vftable 0x016B0424).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActObjectCollision>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActObjectCollision.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActObjectCollision : public cAction<cActObjectCollision> {
public:
    // vftable (0x016B0424), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94290  address of this action type's static descriptor
    virtual cActObjectCollision *vf04(unsigned char flags); // +0x04  00C942A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E210  (empty)
    virtual void vf0C();                         // +0x0C  00C8E220  (empty)
    virtual void vf10();                         // +0x10  00C8E230  (empty)
    virtual void vf14();                         // +0x14  00C8E240  (empty)
    // +0x18  00C97720  inherited cAction<cActObjectCollision>::vf18
    // +0x1C  00C8E250  inherited cAction<cActObjectCollision>::vf1C
    // +0x20  00C8E260  inherited cAction<cActObjectCollision>::vf20
};

} // namespace Trigger
