// REFINED
// Trigger::cActGenericFlag -- trigger action (vftable 0x016B0744).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActGenericFlag>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActGenericFlag.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActGenericFlag : public cAction<cActGenericFlag> {
public:
    // vftable (0x016B0744), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8EE80  address of this action type's static descriptor
    virtual cActGenericFlag *vf04(unsigned char flags); // +0x04  00C94790  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8EE90  (empty)
    virtual void vf0C();                         // +0x0C  00C8EEA0  (empty)
    virtual void vf10();                         // +0x10  00C8EEB0  (empty)
    virtual void vf14();                         // +0x14  00C8EEC0  (empty)
    // +0x18  00C81500  inherited cAction<cActGenericFlag>::vf18
    // +0x1C  00C8EED0  inherited cAction<cActGenericFlag>::vf1C
    // +0x20  00C8EEE0  inherited cAction<cActGenericFlag>::vf20
};

} // namespace Trigger
