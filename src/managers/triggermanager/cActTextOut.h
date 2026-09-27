// REFINED
// Trigger::cActTextOut -- trigger action (vftable 0x016AF1C4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActTextOut>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActTextOut.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActTextOut : public cAction<cActTextOut> {
public:
    // vftable (0x016AF1C4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92280  address of this action type's static descriptor
    virtual cActTextOut *vf04(unsigned char flags); // +0x04  00C92290  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A7D0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A7E0  (empty)
    virtual void vf10();                         // +0x10  00C8A7F0  (empty)
    virtual void vf14();                         // +0x14  00C8A800  (empty)
    virtual int vf18();                          // +0x18  00C7F1A0  calls FUN_00cae000 on the object at 0x01DC3D08; returns 1
    // +0x1C  00C8A810  inherited Trigger::cAction<Trigger::cActTextOut>::vf1C
    // +0x20  00C8A820  inherited Trigger::cAction<Trigger::cActTextOut>::vf20
};

} // namespace Trigger
