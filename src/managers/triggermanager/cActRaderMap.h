// REFINED
// Trigger::cActRaderMap -- trigger action (vftable 0x016AF720).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActRaderMap>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActRaderMap.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActRaderMap : public cAction<cActRaderMap> {
public:
    // vftable (0x016AF720), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C92AC0  address of this action type's static descriptor
    virtual cActRaderMap *vf04(unsigned char flags);  // +0x04  00C92AD0  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8B590  (empty)
    virtual void vf0C();                              // +0x0C  00C8B5A0  (empty)
    virtual void vf10();                              // +0x10  00C8B5B0  (empty)
    virtual void vf14();                              // +0x14  00C8B5C0  (empty)
    // +0x18  00C7F550  inherited vf18
    // +0x1C  00C8B5D0  inherited cAction<cActRaderMap>::vf1C
    // +0x20  00C8B5E0  inherited cAction<cActRaderMap>::vf20
};

} // namespace Trigger
