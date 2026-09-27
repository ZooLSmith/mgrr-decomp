// REFINED
// Trigger::cActEnemyRetreatByNumber -- trigger action (vftable 0x016AED34).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyRetreatByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyRetreatByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyRetreatByNumber : public cAction<cActEnemyRetreatByNumber> {
public:
    // vftable (0x016AED34), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91A70  address of this action type's static descriptor
    virtual cActEnemyRetreatByNumber *vf04(unsigned char flags); // +0x04  00C91A80  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89830  (empty)
    virtual void vf0C();                         // +0x0C  00C89840  (empty)
    virtual void vf10();                         // +0x10  00C89850  (empty)
    virtual void vf14();                         // +0x14  00C89860  (empty)
    // +0x18  00C7ED70  inherited cAction<cActEnemyRetreatByNumber>::vf18
    // +0x1C  00C89870  inherited cAction<cActEnemyRetreatByNumber>::vf1C
    // +0x20  00C89880  inherited cAction<cActEnemyRetreatByNumber>::vf20
};

} // namespace Trigger
