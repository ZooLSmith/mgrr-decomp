// src/managers/raycastmanager/RayCastManager.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "RayCastManager.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);
// d3dx9
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);
// CRT TLS index and the fs:[0x2C] read (TEB ThreadLocalStoragePointer)
extern "C" unsigned long _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_0164c08c[];  // debug message: handle does not match its work
extern unsigned char DAT_0164c330[];  // debug message: work array full (argument: handle)
extern unsigned char DAT_0164c364[];  // debug message: no work to register (argument: name)
extern unsigned char DAT_0164c454[];  // debug message: stale handle (argument: name)
extern unsigned long DAT_01f8fc4c;    // TLS slot of the Havok hkMemoryRouter
extern float DAT_01b20754;            // convex radius passed to hkpBoxShape / hkpCylinderShape
extern int DAT_01885d68;              // lock mode: 1 = locking disabled
extern int DAT_01b35fac;              // non-zero once the global lock is usable
extern int DAT_01885db8;              // non-zero: do not leave the critical section

namespace RayCastManager_p1 {

// Callees whose functions.h prototype does not match the argument list seen at the call site
// are called through a cast so that exactly the raw arguments are passed. "ECX: ?" marks calls
// of __thiscall / __fastcall functions whose register argument the decompiler did not show.

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class S, class... A> inline R thiscall(F fn, S self, A... args)
{
    typedef R (__thiscall *Fn)(S, A...);
    return ((Fn)fn)(self, args...);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Havok block allocation through the thread's hkMemoryRouter (+0x2C: heap allocator, vf04 =
// alloc); the block size is then stored at +4 (hkReferencedObject::m_memSizeAndFlags).
inline int havokNewBlock(int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    int *allocator = *(int **)((char *)router + 0x2c);
    int block = vcall<int>(allocator, 0x4, size);
    *(unsigned short *)(block + 4) = (unsigned short)size;
    return block;
}

// Havok shape constructors (__thiscall; ECX = the block just allocated, which the raw
// decompilation does not show). They return the object, which the callers test for 0.
inline int constructSphereShape(int block, float radius)  // 0112DD30
{
    return thiscall<int>(0x0112DD30u, block, radius);
}
inline int constructCapsuleShape(int block, float *vertexA, float *vertexB, float radius)  // 0112F240
{
    return thiscall<int>(0x0112F240u, block, vertexA, vertexB, radius);
}
inline int constructCylinderShape(int block, float *vertexA, float *vertexB, float radius,
                                  float convexRadius)  // 0112D300
{
    return thiscall<int>(0x0112D300u, block, vertexA, vertexB, radius, convexRadius);
}
inline int constructBoxShape(int block, float *halfExtents, float convexRadius)  // 01138770
{
    return thiscall<int>(0x01138770u, block, halfExtents, convexRadius);
}

// SSE rsqrtss: the raw code uses rsqrtps on four copies of the value and reads lane 0.
inline float rsqrtApprox(float value)
{
    float result;
    __asm {
        movss   xmm0, value
        rsqrtss xmm0, xmm0
        movss   result, xmm0
    }
    return result;
}

}  // namespace RayCastManager_p1

// 00905E50  RayCastManager::getWork  size=81  [class]
void RayCastManager::getWork(int *handle)
{
    using namespace RayCastManager_p1;
    int work;

    if (enabled() == 0) {
        *handle = 0;
        return;
    }
    work = *handle;
    if (work != 0) {
        if (handle != *(int **)(work + 0x10) /* RayCastWork+0x10: handle */) {
            cdeclcall<void>(FUN_00dd5650, DAT_0164c08c);
            *handle = 0;
            return;
        }
        if (work != 0) {
            *(unsigned short *)(work + 0x1a) = 1;  // RayCastWork+0x1A: release request
        }
    }
    *handle = 0;
}

// 00905EE0  RayCastManager::getWork_2  size=45  [class]
void RayCastManager::getWork_2(int *handle, unsigned char value)
{
    using namespace RayCastManager_p1;
    int work;

    work = *handle;
    if (work != 0) {
        if (handle != *(int **)(work + 0x10) /* RayCastWork+0x10: handle */) {
            cdeclcall<void>(FUN_00dd5650, DAT_0164c08c);
            return;
        }
        if (work != 0) {
            *(unsigned char *)(work + 0x1d) = value;  // RayCastWork+0x1D: ?
        }
    }
}

// 00907DC0  RayCastManager::set  size=163  [class]
int RayCastManager::set(int *work, int *handle, const char *name)
{
    using namespace RayCastManager_p1;
    int *slot;
    int count;

    if (work == 0) {
        cdeclcall<void>(FUN_00dd5650, DAT_0164c364, name);
        return 0;
    }
    cdeclcall<void>(FUN_00dd72e0); /* ECX: ? */
    count = works().count;
    if (works().capacity <= count) {
        vcall<undefined4>(work, 0x4, 1);  // RayCastWork::vf04(1): scalar deleting destructor
        cdeclcall<void>(FUN_00dd5650, DAT_0164c330, handle);
        cdeclcall<void>(FUN_00dd7320); /* ECX: ? */
        return 0;
    }
    if (count < works().capacity) {
        slot = works().data + count;
        if (slot != 0) {
            *slot = (int)work;
        }
        works().count = works().count + 1;
    }
    cdeclcall<void>(FUN_00dd7320); /* ECX: ? */
    if (*handle == 0) {
        *handle = (int)work;
    }
    work[4] = (int)handle;  // RayCastWork+0x10: handle
    return 1;
}

// 0090BAE0  RayCastManager::~RayCastManager  size=156  [class]
RayCastManager::~RayCastManager()
{
    using namespace RayCastManager_p1;
    WorkArray *array;
    int index;
    int heapResult;

    // vftable = RayCastManager::vftable (0x0164c450)
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? */
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? */
    index = 4;
    array = &arrays()[4];
    do {
        if (array->data != 0) {
            array->count = 0;
            if (array->ownsMemory != 0) {
                FUN_00dd48d0((int)array->data, 0);
                array->ownsMemory = 0;
            }
            array->data = 0;
            array->capacity = 0;
        }
        index = index + -1;
        array = array - 1;
    } while (-1 < index);
    if (works().data != 0) {
        works().count = 0;
        if (works().ownsMemory != 0) {
            FUN_00dd48d0((int)works().data, 0);
            works().ownsMemory = 0;
        }
        works().data = 0;
        works().capacity = 0;
    }
    heapResult = cdeclcall<int>(*(void **)(heapVftable() + 0xc)); /* heap vf0C, ECX: ? */
    if (heapResult != 0) {
        cdeclcall<void>(FUN_009078e0); /* ECX: ? */
    }
    cdeclcall<void>(0x00DD4530u); /* Hw::cHeap::cHeap_5 (heap destructor), ECX: ? */
}

// 0090BB80  RayCastManager::vf00  size=30  [class]
undefined4 RayCastManager::vf00(byte flags)
{
    this->~RayCastManager();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4)this;
}

