// REFINED
// Trigger::cActEnemyRetreatByName -- trigger action (vftable 0x016AED0C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyRetreatByName>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyRetreatByName.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyRetreatByName : public cAction<cActEnemyRetreatByName> {
public:
    // vftable (0x016AED0C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91A30  address of this action type's static descriptor
    virtual cActEnemyRetreatByName *vf04(unsigned char flags); // +0x04  00C91A40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89790  (empty)
    virtual void vf0C();                         // +0x0C  00C897A0  (empty)
    virtual void vf10();                         // +0x10  00C897B0  (empty)
    virtual void vf14();                         // +0x14  00C897C0  (empty)
    // +0x18  00C7ED10  inherited cAction<cActEnemyRetreatByName>::vf18
    // +0x1C  00C897D0  inherited cAction<cActEnemyRetreatByName>::vf1C
    // +0x20  00C897E0  inherited cAction<cActEnemyRetreatByName>::vf20
};

} // namespace Trigger
