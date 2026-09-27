// REFINED
// Trigger::cActGimmickEnable -- trigger action (vftable 0x016AFB9C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGimmickEnable>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGimmickEnable.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGimmickEnable : public cAction<cActGimmickEnable> {
public:
    // vftable (0x016AFB9C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93330  address of this action type's static descriptor
    virtual cActGimmickEnable *vf04(unsigned char flags); // +0x04  00C93340  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C2E0  (empty)
    virtual void vf0C();                         // +0x0C  00C8C2F0  (empty)
    virtual void vf10();                         // +0x10  00C8C300  (empty)
    virtual void vf14();                         // +0x14  00C8C310  (empty)
    // +0x18  00C7FF50  inherited cAction<cActGimmickEnable>::vf18
    // +0x1C  00C8C320  inherited cAction<cActGimmickEnable>::vf1C
    // +0x20  00C8C330  inherited cAction<cActGimmickEnable>::vf20
};

} // namespace Trigger
