// REFINED
// Trigger::cActCamera -- trigger action "camera" (vftable 0x016AEA78).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActCamera>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActCamera.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActionAbstract;

class cActCamera : public cAction<cActCamera> {
public:
    // vftable (0x016AEA78), in slot order (slot = byte offset)
    virtual void *vf00();                          // +0x00  00C91630  address of this action type's static descriptor
    virtual cActCamera *vf04(unsigned char flags); // +0x04  00C91640  scalar deleting destructor
    virtual void vf08();                           // +0x08  00C89010  (empty)
    virtual void vf0C();                           // +0x0C  00C89020  (empty)
    virtual void vf10();                           // +0x10  00C89030  (empty)
    virtual void vf14();                           // +0x14  00C89040  (empty)
    // +0x18  00C7E8A0  inherited vf18
    // +0x1C  00C89050  inherited cAction<cActCamera>::vf1C
    // +0x20  00C89060  inherited cAction<cActCamera>::vf20

    // 00C99A70 (Ghidra: cActCamera::cActCamera) -- action factory: allocates the action object
    // selected by record[1] (the action type), then hands it the record via vf1C.
    static cActionAbstract *createAction(int *record);
};

} // namespace Trigger
