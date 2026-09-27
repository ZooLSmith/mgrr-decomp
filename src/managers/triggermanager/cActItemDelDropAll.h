// REFINED
// Trigger::cActItemDelDropAll -- trigger action (vftable 0x016B071C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActItemDelDropAll>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActItemDelDropAll.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActItemDelDropAll : public cAction<cActItemDelDropAll> {
public:
    // vftable (0x016B071C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94750  address of this action type's static descriptor
    virtual cActItemDelDropAll *vf04(unsigned char flags); // +0x04  00C94760  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EDF0  (empty)
    virtual void vf0C();                         // +0x0C  00C8EE00  (empty)
    virtual void vf10();                         // +0x10  00C8EE10  (empty)
    virtual void vf14();                         // +0x14  00C8EE20  (empty)
    // +0x18  00C814D0  inherited cAction<cActItemDelDropAll>::vf18
    // +0x1C  00C8EE30  inherited cAction<cActItemDelDropAll>::vf1C
    // +0x20  00C8EE40  inherited cAction<cActItemDelDropAll>::vf20
};

} // namespace Trigger
