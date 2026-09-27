// REFINED
// Trigger::cActPlayerDie -- trigger action (vftable 0x016AF6A8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerDie>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerDie.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerDie : public cAction<cActPlayerDie> {
public:
    // vftable (0x016AF6A8), in slot order (slot = byte offset)
    virtual void *vf00();                              // +0x00  00C92A00  address of this action type's static descriptor
    virtual cActPlayerDie *vf04(unsigned char flags);  // +0x04  00C92A10  scalar deleting destructor
    virtual void vf08();                               // +0x08  00C8B3B0  (empty)
    virtual void vf0C();                               // +0x0C  00C8B3C0  (empty)
    virtual void vf10();                               // +0x10  00C8B3D0  (empty)
    virtual void vf14();                               // +0x14  00C8B3E0  (empty)
    // +0x18  00C876C0  inherited vf18
    // +0x1C  00C8B3F0  inherited cAction<cActPlayerDie>::vf1C
    // +0x20  00C8B400  inherited cAction<cActPlayerDie>::vf20
};

} // namespace Trigger
