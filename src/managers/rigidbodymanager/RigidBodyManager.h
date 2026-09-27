// REFINED
// RigidBodyManager -- abstract interface of the rigid-body factory (the only implementation is
// RigidBodyManagerImplement). The create* virtuals build a Havok shape, fill the caller's
// hkpRigidBodyCinfo with it (and with the shape's inertia tensor when the cinfo has a mass), then
// create the rigid body through FUN_0091fd10 and return a 4-byte handle by hidden pointer.
//
// The six create* bodies live in RigidBodyManager.cpp under the non-virtual names below; they are
// the functions RigidBodyManagerImplement's vftable points at (slots 0x4..0x18). Their parameter
// lists are taken from the machine code (`ret N` counts and stack reads). The fields they use
// (+0x10 handle pool, +0x70 listener, +0x78 CRITICAL_SECTION, +0x90 "lock enabled") belong to
// RigidBodyManagerImplement and are accessed raw from RigidBodyManager.cpp.
//
// The virtual slot declarations keep their generated form so RigidBodyManagerImplement.h (owned by
// another file) still overrides them.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"

struct RigidBodyManager {
    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 00910A00 slot 0x0  (scalar deleting destructor)
    virtual undefined createBox() = 0;  // 00FDB68B slot 0x4  (impl: createBox_00921990)
    virtual undefined createSphere() = 0;  // 00FDB68B slot 0x8  (impl: createSphere_00921BB0)
    virtual undefined createCaspule() = 0;  // 00FDB68B slot 0xC  (impl: createCaspule_00921D80)
    virtual undefined createCylinder() = 0;  // 00FDB68B slot 0x10  (impl: createCylinder_00921FC0)
    virtual undefined createHexahedron() = 0;  // 00FDB68B slot 0x14  (impl: createHexahedron_00927330)
    virtual undefined createPlane() = 0;  // 00FDB68B slot 0x18  (impl: createPlane_009216C0)
    virtual undefined vf1C() = 0;  // 00FDB68B slot 0x1C
    virtual undefined vf20() = 0;  // 00FDB68B slot 0x20
    virtual undefined vf24() = 0;  // 00FDB68B slot 0x24
    virtual void vf28(int * param_2) = 0;  // 00FDB68B slot 0x28
    virtual void vf2C(undefined4 * param_2) = 0;  // 00FDB68B slot 0x2C
    virtual uint vf30(int param_2) = 0;  // 00FDB68B slot 0x30
    virtual void vf34() = 0;  // 00FDB68B slot 0x34

    // non-virtual members
    // Common parameters: `result` = hidden return slot (receives the handle, 0 on failure);
    // `cinfo` = hkpRigidBodyCinfo being filled; `position` / `rotation` / `option` are passed
    // unchanged to FUN_0091fd10 (position vector, rotation, and a flag ?).
    // Plane of `size[0]` x `size[2]` in the XZ plane (4-vertex convex vertices shape).  ret 0x18
    unsigned int *createPlane_009216C0(unsigned int *result, void *cinfo, const float *position,
                                       const float *rotation, const float *size, int option);  // 009216C0
    // Box; `size` is the full extent (halved for hkpBoxShape).  ret 0x18
    unsigned int *createBox_00921990(unsigned int *result, void *cinfo, const float *position,
                                     const float *rotation, const float *size, int option);  // 00921990
    // Sphere of `radius`.  ret 0x18
    unsigned int *createSphere_00921BB0(unsigned int *result, void *cinfo, const float *position,
                                        const float *rotation, float radius, int option);  // 00921BB0
    // Capsule over segment (vertexA, vertexB).  ret 0x20
    unsigned int *createCaspule_00921D80(unsigned int *result, void *cinfo, const float *position,
                                         const float *rotation, const float *vertexA, const float *vertexB,
                                         float radius, int option);  // 00921D80
    // Cylinder over segment (vertexA, vertexB).  ret 0x20
    unsigned int *createCylinder_00921FC0(unsigned int *result, void *cinfo, const float *position,
                                          const float *rotation, const float *vertexA, const float *vertexB,
                                          float radius, int option);  // 00921FC0
    // Convex hull of 8 corner points (vec4 stride), made relative to `position`.  ret 0x18
    unsigned int *createHexahedron_00927330(unsigned int *result, void *cinfo, const float *corners,
                                            const float *position, const float *rotation,
                                            int option);  // 00927330
};
