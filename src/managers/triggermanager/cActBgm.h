// REFINED
// Trigger::cActBgm -- trigger action (vftable 0x016AF37C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActBgm>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActBgm.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActBgm : public cAction<cActBgm> {
public:
    // vftable (0x016AF37C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92510  address of this action type's static descriptor
    virtual cActBgm *vf04(unsigned char flags);  // +0x04  00C92520  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AEB0  (empty)
    virtual void vf0C();                         // +0x0C  00C8AEC0  (empty)
    virtual void vf10();                         // +0x10  00C8AED0  (empty)
    virtual void vf14();                         // +0x14  00C8AEE0  (empty)
    virtual int vf18();                          // +0x18  00C92540  start the BGM named by the record
    // +0x1C  00C8AEF0  inherited Trigger::cAction<Trigger::cActBgm>::vf1C
    // +0x20  00C8AF00  inherited Trigger::cAction<Trigger::cActBgm>::vf20
};

} // namespace Trigger
