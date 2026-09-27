// REFINED
// Trigger::cCondScenarioAreaGroup -- trigger condition "an enemy group is inside a scenario area" (vftable 0x016AA3F8).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondScenarioAreaGroup.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondScenarioAreaGroup : public cCondition {
public:
    // vftable (0x016AA3F8), in slot order (slot = byte offset)
    virtual cCondScenarioAreaGroup *vf00(unsigned char flags);  // +0x00  00C86CD0  scalar deleting destructor
    virtual void vf04();                    // +0x04  00C7E0E0  allocate the work buffer
    virtual void vf08();                    // +0x08  00C7E110  free the work buffer
    // +0x0C  inherited (cCondPhaseJump.cpp)
    virtual void vf10();                    // +0x10  00C7E100  (empty)
    // +0x14  Trigger::Cond::AREA_3 (defined in another file)
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C7E120  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned short &areaId() { return *(unsigned short *)((char *)this + 0x10); } // +0x10  record+0x08
    int &field14()           { return *(int *)((char *)this + 0x14); }            // +0x14  record+0x0C  ? (enemy set)
    int &field18()           { return *(int *)((char *)this + 0x18); }            // +0x18  record+0x10  ? (group)
    int &field1C()           { return *(int *)((char *)this + 0x1C); }            // +0x1C  record+0x14  ?
    int &field20()           { return *(int *)((char *)this + 0x20); }            // +0x20  ? (result, cleared by GroupOut::vf10)
    int &workBuffer()        { return *(int *)((char *)this + 0x24); }            // +0x24  0x100-byte buffer (FUN_00dd29b0)
};

} // namespace Trigger
