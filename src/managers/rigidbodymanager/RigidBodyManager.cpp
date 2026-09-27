// src/managers/rigidbodymanager/RigidBodyManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "RigidBodyManager.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32 (RigidBodyManagerImplement+0x78 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned long DAT_01f8fc4c;  // TLS slot of the Havok hkMemoryRouter
extern float DAT_01b20754;          // convex radius passed to hkpBoxShape / hkpCylinderShape (0.05)
extern void *PTR_vftable_018e9b94;  // hkContainerHeapAllocator instance (object at 0x018E9B94; word 0 = vftable)
// Shift-JIS debug messages: "RigidBodyManager::createXxx: could not allocate the shape"
extern const char DAT_0164d124[];  // "RigidBodyManager::createPlane シェイプが確保出来ません"
extern const char DAT_0164d15c[];  // "RigidBodyManager::createBox シェイプが確保できません"
extern const char DAT_0164d194[];  // "RigidBodyManager::createSphere シェイプが確保できません"
extern const char DAT_0164d1cc[];  // "RigidBodyManager::createCaspule シェイプが確保できません"
extern const char DAT_0164d208[];  // "RigidBodyManager::createCylinder シェイプが確保できません"
extern const char DAT_0164d424[];  // "RigidBodyManager::createHexahedron シェイプが確保出来ません"