// 0090BBA0  FUN_0090bba0  size=1102  [between]
// ? Box query for a RayCastWork: half extents = size / 2, pose from `position` and the Euler
// angles `rotation`; the shape and its hkTransform go to FUN_009083c0 (RayCastWork
// "setClosestPoints"; __thiscall, ECX = this function's own ECX, lost by the decompiler, and all 8 values on the stack). The last four arguments are forwarded.
//
// Ghidra lost track of this 16-byte-aligned frame: the same slot is reached through two bases
// 8 bytes apart (matrices are written at one name and read at another) and two register values
// are read uninitialized. Frame reproduces Ghidra's stack slots one to one (sNNN = the local at
// -0xNNN) and every access below uses exactly the slot Ghidra printed.
void FUN_0090bba0(int work, float *position, float *rotation, float *size, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s174, s170, s16c, s168, s164, s160, s15c, s158;
        float s154, s150, s14c, s148, s144, s140, s13c, s138;
        float s134, s130, s12c, s128, s124, s120, s11c, s118;
        float s114, s110, s10c, s108, s104, s100, sfc, sf8;
        float sf4, sf0, sec, se8, se4, se0, sdc, sd8;
        float sd4, sd0, scc, sc8, sc4, sc0, sbc, sb8;
        float sb4, sb0, sac, sa8, sa4, sa0;
        float s9c[15];  // auStack_9c: rotation matrix scratch
        float s60[23];  // auStack_60: hkTransform passed to the setter
    } f;
    float posX;       // fVar1
    float posY;       // fVar2
    float lengthZ;    // fVar3
    float unaffEBX;   // ? register value on entry
    float unaffESI;   // ? register value on entry
    double angleY;    // fVar6
    double angleX;    // fVar7 (then reused as the constant 0)
    double angleZ;    // fVar8
    int shape;

    // offset (0, 0, size.z / 2) rotated by the Euler matrix (order 5)
    f.s170 = 0.0f;
    f.s16c = 0.0f;
    f.s168 = size[2] * 0.5f;
    FUN_00ddc1d0((undefined4 *)&f.s120, rotation, 5);
    D3DXVec3TransformNormal(&f.s170, &f.s170, &f.s120);
    posX = position[0];
    posY = position[1];
    f.s174 = position[2] + f.s174;
    f.s170 = position[3] + f.s170;

    // identity, then rotate by Z, Y, X
    f.s134 = 0.0f;
    f.s138 = 0.0f;
    f.s13c = 0.0f;
    f.s140 = 0.0f;
    f.s148 = 0.0f;
    f.s14c = 0.0f;
    f.s150 = 0.0f;
    f.s154 = 0.0f;
    f.s15c = 0.0f;
    f.s160 = 0.0f;
    f.s164 = 0.0f;
    f.s168 = 0.0f;
    f.s130 = 1.0f;
    f.s144 = 1.0f;
    f.s158 = 1.0f;
    f.s16c = 1.0f;
    if (rotation[2] != 0.0f) {
        D3DXMatrixRotationZ(&f.s12c, rotation[2]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }
    if (rotation[1] != 0.0f) {
        D3DXMatrixRotationY(&f.s12c, rotation[1]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }
    if (rotation[0] != 0.0f) {
        D3DXMatrixRotationX(&f.s12c, rotation[0]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }

    // decompose the matrix back into Euler angles (row lengths, clamped asin, atan2)
    f.s134 = f.s174;
    f.sd4 = f.s174;
    f.sc8 = (float)sqrt(f.s164 * f.s164 + f.s16c * f.s16c + f.s168 * f.s168);
    f.sc4 = (float)sqrt(f.s154 * f.s154 + f.s15c * f.s15c + f.s158 * f.s158);
    lengthZ = (float)sqrt(f.s144 * f.s144 + f.s148 * f.s148 + f.s14c * f.s14c);
    f.se4 = f.s154 / lengthZ;
    f.se0 = f.s144 / lengthZ;
    f.s13c = unaffESI + posX;
    f.s138 = posY + unaffEBX;
    f.sdc = unaffESI + posX;
    f.sd8 = posY + unaffEBX;
    angleY = (double)FUN_00ddbaa0(-(f.s164 / lengthZ));
    f.se8 = (float)angleY;
    angleX = atan2((double)f.se4, (double)f.se0);
    f.sbc = (float)angleX;
    angleZ = atan2((double)f.s168 / (double)f.sc4, (double)f.s16c / (double)f.sc8);

    // identity, then rotate by the recovered Z, Y, X
    angleX = 0.0;
    f.sf4 = (float)angleX;
    f.sf8 = (float)angleX;
    f.sfc = (float)angleX;
    f.s100 = (float)angleX;
    f.s108 = (float)angleX;
    f.s10c = (float)angleX;
    f.s110 = (float)angleX;
    f.s114 = (float)angleX;
    f.s11c = (float)angleX;
    f.s120 = (float)angleX;
    f.s124 = (float)angleX;
    f.s128 = (float)angleX;
    f.sf0 = 1.0f;
    f.s104 = 1.0f;
    f.s118 = 1.0f;
    f.s12c = 1.0f;
    if (angleX != angleZ) {
        D3DXMatrixRotationZ(f.s9c, (float)angleZ);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
        angleY = (double)f.se8;
    }
    if (0.0 != angleY) {
        D3DXMatrixRotationY(f.s9c, (float)angleY);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
    }
    if (f.sbc != 0.0f) {
        D3DXMatrixRotationX(f.s9c, f.sbc);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
    }
    f.sfc = f.sdc;
    f.sf8 = f.sd8;
    f.sf4 = f.sd4;
    // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
    cdeclcall<void>(FUN_01005190, &f.s12c); /* ECX: ? */

    // box shape with half extents size / 2
    f.sac = size[0] * 0.5f;
    f.sa8 = size[1] * 0.5f;
    f.sa4 = size[2] * 0.5f;
    f.sa0 = 0.0f;
    shape = havokNewBlock(0x30);
    shape = constructBoxShape(shape, &f.sb0, DAT_01b20754);
    if (shape != 0) {
        cdeclcall<int>(FUN_009083c0, work, shape, 0, f.s60, forward1, forward2, forward3, forward4); /* ECX: ? (caller's ECX) */
        return;
    }
}

// 0090BFF0  FUN_0090bff0  size=509  [between]
// ? Capsule query for a RayCastWork between pointA and pointB (a sphere when they coincide),
// centred between them; FUN_009083c0 ("setClosestPoints"; ECX passed through, not shown) does the query.
// Frame mirrors Ghidra's stack slots (sNNN = local at -0xNNN); the capsule vertex pointers and
// the translation stores are 4 bytes off the vectors they belong to, exactly as in the raw.
void FUN_0090bff0(int work, float *pointA, float *pointB, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s74;                     // auStack_74 (second capsule vertex argument)
        float s70, s6c, s68, s64;      // pointB - center (s68 first holds center.z)
        float s60, s5c, s58;           // pointA - center
        float s54, s50, s4c, s48;      // hkTransform (from s54)
        float s44, s40, s3c, s38;
        float s34, s30, s2c, s28;
        float s24, s20, s1c, s18;
    } f;
    float centerX;   // fVar1
    float centerY;   // fVar2
    float dx2, dy2, dz2;
    float lengthSq;  // fVar8
    float estimate;
    float length;    // fVar5
    int shape;

    centerX = (pointB[0] + pointA[0]) * 0.5f;
    f.s60 = pointA[0] - centerX;
    centerY = (pointB[1] + pointA[1]) * 0.5f;
    f.s5c = pointA[1] - centerY;
    f.s6c = pointB[1] - centerY;
    f.s68 = (pointB[2] + pointA[2]) * 0.5f;
    f.s58 = pointA[2] - f.s68;
    f.s68 = pointB[2] - f.s68;
    f.s70 = pointB[0] - centerX;
    f.s54 = 0.0f;
    dx2 = (f.s60 - f.s70) * (f.s60 - f.s70);
    dy2 = (f.s5c - f.s6c) * (f.s5c - f.s6c);
    dz2 = (f.s58 - f.s68) * (f.s58 - f.s68);
    f.s64 = 0.0f;
    // |pointA - pointB| with one Newton step on rsqrt, 0 when the squared length is <= 0
    lengthSq = dy2 + dx2 + dz2;
    estimate = rsqrtApprox(dy2 + dx2 + dz2);
    if (lengthSq <= 0.0f) {
        length = 0.0f;
    }
    else {
        length = (3.0f - estimate * lengthSq * estimate) * estimate * 0.5f * lengthSq;
    }
    if (length <= 0.0f) {
        shape = havokNewBlock(0x20);
        shape = constructSphereShape(shape, radius);
    }
    else {
        shape = havokNewBlock(0x40);
        shape = constructCapsuleShape(shape, &f.s64, &f.s74, radius);
    }
    if (shape == 0) {
        return;
    }
    f.s54 = 1.0f;
    f.s50 = 0.0f;
    f.s4c = 0.0f;
    f.s48 = 0.0f;
    f.s44 = 0.0f;
    f.s40 = 1.0f;
    f.s3c = 0.0f;
    f.s38 = 0.0f;
    f.s34 = 0.0f;
    f.s30 = 0.0f;
    f.s2c = 1.0f;
    f.s28 = 0.0f;
    f.s18 = 1.0f;
    f.s24 = length;
    f.s20 = centerX;
    f.s1c = centerY;
    cdeclcall<int>(FUN_009083c0, work, shape, 0, &f.s54, forward1, forward2, forward3, forward4); /* ECX: ? */
}

// 0090C1F0  FUN_0090c1f0  size=373  [between]
// ? Cylinder query for a RayCastWork between pointA and pointB, centred between them;
// FUN_009083c0 ("setClosestPoints"; ECX passed through, not shown) does the query. Frame as in FUN_0090bff0.
void FUN_0090c1f0(int work, float *pointA, float *pointB, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s74;                     // auStack_74 (second cylinder vertex argument)
        float s70, s6c, s68, s64;      // pointB - center (s68 first holds center.z)
        float s60, s5c, s58;           // pointA - center
        float s54, s50, s4c, s48;      // hkTransform (from s54)
        float s44, s40, s3c, s38;
        float s34, s30, s2c, s28;
        float s24, s20, s1c, s18;
    } f;
    float centerX;  // fVar1
    float centerY;  // fVar2
    int shape;

    centerX = (pointB[0] + pointA[0]) * 0.5f;
    f.s60 = pointA[0] - centerX;
    centerY = (pointB[1] + pointA[1]) * 0.5f;
    f.s5c = pointA[1] - centerY;
    f.s6c = pointB[1] - centerY;
    f.s68 = (pointB[2] + pointA[2]) * 0.5f;
    f.s58 = pointA[2] - f.s68;
    f.s68 = pointB[2] - f.s68;
    f.s54 = 0.0f;
    f.s70 = pointB[0] - centerX;
    f.s64 = 0.0f;
    shape = havokNewBlock(0x60);
    shape = constructCylinderShape(shape, &f.s64, &f.s74, radius, DAT_01b20754);
    if (shape == 0) {
        return;
    }
    f.s54 = 1.0f;
    f.s50 = 0.0f;
    f.s4c = 0.0f;
    f.s48 = 0.0f;
    f.s44 = 0.0f;
    f.s40 = 1.0f;
    f.s3c = 0.0f;
    f.s38 = 0.0f;
    f.s34 = 0.0f;
    f.s30 = 0.0f;
    f.s2c = 1.0f;
    f.s28 = 0.0f;
    f.s18 = 1.0f;
    f.s20 = centerX;
    f.s1c = centerY;
    cdeclcall<int>(FUN_009083c0, work, shape, 0, &f.s54, forward1, forward2, forward3, forward4); /* ECX: ? */
}

