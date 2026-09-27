// REFINED
// Trigger::cActGimmickRevivalCancel -- trigger action (vftable 0x016B053C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGimmickRevivalCancel>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGimmickRevivalCancel.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGimmickRevivalCancel : public cAction<cActGimmickRevivalCancel> {
public:
    // vftable (0x016B053C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94450  address of this action type's static descriptor
    virtual cActGimmickRevivalCancel *vf04(unsigned char flags); // +0x04  00C94460  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E670  (empty)
    virtual void vf0C();                         // +0x0C  00C8E680  (empty)
    virtual void vf10();                         // +0x10  00C8E690  (empty)
    virtual void vf14();                         // +0x14  00C8E6A0  (empty)
    // +0x18  00C81230  inherited cAction<cActGimmickRevivalCancel>::vf18
    // +0x1C  00C8E6B0  inherited cAction<cActGimmickRevivalCancel>::vf1C
    // +0x20  00C8E6C0  inherited cAction<cActGimmickRevivalCancel>::vf20
};

} // namespace Trigger
