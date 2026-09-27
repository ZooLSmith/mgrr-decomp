// REFINED
// Trigger::cActSendSignalContext -- trigger action (vftable 0x016AFD30).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActSendSignalContext>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActSendSignalContext.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActSendSignalContext : public cAction<cActSendSignalContext> {
public:
    // vftable (0x016AFD30), in slot order (slot = byte offset)
    virtual void *vf00();                                      // +0x00  00C8C870  address of this action type's static descriptor
    virtual cActSendSignalContext *vf04(unsigned char flags);  // +0x04  00C935C0  scalar deleting destructor
    virtual void vf08();                                       // +0x08  00C80160  resolve the record's signal value to signalIndex()
    virtual void vf0C();                                       // +0x0C  00C8C890  (empty)
    virtual void vf10();                                       // +0x10  00C8C8A0  (empty)
    virtual void vf14();                                       // +0x14  00C8C8B0  (empty)
    // +0x18  00C801A0  inherited vf18
    // +0x1C  00C8C8C0  inherited cAction<cActSendSignalContext>::vf1C
    // +0x20  00C8C8D0  inherited cAction<cActSendSignalContext>::vf20

    // fields (absolute byte offsets); record() at +0x04 comes from cAction<T>
    unsigned int &signalIndex() { return *(unsigned int *)((char *)this + 0x8); }  // +0x08  index into the signal table (set by vf08)
};

} // namespace Trigger