// 0090C370  FUN_0090c370  size=191  [between]
// Sphere query for a RayCastWork at `position`; FUN_009083c0 ("setClosestPoints"; ECX passed through, not shown).
void FUN_0090c370(int work, float *position, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    float transform[16];  // hkTransform: identity rotation, translation = position
    int shape;

    shape = havokNewBlock(0x20);
    shape = constructSphereShape(shape, radius);
    if (shape == 0) {
        return;
    }
    transform[13] = position[1];
    transform[14] = position[2];
    transform[0] = 1.0f;
    transform[1] = 0.0f;
    transform[2] = 0.0f;
    transform[3] = 0.0f;
    transform[4] = 0.0f;
    transform[5] = 1.0f;
    transform[6] = 0.0f;
    transform[7] = 0.0f;
    transform[8] = 0.0f;
    transform[9] = 0.0f;
    transform[10] = 1.0f;
    transform[11] = 0.0f;
    transform[12] = position[0];
    transform[15] = 1.0f;
    cdeclcall<int>(FUN_009083c0, work, shape, 0, transform, forward1, forward2, forward3, forward4); /* ECX: ? */
}

// 0090C430  FUN_0090c430  size=880  [between]
// ? Query of an existing `shape` for a RayCastWork, posed by `position` and the Euler angles
// `rotation`; FUN_009083c0 ("setClosestPoints"; ECX passed through, not shown) does the query and its result is
// returned (0 when shape is 0).
// Frame mirrors Ghidra's stack slots (sNNN = local at -0xNNN); matrices are written and read
// through bases 8 bytes apart and the first product goes to a frame address Ghidra did not map
// to a local (stackFE98), exactly as in the raw decompilation.
int FUN_0090c430(int work, float *position, float *rotation, int shape, unsigned int param,
                 unsigned int forward1, unsigned int forward2, unsigned int forward3,
                 unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s118, s114;
        float s110, s10c, s108, s104, s100, sfc, sf8, sf4;
        float sf0, sec, se8, se4, se0, sdc, sd8, sd4;
        float sd0, scc, sc8;
        float sc4, sc0, sbc, sb8;       // sc0..sb8: copy of position
        float sb4, sb0, sac, sa8, sa4, sa0, s9c;
        float s98[2];                   // auStack_98
        float s90[16];                  // auStack_90: rotation matrix scratch
        float s50[19];                  // auStack_50: hkTransform passed to the setter
    } f;
    float stackFE98[16];  // ? frame address 0xFFFFFE98 (not mapped to a local)
    int result;
    double angleY;  // fVar2
    double angleX;  // fVar3 (then reused as the constant 0)
    double angleZ;  // fVar4

    if (shape != 0) {
        cdeclcall<void>(FUN_01006000); /* ECX: ? */
        if (rotation[2] != 0.0f) {
            D3DXMatrixRotationZ(&f.s110, rotation[2]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        if (rotation[1] != 0.0f) {
            D3DXMatrixRotationY(&f.s110, rotation[1]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        if (rotation[0] != 0.0f) {
            D3DXMatrixRotationX(&f.s110, rotation[0]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        f.sc0 = position[0];
        f.sbc = position[1];
        f.sb8 = position[2];
        f.sac = 1.0f;
        f.sa8 = 1.0f;
        f.s114 = 0.0f;
        f.sc4 = 1.0f;
        angleY = (double)FUN_00ddbaa0(-0.0f);  // raw argument 0x80000000
        f.s118 = (float)angleY;
        angleX = atan2((double)f.s114, (double)f.sc4);
        f.sa0 = (float)angleX;
        angleZ = atan2(0.0 / (double)f.sa8, 1.0 / (double)f.sac);
        angleX = 0.0;
        f.sd8 = (float)angleX;
        f.sdc = (float)angleX;
        f.se0 = (float)angleX;
        f.se4 = (float)angleX;
        f.sec = (float)angleX;
        f.sf0 = (float)angleX;
        f.sf4 = (float)angleX;
        f.sf8 = (float)angleX;
        f.s100 = (float)angleX;
        f.s104 = (float)angleX;
        f.s108 = (float)angleX;
        f.s10c = (float)angleX;
        f.sd4 = 1.0f;
        f.se8 = 1.0f;
        f.sfc = 1.0f;
        f.s110 = 1.0f;
        if (angleX != angleZ) {
            D3DXMatrixRotationZ(f.s90, (float)angleZ);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
            angleY = (double)f.s118;
        }
        if (0.0 != angleY) {
            D3DXMatrixRotationY(f.s90, (float)angleY);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
        }
        if (f.sa0 != 0.0f) {
            D3DXMatrixRotationX(f.s90, f.sa0);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
        }
        f.se0 = f.sc0;
        f.sdc = f.sbc;
        f.sd8 = f.sb8;
        // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
        cdeclcall<void>(FUN_01005190, &f.s110); /* ECX: ? */
        result = cdeclcall<int>(FUN_009083c0, work, shape, param, f.s50, /* ECX: ? */ forward1, forward2, forward3,
                               forward4);
        return result;
    }
    return 0;
}

// 0090C7A0  FUN_0090c7a0  size=165  [between]
// Query of the shape of an existing object for a RayCastWork: shape at source+0x10, hkTransform
// at source+0xF0, filter at source+0x2C; FUN_009083c0 ("setClosestPoints"; ECX passed through, not shown). The
// call is bracketed by a lock (FUN_00860de0) and the inlined unlock of the global lock.
int FUN_0090c7a0(int work, int source, unsigned int param, unsigned int forward1,
                 unsigned int forward2, unsigned int forward3)
{
    using namespace RayCastManager_p1;
    int *lockDepth;
    int threadData;
    int result;

    if (source == 0) {
        return 0;
    }
    cdeclcall<void>(FUN_00860de0); /* ECX: ? */
    result = *(int *)(source + 0x10);
    cdeclcall<void>(FUN_01006000); /* ECX: ? */
    result = cdeclcall<int>(FUN_009083c0, work, result, param, /* ECX: ? */ source + 0xf0, *(int *)(source + 0x2c),
                           forward1, forward2, forward3);
    if (DAT_01885d68 != 1) {
        threadData = *(int *)(__readfsdword(0x2C) + _tls_index * 4);
        if (*(int *)(threadData + 4) == 0) {
            lockDepth = (int *)(threadData + 8);
            *lockDepth = *lockDepth + -1;
            if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
                cdeclcall<void>(FUN_00dd7300); /* ECX: ? */
            }
        }
    }
    return result;
}

// 0090C850  FUN_0090c850  size=461  [between]
// ? Box linear cast for a RayCastWork: half extents = size / 2, pose from `position` and the
// Euler angles `rotation`; FUN_00908ef0 (RayCastWork "setLinearCast") does the query.
// Frame mirrors Ghidra's stack slots (sNNN = local at -0xNNN); the matrix is read 8 bytes
// before the slot it is written at, exactly as in the raw decompilation.
void FUN_0090c850(int work, float *position, float *rotation, float *size, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4,
                  unsigned int forward5, unsigned int forward6, unsigned int forward7)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float se8, se4;                  // auStack_e8
        float se0, sdc, sd8, sd4;        // se0..sa4: 4x4 matrix (identity, then rotations)
        float sd0, scc, sc8, sc4;
        float sc0, sbc, sb8, sb4;
        float sb0, sac, sa8, sa4;
        float sa0, s9c, s98, s94;        // half extents (fStack_a0, fStack_9c, afStack_98)
        float s90[15];                   // local_90: rotation matrix scratch
        float s54[20];                   // auStack_54: hkTransform passed to the setter
    } f;
    int shape;

    f.sa8 = 0.0f;
    f.sac = 0.0f;
    f.sb0 = 0.0f;
    f.sb4 = 0.0f;
    f.sbc = 0.0f;
    f.sc0 = 0.0f;
    f.sc4 = 0.0f;
    f.sc8 = 0.0f;
    f.sd0 = 0.0f;
    f.sd4 = 0.0f;
    f.sd8 = 0.0f;
    f.sdc = 0.0f;
    f.sa4 = 1.0f;
    f.sb8 = 1.0f;
    f.scc = 1.0f;
    f.se0 = 1.0f;
    if (rotation[2] != 0.0f) {
        D3DXMatrixRotationZ(f.s90, rotation[2]);
        D3DXMatrixMultiply(&f.se8, &f.s98, &f.se8);
    }
    if (rotation[1] != 0.0f) {
        D3DXMatrixRotationY(f.s90, rotation[1]);
        D3DXMatrixMultiply(&f.se8, &f.s98, &f.se8);
    }
    if (rotation[0] != 0.0f) {
        D3DXMatrixRotationX(f.s90, rotation[0]);
        D3DXMatrixMultiply(&f.se8, &f.s98, &f.se8);
    }
    f.sb0 = position[0];
    f.sac = position[1];
    f.sa8 = position[2];
    // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
    cdeclcall<void>(FUN_01005190, &f.se0); /* ECX: ? */
    f.sa0 = size[0] * 0.5f;
    f.s9c = size[1] * 0.5f;
    f.s98 = size[2] * 0.5f;
    f.s94 = 0.0f;
    shape = havokNewBlock(0x30);
    shape = constructBoxShape(shape, &f.sa4, DAT_01b20754);
    if (shape == 0) {
        return;
    }
    cdeclcall<void>(FUN_00908ef0, work, shape, f.s54, forward1, forward2, forward3, forward4,
                    forward5, forward6, forward7);
}

// 0090CA20  FUN_0090ca20  size=197  [between]
// Sphere linear cast for a RayCastWork at `position`; FUN_00908ef0 ("setLinearCast").
void FUN_0090ca20(int work, float *position, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4,
                  unsigned int forward5, unsigned int forward6, unsigned int forward7)
{
    using namespace RayCastManager_p1;
    float transform[16];  // hkTransform: identity rotation, translation = position
    int shape;

    shape = havokNewBlock(0x20);
    shape = constructSphereShape(shape, radius);
    if (shape == 0) {
        return;
    }
    transform[13] = position[1];
    transform[14] = position[2];
    transform[0] = 1.0f;
    transform[1] = 0.0f;
    transform[2] = 0.0f;
    transform[3] = 0.0f;
    transform[4] = 0.0f;
    transform[5] = 1.0f;
    transform[6] = 0.0f;
    transform[7] = 0.0f;
    transform[8] = 0.0f;
    transform[9] = 0.0f;
    transform[10] = 1.0f;
    transform[11] = 0.0f;
    transform[12] = position[0];
    transform[15] = 1.0f;
    cdeclcall<void>(FUN_00908ef0, work, shape, transform, forward1, forward2, forward3, forward4,
                    forward5, forward6, forward7);
}

// 0090CAF0  FUN_0090caf0  size=239  [between]
// ? Cylinder linear cast for a RayCastWork: axis along Y from -height/2 to +height/2, pose from
// `matrix` (converted by FUN_01005190); FUN_00908ef0 ("setLinearCast") does the query.
// Frame mirrors Ghidra's stack slots (sNNN = local at -0xNNN).
void FUN_0090caf0(int work, float *matrix, float height, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4,
                  unsigned int forward5, unsigned int forward6, unsigned int forward7)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s74;                  // auStack_74 (second cylinder vertex argument)
        float s70, s6c, s68, s64;   // (0, -height/2, 0, 0)
        float s60, s5c, s58;        // (0, +height/2, 0)
        float s54[20];              // auStack_54: hkTransform passed to the setter
    } f;
    int shape;

    // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
    cdeclcall<void>(FUN_01005190, matrix); /* ECX: ? */
    f.s5c = height * 0.5f;
    f.s6c = height * -0.5f;
    f.s60 = 0.0f;
    f.s58 = 0.0f;
    f.s54[0] = 0.0f;
    f.s70 = 0.0f;
    f.s68 = 0.0f;
    f.s64 = 0.0f;
    shape = havokNewBlock(0x60);
    shape = constructCylinderShape(shape, &f.s64, &f.s74, radius, DAT_01b20754);
    if (shape == 0) {
        return;
    }
    cdeclcall<void>(FUN_00908ef0, work, shape, f.s54, forward1, forward2, forward3, forward4,
                    forward5, forward6, forward7);
}

