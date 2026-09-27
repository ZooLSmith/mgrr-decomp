// REFINED
// Trigger::cActBoss -- trigger action "boss" (vftable 0x016B0E2C).
// Refined from RTTI (bases: Trigger::cActEnemy, Trigger::cAction<Trigger::cActEnemy>,
// Trigger::cActionAbstract) and the raw decompilation of src/managers/triggermanager/cActBoss.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

// RTTI base: Trigger::cActEnemy (no header yet); derive from its own base so the
// vftable layout (slots 0x00..0x20 from cAction<T>) stays the same.
class cActBoss : public cAction<cActEnemy> /* : public cActEnemy */ {
public:
    // vftable (0x016B0E2C), in slot order (slot = byte offset)
    virtual void *vf00();                          // +0x00  00C96640  address of this action type's static descriptor
    virtual cActBoss *vf04(unsigned char flags);   // +0x04  00C96650  scalar deleting destructor
    // +0x08..+0x14  00C896F0 00C89700 00C89710 00C89720  inherited from cActEnemy
    // +0x18  00C7EBB0  inherited vf18 (Trigger::Act::BOSS)
    // +0x1C  00C89730  inherited
    // +0x20  00C89740  inherited
    virtual int vf24();                            // +0x24  00C7EBE0  always -1
};

} // namespace Trigger
