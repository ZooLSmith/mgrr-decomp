// REFINED
// Trigger::cActEnemyAppear -- trigger action (vftable 0x016B0514).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyAppear>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyAppear.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyAppear : public cAction<cActEnemyAppear> {
public:
    // vftable (0x016B0514), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94410  address of this action type's static descriptor
    virtual cActEnemyAppear *vf04(unsigned char flags); // +0x04  00C94420  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E5D0  (empty)
    virtual void vf0C();                         // +0x0C  00C8E5E0  (empty)
    virtual void vf10();                         // +0x10  00C8E5F0  (empty)
    virtual void vf14();                         // +0x14  00C8E600  (empty)
    // +0x18  00C811F0  Act::ENM_APPEAR (actions/TrgActEnmAppear.cpp)
    // +0x1C  00C8E610  inherited cAction<cActEnemyAppear>::vf1C
    // +0x20  00C8E620  inherited cAction<cActEnemyAppear>::vf20
};

} // namespace Trigger
