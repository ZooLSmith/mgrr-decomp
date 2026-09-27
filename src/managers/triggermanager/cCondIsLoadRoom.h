// REFINED
// Trigger::cCondIsLoadRoom -- trigger condition: room(s) loaded (vftable 0x016A92FC).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondIsLoadRoom.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondIsLoadRoom /* : public cCondition */ {
public:
    cCondIsLoadRoom();                              // 00C7AEA0

    // vftable (0x016A92FC), in slot order (slot = byte offset)
    virtual cCondIsLoadRoom *vf00(unsigned char flags); // +0x00  00C85B10  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C77C40  inherited
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual int vf14();                             // +0x14  00C7AEE0  room loaded (FUN_00a4c810 on 0x01BE8F30)
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7AF90  stores the record, room number and list flag
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &roomNo() { return *(int *)((char *)this + 0x10); }                         // +0x10  room number (record+0x08); -2 after construction, negative = use -2
    int &useReadRoomList() { return *(int *)((char *)this + 0x14); }                // +0x14  record+0x0C; 1 = test every room of PhaseManager::createReadRoomList
};

} // namespace Trigger
