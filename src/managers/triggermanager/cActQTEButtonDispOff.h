// REFINED
// Trigger::cActQTEButtonDispOff -- trigger action (vftable 0x016AFDF8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActQTEButtonDispOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActQTEButtonDispOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActQTEButtonDispOff : public cAction<cActQTEButtonDispOff> {
public:
    // vftable (0x016AFDF8), in slot order (slot = byte offset)
    virtual void *vf00();                                     // +0x00  00C936D0  address of this action type's static descriptor
    virtual cActQTEButtonDispOff *vf04(unsigned char flags);  // +0x04  00C936E0  scalar deleting destructor
    virtual void vf08();                                      // +0x08  00C8CBA0  (empty)
    virtual void vf0C();                                      // +0x0C  00C8CBB0  (empty)
    virtual void vf10();                                      // +0x10  00C8CBC0  (empty)
    virtual void vf14();                                      // +0x14  00C8CBD0  (empty)
    // +0x18  00C80360  inherited vf18
    // +0x1C  00C8CBE0  inherited cAction<cActQTEButtonDispOff>::vf1C
    // +0x20  00C8CBF0  inherited cAction<cActQTEButtonDispOff>::vf20
};

} // namespace Trigger
