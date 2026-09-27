// REFINED
// Trigger::cActPlKgkStop -- trigger action (vftable 0x016B099C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlKgkStop>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlKgkStop.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlKgkStop : public cAction<cActPlKgkStop> {
public:
    // vftable (0x016B099C), in slot order (slot = byte offset)
    virtual void *vf00();                              // +0x00  00C94B40  address of this action type's static descriptor
    virtual cActPlKgkStop *vf04(unsigned char flags);  // +0x04  00C94B50  scalar deleting destructor
    virtual void vf08();                               // +0x08  00C8F930  (empty)
    virtual void vf0C();                               // +0x0C  00C8F940  (empty)
    virtual void vf10();                               // +0x10  00C8F950  (empty)
    virtual void vf14();                               // +0x14  00C8F960  (empty)
    virtual int vf18();                                // +0x18  00C88950  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8F970  inherited cAction<cActPlKgkStop>::vf1C
    // +0x20  00C8F980  inherited cAction<cActPlKgkStop>::vf20
};

} // namespace Trigger
