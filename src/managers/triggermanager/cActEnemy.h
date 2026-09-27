// REFINED
// Trigger::cActEnemy -- trigger action (vftable 0x016AEC30).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemy>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemy.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemy : public cAction<cActEnemy> {
public:
    // vftable (0x016AEC30), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C918F0  address of this action type's static descriptor
    virtual cActEnemy *vf04(unsigned char flags); // +0x04  00C91900  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C896F0  (empty; defined in cActEnemyByName.cpp)
    virtual void vf0C();                         // +0x0C  00C89700  (empty; defined in cActEnemyByName.cpp)
    virtual void vf10();                         // +0x10  00C89710  (empty; defined in cActEnemyByName.cpp)
    virtual void vf14();                         // +0x14  00C89720  (empty; defined in cActEnemyByName.cpp)
    virtual int vf18() = 0;                      // +0x18  00FDB68B  _purecall
    // +0x1C  00C89730  inherited cAction<cActEnemy>::vf1C
    // +0x20  00C89740  inherited cAction<cActEnemy>::vf20
    virtual int vf24() = 0;                      // +0x24  00FDB68B  _purecall; subclasses: enemy id/number the action targets (-1 without record)
};

} // namespace Trigger
