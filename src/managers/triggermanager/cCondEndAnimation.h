// REFINED
// Trigger::cCondEndAnimation -- trigger condition: true once the tracked animation has ended.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016B0D60) and the raw decompilation
// of src/managers/triggermanager/cCondEndAnimation.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondEndAnimation /* : public cCondition */ {
public:
    cCondEndAnimation();

    // vftable (0x016B0D60), in slot order (slot = byte offset)
    virtual cCondEndAnimation *vf00(unsigned char flags);  // +0x00  00C9C900  scalar deleting destructor
    virtual void vf04();                                   // +0x04  00C84FA0
    virtual void vf08();                                   // +0x08  00C915E0
    virtual int vf0C();                                    // +0x0C  00C79CB0
    virtual void vf10();                                   // +0x10  00C9C950
    virtual int vf14();                                    // +0x14  00C84FC0
    virtual int vf18();                                    // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                        // +0x1C  00C79CC0
    virtual int vf20();                                    // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute offsets from the object start)
    int &animRecord() { return *(int *)((char *)this + 0x10); }     // +0x10  address of record+0x08
    int &motionId() { return *(int *)((char *)this + 0x14); }       // +0x14  record+0x18, formatted with DAT_0165bfbc ("%04x"?)
    int &field18() { return *(int *)((char *)this + 0x18); }        // +0x18  ? zeroed by the constructor
    int *&entries() { return *(int **)((char *)this + 0x1C); }      // +0x1C  array of 8-byte entries; entries[i * 2 + 1] = "seen playing" flag
    int &entryCapacity() { return *(int *)((char *)this + 0x20); }  // +0x20  ? cleared together with the array
    int &entryCount() { return *(int *)((char *)this + 0x24); }     // +0x24  number of entries
    int &ownsEntries() { return *(int *)((char *)this + 0x28); }    // +0x28  entries must be freed with FUN_00dd48d0
    int &completed() { return *(int *)((char *)this + 0x2C); }      // +0x2C  latched result
};

} // namespace Trigger
