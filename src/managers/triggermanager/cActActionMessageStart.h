// REFINED
// Trigger::cActActionMessageStart -- trigger action (vftable 0x016B00D0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActActionMessageStart>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActActionMessageStart.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActActionMessageStart : public cAction<cActActionMessageStart> {
public:
    // vftable (0x016B00D0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93B50  address of this action type's static descriptor
    virtual cActActionMessageStart *vf04(unsigned char flags); // +0x04  00C93B60  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D5A0  (empty)
    virtual void vf0C();                         // +0x0C  00C8D5B0  (empty)
    virtual void vf10();                         // +0x10  00C8D5C0  (empty)
    virtual void vf14();                         // +0x14  00C8D5D0  (empty)
    // +0x18  00C80780  inherited vf18 (Trigger::Act::ACTION_MES_START)
    // +0x1C  00C8D5E0  inherited Trigger::cAction<Trigger::cActActionMessageStart>::vf1C
    // +0x20  00C8D5F0  inherited Trigger::cAction<Trigger::cActActionMessageStart>::vf20
};

} // namespace Trigger
