// REFINED
// Trigger::cActCameraDistance -- trigger action (vftable 0x016AEFE4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraDistance>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraDistance.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraDistance : public cAction<cActCameraDistance> {
public:
    // vftable (0x016AEFE4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91F80  address of this action type's static descriptor
    virtual cActCameraDistance *vf04(unsigned char flags); // +0x04  00C91F90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A050  (empty)
    virtual void vf0C();                         // +0x0C  00C8A060  (empty)
    virtual void vf10();                         // +0x10  00C8A070  (empty)
    virtual void vf14();                         // +0x14  00C8A080  (empty)
    // +0x18  00C7EFC0  Act::CAM_DIST (actions/TrgActCamDist.cpp)
    // +0x1C  00C8A090  inherited cAction<cActCameraDistance>::vf1C
    // +0x20  00C8A0A0  inherited cAction<cActCameraDistance>::vf20
};

} // namespace Trigger
