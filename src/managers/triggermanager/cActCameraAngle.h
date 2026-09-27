// REFINED
// Trigger::cActCameraAngle -- trigger action (vftable 0x016AF084).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraAngle>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraAngle.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraAngle : public cAction<cActCameraAngle> {
public:
    // vftable (0x016AF084), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92080  address of this action type's static descriptor
    virtual cActCameraAngle *vf04(unsigned char flags); // +0x04  00C92090  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A2D0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A2E0  (empty)
    virtual void vf10();                         // +0x10  00C8A2F0  (empty)
    virtual void vf14();                         // +0x14  00C8A300  (empty)
    // +0x18  00C7F050  Act::CAM_ANG (actions/TrgActCamAng.cpp)
    // +0x1C  00C8A310  inherited cAction<cActCameraAngle>::vf1C
    // +0x20  00C8A320  inherited cAction<cActCameraAngle>::vf20
};

} // namespace Trigger
