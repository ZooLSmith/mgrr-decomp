// REFINED
// Trigger::cActPlayerEffectOff -- trigger action (vftable 0x016AFDD0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerEffectOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerEffectOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerEffectOff : public cAction<cActPlayerEffectOff> {
public:
    // vftable (0x016AFDD0), in slot order (slot = byte offset)
    virtual void *vf00();                                    // +0x00  00C8CAF0  address of this action type's static descriptor
    virtual cActPlayerEffectOff *vf04(unsigned char flags);  // +0x04  00C936A0  scalar deleting destructor
    virtual void vf08();                                     // +0x08  00C80350  (empty)
    virtual void vf0C();                                     // +0x0C  00C8CB10  (empty)
    virtual void vf10();                                     // +0x10  00C8CB20  (empty)
    virtual void vf14();                                     // +0x14  00C8CB30  (empty)
    virtual int vf18();                                      // +0x18  00C87FD0  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8CB40  inherited cAction<cActPlayerEffectOff>::vf1C
    // +0x20  00C8CB50  inherited cAction<cActPlayerEffectOff>::vf20
};

} // namespace Trigger
