// REFINED
// Trigger::cCondIsScrMeshOn -- trigger condition: scripted mesh on (vftable 0x016A9D10).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsScrMeshOn.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsScrMeshOn /* : public cCondition */ {
public:
    cCondIsScrMeshOn();                             // 00C7C7B0

    // vftable (0x016A9D10), in slot order (slot = byte offset)
    virtual cCondIsScrMeshOn *vf00(unsigned char flags); // +0x00  00C864E0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C7C7F0  (empty)
    virtual int vf14();                             // +0x14  00C962D0  = Trigger::Condition::IS_SCR_MESH_ON (defined in Condition.cpp)
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7C800  stores the record and copies record+0x08..+0x1C
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &searchKey() { return *(int *)((char *)this + 0x10); }                      // +0x10  object search key (record+0x08)
    int *meshName() { return (int *)((char *)this + 0x14); }                        // +0x14  int[4] search name (record+0x0C..+0x18)
    int &partNo() { return *(int *)((char *)this + 0x24); }                         // +0x24  mesh part number (record+0x1C); -1 after construction
};

} // namespace Trigger
