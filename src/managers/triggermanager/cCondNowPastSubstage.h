// REFINED
// Trigger::cCondNowPastSubstage -- trigger condition: now past the named sub-stage (vftable 0x016A90AC).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondNowPastSubstage.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondNowPastSubstage /* : public cCondition */ {
public:
    // vftable (0x016A90AC), in slot order (slot = byte offset)
    virtual cCondNowPastSubstage *vf00(unsigned char flags); // +0x00  00C85710  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual int vf14();                             // +0x14  00C7A890  always 0
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7A8A0  stores the record and a pointer to its name (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    char *&substageName() { return *(char **)((char *)this + 0x10); }               // +0x10  points at the record's name (record+0x08)
};

} // namespace Trigger
