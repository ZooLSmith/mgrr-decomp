// REFINED
// Trigger::cActCameraFocusOff -- trigger action (vftable 0x016AF05C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraFocusOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraFocusOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraFocusOff : public cAction<cActCameraFocusOff> {
public:
    // vftable (0x016AF05C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92040  address of this action type's static descriptor
    virtual cActCameraFocusOff *vf04(unsigned char flags); // +0x04  00C92050  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A230  (empty)
    virtual void vf0C();                         // +0x0C  00C8A240  (empty)
    virtual void vf10();                         // +0x10  00C8A250  (empty)
    virtual void vf14();                         // +0x14  00C8A260  (empty)
    virtual int vf18();                          // +0x18  00C7F030  sets the camera-focus override counter to 120; returns 1
    // +0x1C  00C8A270  inherited cAction<cActCameraFocusOff>::vf1C
    // +0x20  00C8A280  inherited cAction<cActCameraFocusOff>::vf20
};

} // namespace Trigger
