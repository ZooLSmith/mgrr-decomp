// REFINED
// Trigger::cCondIsDoorOpen -- trigger condition: the named door is open (vftable 0x016A8D50).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsDoorOpen.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsDoorOpen /* : public cCondition */ {
public:
    cCondIsDoorOpen();                              // 00C79B00

    // vftable (0x016A8D50), in slot order (slot = byte offset)
    virtual cCondIsDoorOpen *vf00(unsigned char flags); // +0x00  00C84DF0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C79B40  (empty)
    virtual unsigned int vf14();                    // +0x14  00C79B50  1 when the door named at +0x10 is not closed
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C79B90  stores the record and copies its door name (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    char *doorName() { return (char *)this + 0x10; }                                // +0x10  char[16] door name (empty = never true)
};

} // namespace Trigger
