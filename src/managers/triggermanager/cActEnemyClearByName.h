// REFINED
// Trigger::cActEnemyClearByName -- trigger action (vftable 0x016AED5C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyClearByName>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyClearByName.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyClearByName : public cAction<cActEnemyClearByName> {
public:
    // vftable (0x016AED5C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91AB0  address of this action type's static descriptor
    virtual cActEnemyClearByName *vf04(unsigned char flags); // +0x04  00C91AC0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C898D0  (empty)
    virtual void vf0C();                         // +0x0C  00C898E0  (empty)
    virtual void vf10();                         // +0x10  00C898F0  (empty)
    virtual void vf14();                         // +0x14  00C89900  (empty)
    // +0x18  00C7EDA0  Act::ENM_CLEAR (actions/TrgActEnmClear.cpp)
    // +0x1C  00C89910  inherited cAction<cActEnemyClearByName>::vf1C
    // +0x20  00C89920  inherited cAction<cActEnemyClearByName>::vf20
};

} // namespace Trigger
