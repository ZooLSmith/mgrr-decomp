// REFINED
// Trigger::cActObjAttach -- trigger action (vftable 0x016AF9C8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActObjAttach>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActObjAttach.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActObjAttach : public cAction<cActObjAttach> {
public:
    // vftable (0x016AF9C8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93070  address of this action type's static descriptor
    virtual cActObjAttach *vf04(unsigned char flags); // +0x04  00C93080  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C060  (empty)
    virtual void vf0C();                         // +0x0C  00C8C070  (empty)
    virtual void vf10();                         // +0x10  00C8C080  (empty)
    virtual void vf14();                         // +0x14  00C8C090  (empty)
    // +0x18  00C7FB10  inherited cAction<cActObjAttach>::vf18
    // +0x1C  00C8C0A0  inherited cAction<cActObjAttach>::vf1C
    // +0x20  00C8C0B0  inherited cAction<cActObjAttach>::vf20
};

} // namespace Trigger
