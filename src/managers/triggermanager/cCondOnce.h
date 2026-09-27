// REFINED
// Trigger::cCondOnce -- trigger condition: true on the first update only (vftable 0x016A8CD8).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondOnce.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondOnce /* : public cCondition */ {
public:
    // vftable (0x016A8CD8), in slot order (slot = byte offset)
    virtual cCondOnce *vf00(unsigned char flags);   // +0x00  00C84D90  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C79800  counts updates up to 2
    virtual bool vf14();                            // +0x14  00C79810  update count == 1
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C79820  stores the condition record (+0x04)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &updateCount() { return *(int *)((char *)this + 0x10); }                    // +0x10  vf10 calls, saturating at 2
};

} // namespace Trigger
