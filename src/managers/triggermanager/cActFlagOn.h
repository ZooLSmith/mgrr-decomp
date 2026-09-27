// REFINED
// Trigger::cActFlagOn -- trigger action (vftable 0x016AF1EC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFlagOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFlagOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFlagOn : public cAction<cActFlagOn> {
public:
    // vftable (0x016AF1EC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C8A860  address of this action type's static descriptor
    virtual cActFlagOn *vf04(unsigned char flags); // +0x04  00C922C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A870  (empty)
    virtual void vf0C();                         // +0x0C  00C8A880  (empty)
    virtual void vf10();                         // +0x10  00C8A890  (empty)
    virtual void vf14();                         // +0x14  00C8A8A0  (empty)
    // +0x18  00C87380  inherited cAction<cActFlagOn>::vf18
    // +0x1C  00C8A8B0  inherited cAction<cActFlagOn>::vf1C
    // +0x20  00C8A8C0  inherited cAction<cActFlagOn>::vf20
};

} // namespace Trigger
