// REFINED
// Trigger::cActEnemyByName -- trigger action (vftable 0x016AEC5C).
// Refined from RTTI (bases: Trigger::cActEnemy, Trigger::cAction<Trigger::cActEnemy>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyByName.cpp.
#pragma once
#include "cActEnemy.h"

namespace Trigger {

class cActEnemyByName : public cActEnemy {
public:
    // vftable (0x016AEC5C), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91930  address of this action type's static descriptor
    virtual cActEnemyByName *vf04(unsigned char flags); // +0x04  00C91940  scalar deleting destructor
    // +0x08  00C896F0  inherited cActEnemy::vf08 (empty)
    // +0x0C  00C89700  inherited cActEnemy::vf0C (empty)
    // +0x10  00C89710  inherited cActEnemy::vf10 (empty)
    // +0x14  00C89720  inherited cActEnemy::vf14 (empty)
    virtual int vf18();                          // +0x18  00C7EBF0  enemy lookup by the record name (FUN_00c2a520)
    // +0x1C  00C89730  inherited cAction<cActEnemy>::vf1C
    // +0x20  00C89740  inherited cAction<cActEnemy>::vf20
    virtual int vf24();                          // +0x24  00C7EC20  enemy id/number the action targets (-1 without record)
};

} // namespace Trigger