namespace RigidBodyManager_p1 {

// --- RigidBodyManagerImplement fields (class not owned by this file: raw accesses) -------------
inline void *handlePool(RigidBodyManager *self)       { return (char *)self + 0x10; }  // RigidBodyManagerImplement+0x10: handle pool
inline int *&listener(RigidBodyManager *self)         { return *(int **)((char *)self + 0x70); }  // RigidBodyManagerImplement+0x70: listener (vf08 = created)
inline void *criticalSection(RigidBodyManager *self)  { return (char *)self + 0x78; }  // RigidBodyManagerImplement+0x78: CRITICAL_SECTION
inline int &lockEnabled(RigidBodyManager *self)       { return *(int *)((char *)self + 0x90); }  // RigidBodyManagerImplement+0x90: use the lock

// --- hkpRigidBodyCinfo fields --------------------------------------------------------------------
inline void *&cinfoShape(void *cinfo)                  { return *(void **)((char *)cinfo + 0x4); }
inline unsigned int *cinfoInertiaTensor(void *cinfo)  { return (unsigned int *)((char *)cinfo + 0x50); }  // hkMatrix3 (12 words)
inline float &cinfoMass(void *cinfo)                   { return *(float *)((char *)cinfo + 0x90); }
inline unsigned char &cinfoMotionType(void *cinfo)     { return *(unsigned char *)((char *)cinfo + 0xb4); }

// hkpMotion::MotionType values stored into the cinfo
const unsigned char MOTION_DYNAMIC       = 1;
const unsigned char MOTION_SPHERE_INERTIA = 2;
const unsigned char MOTION_BOX_INERTIA   = 3;

// hkpMassProperties (words 2..3 are padding and are not initialised)
struct MassProperties {
    float volume;
    float mass;
    unsigned int pad[2];
    unsigned int centerOfMass[4];
    unsigned int inertiaTensor[12];
};
// hkpMassProperties constructor, inlined by the compiler.
inline void initMassProperties(MassProperties &props)
{
    props.volume = 0.0f;
    props.mass = 0.0f;
    for (int i = 0; i < 4; i++) {
        props.centerOfMass[i] = 0;
    }
    for (int i = 0; i < 12; i++) {
        props.inertiaTensor[i] = 0;
    }
}
inline void copyInertiaTensor(void *cinfo, const MassProperties &props)
{
    unsigned int *dest = cinfoInertiaTensor(cinfo);
    for (int i = 0; i < 12; i++) {
        dest[i] = props.inertiaTensor[i];
    }
}

// hkArray<T> header
struct HkArray {
    void *data;
    int size;
    int capacityAndFlags;  // bit 31: memory not owned
};
// hkGeometry (vertices, triangles)
struct HkGeometry {
    HkArray vertices;
    HkArray triangles;
};
// hkStridedVertices
struct StridedVertices {
    const float *vertices;
    int numVertices;
    int striding;
};

// --- Callees whose functions.h prototype does not match the machine code ------------------------
// FUN_00dd2ba0 (__thiscall on the pool): can `count` blocks of `size` bytes be allocated?
inline bool poolCanAllocate(void *pool, unsigned int size, unsigned int count)
{
    return ((bool (__thiscall *)(void *, unsigned int, unsigned int))FUN_00dd2ba0)(pool, size, count);
}
// FUN_00dd2bc0 (__thiscall on the pool): allocate one block.
inline unsigned int *poolAllocate(void *pool)
{
    return ((unsigned int *(__thiscall *)(void *))FUN_00dd2bc0)(pool);
}
// FUN_00dd4920: free.
inline void memoryFree(void *block)
{
    FUN_00dd4920((int)block);
}
// FUN_00dd5650: debug print (cdecl, one string).
inline void debugPrint(const char *message)
{
    ((void (__cdecl *)(const char *))FUN_00dd5650)(message);
}
// FUN_0091fd10 (__thiscall, RigidBodyManagerImplement): creates the hkpRigidBody from the cinfo
// and stores it in handle[0]; returns 0 on failure.
inline int createRigidBody(RigidBodyManager *self, unsigned int *handle, void *cinfo, const float *position,
                           const float *rotation, int option)
{
    return ((int (__thiscall *)(RigidBodyManager *, unsigned int *, void *, const float *, const float *, int))
                FUN_0091fd10)(self, handle, cinfo, position, rotation, option);
}
// FUN_010060a0 (__thiscall on the object): hkReferencedObject::removeReference.
inline void removeReference(void *object)
{
    FUN_010060a0((undefined4 *)object);
}
// listener->vf08(&handle): the rigid body was created.
inline void notifyListener(int *object, unsigned int **handle)
{
    ((void (__thiscall *)(int *, unsigned int **))((*(void ***)object)[0x8 / 4]))(object, handle);
}

// Havok block allocation through the thread's hkMemoryRouter (+0x2C: heap allocator, vf04 = alloc);
// the caller then stores the size into hkReferencedObject::m_memSizeAndFlags (+4).
inline void *havokAlloc(int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    int *allocator = *(int **)((char *)router + 0x2c);
    return ((void *(__thiscall *)(int *, int))((*(void ***)allocator)[0x4 / 4]))(allocator, size);
}

// Havok constructors (__thiscall on the freshly allocated block, return `this`).
// 0113C3D0: hkpConvexVerticesShape::BuildConfig::BuildConfig (returns `this`).
inline void *constructBuildConfig(void *config)
{
    return ((void *(__fastcall *)(void *))FUN_0113c3d0)(config);
}
// 0113C420: hkpConvexVerticesShape(const hkStridedVertices &, const BuildConfig &)
// (labelled hkpConvexVerticesConnectivity::hkpConvexVerticesConnectivity in the export).
inline void *constructConvexVerticesShape(void *memory, const StridedVertices *vertices, void *config)
{
    return ((void *(__thiscall *)(void *, const StridedVertices *, void *))0x0113C420)(memory, vertices, config);
}
// 01130D10: hkpConvexVerticesShape(const hkStridedVertices &, const hkArray<hkVector4> &planes, float radius)
inline void *constructConvexVerticesShapeWithPlanes(void *memory, const StridedVertices *vertices,
                                                    const HkArray *planeEquations, float convexRadius)
{
    return ((void *(__thiscall *)(void *, const StridedVertices *, const HkArray *, float))0x01130D10)(
        memory, vertices, planeEquations, convexRadius);
}
inline void *constructBoxShape(void *memory, const float *halfExtents, float convexRadius)
{
    return ((void *(__thiscall *)(void *, const float *, float))0x01138770)(memory, halfExtents, convexRadius);
}
inline void *constructSphereShape(void *memory, float radius)
{
    return ((void *(__thiscall *)(void *, float))0x0112DD30)(memory, radius);
}
inline void *constructCapsuleShape(void *memory, const float *vertexA, const float *vertexB, float radius)
{
    return ((void *(__thiscall *)(void *, const float *, const float *, float))0x0112F240)(
        memory, vertexA, vertexB, radius);
}
inline void *constructCylinderShape(void *memory, const float *vertexA, const float *vertexB, float radius,
                                    float convexRadius)
{
    return ((void *(__thiscall *)(void *, const float *, const float *, float, float))0x0112D300)(
        memory, vertexA, vertexB, radius, convexRadius);
}

// hkpInertiaTensorComputer helpers (cdecl).
// FUN_01062b30: capsule volume mass properties.
inline void computeCapsuleMassProperties(const float *vertexA, const float *vertexB, float radius, float mass,
                                         MassProperties *out)
{
    ((void (__cdecl *)(const float *, const float *, float, float, MassProperties *))FUN_01062b30)(
        vertexA, vertexB, radius, mass, out);
}
// FUN_01063410: cylinder volume mass properties.
inline void computeCylinderMassProperties(const float *vertexA, const float *vertexB, float radius, float mass,
                                          MassProperties *out)
{
    ((void (__cdecl *)(const float *, const float *, float, float, MassProperties *))FUN_01063410)(
        vertexA, vertexB, radius, mass, out);
}
// FUN_01272ab0: set the cinfo's mass properties from an arbitrary shape.
inline void setShapeMassProperties(void *shape, float mass, void *cinfo)
{
    ((void (__cdecl *)(void *, float, void *))FUN_01272ab0)(shape, mass, cinfo);
}
// FUN_01074110: hkGeometryUtility::createConvexGeometry(vertices, geometryOut, planeEquationsOut).
inline void createConvexGeometry(const StridedVertices *vertices, HkGeometry *geometry, HkArray *planeEquations)
{
    ((void (__cdecl *)(const StridedVertices *, HkGeometry *, HkArray *))FUN_01074110)(
        vertices, geometry, planeEquations);
}
// FUN_009211c0: hkGeometry destructor (frees both arrays).
inline void destroyGeometry(HkGeometry *geometry)
{
    FUN_009211c0((undefined4 *)geometry);
}
// hkContainerHeapAllocator::s_alloc.vf10(data, bytes) = blockFree.
inline void containerFree(void *data, int bytes)
{
    void **vtable = *(void ***)&PTR_vftable_018e9b94;
    ((void (__thiscall *)(void *, void *, int))vtable[0x10 / 4])(&PTR_vftable_018e9b94, data, bytes);
}

// hkLifoAllocator (the TLS router object itself): +8 slab size, +0xC current, +0x10 end,
// +0x14 first non-LIFO end.
inline float *lifoAllocateSlow(void *lifo, int bytes)
{
    return ((float *(__thiscall *)(void *, int))FUN_0100b780)(lifo, bytes);
}
inline void lifoFreeSlow(void *lifo, float *block, int bytes)
{
    ((void (__thiscall *)(void *, float *, int))FUN_0100b9b0)(lifo, block, bytes);
}

}  // namespace RigidBodyManager_p1

