// REFINED
// Trigger::cCondScenarioAreaOut -- trigger condition "player outside a scenario area" (vftable 0x016AA448).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondScenarioAreaOut.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondScenarioAreaOut : public cCondition {
public:
    // vftable (0x016AA448), in slot order (slot = byte offset)
    virtual cCondScenarioAreaOut *vf00(unsigned char flags);  // +0x00  00C86D10  scalar deleting destructor
    // +0x04..+0x0C  inherited (cCondPhaseJump.cpp)
    virtual void vf10();                    // +0x10  00C7E2C0  update: clears the hit object
    virtual int vf14();                     // +0x14  00C7E2D0  area test
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C7E320  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned short &areaId() { return *(unsigned short *)((char *)this + 0x10); } // +0x10  record+0x08
    int &hitObject()         { return *(int *)((char *)this + 0x14); }            // +0x14  DAT_01be8e58 when met
};

} // namespace Trigger
