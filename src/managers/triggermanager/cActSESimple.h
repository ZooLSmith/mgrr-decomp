// REFINED
// Trigger::cActSESimple -- trigger action (vftable 0x016AF4F4).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSESimple>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSESimple.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSESimple : public cAction<cActSESimple> {
public:
    // vftable (0x016AF4F4), in slot order (slot = byte offset)
    virtual void *vf00();                             // +0x00  00C92740  address of this action type's static descriptor
    virtual cActSESimple *vf04(unsigned char flags);  // +0x04  00C92750  scalar deleting destructor
    virtual void vf08();                              // +0x08  00C8AFF0  (empty)
    virtual void vf0C();                              // +0x0C  00C8B000  (empty)
    virtual void vf10();                              // +0x10  00C8B010  (empty)
    virtual void vf14();                              // +0x14  00C8B020  (empty)
    // +0x18  00C92770  inherited vf18
    // +0x1C  00C8B030  inherited cAction<cActSESimple>::vf1C
    // +0x20  00C8B040  inherited cAction<cActSESimple>::vf20
};

} // namespace Trigger
