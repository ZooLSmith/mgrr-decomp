// REFINED
// Trigger::cActScrMeshOff -- trigger action (vftable 0x016B0058).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrMeshOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrMeshOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrMeshOff : public cAction<cActScrMeshOff> {
public:
    // vftable (0x016B0058), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C93A90  address of this action type's static descriptor
    virtual cActScrMeshOff *vf04(unsigned char flags);  // +0x04  00C93AA0  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C8D3C0  (empty)
    virtual void vf0C();                                // +0x0C  00C8D3D0  (empty)
    virtual void vf10();                                // +0x10  00C8D3E0  (empty)
    virtual void vf14();                                // +0x14  00C8D3F0  (empty)
    // +0x18  00C97300  inherited vf18
    // +0x1C  00C8D400  inherited cAction<cActScrMeshOff>::vf1C
    // +0x20  00C8D410  inherited cAction<cActScrMeshOff>::vf20
};

} // namespace Trigger
