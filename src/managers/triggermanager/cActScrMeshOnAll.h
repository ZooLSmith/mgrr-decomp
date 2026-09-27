// REFINED
// Trigger::cActScrMeshOnAll -- trigger action (vftable 0x016B0604).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrMeshOnAll>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrMeshOnAll.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrMeshOnAll : public cAction<cActScrMeshOnAll> {
public:
    // vftable (0x016B0604), in slot order (slot = byte offset)
    virtual void *vf00();                                 // +0x00  00C94590  address of this action type's static descriptor
    virtual cActScrMeshOnAll *vf04(unsigned char flags);  // +0x04  00C945A0  scalar deleting destructor
    virtual void vf08();                                  // +0x08  00C8E990  (empty)
    virtual void vf0C();                                  // +0x0C  00C8E9A0  (empty)
    virtual void vf10();                                  // +0x10  00C8E9B0  (empty)
    virtual void vf14();                                  // +0x14  00C8E9C0  (empty)
    // +0x18  00C812A0  inherited vf18
    // +0x1C  00C8E9D0  inherited cAction<cActScrMeshOnAll>::vf1C
    // +0x20  00C8E9E0  inherited cAction<cActScrMeshOnAll>::vf20
};

} // namespace Trigger
