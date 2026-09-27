// REFINED
// Trigger::cActCameraAngleOff -- trigger action (vftable 0x016AF0AC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraAngleOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraAngleOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraAngleOff : public cAction<cActCameraAngleOff> {
public:
    // vftable (0x016AF0AC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C920C0  address of this action type's static descriptor
    virtual cActCameraAngleOff *vf04(unsigned char flags); // +0x04  00C920D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A370  (empty)
    virtual void vf0C();                         // +0x0C  00C8A380  (empty)
    virtual void vf10();                         // +0x10  00C8A390  (empty)
    virtual void vf14();                         // +0x14  00C8A3A0  (empty)
    virtual int vf18();                          // +0x18  00C7F090  sets the camera-angle override counter to 120; returns 1
    // +0x1C  00C8A3B0  inherited cAction<cActCameraAngleOff>::vf1C
    // +0x20  00C8A3C0  inherited cAction<cActCameraAngleOff>::vf20
};

} // namespace Trigger
