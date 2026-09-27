// REFINED
// Trigger::cActJammingDispEnd -- trigger action (vftable 0x016AFEC8).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActJammingDispEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActJammingDispEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActJammingDispEnd : public cAction<cActJammingDispEnd> {
public:
    // vftable (0x016AFEC8), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93810  address of this action type's static descriptor
    virtual cActJammingDispEnd *vf04(unsigned char flags); // +0x04  00C93820  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8CD80  (empty)
    virtual void vf0C();                         // +0x0C  00C8CD90  (empty)
    virtual void vf10();                         // +0x10  00C8CDA0  (empty)
    virtual void vf14();                         // +0x14  00C8CDB0  (empty)
    virtual int vf18();                          // +0x18  00C804F0  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8CDC0  inherited cAction<cActJammingDispEnd>::vf1C
    // +0x20  00C8CDD0  inherited cAction<cActJammingDispEnd>::vf20
};

} // namespace Trigger
