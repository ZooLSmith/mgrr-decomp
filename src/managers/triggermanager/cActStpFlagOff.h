// REFINED
// Trigger::cActStpFlagOff -- trigger action (vftable 0x016AFF90).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStpFlagOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStpFlagOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStpFlagOff : public cAction<cActStpFlagOff> {
public:
    // vftable (0x016AFF90), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8D090  address of this action type's static descriptor
    virtual cActStpFlagOff *vf04(unsigned char flags); // +0x04  00C93960  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C80640  resolve the record's STP_* name hash to flagIndex()
    virtual void vf0C();                         // +0x0C  00C8D0B0  (empty)
    virtual void vf10();                         // +0x10  00C8D0C0  (empty)
    virtual void vf14();                         // +0x14  00C8D0D0  (empty)
    // +0x18  00C88160  inherited Trigger::Act::STP_FLAG_OFF
    // +0x1C  00C8D0E0  inherited Trigger::cAction<Trigger::cActStpFlagOff>::vf1C
    // +0x20  00C8D0F0  inherited Trigger::cAction<Trigger::cActStpFlagOff>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the STP_* table (set by vf08)
};

} // namespace Trigger
