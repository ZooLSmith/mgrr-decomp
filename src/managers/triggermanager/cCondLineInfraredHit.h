// REFINED
// Trigger::cCondLineInfraredHit -- trigger condition: an infrared line was hit (vftable 0x016A9F78).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondLineInfraredHit.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondLineInfraredHit /* : public cCondition */ {
public:
    // vftable (0x016A9F78), in slot order (slot = byte offset)
    virtual cCondLineInfraredHit *vf00(unsigned char flags); // +0x00  00C86660  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7CF00  (empty)
    virtual int vf14();                             // +0x14  00C7CF10  FUN_00c2d7f0 on object 0x018A9F48
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7CF20  stores the record and its line id (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &lineId() { return *(int *)((char *)this + 0x10); }                         // +0x10  infrared line id (record+0x08)
};

} // namespace Trigger
