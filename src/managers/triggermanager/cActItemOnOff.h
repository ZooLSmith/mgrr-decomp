// REFINED
// Trigger::cActItemOnOff -- trigger action (vftable 0x016B0884).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActItemOnOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActItemOnOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActItemOnOff : public cAction<cActItemOnOff> {
public:
    // vftable (0x016B0884), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94980  address of this action type's static descriptor
    virtual cActItemOnOff *vf04(unsigned char flags); // +0x04  00C94990  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F390  (empty)
    virtual void vf0C();                         // +0x0C  00C8F3A0  (empty)
    virtual void vf10();                         // +0x10  00C8F3B0  (empty)
    virtual void vf14();                         // +0x14  00C8F3C0  (empty)
    // +0x18  00C81680  inherited cAction<cActItemOnOff>::vf18
    // +0x1C  00C8F3D0  inherited cAction<cActItemOnOff>::vf1C
    // +0x20  00C8F3E0  inherited cAction<cActItemOnOff>::vf20
};

} // namespace Trigger
