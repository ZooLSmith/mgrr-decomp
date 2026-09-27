// REFINED
// Trigger::cActAnimationOrigin -- trigger action (vftable 0x016AEF6C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAnimationOrigin>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAnimationOrigin.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAnimationOrigin : public cAction<cActAnimationOrigin> {
public:
    // vftable (0x016AEF6C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91EA0  address of this action type's static descriptor
    virtual cActAnimationOrigin *vf04(unsigned char flags); // +0x04  00C91EB0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89E70  (empty)
    virtual void vf0C();                         // +0x0C  00C89E80  (empty)
    virtual void vf10();                         // +0x10  00C89E90  (empty)
    virtual void vf14();                         // +0x14  00C89EA0  (empty)
    virtual int vf18();                          // +0x18  00C7EFA0  always fails (returns 0)
    // +0x1C  00C89EB0  inherited Trigger::cAction<Trigger::cActAnimationOrigin>::vf1C
    // +0x20  00C89EC0  inherited Trigger::cAction<Trigger::cActAnimationOrigin>::vf20
};

} // namespace Trigger
