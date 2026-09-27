// REFINED
// Trigger::cActCamFlag -- trigger action (vftable 0x016AF9A0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCamFlag>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCamFlag.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCamFlag : public cAction<cActCamFlag> {
public:
    // vftable (0x016AF9A0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93030  address of this action type's static descriptor
    virtual cActCamFlag *vf04(unsigned char flags); // +0x04  00C93040  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8BFC0  (empty)
    virtual void vf0C();                         // +0x0C  00C8BFD0  (empty)
    virtual void vf10();                         // +0x10  00C8BFE0  (empty)
    virtual void vf14();                         // +0x14  00C8BFF0  (empty)
    // +0x18  00C7FA10  inherited vf18 (Trigger::Act::CAM_FLAG)
    // +0x1C  00C8C000  inherited Trigger::cAction<Trigger::cActCamFlag>::vf1C
    // +0x20  00C8C010  inherited Trigger::cAction<Trigger::cActCamFlag>::vf20
};

} // namespace Trigger
