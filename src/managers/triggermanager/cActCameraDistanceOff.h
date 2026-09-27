// REFINED
// Trigger::cActCameraDistanceOff -- trigger action (vftable 0x016AF00C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraDistanceOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraDistanceOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraDistanceOff : public cAction<cActCameraDistanceOff> {
public:
    // vftable (0x016AF00C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91FC0  address of this action type's static descriptor
    virtual cActCameraDistanceOff *vf04(unsigned char flags); // +0x04  00C91FD0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A0F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A100  (empty)
    virtual void vf10();                         // +0x10  00C8A110  (empty)
    virtual void vf14();                         // +0x14  00C8A120  (empty)
    virtual int vf18();                          // +0x18  00C7F010  sets the camera-distance override counter to 120; returns 1
    // +0x1C  00C8A130  inherited cAction<cActCameraDistanceOff>::vf1C
    // +0x20  00C8A140  inherited cAction<cActCameraDistanceOff>::vf20
};

} // namespace Trigger
