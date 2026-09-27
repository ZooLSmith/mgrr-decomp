// REFINED
// Trigger::cActSE -- trigger action (vftable 0x016AEE24).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSE>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSE.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSE : public cAction<cActSE> {
public:
    // vftable (0x016AEE24), in slot order (slot = byte offset)
    virtual void *vf00();                       // +0x00  00C91BF0  address of this action type's static descriptor
    virtual cActSE *vf04(unsigned char flags);  // +0x04  00C91C00  scalar deleting destructor
    virtual void vf08();                        // +0x08  00C89BF0  (empty)
    virtual void vf0C();                        // +0x0C  00C89C00  (empty)
    virtual void vf10();                        // +0x10  00C89C10  (empty)
    virtual void vf14();                        // +0x14  00C89C20  (empty)
    // +0x18  00C91C20  inherited vf18
    // +0x1C  00C89C30  inherited cAction<cActSE>::vf1C
    // +0x20  00C89C40  inherited cAction<cActSE>::vf20
};

} // namespace Trigger
