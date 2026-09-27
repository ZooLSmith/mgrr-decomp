// REFINED
// Trigger::cActScene -- trigger action (vftable 0x016AF304).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScene>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScene.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScene : public cAction<cActScene> {
public:
    // vftable (0x016AF304), in slot order (slot = byte offset)
    virtual void *vf00();                          // +0x00  00C92450  address of this action type's static descriptor
    virtual cActScene *vf04(unsigned char flags);  // +0x04  00C92460  scalar deleting destructor
    virtual void vf08();                           // +0x08  00C8ACD0  (empty)
    virtual void vf0C();                           // +0x0C  00C8ACE0  (empty)
    virtual void vf10();                           // +0x10  00C8ACF0  (empty)
    virtual void vf14();                           // +0x14  00C8AD00  (empty)
    // +0x18  00C7F250  inherited vf18
    // +0x1C  00C8AD10  inherited cAction<cActScene>::vf1C
    // +0x20  00C8AD20  inherited cAction<cActScene>::vf20
};

} // namespace Trigger
