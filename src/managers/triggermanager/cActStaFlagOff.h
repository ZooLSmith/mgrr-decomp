// REFINED
// Trigger::cActStaFlagOff -- trigger action (vftable 0x016AFF18).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStaFlagOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStaFlagOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStaFlagOff : public cAction<cActStaFlagOff> {
public:
    // vftable (0x016AFF18), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8CEB0  address of this action type's static descriptor
    virtual cActStaFlagOff *vf04(unsigned char flags); // +0x04  00C938A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C80510  resolve the record's STA_* name hash to flagIndex()
    virtual void vf0C();                         // +0x0C  00C8CED0  (empty)
    virtual void vf10();                         // +0x10  00C8CEE0  (empty)
    virtual void vf14();                         // +0x14  00C8CEF0  (empty)
    // +0x18  00C80550  inherited Trigger::Act::STA_FLAG_OFF
    // +0x1C  00C8CF00  inherited Trigger::cAction<Trigger::cActStaFlagOff>::vf1C
    // +0x20  00C8CF10  inherited Trigger::cAction<Trigger::cActStaFlagOff>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the STA_* table (set by vf08)
};

} // namespace Trigger
