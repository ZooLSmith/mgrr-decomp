// REFINED
// Trigger::cActStage -- trigger action (vftable 0x016AF14C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActStage>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActStage.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActStage : public cAction<cActStage> {
public:
    // vftable (0x016AF14C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C921C0  address of this action type's static descriptor
    virtual cActStage *vf04(unsigned char flags); // +0x04  00C921D0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8A5F0  (empty)
    virtual void vf0C();                         // +0x0C  00C8A600  (empty)
    virtual void vf10();                         // +0x10  00C8A610  (empty)
    virtual void vf14();                         // +0x14  00C8A620  (empty)
    virtual int vf18();                          // +0x18  00C7F130  always 0
    // +0x1C  00C8A630  inherited Trigger::cAction<Trigger::cActStage>::vf1C
    // +0x20  00C8A640  inherited Trigger::cAction<Trigger::cActStage>::vf20
};

} // namespace Trigger
