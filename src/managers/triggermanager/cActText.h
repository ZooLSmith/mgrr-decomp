// REFINED
// Trigger::cActText -- trigger action (vftable 0x016AF19C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActText>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActText.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActText : public cAction<cActText> {
public:
    // vftable (0x016AF19C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92240  address of this action type's static descriptor
    virtual cActText *vf04(unsigned char flags); // +0x04  00C92250  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A730  (empty)
    virtual void vf0C();                         // +0x0C  00C8A740  (empty)
    virtual void vf10();                         // +0x10  00C8A750  (empty)
    virtual void vf14();                         // +0x14  00C8A760  (empty)
    // +0x18  00C7F150  inherited Trigger::Act::TEXT
    // +0x1C  00C8A770  inherited Trigger::cAction<Trigger::cActText>::vf1C
    // +0x20  00C8A780  inherited Trigger::cAction<Trigger::cActText>::vf20
};

} // namespace Trigger
