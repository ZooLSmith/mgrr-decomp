// REFINED
// Trigger::cActBgmSimple -- trigger action (vftable 0x016AF424).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActBgmSimple>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActBgmSimple.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActBgmSimple : public cAction<cActBgmSimple> {
public:
    // vftable (0x016AF424), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92620  address of this action type's static descriptor
    virtual cActBgmSimple *vf04(unsigned char flags); // +0x04  00C92630  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8AF50  (empty)
    virtual void vf0C();                         // +0x0C  00C8AF60  (empty)
    virtual void vf10();                         // +0x10  00C8AF70  (empty)
    virtual void vf14();                         // +0x14  00C8AF80  (empty)
    virtual int vf18();                          // +0x18  00C92650  start the BGM named by the record
    // +0x1C  00C8AF90  inherited Trigger::cAction<Trigger::cActBgmSimple>::vf1C
    // +0x20  00C8AFA0  inherited Trigger::cAction<Trigger::cActBgmSimple>::vf20
};

} // namespace Trigger
