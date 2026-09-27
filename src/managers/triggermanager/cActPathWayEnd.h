// REFINED
// Trigger::cActPathWayEnd -- trigger action (vftable 0x016AF810).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPathWayEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPathWayEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPathWayEnd : public cAction<cActPathWayEnd> {
public:
    // vftable (0x016AF810), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C92C40  address of this action type's static descriptor
    virtual cActPathWayEnd *vf04(unsigned char flags);  // +0x04  00C92C50  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C8B950  (empty)
    virtual void vf0C();                                // +0x0C  00C8B960  (empty)
    virtual void vf10();                                // +0x10  00C8B970  (empty)
    virtual void vf14();                                // +0x14  00C8B980  (empty)
    // +0x18  00C7F690  inherited vf18
    // +0x1C  00C8B990  inherited cAction<cActPathWayEnd>::vf1C
    // +0x20  00C8B9A0  inherited cAction<cActPathWayEnd>::vf20
};

} // namespace Trigger
