// REFINED
// Trigger::cActEffectRoom -- trigger action (vftable 0x016AF680).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEffectRoom>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEffectRoom.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEffectRoom : public cAction<cActEffectRoom> {
public:
    // vftable (0x016AF680), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C929C0  address of this action type's static descriptor
    virtual cActEffectRoom *vf04(unsigned char flags); // +0x04  00C929D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8B310  (empty)
    virtual void vf0C();                         // +0x0C  00C8B320  (empty)
    virtual void vf10();                         // +0x10  00C8B330  (empty)
    virtual void vf14();                         // +0x14  00C8B340  (empty)
    // +0x18  00C97140  Act::EFFECT_ROOM (actions/TrgActEffectRoom.cpp)
    // +0x1C  00C8B350  inherited cAction<cActEffectRoom>::vf1C
    // +0x20  00C8B360  inherited cAction<cActEffectRoom>::vf20
};

} // namespace Trigger
