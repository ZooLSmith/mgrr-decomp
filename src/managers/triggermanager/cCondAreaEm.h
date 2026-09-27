// REFINED
// Trigger::cCondAreaEm -- trigger condition: one of the listed enemies is inside area areaId() on layer 1 or 2 (vftable 0x016A8D28).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8930) and the raw decompilation
// of src/managers/triggermanager/cCondAreaEm.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the only base field used is at +0x04 (the condition record).
class cCondAreaEm /* : public cCondition */ {
public:
    // vftable (0x016A8D28), in slot order (slot = byte offset)
    virtual cCondAreaEm *vf00(unsigned char flags);  // +0x00  00C84DD0  scalar deleting destructor
    virtual void vf04();                                 // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04 (cCondition base)
    virtual void vf08();                                 // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08 (cCondition base)
    virtual int vf0C();                                  // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C (cCondition base)
    virtual void vf10();                                 // +0x10  00C799A0  reset foundEnemy()
    virtual int vf14();                                  // +0x14  00C799B0  evaluate: stores the matching enemy in foundEnemy()
    virtual int vf18();                                  // +0x18  00C79AE0  returns foundEnemy()
    virtual void vf1C(int *record);                      // +0x1C  00C79A90  store the record and copy its parameters
    virtual int vf20();                                  // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute byte offsets); +0x04 (record) belongs to Trigger::cCondition
    unsigned short &areaId()     { return *(unsigned short *)((char *)this + 0x10); } // +0x10  from record+0x08
    int            &foundEnemy() { return *(int *)((char *)this + 0x14); }            // +0x14  enemy that satisfied the test (0 = none)
    int            &group()      { return *(int *)((char *)this + 0x18); }            // +0x18  enemy group (record+0x0C)
    int            &subGroup()   { return *(int *)((char *)this + 0x1C); }            // +0x1C  enemy sub-group (record+0x10)
    int            &entryCount() { return *(int *)((char *)this + 0x20); }            // +0x20  number of used entries() (record+0x14)
    int            *entries()    { return (int *)((char *)this + 0x24); }             // +0x24  enemy entry ids [5] (record+0x18..+0x28)
};

} // namespace Trigger
