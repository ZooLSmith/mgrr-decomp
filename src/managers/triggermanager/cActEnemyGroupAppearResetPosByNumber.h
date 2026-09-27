// REFINED
// Trigger::cActEnemyGroupAppearResetPosByNumber -- trigger action (vftable 0x016B0794).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyGroupAppearResetPosByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyGroupAppearResetPosByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyGroupAppearResetPosByNumber : public cAction<cActEnemyGroupAppearResetPosByNumber> {
public:
    // vftable (0x016B0794), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94800  address of this action type's static descriptor
    virtual cActEnemyGroupAppearResetPosByNumber *vf04(unsigned char flags); // +0x04  00C94810  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EFD0  (empty)
    virtual void vf0C();                         // +0x0C  00C8EFE0  (empty)
    virtual void vf10();                         // +0x10  00C8EFF0  (empty)
    virtual void vf14();                         // +0x14  00C8F000  (empty)
    // +0x18  00C815A0  inherited cAction<cActEnemyGroupAppearResetPosByNumber>::vf18
    // +0x1C  00C8F010  inherited cAction<cActEnemyGroupAppearResetPosByNumber>::vf1C
    // +0x20  00C8F020  inherited cAction<cActEnemyGroupAppearResetPosByNumber>::vf20
};

} // namespace Trigger
