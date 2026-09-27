// REFINED
// Trigger::cActNoCodecMenu -- trigger action (vftable 0x016B08AC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActNoCodecMenu>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActNoCodecMenu.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActNoCodecMenu : public cAction<cActNoCodecMenu> {
public:
    // vftable (0x016B08AC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C949C0  address of this action type's static descriptor
    virtual cActNoCodecMenu *vf04(unsigned char flags); // +0x04  00C949D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F430  (empty)
    virtual void vf0C();                         // +0x0C  00C8F440  (empty)
    virtual void vf10();                         // +0x10  00C8F450  (empty)
    virtual void vf14();                         // +0x14  00C8F460  (empty)
    // +0x18  00C816C0  inherited cAction<cActNoCodecMenu>::vf18
    // +0x1C  00C8F470  inherited cAction<cActNoCodecMenu>::vf1C
    // +0x20  00C8F480  inherited cAction<cActNoCodecMenu>::vf20
};

} // namespace Trigger
