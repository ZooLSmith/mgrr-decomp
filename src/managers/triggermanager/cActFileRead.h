// REFINED
// Trigger::cActFileRead -- trigger action (vftable 0x016AFBC4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFileRead>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFileRead.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFileRead : public cAction<cActFileRead> {
public:
    // vftable (0x016AFBC4), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93370  address of this action type's static descriptor
    virtual cActFileRead *vf04(unsigned char flags); // +0x04  00C93380  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C380  (empty)
    virtual void vf0C();                         // +0x0C  00C8C390  (empty)
    virtual void vf10();                         // +0x10  00C8C3A0  (empty)
    virtual void vf14();                         // +0x14  00C8C3B0  (empty)
    virtual int vf18();                          // +0x18  00C7FF90  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8C3C0  inherited cAction<cActFileRead>::vf1C
    // +0x20  00C8C3D0  inherited cAction<cActFileRead>::vf20
};

} // namespace Trigger
