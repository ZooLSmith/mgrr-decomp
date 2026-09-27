// REFINED
// Trigger::cActSendSignal -- trigger action (vftable 0x016AFD08).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSendSignal>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSendSignal.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSendSignal : public cAction<cActSendSignal> {
public:
    // vftable (0x016AFD08), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C8C7D0  address of this action type's static descriptor
    virtual cActSendSignal *vf04(unsigned char flags);  // +0x04  00C93580  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C800D0  resolve the record's signal value to signalIndex()
    virtual void vf0C();                                // +0x0C  00C8C7F0  (empty)
    virtual void vf10();                                // +0x10  00C8C800  (empty)
    virtual void vf14();                                // +0x14  00C8C810  (empty)
    // +0x18  00C80110  inherited vf18
    // +0x1C  00C8C820  inherited cAction<cActSendSignal>::vf1C
    // +0x20  00C8C830  inherited cAction<cActSendSignal>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &signalIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the signal table (set by vf08)
};

} // namespace Trigger
