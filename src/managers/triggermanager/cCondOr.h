// REFINED
// Trigger::cCondOr -- trigger condition: any child condition is true (vftable 0x016A8C5C).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondOr.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondOr /* : public cCondition */ {
public:
    // vftable (0x016A8C5C), in slot order (slot = byte offset)
    virtual cCondOr *vf00(unsigned char flags);     // +0x00  00C84D70  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C79600  forwards vf04 to every child
    virtual void vf08();                            // +0x08  00C79630  vf08 on every child, then deletes it
    virtual int vf0C();                             // +0x0C  00C79670  = Trigger::Cond::OR (defined elsewhere)
    virtual void vf10();                            // +0x10  00C796E0  forwards vf10 to every child
    virtual int vf14();                             // +0x14  00C79710  1 when some child (optionally inverted) is true
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C9C650  = Trigger::Cond::OR_2 (defined elsewhere)
    virtual int vf20();                             // +0x20  00C79770  vf20 on every child; 0 if any returned 0

    // fields (absolute byte offsets)
    int **children() { return (int **)((char *)this + 0x10); }                      // +0x10  child conditions [15]
    int *inverted() { return (int *)((char *)this + 0x4C); }                        // +0x4C  per child: 1 = negate its result [15]
    int &childCount() { return *(int *)((char *)this + 0x88); }                     // +0x88  number of children
};

} // namespace Trigger
