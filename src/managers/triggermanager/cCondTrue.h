// REFINED
// Trigger::cCondTrue -- trigger condition that is always met (vftable 0x016A8980).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondTrue.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondTrue : public cCondition {
public:
    // vftable (0x016A8980), in slot order (slot = byte offset)
    virtual cCondTrue *vf00(unsigned char flags);  // +0x00  00C84490  scalar deleting destructor
    // +0x04..+0x10  inherited (cCondPhaseJump.cpp)
    virtual int vf14();                            // +0x14  00C79C70  always 1
    // +0x18  inherited
    virtual void vf1C(int *record);                // +0x1C  00C79C80  stores the record
    // +0x20  00C77C80  inherited cCondition::vf20
};

} // namespace Trigger
