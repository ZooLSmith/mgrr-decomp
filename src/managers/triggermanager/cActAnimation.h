// REFINED
// Trigger::cActAnimation -- trigger action (vftable 0x016AEF44).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActAnimation>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActAnimation.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActAnimation : public cAction<cActAnimation> {
public:
    // vftable (0x016AEF44), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91E30  address of this action type's static descriptor
    virtual cActAnimation *vf04(unsigned char flags); // +0x04  00C91E40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89DD0  (empty)
    virtual void vf0C();                         // +0x0C  00C89DE0  (empty)
    virtual void vf10();                         // +0x10  00C89DF0  (empty)
    virtual void vf14();                         // +0x14  00C89E00  (empty)
    virtual int vf18();                          // +0x18  00C968D0  play the animation named by the record on the target objects
    // +0x1C  00C89E10  inherited Trigger::cAction<Trigger::cActAnimation>::vf1C
    // +0x20  00C89E20  inherited Trigger::cAction<Trigger::cActAnimation>::vf20

    // fields (absolute byte offsets)
    int &unknown08() { return *(int *)((char *)this + 0x08); }   // +0x08  ? (0 after construction)
    int &blendFromCurrent() { return *(int *)((char *)this + 0x0C); }   // +0x0C  ? nonzero: first blend from the current motion
};

} // namespace Trigger
