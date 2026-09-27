// REFINED
// Trigger::cActionAbstract -- root of every trigger action class (vftable 0x016A89A8).
// Refined from RTTI (no bases) and the raw decompilation of
// src/managers/triggermanager/cActionAbstract.cpp. Trigger::cAction<T> (cAction.h) mirrors this
// vftable layout for each action type.
#pragma once

namespace Trigger {

class cActionAbstract {
public:
    // vftable (0x016A89A8), in slot order (slot = byte offset)
    virtual void *vf00();                               // +0x00  00C77D60  address of the static descriptor (0x01DBD214)
    virtual cActionAbstract *vf04(unsigned char flags); // +0x04  00C77DE0  scalar deleting destructor
    virtual void vf08();                                // +0x08  00C77D70  (empty)
    virtual void vf0C();                                // +0x0C  00C77D80  (empty)
    virtual void vf10();                                // +0x10  00C77D90  (empty)
    virtual void vf14();                                // +0x14  00C77DA0  (empty)
    virtual int vf18();                                 // +0x18  00C77DB0  execute (one unused stack argument); always 0 here
    virtual void vf1C(int *record);                     // +0x1C  00C77DC0  (empty here; derived classes store the record)
    virtual int vf20();                                 // +0x20  00C77DD0  record id; always -1 here

    // fields (absolute byte offsets)
    int *&record() { return *(int **)((char *)this + 0x4); }   // +0x04  action record; record[1] = id
};

} // namespace Trigger
