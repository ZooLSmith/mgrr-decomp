// REFINED
// Trigger::cTriggerTask -- abstract task queued by trigger actions (vftable 0x016A8908).
// Refined from RTTI (no bases) and the raw decompilation of
// src/managers/triggermanager/cTriggerTask.cpp.
#pragma once

namespace Trigger {

class cTriggerTask {
public:
    // vftable (0x016A8908), in slot order (slot = byte offset)
    virtual cTriggerTask *vf00(unsigned char flags);  // +0x00  00C83E40  scalar deleting destructor
    virtual void vf04();                              // +0x04  00C77530  start: sets flag bit 0
    virtual void vf08();                              // +0x08  00C77540  reset
    virtual void vf0C() = 0;                          // +0x0C  __purecall  update

    // fields (absolute byte offsets)
    int &owner()           { return *(int *)((char *)this + 0x04); }           // +0x04  ? (set from the action record by TrgActPlAnim)
    unsigned int &flags()  { return *(unsigned int *)((char *)this + 0x08); }  // +0x08  bit 0 = started, bit 1 = finished
};

} // namespace Trigger
