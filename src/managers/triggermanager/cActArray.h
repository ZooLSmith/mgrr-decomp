// REFINED
// Trigger::cActArray -- trigger action that runs up to 15 child actions (vftable 0x016B01C0).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActArray>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActArray.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActArray : public cAction<cActArray> {
public:
    cActArray();                                   // 00C93CC0

    // vftable (0x016B01C0), in slot order (slot = byte offset)
    // +0x00  00C8D950  inherited cAction<cActArray>::vf00
    virtual cActArray *vf04(unsigned char flags);  // +0x04  00C93D00  scalar deleting destructor
    virtual void vf08();                           // +0x08  00C80A10  forwards vf08 to every child
    virtual void vf0C();                           // +0x0C  00C80A40  forwards vf0C to every child
    virtual void vf10();                           // +0x10  00C80A70  forwards vf10 to every child
    // +0x14  00C8D990  inherited cAction<cActArray>::vf14
    // +0x18  00C80AA0  vf18: runs vf18(context) on every child. cAction<T>::vf18 is declared
    //                without the argument, so this is declared non-virtual here.
    int vf18(int context);
    // +0x1C  00C9D090  Trigger::Action::Array
    // +0x20  00C8D9A0  inherited cAction<cActArray>::vf20

    // fields (absolute byte offsets)
    int **children()      { return (int **)((char *)this + 0x08); }   // +0x08  child actions [15]
    int  &childCount()    { return *(int *)((char *)this + 0x44); }   // +0x44  (-1 after construction)
    int  *childResults()  { return (int *)((char *)this + 0x48); }    // +0x48  last vf18 result per child [15]
};

} // namespace Trigger
