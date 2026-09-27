// REFINED
// Trigger::cActGimmickFinish -- trigger action (vftable 0x016B049C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGimmickFinish>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGimmickFinish.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGimmickFinish : public cAction<cActGimmickFinish> {
public:
    // vftable (0x016B049C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94350  address of this action type's static descriptor
    virtual cActGimmickFinish *vf04(unsigned char flags); // +0x04  00C94360  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E3F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8E400  (empty)
    virtual void vf10();                         // +0x10  00C8E410  (empty)
    virtual void vf14();                         // +0x14  00C8E420  (empty)
    // +0x18  00C81130  inherited cAction<cActGimmickFinish>::vf18
    // +0x1C  00C8E430  inherited cAction<cActGimmickFinish>::vf1C
    // +0x20  00C8E440  inherited cAction<cActGimmickFinish>::vf20
};

} // namespace Trigger
