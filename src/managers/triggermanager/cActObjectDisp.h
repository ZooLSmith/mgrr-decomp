// REFINED
// Trigger::cActObjectDisp -- trigger action (vftable 0x016B03D4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActObjectDisp>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActObjectDisp.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActObjectDisp : public cAction<cActObjectDisp> {
public:
    // vftable (0x016B03D4), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C94210  address of this action type's static descriptor
    virtual cActObjectDisp *vf04(unsigned char flags);  // +0x04  00C94220  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C8E0D0  (empty)
    virtual void vf0C();                                // +0x0C  00C8E0E0  (empty)
    virtual void vf10();                                // +0x10  00C8E0F0  (empty)
    virtual void vf14();                                // +0x14  00C8E100  (empty)
    // +0x18  00C974B0  inherited vf18
    // +0x1C  00C8E110  inherited cAction<cActObjectDisp>::vf1C
    // +0x20  00C8E120  inherited cAction<cActObjectDisp>::vf20
};

} // namespace Trigger