// 00910A00  RigidBodyManager::vf00  size=31  [class]
undefined4 *RigidBodyManager::vf00(byte flags)
{
    // vftable = RigidBodyManager::vftable (0x0164C964)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 009216C0  RigidBodyManager::createPlane  size=709  [class]
unsigned int *RigidBodyManager::createPlane_009216C0(unsigned int *result, void *cinfo, const float *position,
                                                     const float *rotation, const float *size, int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1) && (handle = poolAllocate(handlePool(this))) != 0) {
        handle[0] = 0;
        handle[1] = 0;
    }
    if (handle != 0) {
        float halfX = size[0] * 0.5f;
        float halfZ = size[2] * 0.5f;
        // four corners in the XZ plane, stride 0x10
        float corners[16];
        corners[0] = -halfX;  corners[1] = 0.0f;  corners[2] = -halfZ;  *(unsigned int *)&corners[3] = 0;
        corners[4] = halfX;   *(unsigned int *)&corners[5] = 0;  corners[6] = -halfZ;  *(unsigned int *)&corners[7] = 0;
        corners[8] = -halfX;  *(unsigned int *)&corners[9] = 0;  corners[10] = halfZ;  *(unsigned int *)&corners[11] = 0;
        corners[12] = halfX;  *(unsigned int *)&corners[13] = 0; corners[14] = halfZ;  *(unsigned int *)&corners[15] = 0;
        float halfExtents[4];
        halfExtents[0] = halfX;
        halfExtents[1] = 0.0f;
        halfExtents[2] = halfZ;
        *(unsigned int *)&halfExtents[3] = 0;

        void *memory = havokAlloc(0x70);
        *(unsigned short *)((char *)memory + 4) = 0x70;
        StridedVertices vertices;
        vertices.vertices = corners;
        vertices.numVertices = 4;
        vertices.striding = 0x10;
        unsigned char buildConfig[0x18];
        void *config = constructBuildConfig(buildConfig);
        void *shape = constructConvexVerticesShape(memory, &vertices, config);
        if (shape != 0) {
            cinfoShape(cinfo) = shape;
            if (0.0f < cinfoMass(cinfo)) {
                MassProperties massProperties;
                initMassProperties(massProperties);
                FUN_01060cb0(halfExtents, cinfoMass(cinfo), (float *)&massProperties);  // computeBoxVolumeMassProperties
                copyInertiaTensor(cinfo, massProperties);
                cinfoMotionType(cinfo) = MOTION_BOX_INERTIA;
            }
            if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
                removeReference(shape);
                if (handle != 0) {
                    memoryFree(handle);
                    handle = 0;
                }
                *result = 0;
            }
            else {
                removeReference(shape);
                if (listener(this) != 0) {
                    notifyListener(listener(this), &handle);
                }
                *result = *handle;
            }
            if (lockEnabled(this) == 0) {
                return result;
            }
            LeaveCriticalSection(lock);
            return result;
        }
        debugPrint(DAT_0164d124);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
    }
    int locked = lockEnabled(this);
    *result = 0;
    if (locked == 0) {
        return result;
    }
    LeaveCriticalSection(lock);
    return result;
}

