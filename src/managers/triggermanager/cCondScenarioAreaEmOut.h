// REFINED
// Trigger::cCondScenarioAreaEmOut -- trigger condition "an enemy of a group is outside a scenario area" (vftable 0x016AA498).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondScenarioAreaEmOut.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondScenarioAreaEmOut : public cCondition {
public:
    // vftable (0x016AA498), in slot order (slot = byte offset)
    virtual cCondScenarioAreaEmOut *vf00(unsigned char flags);  // +0x00  00C86D50  scalar deleting destructor
    // +0x04..+0x0C  inherited (cCondPhaseJump.cpp)
    virtual void vf10();                    // +0x10  00C7E410  update: clears the found enemy
    virtual int vf14();                     // +0x14  00C7E420  area test over the listed enemies
    // +0x18  inherited
    virtual void vf1C(int *record);         // +0x1C  00C7E4F0  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    unsigned short &areaId() { return *(unsigned short *)((char *)this + 0x10); } // +0x10  record+0x08
    int &foundEnemy()        { return *(int *)((char *)this + 0x14); }            // +0x14  enemy that satisfied the test
    int &setNo()             { return *(int *)((char *)this + 0x18); }            // +0x18  record+0x0C  (enemy set)
    int &groupNo()           { return *(int *)((char *)this + 0x1C); }            // +0x1C  record+0x10  (group in the set)
    int &enemyCount()        { return *(int *)((char *)this + 0x20); }            // +0x20  record+0x14  entries used in enemyNos
    int *enemyNos()          { return (int *)((char *)this + 0x24); }             // +0x24  record+0x18  int[5]
};

} // namespace Trigger
