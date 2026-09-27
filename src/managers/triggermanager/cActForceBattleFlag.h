// REFINED
// Trigger::cActForceBattleFlag -- trigger action (vftable 0x016AFB74).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActForceBattleFlag>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActForceBattleFlag.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActForceBattleFlag : public cAction<cActForceBattleFlag> {
public:
    // vftable (0x016AFB74), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C932F0  address of this action type's static descriptor
    virtual cActForceBattleFlag *vf04(unsigned char flags); // +0x04  00C93300  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C240  (empty)
    virtual void vf0C();                         // +0x0C  00C8C250  (empty)
    virtual void vf10();                         // +0x10  00C8C260  (empty)
    virtual void vf14();                         // +0x14  00C8C270  (empty)
    // +0x18  00C7FF20  inherited cAction<cActForceBattleFlag>::vf18
    // +0x1C  00C8C280  inherited cAction<cActForceBattleFlag>::vf1C
    // +0x20  00C8C290  inherited cAction<cActForceBattleFlag>::vf20
};

} // namespace Trigger