// 00921990  RigidBodyManager::createBox  size=530  [class]
unsigned int *RigidBodyManager::createBox_00921990(unsigned int *result, void *cinfo, const float *position,
                                                   const float *rotation, const float *size, int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1) && (handle = poolAllocate(handlePool(this))) != 0) {
        handle[0] = 0;
        handle[1] = 0;
    }
    if (handle != 0) {
        float halfExtents[4];
        halfExtents[0] = size[0] * 0.5f;
        halfExtents[1] = size[1] * 0.5f;
        halfExtents[2] = size[2] * 0.5f;
        *(unsigned int *)&halfExtents[3] = 0;
        void *memory = havokAlloc(0x30);
        *(unsigned short *)((char *)memory + 4) = 0x30;
        void *shape = constructBoxShape(memory, halfExtents, DAT_01b20754);
        if (shape != 0) {
            cinfoShape(cinfo) = shape;
            if (0.0f < cinfoMass(cinfo)) {
                MassProperties massProperties;
                initMassProperties(massProperties);
                FUN_01060cb0(halfExtents, cinfoMass(cinfo), (float *)&massProperties);  // computeBoxVolumeMassProperties
                copyInertiaTensor(cinfo, massProperties);
                cinfoMotionType(cinfo) = MOTION_BOX_INERTIA;
            }
            if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
                removeReference(shape);
                if (handle != 0) {
                    memoryFree(handle);
                    handle = 0;
                }
                *result = 0;
            }
            else {
                removeReference(shape);
                if (listener(this) != 0) {
                    notifyListener(listener(this), &handle);
                }
                *result = *handle;
            }
            if (lockEnabled(this) == 0) {
                return result;
            }
            LeaveCriticalSection(lock);
            return result;
        }
        debugPrint(DAT_0164d15c);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
    }
    int locked = lockEnabled(this);
    *result = 0;
    if (locked == 0) {
        return result;
    }
    LeaveCriticalSection(lock);
    return result;
}

