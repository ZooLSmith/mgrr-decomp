// REFINED
// Trigger::cActGimmickRevert -- trigger action (vftable 0x016B04C4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGimmickRevert>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGimmickRevert.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGimmickRevert : public cAction<cActGimmickRevert> {
public:
    // vftable (0x016B04C4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94390  address of this action type's static descriptor
    virtual cActGimmickRevert *vf04(unsigned char flags); // +0x04  00C943A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E490  (empty)
    virtual void vf0C();                         // +0x0C  00C8E4A0  (empty)
    virtual void vf10();                         // +0x10  00C8E4B0  (empty)
    virtual void vf14();                         // +0x14  00C8E4C0  (empty)
    // +0x18  00C81170  inherited cAction<cActGimmickRevert>::vf18
    // +0x1C  00C8E4D0  inherited cAction<cActGimmickRevert>::vf1C
    // +0x20  00C8E4E0  inherited cAction<cActGimmickRevert>::vf20
};

} // namespace Trigger
