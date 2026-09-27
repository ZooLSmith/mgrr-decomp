// REFINED
// Trigger::cCondition -- abstract base of every trigger condition (vftable 0x016A8930).
// Refined from RTTI (no bases) and the raw decompilation of src/managers/triggermanager/cCondition.cpp.
//
// A condition is built from a trigger record by Trigger::cCondPhaseJump::createFromRecord
// (00C980D0): record[1] is the condition type, the type-specific parameters start at record+0x08.
// Slot roles as seen from the containers (cCondSequence / cCondAnd / ...):
//   vf04 allocate resources, vf08 release them, vf0C start (returns 0 on failure),
//   vf10 per-frame update, vf14 "is met" test, vf1C take the record, vf20 restart.
#pragma once

namespace Trigger {

class cCondition {
public:
    // Every derived constructor stores the base fields itself (record = 0, +0x08 = -1, +0x0C = -1);
    // no separate base constructor exists in the binary.
    cCondition() {}

    // vftable (0x016A8930), in slot order (slot = byte offset)
    virtual cCondition *vf00(unsigned char flags);  // +0x00  00C77CC0  scalar deleting destructor
    virtual void vf04();                            // +0x04  00C77C20  (empty; defined in cCondPhaseJump.cpp)
    virtual void vf08();                            // +0x08  00C77C30  (empty; defined in cCondPhaseJump.cpp)
    virtual int vf0C();                             // +0x0C  00C77C40  start: always 1 (cCondPhaseJump.cpp)
    virtual void vf10();                            // +0x10  00C77C50  update (empty; cCondPhaseJump.cpp)
    virtual int vf14() = 0;                         // +0x14  __purecall  "is the condition met"
    virtual int vf18();                             // +0x18  00C77C60  always 0 (cCondPhaseJump.cpp)
    virtual void vf1C(int *record);                 // +0x1C  00C77C70  stores the condition record
    virtual int vf20();                             // +0x20  00C77C80  restart: always 1

    // 00C960B0: body of Trigger::cCondStartAnimation's destructor (frees its animation list,
    // then restores the cCondition vftable). Filed under cCondition by the RTTI ctor/dtor merge.
    void dtor_cCondStartAnimation();
    // 00C961C0: same for Trigger::cCondEndAnimation.
    void dtor_cCondEndAnimation();

    // fields (absolute byte offsets)
    int *&record()      { return *(int **)((char *)this + 0x04); }  // +0x04  trigger record (record[1] = type)
    int &field08()      { return *(int *)((char *)this + 0x08); }   // +0x08  ? (-1 at construction; 2 = cCondSequence resets children every update)
    int &satisfied()    { return *(int *)((char *)this + 0x0C); }   // +0x0C  1/0 result stored by a parent sequence (-1 at construction)
};

} // namespace Trigger
