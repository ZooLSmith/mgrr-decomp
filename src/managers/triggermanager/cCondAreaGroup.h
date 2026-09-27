// REFINED
// Trigger::cCondAreaGroup -- trigger condition: area test for an enemy group (vftable 0x016A8D00).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8930) and the raw decompilation
// of src/managers/triggermanager/cCondAreaGroup.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the only base field used is at +0x04 (the condition record).
class cCondAreaGroup /* : public cCondition */ {
public:
    // vftable (0x016A8D00), in slot order (slot = byte offset)
    virtual cCondAreaGroup *vf00(unsigned char flags); // +0x00  00C84DB0  scalar deleting destructor
    virtual void vf04();                                 // +0x04  00C798E0  allocate workBuffer()
    virtual void vf08();                                 // +0x08  00C79900  free workBuffer()
    virtual int vf0C();                                  // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C (cCondition base)
    virtual void vf10();                                 // +0x10  00C79910  reset result()
    virtual int vf14();                                  // +0x14  00C9C6C0  Trigger::AREA (Trigger.cpp)
    virtual int vf18();                                  // +0x18  00C79950  returns result()
    virtual void vf1C(int *record);                      // +0x1C  00C79920  store the record and copy its parameters
    virtual int vf20();                                  // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute byte offsets); +0x04 (record) belongs to Trigger::cCondition
    unsigned short &areaId()     { return *(unsigned short *)((char *)this + 0x10); } // +0x10  from record+0x08
    int            &param14()    { return *(int *)((char *)this + 0x14); }            // +0x14  ? record+0x0C
    int            &param18()    { return *(int *)((char *)this + 0x18); }            // +0x18  ? record+0x10
    int            &param1C()    { return *(int *)((char *)this + 0x1C); }            // +0x1C  ? record+0x14
    int            &result()     { return *(int *)((char *)this + 0x20); }            // +0x20  returned by vf18, cleared by vf10
    int            &workBuffer() { return *(int *)((char *)this + 0x24); }            // +0x24  0x100-byte block (align 0x20) from the trigger heap
};

} // namespace Trigger