// 0090CBE0  FUN_0090cbe0  size=1102  [between]
// ? Same as FUN_0090bba0 (box posed by position / Euler rotation), but the query goes to
// FUN_00909ac0 (RayCastWork "setPenetration"). Frame mirrors Ghidra's stack slots one to one
// (see FUN_0090bba0).
void FUN_0090cbe0(int work, float *position, float *rotation, float *size, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s174, s170, s16c, s168, s164, s160, s15c, s158;
        float s154, s150, s14c, s148, s144, s140, s13c, s138;
        float s134, s130, s12c, s128, s124, s120, s11c, s118;
        float s114, s110, s10c, s108, s104, s100, sfc, sf8;
        float sf4, sf0, sec, se8, se4, se0, sdc, sd8;
        float sd4, sd0, scc, sc8, sc4, sc0, sbc, sb8;
        float sb4, sb0, sac, sa8, sa4, sa0;
        float s9c[15];  // auStack_9c: rotation matrix scratch
        float s60[23];  // auStack_60: hkTransform passed to the setter
    } f;
    float posX;       // fVar1
    float posY;       // fVar2
    float lengthZ;    // fVar3
    float unaffEBX;   // ? register value on entry
    float unaffESI;   // ? register value on entry
    double angleY;    // fVar6
    double angleX;    // fVar7 (then reused as the constant 0)
    double angleZ;    // fVar8
    int shape;

    // offset (0, 0, size.z / 2) rotated by the Euler matrix (order 5)
    f.s170 = 0.0f;
    f.s16c = 0.0f;
    f.s168 = size[2] * 0.5f;
    FUN_00ddc1d0((undefined4 *)&f.s120, rotation, 5);
    D3DXVec3TransformNormal(&f.s170, &f.s170, &f.s120);
    posX = position[0];
    posY = position[1];
    f.s174 = position[2] + f.s174;
    f.s170 = position[3] + f.s170;

    // identity, then rotate by Z, Y, X
    f.s134 = 0.0f;
    f.s138 = 0.0f;
    f.s13c = 0.0f;
    f.s140 = 0.0f;
    f.s148 = 0.0f;
    f.s14c = 0.0f;
    f.s150 = 0.0f;
    f.s154 = 0.0f;
    f.s15c = 0.0f;
    f.s160 = 0.0f;
    f.s164 = 0.0f;
    f.s168 = 0.0f;
    f.s130 = 1.0f;
    f.s144 = 1.0f;
    f.s158 = 1.0f;
    f.s16c = 1.0f;
    if (rotation[2] != 0.0f) {
        D3DXMatrixRotationZ(&f.s12c, rotation[2]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }
    if (rotation[1] != 0.0f) {
        D3DXMatrixRotationY(&f.s12c, rotation[1]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }
    if (rotation[0] != 0.0f) {
        D3DXMatrixRotationX(&f.s12c, rotation[0]);
        D3DXMatrixMultiply(&f.s174, &f.s134, &f.s174);
    }

    // decompose the matrix back into Euler angles (row lengths, clamped asin, atan2)
    f.s134 = f.s174;
    f.sd4 = f.s174;
    f.sc8 = (float)sqrt(f.s164 * f.s164 + f.s16c * f.s16c + f.s168 * f.s168);
    f.sc4 = (float)sqrt(f.s154 * f.s154 + f.s15c * f.s15c + f.s158 * f.s158);
    lengthZ = (float)sqrt(f.s144 * f.s144 + f.s148 * f.s148 + f.s14c * f.s14c);
    f.se4 = f.s154 / lengthZ;
    f.se0 = f.s144 / lengthZ;
    f.s13c = unaffESI + posX;
    f.s138 = posY + unaffEBX;
    f.sdc = unaffESI + posX;
    f.sd8 = posY + unaffEBX;
    angleY = (double)FUN_00ddbaa0(-(f.s164 / lengthZ));
    f.se8 = (float)angleY;
    angleX = atan2((double)f.se4, (double)f.se0);
    f.sbc = (float)angleX;
    angleZ = atan2((double)f.s168 / (double)f.sc4, (double)f.s16c / (double)f.sc8);

    // identity, then rotate by the recovered Z, Y, X
    angleX = 0.0;
    f.sf4 = (float)angleX;
    f.sf8 = (float)angleX;
    f.sfc = (float)angleX;
    f.s100 = (float)angleX;
    f.s108 = (float)angleX;
    f.s10c = (float)angleX;
    f.s110 = (float)angleX;
    f.s114 = (float)angleX;
    f.s11c = (float)angleX;
    f.s120 = (float)angleX;
    f.s124 = (float)angleX;
    f.s128 = (float)angleX;
    f.sf0 = 1.0f;
    f.s104 = 1.0f;
    f.s118 = 1.0f;
    f.s12c = 1.0f;
    if (angleX != angleZ) {
        D3DXMatrixRotationZ(f.s9c, (float)angleZ);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
        angleY = (double)f.se8;
    }
    if (0.0 != angleY) {
        D3DXMatrixRotationY(f.s9c, (float)angleY);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
    }
    if (f.sbc != 0.0f) {
        D3DXMatrixRotationX(f.s9c, f.sbc);
        D3DXMatrixMultiply(&f.s134, &f.sa4, &f.s134);
    }
    f.sfc = f.sdc;
    f.sf8 = f.sd8;
    f.sf4 = f.sd4;
    // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
    cdeclcall<void>(FUN_01005190, &f.s12c); /* ECX: ? */

    // box shape with half extents size / 2
    f.sac = size[0] * 0.5f;
    f.sa8 = size[1] * 0.5f;
    f.sa4 = size[2] * 0.5f;
    f.sa0 = 0.0f;
    shape = havokNewBlock(0x30);
    shape = constructBoxShape(shape, &f.sb0, DAT_01b20754);
    if (shape != 0) {
        cdeclcall<int>(FUN_00909ac0, work, shape, 0, f.s60, forward1, forward2, forward3, forward4);
        return;
    }
}

// 0090D030  FUN_0090d030  size=509  [between]
// ? Same as FUN_0090bff0 (capsule / sphere between pointA and pointB), but the query goes to
// FUN_00909ac0 ("setPenetration"). Frame as in FUN_0090bff0.
void FUN_0090d030(int work, float *pointA, float *pointB, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s74;                     // auStack_74 (second capsule vertex argument)
        float s70, s6c, s68, s64;      // pointB - center (s68 first holds center.z)
        float s60, s5c, s58;           // pointA - center
        float s54, s50, s4c, s48;      // hkTransform (from s54)
        float s44, s40, s3c, s38;
        float s34, s30, s2c, s28;
        float s24, s20, s1c, s18;
    } f;
    float centerX;   // fVar1
    float centerY;   // fVar2
    float dx2, dy2, dz2;
    float lengthSq;  // fVar8
    float estimate;
    float length;    // fVar5
    int shape;

    centerX = (pointB[0] + pointA[0]) * 0.5f;
    f.s60 = pointA[0] - centerX;
    centerY = (pointB[1] + pointA[1]) * 0.5f;
    f.s5c = pointA[1] - centerY;
    f.s6c = pointB[1] - centerY;
    f.s68 = (pointB[2] + pointA[2]) * 0.5f;
    f.s58 = pointA[2] - f.s68;
    f.s68 = pointB[2] - f.s68;
    f.s70 = pointB[0] - centerX;
    f.s54 = 0.0f;
    dx2 = (f.s60 - f.s70) * (f.s60 - f.s70);
    dy2 = (f.s5c - f.s6c) * (f.s5c - f.s6c);
    dz2 = (f.s58 - f.s68) * (f.s58 - f.s68);
    f.s64 = 0.0f;
    // |pointA - pointB| with one Newton step on rsqrt, 0 when the squared length is <= 0
    lengthSq = dy2 + dx2 + dz2;
    estimate = rsqrtApprox(dy2 + dx2 + dz2);
    if (lengthSq <= 0.0f) {
        length = 0.0f;
    }
    else {
        length = (3.0f - estimate * lengthSq * estimate) * estimate * 0.5f * lengthSq;
    }
    if (length <= 0.0f) {
        shape = havokNewBlock(0x20);
        shape = constructSphereShape(shape, radius);
    }
    else {
        shape = havokNewBlock(0x40);
        shape = constructCapsuleShape(shape, &f.s64, &f.s74, radius);
    }
    if (shape == 0) {
        return;
    }
    f.s54 = 1.0f;
    f.s50 = 0.0f;
    f.s4c = 0.0f;
    f.s48 = 0.0f;
    f.s44 = 0.0f;
    f.s40 = 1.0f;
    f.s3c = 0.0f;
    f.s38 = 0.0f;
    f.s34 = 0.0f;
    f.s30 = 0.0f;
    f.s2c = 1.0f;
    f.s28 = 0.0f;
    f.s18 = 1.0f;
    f.s24 = length;
    f.s20 = centerX;
    f.s1c = centerY;
    cdeclcall<int>(FUN_00909ac0, work, shape, 0, &f.s54, forward1, forward2, forward3, forward4);
}

