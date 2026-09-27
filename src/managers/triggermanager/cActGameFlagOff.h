// REFINED
// Trigger::cActGameFlagOff -- trigger action (vftable 0x016AFCE0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGameFlagOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGameFlagOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGameFlagOff : public cAction<cActGameFlagOff> {
public:
    // vftable (0x016AFCE0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8C730  address of this action type's static descriptor
    virtual cActGameFlagOff *vf04(unsigned char flags); // +0x04  00C93540  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C80090  resolve the flag name hash to its table index
    virtual void vf0C();                         // +0x0C  00C8C750  (empty)
    virtual void vf10();                         // +0x10  00C8C760  (empty)
    virtual void vf14();                         // +0x14  00C8C770  (empty)
    // +0x18  00C87DF0  inherited cAction<cActGameFlagOff>::vf18
    // +0x1C  00C8C780  inherited cAction<cActGameFlagOff>::vf1C
    // +0x20  00C8C790  inherited cAction<cActGameFlagOff>::vf20

    // fields (absolute byte offsets)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the game flag table
};

} // namespace Trigger
