// REFINED
// Trigger::cCondStartAnimation -- trigger condition met once a named animation has started
// (vftable 0x016B0D38).
// Refined from RTTI (bases: Trigger::cCondition) and the raw decompilation of
// src/managers/triggermanager/cCondStartAnimation.cpp.
#pragma once
#include "cCondition.h"

namespace Trigger {

class cCondStartAnimation : public cCondition {
public:
    cCondStartAnimation();                                 // 00C96080

    // vftable (0x016B0D38), in slot order (slot = byte offset)
    virtual cCondStartAnimation *vf00(unsigned char flags); // +0x00  00C9C880  scalar deleting destructor
    virtual void vf04();                                   // +0x04  00C84ED0  allocate
    virtual void vf08();                                   // +0x08  00C915B0  release the list
    virtual int vf0C();                                    // +0x0C  00C9C8D0  start
    virtual void vf10();                                   // +0x10  00C9C8F0  update
    virtual int vf14();                                    // +0x14  00C84EF0  "animation started"
    // +0x18  00C77C60  inherited (cCondPhaseJump::vf18)
    virtual void vf1C(int *record);                        // +0x1C  00C79C90  take the record
    // +0x20  00C77C80  inherited cCondition::vf20

    // fields (absolute byte offsets)
    char *&animName()    { return *(char **)((char *)this + 0x10); } // +0x10  record+0x08 (inline name)
    int &animParam()     { return *(int *)((char *)this + 0x14); }   // +0x14  record+0x18 (formatted into the lookup key)
    int &field18()       { return *(int *)((char *)this + 0x18); }   // +0x18  ? (0 at construction)
    int &listData()      { return *(int *)((char *)this + 0x1C); }   // +0x1C  list storage
    int &listCapacity()  { return *(int *)((char *)this + 0x20); }   // +0x20  ?
    int &listCount()     { return *(int *)((char *)this + 0x24); }   // +0x24  number of entries
    int &listOwned()     { return *(int *)((char *)this + 0x28); }   // +0x28  storage must be freed
    int &started()       { return *(int *)((char *)this + 0x2C); }   // +0x2C  latched result
};

} // namespace Trigger
