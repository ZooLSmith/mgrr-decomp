// REFINED
// Trigger::cActMesDispOffSkip -- trigger action (vftable 0x016B0238).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActMesDispOffSkip>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActMesDispOffSkip.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActMesDispOffSkip : public cAction<cActMesDispOffSkip> {
public:
    // vftable (0x016B0238), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93DB0  address of this action type's static descriptor
    virtual cActMesDispOffSkip *vf04(unsigned char flags); // +0x04  00C93DC0  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8DB30  (empty)
    virtual void vf0C();                         // +0x0C  00C8DB40  (empty)
    virtual void vf10();                         // +0x10  00C8DB50  (empty)
    virtual void vf14();                         // +0x14  00C8DB60  (empty)
    // +0x18  00C80B50  inherited cAction<cActMesDispOffSkip>::vf18
    // +0x1C  00C8DB70  inherited cAction<cActMesDispOffSkip>::vf1C
    // +0x20  00C8DB80  inherited cAction<cActMesDispOffSkip>::vf20
};

} // namespace Trigger
