// REFINED
// PhantomManagerImplement -- 4-byte singleton (vftable only) that creates Havok phantoms
// (hkpAabbPhantom / hkpSimpleShapePhantom with a capsule, sphere, box, cylinder or caller-supplied
// shape) and removes them through an HkRemovePhantom command. Instance: DAT_01b35dd8, created by
// createInstance() (00900E70).
//
// Every virtual is __thiscall; `this` is never read. Parameter lists below are taken from the machine
// code (stack reads and the `ret N` byte counts), which differ from the Ghidra prototypes in
// PhantomManager.h: vf00..vf14 take arguments, and vf18 takes 4 (ret 0x10), not 3.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "PhantomManager.h"

struct PhantomManagerImplement : public PhantomManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    // vf00: capsule phantom from segment (vertexA, vertexB) + radius, placed at `position`.  ret 0x1c
    virtual void vf00(const float *position, const float *vertexA, const float *vertexB, float radius,
                      unsigned int layer, int group, int addToWorld);  // 00903F70 slot 0x0
    // vf04: sphere phantom.  ret 0x14
    virtual void vf04(const float *position, float radius, unsigned int layer, int group,
                      int addToWorld);  // 00904030 slot 0x4
    // vf08: box phantom; `size` is the full extent (halved for hkpBoxShape).  ret 0x18
    virtual void vf08(const float *position, const float *rotation, const float *size, unsigned int layer,
                      int group, int addToWorld);  // 00904170 slot 0x8
    // vf0C: cylinder phantom.  ret 0x1c
    virtual void vf0C(const float *position, const float *vertexA, const float *vertexB, float radius,
                      unsigned int layer, int group, int addToWorld);  // 009040A0 slot 0xC
    // vf10: shape phantom from a 4x4 world matrix (scale is removed first).  ret 0x14
    virtual void vf10(void *shape, const float *matrix, unsigned int layer, int group,
                      int addToWorld);  // 00903850 slot 0x10
    // vf14: thunk (jmp) to createShapePhantom.  ret 0x18
    virtual void vf14(void *shape, const float *position, const float *rotation, unsigned int layer,
                      int group, int addToWorld);  // 00904230 slot 0x14
    // vf18: thunk (jmp) to createAabbPhantom.  ret 0x10
    virtual int vf18(const void *aabb, unsigned int layer, int group, int addToWorld);  // 00903840 slot 0x18
    // vf1C: queue an HkRemovePhantom command for `phantom`.  ret 4
    virtual void vf1C(int phantom);  // 00900E30 slot 0x1C
    virtual undefined4 * vf20(byte flags);  // 00900440 slot 0x20  (scalar deleting destructor)

    // non-virtual members
    static bool createInstance();  // 00900E70 (was ~PhantomManagerImplement: allocates the singleton)
    int createAabbPhantom(const void *aabb, unsigned int layer, int group, int addToWorld);  // 009021F0 (was vf18_009021F0)
    void createShapePhantom(void *shape, const float *position, const float *rotation, unsigned int layer,
                            int group, int addToWorld);  // 00903B00 (was vf14_00903B00)
};
