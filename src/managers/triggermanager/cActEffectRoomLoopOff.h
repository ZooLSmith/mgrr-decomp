// REFINED
// Trigger::cActEffectRoomLoopOff -- trigger action (vftable 0x016B0210).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEffectRoomLoopOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEffectRoomLoopOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEffectRoomLoopOff : public cAction<cActEffectRoomLoopOff> {
public:
    // vftable (0x016B0210), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93D70  address of this action type's static descriptor
    virtual cActEffectRoomLoopOff *vf04(unsigned char flags); // +0x04  00C93D80  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DA90  (empty)
    virtual void vf0C();                         // +0x0C  00C8DAA0  (empty)
    virtual void vf10();                         // +0x10  00C8DAB0  (empty)
    virtual void vf14();                         // +0x14  00C8DAC0  (empty)
    // +0x18  00C80AF0  Act::EFFECT_ROOM_LOOP_OFF (actions/TrgActEffectRoomLoopOff.cpp)
    // +0x1C  00C8DAD0  inherited cAction<cActEffectRoomLoopOff>::vf1C
    // +0x20  00C8DAE0  inherited cAction<cActEffectRoomLoopOff>::vf20
};

} // namespace Trigger
