// REFINED
// Trigger::cActEnemyRequestEndByName -- trigger action (vftable 0x016AFA44).
// Refined from RTTI (bases: Trigger::cActEnemy, Trigger::cAction<Trigger::cActEnemy>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActEnemyRequestEndByName.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

// RTTI base is Trigger::cActEnemy (itself a cAction<cActEnemy>); its header is owned by
// cActEnemy.cpp and not included here, so this class derives from cAction<cActEnemy>
// and declares the cActEnemy slot +0x24 itself.
class cActEnemyRequestEndByName : public cAction<cActEnemy> {
public:
    // vftable (0x016AFA44), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93130  address of this action type's static descriptor
    virtual cActEnemyRequestEndByName *vf04(unsigned char flags); // +0x04  00C93140  scalar deleting destructor
    // +0x08  00C896F0  inherited cAction<cActEnemy>::vf08
    // +0x0C  00C89700  inherited cAction<cActEnemy>::vf0C
    // +0x10  00C89710  inherited cAction<cActEnemy>::vf10
    // +0x14  00C89720  inherited cAction<cActEnemy>::vf14
    virtual int vf18();                          // +0x18  00C7FCE0  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C89730  inherited cAction<cActEnemy>::vf1C
    // +0x20  00C89740  inherited cAction<cActEnemy>::vf20
    virtual int vf24();                          // +0x24  00C7FD10  target index/id or -1
};

} // namespace Trigger
