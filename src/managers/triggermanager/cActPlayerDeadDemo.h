// REFINED
// Trigger::cActPlayerDeadDemo -- trigger action (vftable 0x016AF950).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActPlayerDeadDemo>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActPlayerDeadDemo.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActPlayerDeadDemo : public cAction<cActPlayerDeadDemo> {
public:
    // vftable (0x016AF950), in slot order (slot = byte offset)
    virtual void *vf00();                                   // +0x00  00C92FB0  address of this action type's static descriptor
    virtual cActPlayerDeadDemo *vf04(unsigned char flags);  // +0x04  00C92FC0  scalar deleting destructor
    virtual void vf08();                                    // +0x08  00C8BE80  (empty)
    virtual void vf0C();                                    // +0x0C  00C8BE90  (empty)
    virtual void vf10();                                    // +0x10  00C8BEA0  (empty)
    virtual void vf14();                                    // +0x14  00C8BEB0  (empty)
    // +0x18  00C7F9E0  inherited vf18
    // +0x1C  00C8BEC0  inherited cAction<cActPlayerDeadDemo>::vf1C
    // +0x20  00C8BED0  inherited cAction<cActPlayerDeadDemo>::vf20
};

} // namespace Trigger
