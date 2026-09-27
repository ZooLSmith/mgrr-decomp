// REFINED
// Trigger::cCondAreaPlCamOut -- trigger condition: true while neither area query (player / camera) hits the area.
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016AA4E8) and the raw decompilation
// of src/managers/triggermanager/cCondAreaPlCamOut.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondAreaPlCamOut /* : public cCondition */ {
public:
    // vftable (0x016AA4E8), in slot order (slot = byte offset)
    virtual cCondAreaPlCamOut *vf00(unsigned char flags);  // +0x00  00C86D90  scalar deleting destructor
    virtual void vf04();                                   // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                   // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                    // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C
    virtual void vf10();                                   // +0x10  00C7E670
    virtual int vf14();                                    // +0x14  00C7E680  1 when both vf2C area queries of FUN_00a6e640() return 0
    virtual int vf18();                                    // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                        // +0x1C  00C7E710
    virtual int vf20();                                    // +0x20  00C77C80  inherited Trigger::cCondition::vf20

    // fields (absolute offsets from the object start)
    unsigned short &areaId() { return *(unsigned short *)((char *)this + 0x10); }  // +0x10  record+0x08 (16-bit)
};

} // namespace Trigger
