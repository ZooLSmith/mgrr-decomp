// REFINED
// Trigger::cActObjMeshTrans -- trigger action (vftable 0x016AFD80).
// Refined from RTTI (bases: Trigger::cAction<Trigger::cActObjMeshTrans>, Trigger::cActionAbstract)
// and the raw decompilation of src/managers/triggermanager/cActObjMeshTrans.cpp.
#pragma once
#include "cAction.h"

namespace Trigger {

class cActObjMeshTrans : public cAction<cActObjMeshTrans> {
public:
    // vftable (0x016AFD80), in slot order (slot = byte offset)
    virtual void *vf00();                        // +0x00  00C93630  address of this action type's static descriptor
    virtual cActObjMeshTrans *vf04(unsigned char flags); // +0x04  00C93640  scalar deleting destructor
    virtual void vf08();                         // +0x08  00C8C9C0  (empty)
    virtual void vf0C();                         // +0x0C  00C8C9D0  (empty)
    virtual void vf10();                         // +0x10  00C8C9E0  (empty)
    virtual void vf14();                         // +0x14  00C8C9F0  (empty)
    // +0x18  00C87EA0  inherited cAction<cActObjMeshTrans>::vf18
    // +0x1C  00C8CA00  inherited cAction<cActObjMeshTrans>::vf1C
    // +0x20  00C8CA10  inherited cAction<cActObjMeshTrans>::vf20
};

} // namespace Trigger
