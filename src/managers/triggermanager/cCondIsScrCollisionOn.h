// REFINED
// Trigger::cCondIsScrCollisionOn -- trigger condition: a scripted collision is on (vftable 0x016A9E88).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsScrCollisionOn.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsScrCollisionOn /* : public cCondition */ {
public:
    cCondIsScrCollisionOn();                        // 00C7CB90

    // vftable (0x016A9E88), in slot order (slot = byte offset)
    virtual cCondIsScrCollisionOn *vf00(unsigned char flags); // +0x00  00C865A0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7CBD0  (empty)
    virtual int vf14();                             // +0x14  00C7CBE0  1 when a found object reports the collision on
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7CC80  stores the record and copies record+0x08..+0x18
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &searchKey() { return *(int *)((char *)this + 0x10); }                      // +0x10  object search key (record+0x08)
    int *collisionParams() { return (int *)((char *)this + 0x14); }                 // +0x14  int[4] collision query (record+0x0C..+0x18), passed to vfE8
};

} // namespace Trigger
