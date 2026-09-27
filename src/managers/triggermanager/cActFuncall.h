// REFINED
// Trigger::cActFuncall -- trigger action (vftable 0x016AEEF4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFuncall>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFuncall.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFuncall : public cAction<cActFuncall> {
public:
    // vftable (0x016AEEF4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91D80  address of this action type's static descriptor
    virtual cActFuncall *vf04(unsigned char flags); // +0x04  00C91D90  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89C90  (empty)
    virtual void vf0C();                         // +0x0C  00C89CA0  (empty)
    virtual void vf10();                         // +0x10  00C89CB0  (empty)
    virtual void vf14();                         // +0x14  00C89CC0  (empty)
    // +0x18  00C7EE60  inherited cAction<cActFuncall>::vf18
    // +0x1C  00C89CD0  inherited cAction<cActFuncall>::vf1C
    // +0x20  00C89CE0  inherited cAction<cActFuncall>::vf20
};

} // namespace Trigger
