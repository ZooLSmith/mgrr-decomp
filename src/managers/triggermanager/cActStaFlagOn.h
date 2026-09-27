// REFINED
// Trigger::cActStaFlagOn -- trigger action (vftable 0x016AEB40).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStaFlagOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStaFlagOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStaFlagOn : public cAction<cActStaFlagOn> {
public:
    // vftable (0x016AEB40), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C89320  address of this action type's static descriptor
    virtual cActStaFlagOn *vf04(unsigned char flags); // +0x04  00C91780  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C7EA70  resolve the record's STA_* name hash to flagIndex()
    virtual void vf0C();                         // +0x0C  00C89340  (empty)
    virtual void vf10();                         // +0x10  00C89350  (empty)
    virtual void vf14();                         // +0x14  00C89360  (empty)
    // +0x18  00C7EAB0  inherited Trigger::Act::STA_FLAG_ON
    // +0x1C  00C89370  inherited Trigger::cAction<Trigger::cActStaFlagOn>::vf1C
    // +0x20  00C89380  inherited Trigger::cAction<Trigger::cActStaFlagOn>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the STA_* table (set by vf08)
};

} // namespace Trigger
