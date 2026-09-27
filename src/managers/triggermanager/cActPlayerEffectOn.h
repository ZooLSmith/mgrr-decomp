// REFINED
// Trigger::cActPlayerEffectOn -- trigger action (vftable 0x016AFDA8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerEffectOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerEffectOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerEffectOn : public cAction<cActPlayerEffectOn> {
public:
    // vftable (0x016AFDA8), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C8CA50  address of this action type's static descriptor
    virtual cActPlayerEffectOn *vf04(unsigned char flags);  // +0x04  00C93670  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C80250  (empty)
    virtual void vf0C();                                    // +0x0C  00C8CA70  (empty)
    virtual void vf10();                                    // +0x10  00C8CA80  (empty)
    virtual void vf14();                                    // +0x14  00C8CA90  (empty)
    virtual int vf18();                                     // +0x18  00C80260  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8CAA0  inherited cAction<cActPlayerEffectOn>::vf1C
    // +0x20  00C8CAB0  inherited cAction<cActPlayerEffectOn>::vf20
};

} // namespace Trigger
