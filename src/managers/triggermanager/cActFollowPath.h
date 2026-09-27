// REFINED
// Trigger::cActFollowPath -- trigger action (vftable 0x016AEFBC).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActFollowPath>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActFollowPath.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActFollowPath : public cAction<cActFollowPath> {
public:
    // vftable (0x016AEFBC), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C91F40  address of this action type's static descriptor
    virtual cActFollowPath *vf04(unsigned char flags); // +0x04  00C91F50  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C89FB0  (empty)
    virtual void vf0C();                         // +0x0C  00C89FC0  (empty)
    virtual void vf10();                         // +0x10  00C89FD0  (empty)
    virtual void vf14();                         // +0x14  00C89FE0  (empty)
    virtual int vf18();                          // +0x18  00C7EFB0  execute (one unused stack argument); returns 1 on success, 0 otherwise
    // +0x1C  00C89FF0  inherited cAction<cActFollowPath>::vf1C
    // +0x20  00C8A000  inherited cAction<cActFollowPath>::vf20
};

} // namespace Trigger
