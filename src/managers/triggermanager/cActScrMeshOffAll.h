// REFINED
// Trigger::cActScrMeshOffAll -- trigger action (vftable 0x016B062C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrMeshOffAll>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrMeshOffAll.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrMeshOffAll : public cAction<cActScrMeshOffAll> {
public:
    // vftable (0x016B062C), in slot order (slot = byte offset)
    virtual void *vf00();                                  // +0x00  00C945D0  address of this action type's static descriptor
    virtual cActScrMeshOffAll *vf04(unsigned char flags);  // +0x04  00C945E0  scalar deleting destructor
    virtual void vf08();                                   // +0x08  00C8EA30  (empty)
    virtual void vf0C();                                   // +0x0C  00C8EA40  (empty)
    virtual void vf10();                                   // +0x10  00C8EA50  (empty)
    virtual void vf14();                                   // +0x14  00C8EA60  (empty)
    // +0x18  00C81310  inherited vf18
    // +0x1C  00C8EA70  inherited cAction<cActScrMeshOffAll>::vf1C
    // +0x20  00C8EA80  inherited cAction<cActScrMeshOffAll>::vf20
};

} // namespace Trigger
