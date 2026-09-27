// REFINED
// Trigger::cActHackEnd -- trigger action (vftable 0x016AF978).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActHackEnd>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActHackEnd.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActHackEnd : public cAction<cActHackEnd> {
public:
    // vftable (0x016AF978), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C92FF0  address of this action type's static descriptor
    virtual cActHackEnd *vf04(unsigned char flags); // +0x04  00C93000  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8BF20  (empty)
    virtual void vf0C();                         // +0x0C  00C8BF30  (empty)
    virtual void vf10();                         // +0x10  00C8BF40  (empty)
    virtual void vf14();                         // +0x14  00C8BF50  (empty)
    virtual int vf18();                          // +0x18  00C7FA00  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C8BF60  inherited cAction<cActHackEnd>::vf1C
    // +0x20  00C8BF70  inherited cAction<cActHackEnd>::vf20
};

} // namespace Trigger
