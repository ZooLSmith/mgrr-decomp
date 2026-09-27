// REFINED
// Trigger::cTriggerTask_PlAnim -- trigger task that plays a player animation and waits for it
// to finish (vftable 0x016A891C). Created by Trigger::Act::PL_ANIM (actions/TrgActPlAnim.cpp),
// which starts it with FUN_00c83e90.
// Refined from RTTI (bases: Trigger::cTriggerTask) and the raw decompilation of
// src/managers/triggermanager/cTriggerTask_PlAnim.cpp.
#pragma once
#include "cTriggerTask.h"

namespace Trigger {

class cTriggerTask_PlAnim : public cTriggerTask {
public:
    // vftable (0x016A891C), in slot order (slot = byte offset)
    virtual cTriggerTask_PlAnim *vf00(unsigned char flags);  // +0x00  00C83E60  scalar deleting destructor
    virtual void vf04();                                     // +0x04  00C775C0  start
    virtual void vf08();                                     // +0x08  00C775D0  reset
    virtual void vf0C();                                     // +0x0C  00C83F10  update: wait for the animation end

    // fields (absolute byte offsets)
    int &animRequest()  { return *(int *)((char *)this + 0x0C); }  // +0x0C  set by FUN_00c83e90; 0 = nothing to wait for
};

} // namespace Trigger
