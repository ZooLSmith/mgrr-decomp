// REFINED
// Trigger::cActBattleAreaOff -- trigger action (vftable 0x016B0328).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActBattleAreaOff>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActBattleAreaOff.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActBattleAreaOff : public cAction<cActBattleAreaOff> {
public:
    // vftable (0x016B0328), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93F30  address of this action type's static descriptor
    virtual cActBattleAreaOff *vf04(unsigned char flags); // +0x04  00C93F40  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DEF0  (empty)
    virtual void vf0C();                         // +0x0C  00C8DF00  (empty)
    virtual void vf10();                         // +0x10  00C8DF10  (empty)
    virtual void vf14();                         // +0x14  00C8DF20  (empty)
    // +0x18  00C80C80  inherited vf18 (Trigger::Act::BATTLE_AREA_OFF)
    // +0x1C  00C8DF30  inherited Trigger::cAction<Trigger::cActBattleAreaOff>::vf1C
    // +0x20  00C8DF40  inherited Trigger::cAction<Trigger::cActBattleAreaOff>::vf20
};

} // namespace Trigger