// 00921BB0  RigidBodyManager::createSphere  size=463  [class]
unsigned int *RigidBodyManager::createSphere_00921BB0(unsigned int *result, void *cinfo, const float *position,
                                                      const float *rotation, float radius, int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1) && (handle = poolAllocate(handlePool(this))) != 0) {
        handle[0] = 0;
        handle[1] = 0;
    }
    if (handle != 0) {
        void *memory = havokAlloc(0x20);
        *(unsigned short *)((char *)memory + 4) = 0x20;
        void *shape = constructSphereShape(memory, radius);
        if (shape != 0) {
            cinfoShape(cinfo) = shape;
            if (0.0f < cinfoMass(cinfo)) {
                MassProperties massProperties;
                initMassProperties(massProperties);
                FUN_01060ab0(radius, cinfoMass(cinfo), (float *)&massProperties);  // computeSphereVolumeMassProperties
                copyInertiaTensor(cinfo, massProperties);
                cinfoMotionType(cinfo) = MOTION_SPHERE_INERTIA;
            }
            if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
                removeReference(shape);
                if (handle != 0) {
                    memoryFree(handle);
                    handle = 0;
                }
                *result = 0;
            }
            else {
                removeReference(shape);
                if (listener(this) != 0) {
                    notifyListener(listener(this), &handle);
                }
                *result = *handle;
            }
            if (lockEnabled(this) == 0) {
                return result;
            }
            LeaveCriticalSection(lock);
            return result;
        }
        debugPrint(DAT_0164d194);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
    }
    int locked = lockEnabled(this);
    *result = 0;
    if (locked == 0) {
        return result;
    }
    LeaveCriticalSection(lock);
    return result;
}

// 00921D80  RigidBodyManager::createCaspule  size=576  [class]
unsigned int *RigidBodyManager::createCaspule_00921D80(unsigned int *result, void *cinfo, const float *position,
                                                       const float *rotation, const float *vertexA,
                                                       const float *vertexB, float radius, int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1) && (handle = poolAllocate(handlePool(this))) != 0) {
        handle[0] = 0;
        handle[1] = 0;
    }
    if (handle != 0) {
        unsigned int a[4];
        unsigned int b[4];
        a[0] = ((const unsigned int *)vertexA)[0];
        a[1] = ((const unsigned int *)vertexA)[1];
        a[2] = ((const unsigned int *)vertexA)[2];
        b[2] = ((const unsigned int *)vertexB)[2];
        b[1] = ((const unsigned int *)vertexB)[1];
        a[3] = 0;
        b[0] = ((const unsigned int *)vertexB)[0];
        b[3] = 0;
        void *memory = havokAlloc(0x40);
        *(unsigned short *)((char *)memory + 4) = 0x40;
        void *shape = constructCapsuleShape(memory, (const float *)a, (const float *)b, radius);
        if (shape != 0) {
            cinfoShape(cinfo) = shape;
            if (0.0f < cinfoMass(cinfo)) {
                MassProperties massProperties;
                initMassProperties(massProperties);
                computeCapsuleMassProperties((const float *)a, (const float *)b, radius, cinfoMass(cinfo),
                                             &massProperties);
                copyInertiaTensor(cinfo, massProperties);
                cinfoMotionType(cinfo) = MOTION_DYNAMIC;
            }
            if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
                removeReference(shape);
                if (handle != 0) {
                    memoryFree(handle);
                    handle = 0;
                }
                *result = 0;
            }
            else {
                removeReference(shape);
                if (listener(this) != 0) {
                    notifyListener(listener(this), &handle);
                }
                *result = *handle;
            }
            if (lockEnabled(this) == 0) {
                return result;
            }
            LeaveCriticalSection(lock);
            return result;
        }
        debugPrint(DAT_0164d1cc);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
    }
    int locked = lockEnabled(this);
    *result = 0;
    if (locked == 0) {
        return result;
    }
    LeaveCriticalSection(lock);
    return result;
}

