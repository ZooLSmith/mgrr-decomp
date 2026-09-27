// REFINED
// Trigger::cActEnemyDestroyByNumber -- trigger action (vftable 0x016B07BC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActEnemyDestroyByNumber>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyDestroyByNumber.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActEnemyDestroyByNumber : public cAction<cActEnemyDestroyByNumber> {
public:
    // vftable (0x016B07BC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C94840  address of this action type's static descriptor
    virtual cActEnemyDestroyByNumber *vf04(unsigned char flags); // +0x04  00C94850  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8F070  (empty)
    virtual void vf0C();                         // +0x0C  00C8F080  (empty)
    virtual void vf10();                         // +0x10  00C8F090  (empty)
    virtual void vf14();                         // +0x14  00C8F0A0  (empty)
    // +0x18  00C815E0  Act::ENM_DESTROY (actions/TrgActEnmDestroy.cpp)
    // +0x1C  00C8F0B0  inherited cAction<cActEnemyDestroyByNumber>::vf1C
    // +0x20  00C8F0C0  inherited cAction<cActEnemyDestroyByNumber>::vf20
};

} // namespace Trigger
