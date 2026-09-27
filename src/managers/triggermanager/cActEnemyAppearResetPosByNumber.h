// REFINED
// Trigger::cActEnemyAppearResetPosByNumber -- trigger action (vftable 0x016B076C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyAppearResetPosByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyAppearResetPosByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyAppearResetPosByNumber : public cAction<cActEnemyAppearResetPosByNumber> {
public:
    // vftable (0x016B076C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C947C0  address of this action type's static descriptor
    virtual cActEnemyAppearResetPosByNumber *vf04(unsigned char flags); // +0x04  00C947D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EF30  (empty)
    virtual void vf0C();                         // +0x0C  00C8EF40  (empty)
    virtual void vf10();                         // +0x10  00C8EF50  (empty)
    virtual void vf14();                         // +0x14  00C8EF60  (empty)
    // +0x18  00C81570  Act::ENM_APPEAR_RESET_POS (actions/TrgActEnmAppearResetPos.cpp)
    // +0x1C  00C8EF70  inherited cAction<cActEnemyAppearResetPosByNumber>::vf1C
    // +0x20  00C8EF80  inherited cAction<cActEnemyAppearResetPosByNumber>::vf20
};

} // namespace Trigger
