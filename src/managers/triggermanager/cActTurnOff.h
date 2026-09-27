// REFINED
// Trigger::cActTurnOff -- trigger action (vftable 0x016AEDFC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTurnOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTurnOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTurnOff : public cAction<cActTurnOff> {
public:
    // vftable (0x016AEDFC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91BB0  address of this action type's static descriptor
    virtual cActTurnOff *vf04(unsigned char flags); // +0x04  00C91BC0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89B50  (empty)
    virtual void vf0C();                         // +0x0C  00C89B60  (empty)
    virtual void vf10();                         // +0x10  00C89B70  (empty)
    virtual void vf14();                         // +0x14  00C89B80  (empty)
    // +0x18  00C967C0  inherited Trigger::Act::TURN_OFF
    // +0x1C  00C89B90  inherited Trigger::cAction<Trigger::cActTurnOff>::vf1C
    // +0x20  00C89BA0  inherited Trigger::cAction<Trigger::cActTurnOff>::vf20
};

} // namespace Trigger
