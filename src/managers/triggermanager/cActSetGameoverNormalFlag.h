// REFINED
// Trigger::cActSetGameoverNormalFlag -- trigger action (vftable 0x016B0008).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSetGameoverNormalFlag>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSetGameoverNormalFlag.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSetGameoverNormalFlag : public cAction<cActSetGameoverNormalFlag> {
public:
    // vftable (0x016B0008), in slot order (slot = byte offset)
    virtual void *vf00();                                          // +0x00  00C93A10  address of this action type's static descriptor
    virtual cActSetGameoverNormalFlag *vf04(unsigned char flags);  // +0x04  00C93A20  scalar deleting destructor
    virtual void vf08();                                           // +0x08  00C8D280  (empty)
    virtual void vf0C();                                           // +0x0C  00C8D290  (empty)
    virtual void vf10();                                           // +0x10  00C8D2A0  (empty)
    virtual void vf14();                                           // +0x14  00C8D2B0  (empty)
    virtual int vf18();                                            // +0x18  00C80700  run the action; returns 1 on success (takes one unused stack argument)
    // +0x1C  00C8D2C0  inherited cAction<cActSetGameoverNormalFlag>::vf1C
    // +0x20  00C8D2D0  inherited cAction<cActSetGameoverNormalFlag>::vf20
};

} // namespace Trigger
