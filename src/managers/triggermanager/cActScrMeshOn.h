// REFINED
// Trigger::cActScrMeshOn -- trigger action (vftable 0x016B0030).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActScrMeshOn>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActScrMeshOn.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActScrMeshOn : public cAction<cActScrMeshOn> {
public:
    // vftable (0x016B0030), in slot order (slot = byte offset)
    virtual void *vf00();                              // +0x00  00C93A50  address of this action type's static descriptor
    virtual cActScrMeshOn *vf04(unsigned char flags);  // +0x04  00C93A60  scalar deleting destructor
    virtual void vf08();                               // +0x08  00C8D320  (empty)
    virtual void vf0C();                               // +0x0C  00C8D330  (empty)
    virtual void vf10();                               // +0x10  00C8D340  (empty)
    virtual void vf14();                               // +0x14  00C8D350  (empty)
    // +0x18  00C97220  inherited vf18
    // +0x1C  00C8D360  inherited cAction<cActScrMeshOn>::vf1C
    // +0x20  00C8D370  inherited cAction<cActScrMeshOn>::vf20
};

} // namespace Trigger
