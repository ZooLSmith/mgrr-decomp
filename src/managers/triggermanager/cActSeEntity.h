// REFINED
// Trigger::cActSeEntity -- trigger action (vftable 0x016AF630).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSeEntity>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSeEntity.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSeEntity : public cAction<cActSeEntity> {
public:
    // vftable (0x016AF630), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C92940  address of this action type's static descriptor
    virtual cActSeEntity *vf04(unsigned char flags);  // +0x04  00C92950  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8B1D0  (empty)
    virtual void vf0C();                              // +0x0C  00C8B1E0  (empty)
    virtual void vf10();                              // +0x10  00C8B1F0  (empty)
    virtual void vf14();                              // +0x14  00C8B200  (empty)
    virtual int vf18();                               // +0x18  00C96F90  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8B210  inherited cAction<cActSeEntity>::vf1C
    // +0x20  00C8B220  inherited cAction<cActSeEntity>::vf20
};

} // namespace Trigger
