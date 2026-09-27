// REFINED
// Trigger::cCondOutCamera -- trigger condition: the target is outside the camera view (vftable 0x016A8F38).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondOutCamera.cpp.
#pragma once

namespace Trigger {

class cCondition;

// RTTI base: Trigger::cCondition (vftable 0x016A8930). No header models the base yet, so it is not
// derived from here; its fields (+0x04 condition record, +0x08, +0x0C last result) are accessed raw.
class cCondOutCamera /* : public cCondition */ {
public:
    // vftable (0x016A8F38), in slot order (slot = byte offset)
    virtual cCondOutCamera *vf00(unsigned char flags); // +0x00  00C853D0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  inherited
    virtual void vf08();                            // +0x08  00C77C30  inherited
    virtual int vf0C();                             // +0x0C  00C853F0  = Trigger::Cond::OUT_CAM (defined elsewhere)
    virtual void vf10();                            // +0x10  00C77C50  inherited
    virtual int vf14();                             // +0x14  00C7A3F0  1 when the projected point is off screen
    virtual int vf18();                             // +0x18  00C77C60  inherited
    virtual void vf1C(int *record);                 // +0x1C  00C7A480  stores the record and its target (record+0x08)
    virtual int vf20();                             // +0x20  00C77C80  inherited

    // fields (absolute byte offsets)
    int &target() { return *(int *)((char *)this + 0x10); }                         // +0x10  target id (record+0x08)
    int &enabled() { return *(int *)((char *)this + 0x14); }                        // +0x14  0 = vf14 returns 0 (set elsewhere)
    float *screenPos() { return (float *)((char *)this + 0x20); }                   // +0x20  projected position [4]: x, y, ?, w
    float *worldPos() { return (float *)((char *)this + 0x30); }                    // +0x30  world position to project
};

} // namespace Trigger
