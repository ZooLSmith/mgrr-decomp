// REFINED
// Trigger::cActCameraFocus -- trigger action (vftable 0x016AF034).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCameraFocus>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCameraFocus.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCameraFocus : public cAction<cActCameraFocus> {
public:
    // vftable (0x016AF034), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92000  address of this action type's static descriptor
    virtual cActCameraFocus *vf04(unsigned char flags); // +0x04  00C92010  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A190  (empty)
    virtual void vf0C();                         // +0x0C  00C8A1A0  (empty)
    virtual void vf10();                         // +0x10  00C8A1B0  (empty)
    virtual void vf14();                         // +0x14  00C8A1C0  (empty)
    // +0x18  00C87200  Act::CAM_FOCUS (actions/TrgActCamFocus.cpp)
    // +0x1C  00C8A1D0  inherited cAction<cActCameraFocus>::vf1C
    // +0x20  00C8A1E0  inherited cAction<cActCameraFocus>::vf20
};

} // namespace Trigger
