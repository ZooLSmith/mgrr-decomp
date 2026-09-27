// REFINED
// Trigger::cActBattleAreaOn -- trigger action (vftable 0x016B0300).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActBattleAreaOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActBattleAreaOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActBattleAreaOn : public cAction<cActBattleAreaOn> {
public:
    // vftable (0x016B0300), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93EF0  address of this action type's static descriptor
    virtual cActBattleAreaOn *vf04(unsigned char flags); // +0x04  00C93F00  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DE50  (empty)
    virtual void vf0C();                         // +0x0C  00C8DE60  (empty)
    virtual void vf10();                         // +0x10  00C8DE70  (empty)
    virtual void vf14();                         // +0x14  00C8DE80  (empty)
    // +0x18  00C80C40  inherited vf18 (Trigger::Act::BATTLE_AREA_ON)
    // +0x1C  00C8DE90  inherited Trigger::cAction<Trigger::cActBattleAreaOn>::vf1C
    // +0x20  00C8DEA0  inherited Trigger::cAction<Trigger::cActBattleAreaOn>::vf20
};

} // namespace Trigger
