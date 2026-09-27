// REFINED
// Trigger::cCondResultEnd -- trigger condition: the result screen has ended (vftable 0x016A9F28).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondResultEnd.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondResultEnd /* : public cCondition */ {
public:
    // vftable (0x016A9F28), in slot order (slot = byte offset)
    virtual cCondResultEnd *vf00(unsigned char flags); // +0x00  00C86620  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C7CE10  always 1
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual unsigned int vf14();                    // +0x14  00C7CE20  latches DAT_01dc1308, then its bit 0 inverted
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7CE40  stores the condition record (+0x04)
    virtual int vf20();                             // +0x20  00C7CE50  clears the latch, returns 1

    // fields (absolute byte offsets)
    int &latched() { return *(int *)((char *)this + 0x10); }                        // +0x10  DAT_01dc1308 latched on the first vf14 (0 = not yet)
};

} // namespace Trigger
