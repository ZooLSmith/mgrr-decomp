// REFINED
// Trigger::cActSetUIAnimStartNone -- trigger action (vftable 0x016AFFE0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSetUIAnimStartNone>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSetUIAnimStartNone.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSetUIAnimStartNone : public cAction<cActSetUIAnimStartNone> {
public:
    // vftable (0x016AFFE0), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C939D0  address of this action type's static descriptor
    virtual cActSetUIAnimStartNone *vf04(unsigned char flags); // +0x04  00C939E0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8D1E0  (empty)
    virtual void vf0C();                         // +0x0C  00C8D1F0  (empty)
    virtual void vf10();                         // +0x10  00C8D200  (empty)
    virtual void vf14();                         // +0x14  00C8D210  (empty)
    // +0x18  00C806C0  inherited Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE
    // +0x1C  00C8D220  inherited Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf1C
    // +0x20  00C8D230  inherited Trigger::cAction<Trigger::cActSetUIAnimStartNone>::vf20
};

} // namespace Trigger
