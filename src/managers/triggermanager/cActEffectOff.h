// REFINED
// Trigger::cActEffectOff -- trigger action (vftable 0x016B0564).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEffectOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEffectOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEffectOff : public cAction<cActEffectOff> {
public:
    // vftable (0x016B0564), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94490  address of this action type's static descriptor
    virtual cActEffectOff *vf04(unsigned char flags); // +0x04  00C944A0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8E710  (empty)
    virtual void vf0C();                         // +0x0C  00C8E720  (empty)
    virtual void vf10();                         // +0x10  00C8E730  (empty)
    virtual void vf14();                         // +0x14  00C8E740  (empty)
    virtual int vf18();                          // +0x18  00C979C0  looks up the named/numbered objects and calls FUN_00a8ca50 on each
    // +0x1C  00C8E750  inherited cAction<cActEffectOff>::vf1C
    // +0x20  00C8E760  inherited cAction<cActEffectOff>::vf20
};

} // namespace Trigger
