// REFINED
// Trigger::cCondArea -- trigger condition: area areaId() reports a hit on layer 1 or 2
// (vftable 0x016A8AA8).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8930) and the raw decompilation
// of src/managers/triggermanager/cCondArea.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). The base header is not included here to
// keep this header self-contained; the only base field used is at +0x04 (the condition record).
class cCondArea /* : public cCondition */ {
public:
    // vftable (0x016A8AA8), in slot order (slot = byte offset)
    virtual cCondArea *vf00(unsigned char flags);        // +0x00  00C84CD0  scalar deleting destructor
    virtual void vf04();                                 // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04 (cCondition base)
    virtual void vf08();                                 // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08 (cCondition base)
    virtual int vf0C();                                  // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C (cCondition base)
    virtual void vf10();                                 // +0x10  00C78E20  reset hitStamp()
    virtual int vf14();                                  // +0x14  00C78E30  evaluate the area test
    virtual int vf18();                                  // +0x18  00C78EA0  returns hitStamp()
    virtual void vf1C(int *record);                      // +0x1C  00C84CF0  store the record and its area id
    virtual int vf20();                                  // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute byte offsets); +0x04 (record) belongs to Trigger::cCondition
    unsigned short &areaId()   { return *(unsigned short *)((char *)this + 0x10); } // +0x10  from record+0x08
    int            &hitStamp() { return *(int *)((char *)this + 0x14); }            // +0x14  DAT_01be8e58 when the test passed (0 = not yet)
};

} // namespace Trigger
