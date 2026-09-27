// REFINED
// Trigger::cActVrTimerStop -- trigger action (vftable 0x016B08D4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrTimerStop>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrTimerStop.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrTimerStop : public cAction<cActVrTimerStop> {
public:
    // vftable (0x016B08D4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94A00  address of this action type's static descriptor
    virtual cActVrTimerStop *vf04(unsigned char flags); // +0x04  00C94A10  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F4D0  (empty)
    virtual void vf0C();                         // +0x0C  00C8F4E0  (empty)
    virtual void vf10();                         // +0x10  00C8F4F0  (empty)
    virtual void vf14();                         // +0x14  00C8F500  (empty)
    // +0x18  00C816F0  inherited Trigger::Act::VR_TIMER_STOP
    // +0x1C  00C8F510  inherited Trigger::cAction<Trigger::cActVrTimerStop>::vf1C
    // +0x20  00C8F520  inherited Trigger::cAction<Trigger::cActVrTimerStop>::vf20
};

} // namespace Trigger
