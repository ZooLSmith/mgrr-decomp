// REFINED
// Trigger::cCondEnemyFinishHP0ByNumber -- trigger condition: true a delay after the numbered enemy set was finished (HP0).
// Refined from RTTI (bases: Trigger::cCondition, vftable 0x016A8F60) and the raw decompilation
// of src/managers/triggermanager/cCondEnemyFinishHP0ByNumber.cpp.
#pragma once

namespace Trigger {

// RTTI base: Trigger::cCondition. No refined cCondition header exists, so the base is not
// declared here; its fields (+0x04 record, +0x08, +0x0C) are accessed raw in the .cpp.
class cCondEnemyFinishHP0ByNumber /* : public cCondition */ {
public:
    // vftable (0x016A8F60), in slot order (slot = byte offset)
    virtual cCondEnemyFinishHP0ByNumber *vf00(unsigned char flags);  // +0x00  00C85470  scalar deleting destructor
    virtual void vf04();                                             // +0x04  00C77C20  inherited Trigger::cCondPhaseJump::vf04
    virtual void vf08();                                             // +0x08  00C77C30  inherited Trigger::cCondPhaseJump::vf08
    virtual int vf0C();                                              // +0x0C  00C77C40  inherited Trigger::cCondPhaseJump::vf0C
    virtual void vf10();                                             // +0x10  00C77C50  inherited Trigger::cCondPhaseJump::vf10
    virtual int vf14();                                              // +0x14  00C7A4C0
    virtual int vf18();                                              // +0x18  00C77C60  inherited Trigger::cCondPhaseJump::vf18
    virtual void vf1C(int *record);                                  // +0x1C  00C7A540
    virtual int vf20();                                              // +0x20  00C7A560

    // fields (absolute offsets from the object start)
    int &enemyNumber() { return *(int *)((char *)this + 0x10); }  // +0x10  record+0x08
    float &elapsed() { return *(float *)((char *)this + 0x14); }  // +0x14  frames counted since the finish was detected
    float &delay() { return *(float *)((char *)this + 0x18); }    // +0x18  record+0x0C seconds * 60 (frames to wait after the finish)
    int &finished() { return *(int *)((char *)this + 0x1C); }     // +0x1C  finish state reported by the enemy manager (1 = finished)
};

} // namespace Trigger