// 00921FC0  RigidBodyManager::createCylinder  size=588  [class]
unsigned int *RigidBodyManager::createCylinder_00921FC0(unsigned int *result, void *cinfo, const float *position,
                                                        const float *rotation, const float *vertexA,
                                                        const float *vertexB, float radius, int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1) && (handle = poolAllocate(handlePool(this))) != 0) {
        handle[0] = 0;
        handle[1] = 0;
    }
    if (handle != 0) {
        unsigned int a[4];
        unsigned int b[4];
        a[0] = ((const unsigned int *)vertexA)[0];
        a[1] = ((const unsigned int *)vertexA)[1];
        a[2] = ((const unsigned int *)vertexA)[2];
        b[2] = ((const unsigned int *)vertexB)[2];
        b[1] = ((const unsigned int *)vertexB)[1];
        a[3] = 0;
        b[0] = ((const unsigned int *)vertexB)[0];
        b[3] = 0;
        void *memory = havokAlloc(0x60);
        *(unsigned short *)((char *)memory + 4) = 0x60;
        void *shape = constructCylinderShape(memory, (const float *)a, (const float *)b, radius, DAT_01b20754);
        if (shape != 0) {
            cinfoShape(cinfo) = shape;
            if (0.0f < cinfoMass(cinfo)) {
                MassProperties massProperties;
                initMassProperties(massProperties);
                computeCylinderMassProperties((const float *)a, (const float *)b, radius, cinfoMass(cinfo),
                                              &massProperties);
                copyInertiaTensor(cinfo, massProperties);
                cinfoMotionType(cinfo) = MOTION_DYNAMIC;
            }
            if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
                removeReference(shape);
                if (handle != 0) {
                    memoryFree(handle);
                    handle = 0;
                }
                *result = 0;
            }
            else {
                removeReference(shape);
                if (listener(this) != 0) {
                    notifyListener(listener(this), &handle);
                }
                *result = *handle;
            }
            if (lockEnabled(this) == 0) {
                return result;
            }
            LeaveCriticalSection(lock);
            return result;
        }
        debugPrint(DAT_0164d208);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
    }
    int locked = lockEnabled(this);
    *result = 0;
    if (locked == 0) {
        return result;
    }
    LeaveCriticalSection(lock);
    return result;
}

