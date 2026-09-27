// REFINED
// Trigger::cCondRoomEventEnd -- trigger condition: room event ended (condition types 0x2C / 0x3A) (vftable 0x016A925C).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondRoomEventEnd.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondRoomEventEnd /* : public cCondition */ {
public:
    // vftable (0x016A925C), in slot order (slot = byte offset)
    virtual cCondRoomEventEnd *vf00(unsigned char flags); // +0x00  00C85A90  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual unsigned int vf14();                    // +0x14  00C7AC70  event state, inverted when it was 1 at the first call
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7ACD0  stores the record and its event id (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &eventId() { return *(int *)((char *)this + 0x10); }                        // +0x10  event id (record+0x08)
    int &initialState() { return *(int *)((char *)this + 0x14); }                   // +0x14  event state latched on the first vf14 (0 = not yet)
};

} // namespace Trigger
