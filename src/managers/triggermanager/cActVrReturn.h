// REFINED
// Trigger::cActVrReturn -- trigger action (vftable 0x016B094C).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActVrReturn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActVrReturn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActVrReturn : public cAction<cActVrReturn> {
public:
    // vftable (0x016B094C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94AC0  address of this action type's static descriptor
    virtual cActVrReturn *vf04(unsigned char flags); // +0x04  00C94AD0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F6B0  (empty)
    virtual void vf0C();                         // +0x0C  00C8F6C0  (empty)
    virtual void vf10();                         // +0x10  00C8F6D0  (empty)
    virtual void vf14();                         // +0x14  00C8F6E0  (empty)
    virtual int vf18();                          // +0x18  00C81720  VR return: FUN_00a4ac40 on DAT_01be8e40 with data from DAT_018b9140
    // +0x1C  00C8F6F0  inherited Trigger::cAction<Trigger::cActVrReturn>::vf1C
    // +0x20  00C8F700  inherited Trigger::cAction<Trigger::cActVrReturn>::vf20
};

} // namespace Trigger
