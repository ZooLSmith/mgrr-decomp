// REFINED
// Trigger::cCondKgkArea -- trigger condition: the player entered the kgk area (vftable 0x016AA510).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondKgkArea.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondKgkArea /* : public cCondition */ {
public:
    // vftable (0x016AA510), in slot order (slot = byte offset)
    virtual cCondKgkArea *vf00(unsigned char flags); // +0x00  00C86DB0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7E770  clears the latched player (+0x14)
    virtual int vf14();                             // +0x14  00C86DD0  area test through the FUN_00a6e640 manager
    virtual int vf18();                             // +0x18  00C7E780  returns the latched player (+0x14)
    virtual void vf1C(int *record);                 // +0x1C  00C86E90  stores the record and its area id (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &areaId() { return *(int *)((char *)this + 0x10); }                         // +0x10  area id (record+0x08)
    int &hitPlayer() { return *(int *)((char *)this + 0x14); }                      // +0x14  DAT_01be8e58 latched when the area test succeeds
};

} // namespace Trigger
