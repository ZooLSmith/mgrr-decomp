// REFINED
// Trigger::cCondRoomEvent -- trigger condition: room event (condition types 0x2B / 0x39) (vftable 0x016A9234).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondRoomEvent.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondRoomEvent /* : public cCondition */ {
public:
    // vftable (0x016A9234), in slot order (slot = byte offset)
    virtual cCondRoomEvent *vf00(unsigned char flags); // +0x00  00C85A70  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual int vf14();                             // +0x14  00C7ABF0  FUN_00e7a6e0 on the room event key
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7AC30  stores the record and its event id at +0x14
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &eventId() { return *(int *)((char *)this + 0x14); }                        // +0x14  event id (record+0x08); vf14 reads the record directly
};

} // namespace Trigger