// 00927330  RigidBodyManager::createHexahedron  size=1044  [class]
// Rebuilt from the machine code: Ghidra lost the stack frame here (unaff_EBP / unaff_retaddr) and
// dropped the sixth stack argument (ret 0x18) and the `& 0x3fffffff` of the plane-array free.
unsigned int *RigidBodyManager::createHexahedron_00927330(unsigned int *result, void *cinfo, const float *corners,
                                                          const float *position, const float *rotation,
                                                          int option)
{
    using namespace RigidBodyManager_p1;

    void *lock = criticalSection(this);
    if (lockEnabled(this) != 0) {
        EnterCriticalSection(lock);
    }
    unsigned int *handle = 0;
    if (poolCanAllocate(handlePool(this), 8, 1)) {
        handle = poolAllocate(handlePool(this));
        if (handle == 0) {
            handle = 0;
        }
        else {
            handle[0] = 0;
            handle[1] = 0;
        }
    }
    if (handle == 0) {
        *result = 0;
        if (lockEnabled(this) != 0) {
            LeaveCriticalSection(lock);
        }
        return result;
    }

    // 8 corners relative to `position`, in a 0x80-byte block from the thread's LIFO allocator
    char *lifo = (char *)TlsGetValue(DAT_01f8fc4c);
    float *vertices = *(float **)(lifo + 0xc);
    if (*(int *)(lifo + 8) < 0x80 || *(float **)(lifo + 0x10) < vertices + 0x20) {
        vertices = lifoAllocateSlow(lifo, 0x80);
    }
    else {
        *(float **)(lifo + 0xc) = vertices + 0x20;
    }
    for (int i = 0; i < 8; i++) {
        vertices[i * 4 + 0] = corners[i * 4 + 0] - position[0];
        vertices[i * 4 + 1] = corners[i * 4 + 1] - position[1];
        vertices[i * 4 + 2] = corners[i * 4 + 2] - position[2];
    }

    StridedVertices strided;
    strided.numVertices = 8;
    strided.striding = 0x10;
    strided.vertices = vertices;
    HkArray planeEquations;
    planeEquations.data = 0;
    planeEquations.size = 0;
    planeEquations.capacityAndFlags = (int)0x80000000;
    HkGeometry geometry;
    geometry.vertices.capacityAndFlags = (int)0x80000000;
    geometry.triangles.capacityAndFlags = (int)0x80000000;
    geometry.vertices.data = 0;
    geometry.vertices.size = 0;
    geometry.triangles.data = 0;
    geometry.triangles.size = 0;
    createConvexGeometry(&strided, &geometry, &planeEquations);
    strided.numVertices = geometry.vertices.size;
    strided.striding = 0x10;
    strided.vertices = (const float *)geometry.vertices.data;

    void *memory = havokAlloc(0x70);
    *(unsigned short *)((char *)memory + 4) = 0x70;
    void *shape = constructConvexVerticesShapeWithPlanes(memory, &strided, &planeEquations, DAT_01b20754);
    if (shape == 0) {
        debugPrint(DAT_0164d424);
        if (handle != 0) {
            memoryFree(handle);
            handle = 0;
        }
        *result = 0;
        destroyGeometry(&geometry);
    }
    else {
        *(float *)((char *)shape + 0x10) = 0.05f;  // hkpConvexShape radius ?
        cinfoShape(cinfo) = shape;
        if (0.0f < cinfoMass(cinfo)) {
            setShapeMassProperties(shape, cinfoMass(cinfo), cinfo);
            cinfoMotionType(cinfo) = MOTION_BOX_INERTIA;
        }
        if (createRigidBody(this, handle, cinfo, position, rotation, option) == 0) {
            removeReference(shape);
            if (handle != 0) {
                memoryFree(handle);
                handle = 0;
            }
            *result = 0;
            destroyGeometry(&geometry);
        }
        else {
            removeReference(shape);
            if (listener(this) != 0) {
                notifyListener(listener(this), &handle);
            }
            *result = *handle;
            destroyGeometry(&geometry);
        }
    }
    // ~hkArray<hkVector4> planeEquations
    int capacityAndFlags = planeEquations.capacityAndFlags;
    planeEquations.size = 0;
    if (capacityAndFlags >= 0) {
        containerFree(planeEquations.data, (capacityAndFlags & 0x3fffffff) << 4);
    }
    planeEquations.data = 0;
    planeEquations.capacityAndFlags = (int)0x80000000;
    // release the LIFO block
    lifo = (char *)TlsGetValue(DAT_01f8fc4c);
    if (*(int *)(lifo + 8) >= 0x80 && vertices + 0x20 == *(float **)(lifo + 0xc) &&
        *(float **)(lifo + 0x14) != vertices) {
        *(float **)(lifo + 0xc) = vertices;
    }
    else {
        lifoFreeSlow(lifo, vertices, 0x80);
    }
    if (lockEnabled(this) != 0) {
        LeaveCriticalSection(lock);
    }
    return result;
}
