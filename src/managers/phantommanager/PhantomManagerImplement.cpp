// src/managers/phantommanager/PhantomManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "PhantomManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);
// d3dx9
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);
// CRT TLS index (DAT_01f8ef48) and the fs:[0x2C] read (TEB ThreadLocalStoragePointer)
extern "C" unsigned long _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned long DAT_01f8fc4c;  // TLS slot of the Havok hkMemoryRouter
extern int DAT_01885d20;            // hkpWorld * (ECX of hkpWorld::addPhantom)
extern int DAT_01885d68;            // lock mode: 1 = locking disabled
extern int DAT_01b35fac;            // non-zero once the global lock is usable
extern int DAT_01885db8;            // non-zero: do not leave the critical section
extern char DAT_01885d70[];         // global recursive lock object (ECX of FUN_00dd7320)
extern float DAT_01b20754;          // convex radius passed to hkpBoxShape / hkpCylinderShape
extern char DAT_01b7bd48[];         // default heap (second argument of FUN_00dd3500)
extern void *DAT_01b35dd8;          // the PhantomManager singleton

namespace PhantomManagerImplement_p1 {

// Havok block allocation through the thread's hkMemoryRouter (+0x2C: heap allocator, vf04 = alloc).
inline void *havokAlloc(int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    int *allocator = *(int **)((char *)router + 0x2c);
    return ((void *(__thiscall *)(int *, int))((*(void ***)allocator)[0x4 / 4]))(allocator, size);
}

// Havok constructors (__thiscall on the freshly allocated block, return `this`).
inline int constructAabbPhantom(void *memory, const void *aabb, unsigned int filterInfo)
{
    return ((int (__thiscall *)(void *, const void *, unsigned int))0x011ACA90)(memory, aabb, filterInfo);
}
inline int constructSimpleShapePhantom(void *memory, void *shape, const float *transform,
                                       unsigned int filterInfo)
{
    return ((int (__thiscall *)(void *, void *, const float *, unsigned int))0x011A1B80)(
        memory, shape, transform, filterInfo);
}
inline void *constructCapsuleShape(void *memory, const float *vertexA, const float *vertexB, float radius)
{
    return ((void *(__thiscall *)(void *, const float *, const float *, float))0x0112F240)(
        memory, vertexA, vertexB, radius);
}
inline void *constructSphereShape(void *memory, float radius)
{
    return ((void *(__thiscall *)(void *, float))0x0112DD30)(memory, radius);
}
inline void *constructCylinderShape(void *memory, const float *vertexA, const float *vertexB, float radius,
                                    float convexRadius)
{
    return ((void *(__thiscall *)(void *, const float *, const float *, float, float))0x0112D300)(
        memory, vertexA, vertexB, radius, convexRadius);
}
inline void *constructBoxShape(void *memory, const float *halfExtents, float convexRadius)
{
    return ((void *(__thiscall *)(void *, const float *, float))0x01138770)(memory, halfExtents, convexRadius);
}

// FUN_01194450 = hkpWorld::addPhantom (__thiscall; functions.h lists `this` as param_1).
inline void worldAddPhantom(int world, int phantom)
{
    ((int *(__thiscall *)(int, int *))FUN_01194450)(world, (int *)phantom);
}

// FUN_004066f0: scoped-lock constructor (__fastcall, ECX = the lock object, which it does not touch);
// enters the global recursive lock and bumps the per-thread nesting count.
inline void lockAcquire(void *lockObject)
{
    FUN_004066f0((undefined4)lockObject);
}
// FUN_00406760: the matching release (decrements the count, leaves the lock at zero).
inline void lockRelease()
{
    FUN_00406760();
}
// The compiler's inlined copy of FUN_00406760.
inline void lockReleaseInlined()
{
    if (DAT_01885d68 != 1) {
        int *nesting = (int *)(*(int *)(__readfsdword(0x2c) + _tls_index * 4) + 4);
        *nesting = *nesting + -1;
        if (*nesting == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

// Phantom+0xC points at a block of optional properties: word 0 and word 1 are "value is set"
// bit masks, the values follow. These set a property to its default unless it is already set.
inline unsigned int *phantomProperties(int phantom)
{
    return *(unsigned int **)(phantom + 0xc);
}
inline void setDefault0(int phantom, unsigned int bit, int index, unsigned int value)
{
    unsigned int *props = phantomProperties(phantom);
    if (props != 0 && (props[0] & bit) == 0) {
        props[0] = props[0] | bit;
        props[index] = value;
    }
}
inline void setDefault1(int phantom, unsigned int bit, int index, unsigned int value)
{
    unsigned int *props = phantomProperties(phantom);
    if (props != 0 && (props[1] & bit) == 0) {
        props[1] = props[1] | bit;
        props[index] = value;
    }
}

// Identical block in createAabbPhantom and FUN_00902cf0: fills the phantom's default properties,
// each under the global lock. `lockObject` is the stack slot used as the scoped-lock object.
inline void initPhantomProperties(int phantom, void *lockObject)
{
    lockAcquire(lockObject); setDefault0(phantom, 0x1, 0x2, 0);             lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x2, 0x3, 0);             lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x4, 0x4, 0);             lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x8, 0x5, 0);             lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x10, 0x6, 0);            lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x20, 0x7, 0);            lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x40, 0x8, 0);            lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x200, 0xb, 0);           lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x400, 0xc, 0);           lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x8000, 0x11, 0xffffffff); lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x800, 0xd, 0);           lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x1000, 0xe, 0);          lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x2000, 0xf, 0);          lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x4000, 0x10, 0xffffffff); lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x20000, 0x13, 0);        lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x40000, 0x14, 0);        lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x80000, 0x15, 0);        lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x100000, 0x16, 0);       lockReleaseInlined();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x800000, 0x19, 0);       lockReleaseInlined();
    lockAcquire(lockObject); setDefault0(phantom, 0x200000, 0x17, 0);       lockRelease();
    lockAcquire(lockObject); setDefault0(phantom, 0x400000, 0x18, 0);       lockRelease();
    lockAcquire(lockObject); setDefault0(phantom, 0x1000000, 0x1a, 0);      lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x2000000, 0x1b, 0);      lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x4000000, 0x1c, 0);      lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x8000000, 0x1d, 0);      lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x10000000, 0x1e, 0);     lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x20000000, 0x1f, 0);     lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault0(phantom, 0x40000000, 0x20, 0);     lockRelease();
    lockAcquire(lockObject); setDefault1(phantom, 0x1, 0x22, 0);            lockRelease();  // +0x88
    lockAcquire(lockObject); setDefault1(phantom, 0x2, 0x23, 0);            lockRelease();  // +0x8C 0.0f
    lockAcquire(lockObject); setDefault1(phantom, 0x4, 0x24, 0);            lockRelease();  // +0x90 0.0f
    lockAcquire(lockObject); setDefault1(phantom, 0x8, 0x25, 0);            lockRelease();  // +0x94 0.0f
    lockAcquire(lockObject); setDefault1(phantom, 0x40, 0x28, 0);           lockRelease();  // +0xA0
    lockAcquire(lockObject); setDefault1(phantom, 0x80, 0x29, 0);           lockRelease();  // +0xA4
    lockAcquire(lockObject); setDefault1(phantom, 0x10, 0x26, 0);           lockRelease();  // +0x98
    lockAcquire(lockObject); setDefault0(phantom, 0x80000000, 0x21, 0);     lockRelease();  // 0.0f
    lockAcquire(lockObject); setDefault1(phantom, 0x20, 0x27, 0);           lockRelease();  // +0x9C
    lockAcquire(lockObject); setDefault1(phantom, 0x100, 0x2a, 0);          lockRelease();  // +0xA8
    lockAcquire(lockObject);
    {
        unsigned int *props = phantomProperties(phantom);  // not null-checked here
        props[0] = props[0] | 0x20;
        props[7] = 1;
    }
    lockRelease();
}

