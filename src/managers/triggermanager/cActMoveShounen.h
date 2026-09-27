// REFINED
// Trigger::cActMoveShounen -- trigger action (vftable 0x016AF28C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMoveShounen>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMoveShounen.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMoveShounen : public cAction<cActMoveShounen> {
public:
    // vftable (0x016AF28C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92380  address of this action type's static descriptor
    virtual cActMoveShounen *vf04(unsigned char flags); // +0x04  00C92390  scalar deleting destructor
    // +0x08  00C8AAF0  inherited cAction<cActMoveShounen>::vf08
    // +0x0C  00C8AB00  inherited cAction<cActMoveShounen>::vf0C
    // +0x10  00C8AB10  inherited cAction<cActMoveShounen>::vf10
    // +0x14  00C8AB20  inherited cAction<cActMoveShounen>::vf14
    virtual int vf18();                          // +0x18  00C7F220  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8AB30  inherited cAction<cActMoveShounen>::vf1C
    // +0x20  00C8AB40  inherited cAction<cActMoveShounen>::vf20
};

} // namespace Trigger
