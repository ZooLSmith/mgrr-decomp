// REFINED
// Trigger::cActCollision -- trigger action (vftable 0x016AF354).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCollision>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCollision.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCollision : public cAction<cActCollision> {
public:
    // vftable (0x016AF354), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C924D0  address of this action type's static descriptor
    virtual cActCollision *vf04(unsigned char flags); // +0x04  00C924E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AE10  (empty)
    virtual void vf0C();                         // +0x0C  00C8AE20  (empty)
    virtual void vf10();                         // +0x10  00C8AE30  (empty)
    virtual void vf14();                         // +0x14  00C8AE40  (empty)
    // +0x18  00C7F330  Act::AreaCollision (actions/TrgActAreacollision.cpp)
    // +0x1C  00C8AE50  inherited cAction<cActCollision>::vf1C
    // +0x20  00C8AE60  inherited cAction<cActCollision>::vf20
};

} // namespace Trigger