// 0090D230  FUN_0090d230  size=373  [between]
// ? Same as FUN_0090c1f0 (cylinder between pointA and pointB), but the query goes to
// FUN_00909ac0 ("setPenetration"). Frame as in FUN_0090bff0.
void FUN_0090d230(int work, float *pointA, float *pointB, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s74;                     // auStack_74 (second cylinder vertex argument)
        float s70, s6c, s68, s64;      // pointB - center (s68 first holds center.z)
        float s60, s5c, s58;           // pointA - center
        float s54, s50, s4c, s48;      // hkTransform (from s54)
        float s44, s40, s3c, s38;
        float s34, s30, s2c, s28;
        float s24, s20, s1c, s18;
    } f;
    float centerX;  // fVar1
    float centerY;  // fVar2
    int shape;

    centerX = (pointB[0] + pointA[0]) * 0.5f;
    f.s60 = pointA[0] - centerX;
    centerY = (pointB[1] + pointA[1]) * 0.5f;
    f.s5c = pointA[1] - centerY;
    f.s6c = pointB[1] - centerY;
    f.s68 = (pointB[2] + pointA[2]) * 0.5f;
    f.s58 = pointA[2] - f.s68;
    f.s68 = pointB[2] - f.s68;
    f.s54 = 0.0f;
    f.s70 = pointB[0] - centerX;
    f.s64 = 0.0f;
    shape = havokNewBlock(0x60);
    shape = constructCylinderShape(shape, &f.s64, &f.s74, radius, DAT_01b20754);
    if (shape == 0) {
        return;
    }
    f.s54 = 1.0f;
    f.s50 = 0.0f;
    f.s4c = 0.0f;
    f.s48 = 0.0f;
    f.s44 = 0.0f;
    f.s40 = 1.0f;
    f.s3c = 0.0f;
    f.s38 = 0.0f;
    f.s34 = 0.0f;
    f.s30 = 0.0f;
    f.s2c = 1.0f;
    f.s28 = 0.0f;
    f.s18 = 1.0f;
    f.s20 = centerX;
    f.s1c = centerY;
    cdeclcall<int>(FUN_00909ac0, work, shape, 0, &f.s54, forward1, forward2, forward3, forward4);
}