// Under the lock: mark property 0x1 as set and OR `flags` into its value (props[2]).
inline void orPhantomFlags(int phantom, void *lockObject, unsigned int flags)
{
    lockAcquire(lockObject);
    if (phantom != 0) {
        unsigned int *props = phantomProperties(phantom);
        if (props != 0) {
            props[0] = props[0] | 1;
            props[2] = props[2] | flags;
        }
    }
    lockRelease();
}

// Stack object passed to the command queue by vf1C.
struct RemovePhantomCommand {
    void *vftable;  // HkRemovePhantom::vftable (0x0164BFB8)
    int world;      // phantom+0x8 (hkpWorldObject::m_world, set by hkpWorld::addPhantom)
    int phantom;
};

} // namespace PhantomManagerImplement_p1

// 00900440  PhantomManagerImplement::vf20  size=31  [class]
undefined4 *PhantomManagerImplement::vf20(byte flags)
{
    // vftable = PhantomManager::vftable (0x0164BF14)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00900E30  PhantomManagerImplement::vf1C  size=49  [class]
void PhantomManagerImplement::vf1C(int phantom)
{
    using namespace PhantomManagerImplement_p1;
    int *queue = (int *)FUN_0092c170();
    RemovePhantomCommand command;
    command.phantom = phantom;
    command.world = *(int *)(phantom + 8);
    command.vftable = (void *)0x0164BFB8;  // HkRemovePhantom::vftable
    ((void (__thiscall *)(int *, RemovePhantomCommand *))((*(void ***)queue)[0x18 / 4]))(queue, &command);
}

// 00900E70  PhantomManagerImplement::~PhantomManagerImplement  size=57  [class]
bool PhantomManagerImplement::createInstance()
{
    void *instance = ((void *(*)(unsigned int, void *))FUN_00dd3500)(4, DAT_01b7bd48);
    if (instance != 0) {
        *(void **)instance = (void *)0x0164BF3C;  // vftable = PhantomManagerImplement::vftable
        DAT_01b35dd8 = instance;
        return instance != 0;
    }
    DAT_01b35dd8 = 0;
    return false;
}

// 009021F0  PhantomManagerImplement::vf18  size=2816  [class]
// (Ghidra passed unaff_retaddr as the aabb and shifted every later stack parameter by one; the
// machine code reads aabb/layer/group/addToWorld from [esp+4..0x10] and returns with ret 0x10.
// The scoped-lock objects live in the dead `layer` parameter slot.)
int PhantomManagerImplement::createAabbPhantom(const void *aabb, unsigned int layer, int group, int addToWorld)
{
    using namespace PhantomManagerImplement_p1;
    void *memory = havokAlloc(0xd0);
    *(unsigned short *)((char *)memory + 4) = 0xd0;  // hkReferencedObject::m_memSizeAndFlags
    int phantom = constructAabbPhantom(memory, aabb, layer & 0x1f | group << 0x10);
    lockAcquire(&layer);
    if (addToWorld != 0) {
        worldAddPhantom(DAT_01885d20, phantom);
        FUN_010060a0((undefined4 *)phantom);  // removeReference
    }
    FUN_008f8ac0(phantom);
    if (phantom != 0) {
        initPhantomProperties(phantom, &layer);
    }
    orPhantomFlags(phantom, &layer, 0x10);
    orPhantomFlags(phantom, &layer, 0x2000);
    lockRelease();
    return phantom;
}

// 00902CF0  FUN_00902cf0  size=2881  [between]
// Machine code: __thiscall (ECX = PhantomManagerImplement, unused), 6 stack arguments (ret 0x18);
// Ghidra passed unaff_retaddr as the shape and shifted the other parameters by one.
int FUN_00902cf0(void *shape, const float *transform, unsigned int layer, int group, int addToWorld,
                 int extraFlag)
{
    using namespace PhantomManagerImplement_p1;
    void *memory = havokAlloc(0x160);
    *(unsigned short *)((char *)memory + 4) = 0x160;  // hkReferencedObject::m_memSizeAndFlags
    int phantom = constructSimpleShapePhantom(memory, shape, transform, layer & 0x1f | group << 0x10);
    FUN_010060a0((undefined4 *)shape);  // shape->removeReference()
    lockAcquire(&layer);
    if (addToWorld != 0) {
        worldAddPhantom(DAT_01885d20, phantom);
        FUN_010060a0((undefined4 *)phantom);  // removeReference
    }
    FUN_008f8ac0(phantom);
    if (phantom != 0) {
        initPhantomProperties(phantom, &layer);
    }
    orPhantomFlags(phantom, &layer, 0x10);
    orPhantomFlags(phantom, &layer, 0x2000);
    if (extraFlag != 0) {
        orPhantomFlags(phantom, &layer, 0x1000);
    }
    lockRelease();
    return phantom;
}

// 00903840  PhantomManagerImplement::thunk_vf18  size=5  [class]
int PhantomManagerImplement::vf18(const void *aabb, unsigned int layer, int group, int addToWorld)
{
    return createAabbPhantom(aabb, layer, group, addToWorld);  // jmp 009021F0
}

// 00903850  PhantomManagerImplement::vf10  size=674  [class]
void PhantomManagerImplement::vf10(void *shape, const float *matrix, unsigned int layer, int group,
                                   int addToWorld)
{
    const float *source = matrix;
    int hasScale;
    float unscaled[16];
    float rotation[16];
    float transform[16];  // hkTransform

    if ((matrix[10] * matrix[10] + matrix[9] * matrix[9] + matrix[8] * matrix[8]) *
            (matrix[1] * matrix[1] + matrix[0] * matrix[0] + matrix[2] * matrix[2]) *
            (matrix[5] * matrix[5] + matrix[4] * matrix[4] + matrix[6] * matrix[6]) == 1.0) {
        hasScale = 0;
    }
    else {
        float translationX = matrix[12];
        hasScale = 1;
        float translationY = matrix[13];
        float translationZ = matrix[14];
        float length0 = (float)sqrt(matrix[1] * matrix[1] + matrix[0] * matrix[0] + matrix[2] * matrix[2]);
        float length1 = (float)sqrt(matrix[4] * matrix[4] + matrix[5] * matrix[5] + matrix[6] * matrix[6]);
        // length2 stays in an x87 register (never rounded to float); the quotients are stored as float.
        double length2 = sqrt(matrix[10] * matrix[10] + matrix[9] * matrix[9] + matrix[8] * matrix[8]);
        float m6 = matrix[6];
        float zAxisZ = (float)(matrix[10] / length2);
        float angleY = (float)FUN_00ddbaa0((float)-(matrix[2] / length2));  // clamped asin
        float angleX = (float)atan2((double)(float)(m6 / length2), (double)zAxisZ);
        double angleZ = atan2((double)matrix[1] / (double)length1, (double)matrix[0] / (double)length0);
        unscaled[0] = 1.0f;  unscaled[1] = 0.0f;  unscaled[2] = 0.0f;  unscaled[3] = 0.0f;
        unscaled[4] = 0.0f;  unscaled[5] = 1.0f;  unscaled[6] = 0.0f;  unscaled[7] = 0.0f;
        unscaled[8] = 0.0f;  unscaled[9] = 0.0f;  unscaled[10] = 1.0f; unscaled[11] = 0.0f;
        unscaled[12] = 0.0f; unscaled[13] = 0.0f; unscaled[14] = 0.0f; unscaled[15] = 1.0f;
        if (0.0 != angleZ) {
            D3DXMatrixRotationZ(rotation, (float)angleZ);
            D3DXMatrixMultiply(unscaled, rotation, unscaled);
        }
        if (0.0f != angleY) {
            D3DXMatrixRotationY(rotation, angleY);
            D3DXMatrixMultiply(unscaled, rotation, unscaled);
        }
        if (angleX != 0.0f) {
            D3DXMatrixRotationX(rotation, angleX);
            D3DXMatrixMultiply(unscaled, rotation, unscaled);
        }
        unscaled[12] = translationX;
        source = unscaled;
        unscaled[13] = translationY;
        unscaled[14] = translationZ;
    }
    // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall, ECX = transform)
    ((void (__thiscall *)(float *, const float *))FUN_01005190)(transform, source);
    FUN_00902cf0(shape, transform, layer, group, addToWorld, hasScale);
}

// 00903B00  PhantomManagerImplement::vf14  size=238  [class]
void PhantomManagerImplement::createShapePhantom(void *shape, const float *position, const float *rotation,
                                                 unsigned int layer, int group, int addToWorld)
{
    float px = position[0];
    float py = position[1];
    float pz = position[2];
    float pw = position[3];
    float eulerQuat[4];
    // FUN_00ddb590: quaternion from Euler angles (cdecl, 2 arguments)
    ((void (*)(float *, const float *))FUN_00ddb590)(eulerQuat, rotation);
    float quaternion[4];
    quaternion[0] = eulerQuat[0];
    quaternion[1] = eulerQuat[1];
    quaternion[2] = eulerQuat[2];
    quaternion[3] = eulerQuat[3];
    float transform[16];  // hkTransform: identity rotation, translation = position
    transform[0] = 1.0f;  transform[1] = 0.0f;  transform[2] = 0.0f;  transform[3] = 0.0f;
    transform[4] = 0.0f;  transform[5] = 1.0f;  transform[6] = 0.0f;  transform[7] = 0.0f;
    transform[8] = 0.0f;  transform[9] = 0.0f;  transform[10] = 1.0f; transform[11] = 0.0f;
    transform[12] = px;   transform[13] = py;   transform[14] = pz;   transform[15] = pw;
    // FUN_0100ac20: hkRotation::set(quaternion) (__thiscall, ECX = transform)
    ((void (__thiscall *)(float *, float *))FUN_0100ac20)(transform, quaternion);
    FUN_00902cf0(shape, transform, layer, group, addToWorld, 1);
}

// 00903F70  PhantomManagerImplement::vf00  size=191  [class]
void PhantomManagerImplement::vf00(const float *position, const float *vertexA, const float *vertexB,
                                   float radius, unsigned int layer, int group, int addToWorld)
{
    using namespace PhantomManagerImplement_p1;
    float a[4];
    a[0] = vertexA[0];
    a[1] = vertexA[1];
    a[2] = vertexA[2];
    a[3] = vertexA[3];
    float b[4];
    b[2] = vertexB[2];
    b[3] = vertexB[3];
    b[1] = vertexB[1];
    b[0] = vertexB[0];
    void *memory = havokAlloc(0x40);
    *(unsigned short *)((char *)memory + 4) = 0x40;
    void *capsule = constructCapsuleShape(memory, a, b, radius);
    float noRotation[3];
    noRotation[0] = 0.0f;
    noRotation[1] = 0.0f;
    noRotation[2] = 0.0f;
    createShapePhantom(capsule, position, noRotation, layer, group, addToWorld);
}

// 00904030  PhantomManagerImplement::vf04  size=109  [class]
void PhantomManagerImplement::vf04(const float *position, float radius, unsigned int layer, int group,
                                   int addToWorld)
{
    using namespace PhantomManagerImplement_p1;
    void *memory = havokAlloc(0x20);
    *(unsigned short *)((char *)memory + 4) = 0x20;
    void *sphere = constructSphereShape(memory, radius);
    float noRotation[3];
    noRotation[0] = 0.0f;
    noRotation[1] = 0.0f;
    noRotation[2] = 0.0f;
    createShapePhantom(sphere, position, noRotation, layer, group, addToWorld);
}

// 009040A0  PhantomManagerImplement::vf0C  size=203  [class]
void PhantomManagerImplement::vf0C(const float *position, const float *vertexA, const float *vertexB,
                                   float radius, unsigned int layer, int group, int addToWorld)
{
    using namespace PhantomManagerImplement_p1;
    float a[4];
    a[0] = vertexA[0];
    a[1] = vertexA[1];
    a[2] = vertexA[2];
    a[3] = vertexA[3];
    float b[4];
    b[2] = vertexB[2];
    b[3] = vertexB[3];
    b[1] = vertexB[1];
    b[0] = vertexB[0];
    void *memory = havokAlloc(0x60);
    *(unsigned short *)((char *)memory + 4) = 0x60;
    void *cylinder = constructCylinderShape(memory, a, b, radius, DAT_01b20754);
    float noRotation[3];
    noRotation[0] = 0.0f;
    noRotation[1] = 0.0f;
    noRotation[2] = 0.0f;
    createShapePhantom(cylinder, position, noRotation, layer, group, addToWorld);
}

// 00904170  PhantomManagerImplement::vf08  size=184  [class]
void PhantomManagerImplement::vf08(const float *position, const float *rotation, const float *size,
                                   unsigned int layer, int group, int addToWorld)
{
    using namespace PhantomManagerImplement_p1;
    float halfExtents[4];
    halfExtents[0] = size[0] * 0.5f;
    halfExtents[1] = size[1] * 0.5f;
    halfExtents[2] = size[2] * 0.5f;
    halfExtents[3] = size[3] * 0.5f;
    void *memory = havokAlloc(0x30);
    *(unsigned short *)((char *)memory + 4) = 0x30;
    void *box = constructBoxShape(memory, halfExtents, DAT_01b20754);
    createShapePhantom(box, position, rotation, layer, group, addToWorld);
}

// 00904230  PhantomManagerImplement::thunk_vf14  size=5  [class]
void PhantomManagerImplement::vf14(void *shape, const float *position, const float *rotation,
                                   unsigned int layer, int group, int addToWorld)
{
    createShapePhantom(shape, position, rotation, layer, group, addToWorld);  // jmp 00903B00
}
