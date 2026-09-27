// REFINED
// Trigger::cActEffectRoomLoop -- trigger action (vftable 0x016B01E8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEffectRoomLoop>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEffectRoomLoop.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEffectRoomLoop : public cAction<cActEffectRoomLoop> {
public:
    // vftable (0x016B01E8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93D30  address of this action type's static descriptor
    virtual cActEffectRoomLoop *vf04(unsigned char flags); // +0x04  00C93D40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D9F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8DA00  (empty)
    virtual void vf10();                         // +0x10  00C8DA10  (empty)
    virtual void vf14();                         // +0x14  00C8DA20  (empty)
    // +0x18  00C973E0  Act::EFFECT_ROOM_LOOP (actions/TrgActEffectRoomLoop.cpp)
    // +0x1C  00C8DA30  inherited cAction<cActEffectRoomLoop>::vf1C
    // +0x20  00C8DA40  inherited cAction<cActEffectRoomLoop>::vf20
};

} // namespace Trigger
