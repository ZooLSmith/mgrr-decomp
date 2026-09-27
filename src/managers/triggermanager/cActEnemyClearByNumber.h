// REFINED
// Trigger::cActEnemyClearByNumber -- trigger action (vftable 0x016AED84).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyClearByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyClearByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyClearByNumber : public cAction<cActEnemyClearByNumber> {
public:
    // vftable (0x016AED84), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91AF0  address of this action type's static descriptor
    virtual cActEnemyClearByNumber *vf04(unsigned char flags); // +0x04  00C91B00  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89970  (empty)
    virtual void vf0C();                         // +0x0C  00C89980  (empty)
    virtual void vf10();                         // +0x10  00C89990  (empty)
    virtual void vf14();                         // +0x14  00C899A0  (empty)
    // +0x18  00C7EE00  Act::ENM_CLEAR_2 (actions/TrgActEnmClear.cpp)
    // +0x1C  00C899B0  inherited cAction<cActEnemyClearByNumber>::vf1C
    // +0x20  00C899C0  inherited cAction<cActEnemyClearByNumber>::vf20
};

} // namespace Trigger
