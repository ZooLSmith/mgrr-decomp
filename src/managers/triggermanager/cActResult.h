// REFINED
// Trigger::cActResult -- trigger action (vftable 0x016AEDD4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActResult>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActResult.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActResult : public cAction<cActResult> {
public:
    // vftable (0x016AEDD4), in slot order (slot = byte offset)
    virtual void *vf00();                           // +0x00  00C91B70  address of this action type's static descriptor
    virtual cActResult *vf04(unsigned char flags);  // +0x04  00C91B80  scalar deleting destructor
    virtual void vf08();                            // +0x08  00C89AB0  (empty)
    virtual void vf0C();                            // +0x0C  00C89AC0  (empty)
    virtual void vf10();                            // +0x10  00C89AD0  (empty)
    virtual void vf14();                            // +0x14  00C89AE0  (empty)
    virtual int vf18();                             // +0x18  00C7EE50  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C89AF0  inherited cAction<cActResult>::vf1C
    // +0x20  00C89B00  inherited cAction<cActResult>::vf20
};

} // namespace Trigger
