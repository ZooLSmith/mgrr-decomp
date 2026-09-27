// REFINED
// Trigger::cActGameFlagOn -- trigger action (vftable 0x016AFCB8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGameFlagOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGameFlagOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGameFlagOn : public cAction<cActGameFlagOn> {
public:
    // vftable (0x016AFCB8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8C690  address of this action type's static descriptor
    virtual cActGameFlagOn *vf04(unsigned char flags); // +0x04  00C93500  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C80050  resolve the flag name hash to its table index
    virtual void vf0C();                         // +0x0C  00C8C6B0  (empty)
    virtual void vf10();                         // +0x10  00C8C6C0  (empty)
    virtual void vf14();                         // +0x14  00C8C6D0  (empty)
    // +0x18  00C87D80  inherited cAction<cActGameFlagOn>::vf18
    // +0x1C  00C8C6E0  inherited cAction<cActGameFlagOn>::vf1C
    // +0x20  00C8C6F0  inherited cAction<cActGameFlagOn>::vf20

    // fields (absolute byte offsets)
    unsigned int &flagIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the game flag table
};

} // namespace Trigger
