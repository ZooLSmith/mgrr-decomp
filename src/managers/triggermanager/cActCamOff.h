// REFINED
// Trigger::cActCamOff -- trigger action (vftable 0x016AEB68).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCamOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCamOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActCamOff : public cAction<cActCamOff> {
public:
    // vftable (0x016AEB68), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C917B0  address of this action type's static descriptor
    virtual cActCamOff *vf04(unsigned char flags); // +0x04  00C917C0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C893D0  (empty)
    virtual void vf0C();                         // +0x0C  00C893E0  (empty)
    virtual void vf10();                         // +0x10  00C893F0  (empty)
    virtual void vf14();                         // +0x14  00C89400  (empty)
    virtual int vf18();                          // +0x18  00C7EB10  if the camera object exists, FUN_00ac9fe0 on it; returns 1
    // +0x1C  00C89410  inherited cAction<cActCamOff>::vf1C
    // +0x20  00C89420  inherited cAction<cActCamOff>::vf20
};

} // namespace Trigger
