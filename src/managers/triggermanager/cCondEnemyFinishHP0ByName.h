// REFINED
// Trigger::cCondEnemyFinishHP0ByName -- trigger condition: true a delay after the named enemies were finished (HP0).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8F88) and the raw decompilation
// of src/managers/triggermanager/cCondEnemyFinishHP0ByName.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondEnemyFinishHP0ByName /* : public cCondition */ {
public:
    cCondEnemyFinishHP0ByName();

    // vftable (0x016A8F88), in slot order (slot = byte offset)
    virtual cCondEnemyFinishHP0ByName *vf00(unsigned char flags);  // +0x00  00C85490  scalar deleting destructor
    virtual void vf04();                                           // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                           // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                            // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C
    virtual void vf10();                                           // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                            // +0x14  00C854B0
    virtual int vf18();                                            // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                                // +0x1C  00C7A5C0
    virtual int vf20();                                            // +0x20  00C7A5E0

    // fields (absolute offsets from the object start)
    char *&enemyName() { return *(char **)((char *)this + 0x10); }  // +0x10  address of record+0x08 (name string); "all" = every enemy
    float &elapsed() { return *(float *)((char *)this + 0x14); }    // +0x14  frames counted since the finish was detected
    float &delay() { return *(float *)((char *)this + 0x18); }      // +0x18  record+0x18 seconds * 60 (frames to wait after the finish)
    int &finished() { return *(int *)((char *)this + 0x1C); }       // +0x1C  finish state reported by the enemy manager (1 = finished)
    int &allRegistered() { return *(int *)((char *)this + 0x20); }  // +0x20  result of FUN_00c18cc0(DAT_01d5bad4) ("all" only)
};

} // namespace Trigger
