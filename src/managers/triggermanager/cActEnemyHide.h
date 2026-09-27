// REFINED
// Trigger::cActEnemyHide -- trigger action (vftable 0x016B04EC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyHide>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyHide.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyHide : public cAction<cActEnemyHide> {
public:
    // vftable (0x016B04EC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C943D0  address of this action type's static descriptor
    virtual cActEnemyHide *vf04(unsigned char flags); // +0x04  00C943E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E530  (empty)
    virtual void vf0C();                         // +0x0C  00C8E540  (empty)
    virtual void vf10();                         // +0x10  00C8E550  (empty)
    virtual void vf14();                         // +0x14  00C8E560  (empty)
    // +0x18  00C811B0  inherited cAction<cActEnemyHide>::vf18
    // +0x1C  00C8E570  inherited cAction<cActEnemyHide>::vf1C
    // +0x20  00C8E580  inherited cAction<cActEnemyHide>::vf20
};

} // namespace Trigger
