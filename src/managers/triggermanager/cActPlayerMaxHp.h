// REFINED
// Trigger::cActPlayerMaxHp -- trigger action (vftable 0x016B080C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerMaxHp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerMaxHp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerMaxHp : public cAction<cActPlayerMaxHp> {
public:
    // vftable (0x016B080C), in slot order (slot = byte offset)
    virtual void *vf00();                                // +0x00  00C948C0  address of this action type's static descriptor
    virtual cActPlayerMaxHp *vf04(unsigned char flags);  // +0x04  00C948D0  scalar deleting destructor
    virtual void vf08();                                 // +0x08  00C8F1B0  (empty)
    virtual void vf0C();                                 // +0x0C  00C8F1C0  (empty)
    virtual void vf10();                                 // +0x10  00C8F1D0  (empty)
    virtual void vf14();                                 // +0x14  00C8F1E0  (empty)
    // +0x18  00C88640  inherited vf18
    // +0x1C  00C8F1F0  inherited cAction<cActPlayerMaxHp>::vf1C
    // +0x20  00C8F200  inherited cAction<cActPlayerMaxHp>::vf20
};

} // namespace Trigger
