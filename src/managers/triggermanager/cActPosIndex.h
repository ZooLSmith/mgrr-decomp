// REFINED
// Trigger::cActPosIndex -- trigger action (vftable 0x016AF2B4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPosIndex>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPosIndex.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPosIndex : public cAction<cActPosIndex> {
public:
    // vftable (0x016AF2B4), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C923C0  address of this action type's static descriptor
    virtual cActPosIndex *vf04(unsigned char flags);  // +0x04  00C923D0  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8AB90  (empty)
    virtual void vf0C();                              // +0x0C  00C8ABA0  (empty)
    virtual void vf10();                              // +0x10  00C8ABB0  (empty)
    virtual void vf14();                              // +0x14  00C8ABC0  (empty)
    // +0x18  00C96DB0  inherited vf18
    // +0x1C  00C8ABD0  inherited cAction<cActPosIndex>::vf1C
    // +0x20  00C8ABE0  inherited cAction<cActPosIndex>::vf20
};

} // namespace Trigger
