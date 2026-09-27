// REFINED
// Trigger::cActFileRelease -- trigger action (vftable 0x016AFBEC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFileRelease>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFileRelease.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFileRelease : public cAction<cActFileRelease> {
public:
    // vftable (0x016AFBEC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C933B0  address of this action type's static descriptor
    virtual cActFileRelease *vf04(unsigned char flags); // +0x04  00C933C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C420  (empty)
    virtual void vf0C();                         // +0x0C  00C8C430  (empty)
    virtual void vf10();                         // +0x10  00C8C440  (empty)
    virtual void vf14();                         // +0x14  00C8C450  (empty)
    virtual int vf18();                          // +0x18  00C7FFA0  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8C460  inherited cAction<cActFileRelease>::vf1C
    // +0x20  00C8C470  inherited cAction<cActFileRelease>::vf20
};

} // namespace Trigger
