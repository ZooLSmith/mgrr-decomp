// REFINED
// Trigger::cActPlKgkPos -- trigger action (vftable 0x016B0974).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlKgkPos>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlKgkPos.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlKgkPos : public cAction<cActPlKgkPos> {
public:
    // vftable (0x016B0974), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C94B00  address of this action type's static descriptor
    virtual cActPlKgkPos *vf04(unsigned char flags);  // +0x04  00C94B10  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8F750  (empty)
    virtual void vf0C();                              // +0x0C  00C8F760  (empty)
    virtual void vf10();                              // +0x10  00C8F770  (empty)
    virtual void vf14();                              // +0x14  00C8F780  (empty)
    // +0x18  00C81760  inherited vf18
    // +0x1C  00C8F790  inherited cAction<cActPlKgkPos>::vf1C
    // +0x20  00C8F7A0  inherited cAction<cActPlKgkPos>::vf20
};

} // namespace Trigger