// 0090D3B0  FUN_0090d3b0  size=191  [between]
// Sphere penetration query for a RayCastWork at `position`; FUN_00909ac0 ("setPenetration").
void FUN_0090d3b0(int work, float *position, float radius, unsigned int forward1,
                  unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    float transform[16];  // hkTransform: identity rotation, translation = position
    int shape;

    shape = havokNewBlock(0x20);
    shape = constructSphereShape(shape, radius);
    if (shape == 0) {
        return;
    }
    transform[13] = position[1];
    transform[14] = position[2];
    transform[0] = 1.0f;
    transform[1] = 0.0f;
    transform[2] = 0.0f;
    transform[3] = 0.0f;
    transform[4] = 0.0f;
    transform[5] = 1.0f;
    transform[6] = 0.0f;
    transform[7] = 0.0f;
    transform[8] = 0.0f;
    transform[9] = 0.0f;
    transform[10] = 1.0f;
    transform[11] = 0.0f;
    transform[12] = position[0];
    transform[15] = 1.0f;
    cdeclcall<int>(FUN_00909ac0, work, shape, 0, transform, forward1, forward2, forward3, forward4);
}

// 0090D470  FUN_0090d470  size=879  [between]
// ? Same as FUN_0090c430 (existing shape posed by position / Euler rotation), but the query goes
// to FUN_00909ac0 ("setPenetration") and its result is returned (0 when shape is 0). Frame as
// in FUN_0090c430.
int FUN_0090d470(int work, float *position, float *rotation, int shape, unsigned int forward1,
                 unsigned int forward2, unsigned int forward3, unsigned int forward4)
{
    using namespace RayCastManager_p1;
    struct Frame {
        float s118, s114;
        float s110, s10c, s108, s104, s100, sfc, sf8, sf4;
        float sf0, sec, se8, se4, se0, sdc, sd8, sd4;
        float sd0, scc, sc8;
        float sc4, sc0, sbc, sb8;       // sc0..sb8: copy of position
        float sb4, sb0, sac, sa8, sa4, sa0, s9c;
        float s98[2];                   // auStack_98
        float s90[16];                  // auStack_90: rotation matrix scratch
        float s50[19];                  // auStack_50: hkTransform passed to the setter
    } f;
    float stackFE98[16];  // ? frame address 0xFFFFFE98 (not mapped to a local)
    int result;
    double angleY;  // fVar2
    double angleX;  // fVar3 (then reused as the constant 0)
    double angleZ;  // fVar4

    if (shape != 0) {
        cdeclcall<void>(FUN_01006000); /* ECX: ? */
        if (rotation[2] != 0.0f) {
            D3DXMatrixRotationZ(&f.s110, rotation[2]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        if (rotation[1] != 0.0f) {
            D3DXMatrixRotationY(&f.s110, rotation[1]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        if (rotation[0] != 0.0f) {
            D3DXMatrixRotationX(&f.s110, rotation[0]);
            D3DXMatrixMultiply(stackFE98, &f.s118, stackFE98);
        }
        f.sc0 = position[0];
        f.sbc = position[1];
        f.sb8 = position[2];
        f.sac = 1.0f;
        f.sa8 = 1.0f;
        f.s114 = 0.0f;
        f.sc4 = 1.0f;
        angleY = (double)FUN_00ddbaa0(-0.0f);  // raw argument 0x80000000
        f.s118 = (float)angleY;
        angleX = atan2((double)f.s114, (double)f.sc4);
        f.sa0 = (float)angleX;
        angleZ = atan2(0.0 / (double)f.sa8, 1.0 / (double)f.sac);
        angleX = 0.0;
        f.sd8 = (float)angleX;
        f.sdc = (float)angleX;
        f.se0 = (float)angleX;
        f.se4 = (float)angleX;
        f.sec = (float)angleX;
        f.sf0 = (float)angleX;
        f.sf4 = (float)angleX;
        f.sf8 = (float)angleX;
        f.s100 = (float)angleX;
        f.s104 = (float)angleX;
        f.s108 = (float)angleX;
        f.s10c = (float)angleX;
        f.sd4 = 1.0f;
        f.se8 = 1.0f;
        f.sfc = 1.0f;
        f.s110 = 1.0f;
        if (angleX != angleZ) {
            D3DXMatrixRotationZ(f.s90, (float)angleZ);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
            angleY = (double)f.s118;
        }
        if (0.0 != angleY) {
            D3DXMatrixRotationY(f.s90, (float)angleY);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
        }
        if (f.sa0 != 0.0f) {
            D3DXMatrixRotationX(f.s90, f.sa0);
            D3DXMatrixMultiply(&f.s118, f.s98, &f.s118);
        }
        f.se0 = f.sc0;
        f.sdc = f.sbc;
        f.sd8 = f.sb8;
        // FUN_01005190: hkTransform::set4x4ColumnMajor (__thiscall)
        cdeclcall<void>(FUN_01005190, &f.s110); /* ECX: ? */
        result = cdeclcall<int>(FUN_00909ac0, work, shape, 0, f.s50, forward1, forward2, forward3,
                                forward4);
        return result;
    }
    return 0;
}

// 0090D7E0  RayCastManager::RayCastManager  size=220  [class]
RayCastManager::RayCastManager()
{
    using namespace RayCastManager_p1;
    int index;

    // vftable = RayCastManager::vftable (0x0164c450)
    field08() = 0;
    cdeclcall<void>(0x00DD44F0u); /* Hw::cHeapVariable::cHeapVariable, ECX: ? */
    works().unk00 = 0;
    works().data = 0;
    works().capacity = 0;
    works().count = 0;
    works().ownsMemory = 0;
    for (index = 0; index < 5; index = index + 1) {
        arrays()[index].unk00 = 0;
        arrays()[index].data = 0;
        arrays()[index].capacity = 0;
        arrays()[index].count = 0;
        arrays()[index].ownsMemory = 0;
    }
    field100() = 0;
    field120() = 0;
    field12C() = 0;
    field130() = 0;
    enabled() = 0;
}

// 0090D8C0  FUN_0090d8c0  size=204  [callgraph]
// Starts a box penetration query on the work held by `handle` (creating and registering a
// RayCastPenetrationWork when the handle is empty); a zero size component does nothing.
// The work is flagged for release (+0x1A) when FUN_0090cbe0 returns 0.
void FUN_0090d8c0(int *handle, int target, float *position, float *rotation, float *size,
                  unsigned int forward1, const char *name)
{
    using namespace RayCastManager_p1;
    int work;
    int ok;

    if (size[0] != 0.0f && size[1] != 0.0f && size[2] != 0.0f) {
        work = *handle;
        if (work == 0) {
            // 00907F20 hkpFirstCdBodyPairCollector::hkpFirstCdBodyPairCollector_2: new RayCastPenetrationWork
            work = cdeclcall<int>(0x00907F20u);
            // 00907DC0 RayCastManager::set (__thiscall)
            ok = cdeclcall<int>(0x00907DC0u, work, handle, name); /* ECX: ? (the manager) */
            if (ok == 0) {
                return;
            }
        }
        else if (handle != *(int **)(work + 0x10) /* RayCastWork+0x10: handle */) {
            cdeclcall<void>(FUN_00dd5650, DAT_0164c08c);
            cdeclcall<void>(FUN_00dd5650, DAT_0164c454, name);
            return;
        }
        // ? FUN_0090cbe0 is decompiled as void; this caller reads its EAX
        // machine code: ECX = work (mov ecx, esi), 8 stack arguments
        ok = thiscall<int>(FUN_0090cbe0, work, target, position, rotation, size, forward1, name, 5, 0);
        if (ok == 0) {
            *(unsigned short *)(work + 0x1a) = 1;  // RayCastWork+0x1A: release request
        }
        return;
    }
}
