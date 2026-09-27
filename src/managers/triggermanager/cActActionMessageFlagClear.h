// REFINED
// Trigger::cActActionMessageFlagClear -- trigger action (vftable 0x016B00F8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActActionMessageFlagClear>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActActionMessageFlagClear.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActActionMessageFlagClear : public cAction<cActActionMessageFlagClear> {
public:
    // vftable (0x016B00F8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93B90  address of this action type's static descriptor
    virtual cActActionMessageFlagClear *vf04(unsigned char flags); // +0x04  00C93BA0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D640  (empty)
    virtual void vf0C();                         // +0x0C  00C8D650  (empty)
    virtual void vf10();                         // +0x10  00C8D660  (empty)
    virtual void vf14();                         // +0x14  00C8D670  (empty)
    // +0x18  00C807B0  inherited vf18 (Trigger::Act::ACTION_MES_F_CLR)
    // +0x1C  00C8D680  inherited Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf1C
    // +0x20  00C8D690  inherited Trigger::cAction<Trigger::cActActionMessageFlagClear>::vf20
};

} // namespace Trigger
