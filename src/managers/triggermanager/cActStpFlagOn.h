// REFINED
// Trigger::cActStpFlagOn -- trigger action (vftable 0x016AFFB8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStpFlagOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStpFlagOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStpFlagOn : public cAction<cActStpFlagOn> {
public:
    // vftable (0x016AFFB8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8D130  address of this action type's static descriptor
    virtual cActStpFlagOn *vf04(unsigned char flags); // +0x04  00C939A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C80680  resolve the record's STP_* name hash to flagIndex()
    virtual void vf0C();                         // +0x0C  00C8D150  (empty)
    virtual void vf10();                         // +0x10  00C8D160  (empty)
    virtual void vf14();                         // +0x14  00C8D170  (empty)
    // +0x18  00C881E0  inherited Trigger::Act::STP_FLAG_ON
    // +0x1C  00C8D180  inherited Trigger::cAction<Trigger::cActStpFlagOn>::vf1C
    // +0x20  00C8D190  inherited Trigger::cAction<Trigger::cActStpFlagOn>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the STP_* table (set by vf08)
};

} // namespace Trigger
