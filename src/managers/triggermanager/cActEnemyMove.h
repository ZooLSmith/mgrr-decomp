// REFINED
// Trigger::cActEnemyMove -- trigger action (vftable 0x016AF6D0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyMove>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyMove.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyMove : public cAction<cActEnemyMove> {
public:
    // vftable (0x016AF6D0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92A40  address of this action type's static descriptor
    virtual cActEnemyMove *vf04(unsigned char flags); // +0x04  00C92A50  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B450  (empty)
    virtual void vf0C();                         // +0x0C  00C8B460  (empty)
    virtual void vf10();                         // +0x10  00C8B470  (empty)
    virtual void vf14();                         // +0x14  00C8B480  (empty)
    // +0x18  00C7F4A0  inherited cAction<cActEnemyMove>::vf18
    // +0x1C  00C8B490  inherited cAction<cActEnemyMove>::vf1C
    // +0x20  00C8B4A0  inherited cAction<cActEnemyMove>::vf20
};

} // namespace Trigger
