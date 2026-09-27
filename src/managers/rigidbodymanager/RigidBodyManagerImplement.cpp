// src/managers/rigidbodymanager/RigidBodyManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "RigidBodyManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32 (RigidBodyManagerImplement+0x78 is a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);
// TLS slot index of the module (0x01F8EF48); fs:[0x2C] is the thread's TLS array
extern "C" unsigned int _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)
// d3dx9
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern int           DAT_01885d68;  // cHavok: 1 = world locking disabled
extern int           DAT_01885db8;  // cHavok: non-zero = inside the unlock period
extern int           DAT_01b35fac;  // cHavok: world exists
extern unsigned char DAT_01885d70[];  // cHavok world lock object (ECX of FUN_00dd7320)
extern int           DAT_01885d20;  // hkpWorld * (ECX of FUN_011929d0 = add entity)
extern float         DAT_01885d24;  // physics time step (FUN_00920c60 uses 1 / it)
extern unsigned long DAT_01f8fc4c;  // TLS index of the Havok memory router
extern unsigned char DAT_01b7c218[];  // Havok heap (Hw::cHeapVariableBase; ECX of 00DD32C0)
extern void         *PTR_vftable_018e9b94;  // Havok container allocator object (its first dword is the vftable)
// Shift-JIS debug messages (translated)
extern const char DAT_0164d0b4[];  // "HkRigidBody::create: failed to create the RigidBody"
extern const char DAT_0164d070[];  // "HkRigidBody:create: failed to create the RigidBodyCollisionListener"
extern const char DAT_0164d3d0[];  // "HavokHeap below %dM: RigidBodyManagerImplement's combine returns FALSE"
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] cannot normalise a zero vector."

// ---------------------------------------------------------------------------------------------
// Helpers.  Callees whose functions.h prototype does not match the machine code (hidden ECX,
// missing stack arguments or return value) are called through a cast so the argument list is the
// binary's.  hkpRigidBody / hkpRigidBodyCinfo are not owned by this file: their fields go through
// the accessors below, tagged with their offsets.
// ---------------------------------------------------------------------------------------------
namespace RigidBodyManagerImplement_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Callees known only by address
void *const HW_HEAP_GET_FREE_SIZE     = (void *)0x00DD32C0;  // Hw::cHeapVariableBase::vf18 (free bytes)
void *const HKP_RIGID_BODY_CTOR       = (void *)0x011A0390;  // hkpRigidBody::hkpRigidBody(const hkpRigidBodyCinfo &)
void *const HKP_LIST_SHAPE_CTOR       = (void *)0x0113BEF0;  // hkpListShape::hkpListShape(shapes, count, refPolicy)
void *const HKP_CONVEX_VERTICES_CTOR  = (void *)0x01130D10;  // hkpConvexVerticesShape ctor (vertices, planes, radius)
void *const RB_COLLISION_LISTENER_CTOR = (void *)0x0091D5E0; // RigidBodyCollisionListener::RigidBodyCollisionListener(body)
void *const ENTITY_LISTENER_CTOR      = (void *)0x0091F310;  // hkpEntityListener::hkpEntityListener_4(entity)
void *const DTOR_BODY_00921360        = (void *)0x00921360;  // FILEMAP: HkRemoveContainer::HkRemoveContainer (destructor body of this class ?)
void *const HK_REMOVE_ENTITY_VFTABLE  = (void *)0x0164CCE0;  // HkRemoveEntity::vftable
void *const HK_REMOVE_CONTAINER_VFTABLE = (void *)0x0164B624; // HkRemoveContainer::vftable

// FUN_00dd5650: debug printf
inline void DebugPrint(const char *message)
{
    cdeclcall<void>(FUN_00dd5650, message);
}

// Havok thread heap (hkMemoryRouter::heap(): router+0x2C); slot 0x4 = blockAlloc, 0x8 = blockFree
inline void *heapAlloc(int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    return vcall<void *>(fld<void *>(router, 0x2C), 0x4, size);
}
inline void heapFree(void *block, int size)
{
    void *router = TlsGetValue(DAT_01f8fc4c);
    vcall<void>(fld<void *>(router, 0x2C), 0x8, block, size);
}

// Havok container allocator; slot 0x10 = bufFree(ptr, bytes)
inline void containerFree(void *data, unsigned int bytes)
{
    vcall<void>(&PTR_vftable_018e9b94, 0x10, data, bytes);
}

// cHavok world lock.  FUN_004066f0 is the guard constructor (ECX = the empty guard object on the
// stack); the guard destructor is either called (FUN_00406760) or inlined, reproduced by
// havokUnlock().
inline void havokLock(char *guard)
{
    FUN_004066f0((undefined4)guard);
}
inline void havokUnlock()
{
    if (DAT_01885d68 != 1) {
        char **tlsArray = (char **)__readfsdword(0x2C);
        int *lockDepth = (int *)(tlsArray[_tls_index] + 4);
        *lockDepth = *lockDepth - 1;
        if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

// x87 / SSE primitives used by the machine code
inline float x87Sqrt(float value)
{
    float result;
    __asm {
        fld   value
        fsqrt
        fstp  result
    }
    return result;
}
// fpatan: atan(y / x) with the quadrant of (x, y)
inline float x87Atan2(float y, float x)
{
    float result;
    __asm {
        fld    y
        fld    x
        fpatan
        fstp   result
    }
    return result;
}
// rsqrtps / rsqrtss approximation (12-bit)
inline float sseRsqrt(float value)
{
    float result;
    __asm {
        movss   xmm0, value
        rsqrtss xmm0, xmm0
        movss   result, xmm0
    }
    return result;
}
// |value| by clearing the sign bit (pslld 1 / psrld 1)
inline float absBits(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    bits.u = bits.u & 0x7FFFFFFF;
    return bits.f;
}
inline bool isNan(float value)
{
    return value != value;
}

struct Vec4 {
    float x, y, z, w;
};

// hkArray<T> header with 16-byte elements
struct HkArray16 {
    Vec4        *data;              // +0x0
    int          size;              // +0x4
    unsigned int capacityAndFlags;  // +0x8 bit 31 = storage not owned
};
inline void clearArray16(HkArray16 &array)
{
    array.size = 0;
    if ((array.capacityAndFlags & 0x80000000) == 0) {
        containerFree(array.data, (array.capacityAndFlags & 0x3FFFFFFF) << 4);
    }
    array.data = 0;
    array.capacityAndFlags = 0x80000000;
}

// two consecutive arrays, released together by FUN_009211c0 (hkGeometry has the same layout:
// vertices, triangles)
struct ArrayPair {
    HkArray16 first;   // +0x00
    HkArray16 second;  // +0x0C
};

// hkStridedVertices
struct StridedVertices {
    const Vec4 *vertices;     // +0x0
    int         numVertices;  // +0x4
    int         striding;     // +0x8
};

// hkInplaceArray<hkVector4, 32> of plane equations
struct PlaneArray {
    HkArray16 header;
    Vec4      storage[32];
};

// hkMassProperties
struct MassProperties {
    float volume;         // +0x00
    float mass;           // +0x04
    float pad08[2];       // +0x08
    Vec4  centerOfMass;   // +0x10
    Vec4  inertia[3];     // +0x20 rows of the inertia tensor
};

// Command object handed to the HkRemove manager (FUN_0092c170()->vf1C(&cmd)).
struct RemoveEntityCommand {
    void        *vftable;  // +0x0 HkRemoveEntity::vftable
    unsigned int world;    // +0x4 entity+0x8 (hkpWorldObject::m_world ?)
    unsigned int entity;   // +0x8
};

// hkpRigidBodyCinfo fields (not owned by this file)
inline int         &cinfoFilterInfo(void *cinfo)  { return fld<int>(cinfo, 0x0); }          // +0x00 collision filter info
inline void       *&cinfoShape(void *cinfo)       { return fld<void *>(cinfo, 0x4); }       // +0x04 shape
inline Vec4        &cinfoPosition(void *cinfo)    { return fld<Vec4>(cinfo, 0x10); }        // +0x10 position
inline float       *cinfoRotation(void *cinfo)    { return (float *)((char *)cinfo + 0x20); } // +0x20 rotation
inline Vec4        *cinfoInertia(void *cinfo)     { return (Vec4 *)((char *)cinfo + 0x50); }  // +0x50 inertia tensor (3 rows)
inline Vec4        &cinfoCenterOfMass(void *cinfo){ return fld<Vec4>(cinfo, 0x80); }        // +0x80 center of mass
inline float       &cinfoMass(void *cinfo)        { return fld<float>(cinfo, 0x90); }       // +0x90 mass
inline signed char &cinfoMotionType(void *cinfo)  { return fld<signed char>(cinfo, 0xB4); } // +0xB4 motion type
inline signed char &cinfoQualityType(void *cinfo) { return fld<signed char>(cinfo, 0xB6); } // +0xB6 quality type
inline signed char &cinfoByteC8(void *cinfo)      { return fld<signed char>(cinfo, 0xC8); } // +0xC8 ?

// hkpRigidBody+0xC: game property block.  Two presence masks (+0x0 for properties 0..31, +0x4
// for 32..63) followed by one dword per property: property n lives at dword 2 + n.
inline unsigned int *bodyProps(int body)
{
    return fld<unsigned int *>((void *)body, 0xC);
}
// if the property is not set yet: mark it and store `value`
inline void initPropertyOnce(unsigned int *props, int index, unsigned int value)
{
    unsigned int bit = 1u << (index & 31);
    if (props != 0 && (props[index >> 5] & bit) == 0) {
        props[index >> 5] = props[index >> 5] | bit;
        props[2 + index] = value;
    }
}

// Handle block from the pool at +0x10 (8 bytes, zeroed); 0 when the pool is exhausted.
inline unsigned int *allocHandle(RigidBodyManagerImplement *self)
{
    unsigned int *handle = 0;
    if (thiscall<int>(FUN_00dd2ba0, self->handlePool(), 8, 1) != 0) {
        handle = thiscall<unsigned int *>(FUN_00dd2bc0, self->handlePool());
        if (handle != 0) {
            handle[0] = 0;
            handle[1] = 0;
        }
    }
    return handle;
}

inline void enterLock(RigidBodyManagerImplement *self)
{
    if (self->lockEnabled() != 0) {
        EnterCriticalSection(self->criticalSection());
    }
}
inline void leaveLock(RigidBodyManagerImplement *self)
{
    if (self->lockEnabled() != 0) {
        LeaveCriticalSection(self->criticalSection());
    }
}

} // namespace RigidBodyManagerImplement_p1

// 00913FC0  RigidBodyManagerImplement::vf2C  size=23  [class]
void RigidBodyManagerImplement::vf2C(undefined4 *handle)
{
    vf28((int *)handle);
    *handle = 0;
}

// 00919570  RigidBodyManagerImplement::vf34  size=161  [class]
// Queues an HkRemoveEntity command for every body in the list, then empties the list.
void RigidBodyManagerImplement::vf34()
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    BodyList *list = bodyList();
    if (list != 0) {
        unsigned int **it = list->data;
        if (it != it + list->count) {
            do {
                void *removeManager = (void *)FUN_0092c170();
                RemoveEntityCommand command;
                command.entity = **it;
                command.world = fld<unsigned int>((void *)command.entity, 0x8);  // hkpRigidBody+0x8
                command.vftable = HK_REMOVE_ENTITY_VFTABLE;
                vcall<void>(removeManager, 0x1C, &command);
                it = it + 1;
                command.vftable = HK_REMOVE_CONTAINER_VFTABLE;  // inlined destructor of the command
            } while (it != bodyList()->data + bodyList()->count);
        }
        if (bodyList()->data != 0) {
            bodyList()->count = 0;
        }
    }
    leaveLock(this);
}

// 00919620  RigidBodyManagerImplement::vf28  size=249  [class]
// Finds the handle whose body is *handle, queues its removal, drops it from the list and frees it.
void RigidBodyManagerImplement::vf28(int *handle)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    BodyList *list;
    if (*handle == 0 || (list = bodyList()) == 0) {
        leaveLock(this);
        return;
    }
    unsigned int **it = list->data;
    if (it != it + list->count) {
        unsigned int **end = it + list->count;
        do {
            unsigned int *entry = *it;
            if ((unsigned int)*handle == *entry) {
                void *removeManager = (void *)FUN_0092c170();
                RemoveEntityCommand command;
                command.entity = *entry;
                command.world = fld<unsigned int>((void *)command.entity, 0x8);  // hkpRigidBody+0x8
                command.vftable = HK_REMOVE_ENTITY_VFTABLE;
                vcall<void>(removeManager, 0x1C, &command);

                list = bodyList();
                unsigned int count = list->count;
                unsigned int **data = list->data;
                end = data + count;
                if (it != end && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
                    for (; it != end - 1; it = it + 1) {
                        *it = it[1];
                    }
                    list->count = list->count - 1;
                }
                FUN_00dd4920((int)entry);
                break;
            }
            it = it + 1;
        } while (it != end);
    }
    leaveLock(this);
}

// 0091FD10  FUN_0091fd10  size=3354  [callgraph]
// "HkRigidBody::create": builds the hkpRigidBody from `cinfo` into handle[0], initialises the
// body's property block and attaches a RigidBodyCollisionListener; adds the body to the world
// when `addToWorld` is set.  Returns 1 on success.  __thiscall (ECX = self), ret 0x14.
int FUN_0091fd10(RigidBodyManagerImplement *self, unsigned int *handle, void *cinfo,
                 const float *position, const float *rotation, int addToWorld)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(self);
    if (cinfoMass(cinfo) == 0.0f) {
        cinfoMotionType(cinfo) = 5;
    }
    if (cinfoFilterInfo(cinfo) == 0) {
        cinfoFilterInfo(cinfo) = 0;
    }
    Vec4 &cinfoPos = cinfoPosition(cinfo);
    cinfoPos.x = position[0];
    cinfoPos.y = position[1];
    cinfoPos.z = position[2];
    cinfoPos.w = position[3];
    cdeclcall<void>(FUN_00ddb590, cinfoRotation(cinfo), rotation);

    void *memory = heapAlloc(0x220);
    fld<unsigned short>(memory, 4) = 0x220;  // hkReferencedObject::m_memSizeAndFlags
    int body = thiscall<int>(HKP_RIGID_BODY_CTOR, memory, cinfo);
    *handle = (unsigned int)body;
    if (body == 0) {
        DebugPrint(DAT_0164d0b4);
        leaveLock(self);
        return 0;
    }
    FUN_008f8ac0(body);

    // default value of every property (index: bit in the presence masks)
    char guard;
    havokLock(&guard); initPropertyOnce(bodyProps(body), 0, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 1, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 2, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 3, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 4, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 5, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 6, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 9, 0);           havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 10, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 15, 0xFFFFFFFF); havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 11, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 12, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 13, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 14, 0xFFFFFFFF); havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 17, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 18, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 19, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 20, 0);          havokUnlock();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 23, 0);          havokUnlock();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 21, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 22, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 24, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 25, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 26, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 27, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 28, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 29, 0);          FUN_00406760();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 30, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 32, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 33, 0);          FUN_00406760();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 34, 0);          FUN_00406760();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 35, 0);          FUN_00406760();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 38, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 39, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 36, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 31, 0);          FUN_00406760();  // 0.0f
    havokLock(&guard); initPropertyOnce(bodyProps(body), 37, 0);          FUN_00406760();
    havokLock(&guard); initPropertyOnce(bodyProps(body), 40, 0);          FUN_00406760();

    unsigned int *props;
    body = (int)*handle;
    if (body != 0) {
        havokLock(&guard);
        props = bodyProps(body);
        props[0] = props[0] | 0x10;  // property 4 = 1
        props[6] = 1;
        FUN_00406760();
    }
    float mass = cinfoMass(cinfo);
    body = (int)*handle;
    if (body != 0) {
        havokLock(&guard);
        props = bodyProps(body);
        props[1] = props[1] | 2;  // property 33 = mass
        *(float *)&props[35] = mass;
        FUN_00406760();
    }
    body = (int)*handle;
    havokLock(&guard);
    if (body != 0 && (props = bodyProps(body)) != 0) {
        props[0] = props[0] | 0x400;  // property 10 |= 0x200000
        props[12] = props[12] | 0x200000;
    }
    FUN_00406760();
    body = (int)*handle;
    havokLock(&guard);
    if (body != 0 && (props = bodyProps(body)) != 0) {
        props[0] = props[0] | 0x400;  // property 10 |= 8
        props[12] = props[12] | 8;
    }
    FUN_00406760();
    int motionType = cinfoMotionType(cinfo);
    body = (int)*handle;
    if (body != 0) {
        havokLock(&guard);
        props = bodyProps(body);
        props[0] = props[0] | 0x1000;  // property 12 = motion type
        props[14] = (unsigned int)motionType;
        FUN_00406760();
    }
    unsigned int layer = (unsigned int)cinfoFilterInfo(cinfo) & 0x1F;
    body = (int)*handle;
    if (body != 0) {
        havokLock(&guard);
        props = bodyProps(body);
        props[0] = props[0] | 0x2000;  // property 13 = collision layer
        props[15] = layer;
        FUN_00406760();
    }

    void *listenerMemory = heapAlloc(8);
    if (listenerMemory != 0 &&
        thiscall<int>(RB_COLLISION_LISTENER_CTOR, listenerMemory, *handle) != 0) {
        if (addToWorld != 0) {
            havokLock(&guard);
            thiscall<int *>(FUN_011929d0, (void *)DAT_01885d20, *handle, 1);  // world->addEntity(body, 1)
            FUN_010060a0((undefined4 *)*handle);                              // body->removeReference()
            FUN_00406760();
        }
        leaveLock(self);
        return 1;
    }
    DebugPrint(DAT_0164d070);
    leaveLock(self);
    return 0;
}

// 00920A30  RigidBodyManagerImplement::vf30  size=234  [class]
// Returns the entity listener stored in property 18 of `entity`, creating it (0x60 bytes) if
// the entity has none.
uint RigidBodyManagerImplement::vf30(int entity)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    unsigned int listener;
    if (!(entity != 0 && bodyProps(entity) != 0 && (listener = bodyProps(entity)[20]) != 0)) {
        void *memory = heapAlloc(0x60);
        if (memory == 0 ||
            (listener = thiscall<unsigned int>(ENTITY_LISTENER_CTOR, memory, entity)) == 0) {
            leaveLock(this);
            return 0;
        }
        if (entity != 0) {
            char guard;
            havokLock(&guard);
            unsigned int *props = bodyProps(entity);
            props[0] = props[0] | 0x40000;  // property 18 = listener
            props[20] = listener;
            havokUnlock();
        }
    }
    leaveLock(this);
    return listener;
}

// 00920B20  FUN_00920b20  size=61  [callgraph]
// hkArray<4-byte T>::clearAndDeallocate.  array: [0] data, [1] size, [2] capacity | flags
void __fastcall FUN_00920b20(undefined4 *array)
{
    using namespace RigidBodyManagerImplement_p1;
    array[1] = 0;
    if ((int)array[2] >= 0) {
        containerFree((void *)array[0], (array[2] & 0x3FFFFFFF) * 4);
    }
    array[2] = 0x80000000;
    array[0] = 0;
}

// 00920C00  FUN_00920c00  size=60  [callgraph]
// hkArray<16-byte T>::clearAndDeallocate.  array: [0] data, [1] size, [2] capacity | flags
void __fastcall FUN_00920c00(undefined4 *array)
{
    using namespace RigidBodyManagerImplement_p1;
    array[1] = 0;
    if ((int)array[2] >= 0) {
        containerFree((void *)array[0], (array[2] & 0x3FFFFFFF) << 4);
    }
    array[2] = 0x80000000;
    array[0] = 0;
}

// 00920C60  FUN_00920c60  size=1086  [callgraph]
// Drives the handle's (keyframed) body toward `matrix`: the rotation is rebuilt from the Euler
// angles of the normalised matrix axes, converted to an hkTransform, turned into a normalised
// quaternion and passed with the translation and 1 / time step to FUN_008fa520.
// __thiscall (ECX = handle, the functions.h prototype omits it), ret 0xC.
void FUN_00920c60(unsigned int *handle, float *matrix, undefined4 arg2, undefined4 arg3)
{
    using namespace RigidBodyManagerImplement_p1;
    char guard;
    havokLock(&guard);
    float invTimeStep = 1.0f / DAT_01885d24;
    float translation[3];
    translation[0] = matrix[12];
    translation[1] = matrix[13];
    translation[2] = matrix[14];
    float scaleX = x87Sqrt((matrix[1] * matrix[1] + matrix[0] * matrix[0]) + matrix[2] * matrix[2]);
    float scaleY = x87Sqrt((matrix[4] * matrix[4] + matrix[5] * matrix[5]) + matrix[6] * matrix[6]);
    float scaleZ = x87Sqrt((matrix[9] * matrix[9] + matrix[8] * matrix[8]) + matrix[10] * matrix[10]);
    float axisZy = matrix[6] / scaleZ;
    float axisZz = matrix[10] / scaleZ;
    float angleY = (float)FUN_00ddbaa0(-(matrix[2] / scaleZ));
    float angleX = x87Atan2(axisZy, axisZz);
    float angleZ = x87Atan2(matrix[1] / scaleY, matrix[0] / scaleX);

    float rotationMatrix[16];
    rotationMatrix[1] = 0.0f;  rotationMatrix[2] = 0.0f;  rotationMatrix[3] = 0.0f;
    rotationMatrix[4] = 0.0f;  rotationMatrix[6] = 0.0f;  rotationMatrix[7] = 0.0f;
    rotationMatrix[8] = 0.0f;  rotationMatrix[9] = 0.0f;  rotationMatrix[11] = 0.0f;
    rotationMatrix[12] = 0.0f; rotationMatrix[13] = 0.0f; rotationMatrix[14] = 0.0f;
    rotationMatrix[15] = 1.0f; rotationMatrix[10] = 1.0f; rotationMatrix[5] = 1.0f;
    rotationMatrix[0] = 1.0f;
    float axisRotation[16];
    if (angleZ != 0.0f) {
        D3DXMatrixRotationZ(axisRotation, angleZ);
        D3DXMatrixMultiply(rotationMatrix, axisRotation, rotationMatrix);
    }
    if (angleY != 0.0f) {
        D3DXMatrixRotationY(axisRotation, angleY);
        D3DXMatrixMultiply(rotationMatrix, axisRotation, rotationMatrix);
    }
    if (angleX != 0.0f) {
        D3DXMatrixRotationX(axisRotation, angleX);
        D3DXMatrixMultiply(rotationMatrix, axisRotation, rotationMatrix);
    }
    rotationMatrix[12] = translation[0];
    rotationMatrix[13] = translation[1];
    rotationMatrix[14] = translation[2];

    // hkTransform: 3 rotation columns (4 floats each) + translation
    float transform[16];
    thiscall<void>(FUN_01005190, transform, rotationMatrix);
    const float *r = transform;

    // rotation -> quaternion (x, y, z, w); the next-index table shares the storage
    union {
        float q[4];
        int   next[4];
    } quat;
    float trace = (r[5] + r[0]) + r[10];
    if (!(trace > 0.0f)) {
        quat.next[0] = 1;
        quat.next[1] = 2;
        quat.next[2] = 0;
        int i = (r[0] < r[5]) ? 1 : 0;
        if (r[i * 5] < r[10]) {
            i = 2;
        }
        int j = quat.next[i];
        int k = quat.next[j];
        float root = x87Sqrt((r[i * 5] - (r[k * 5] + r[j * 5])) + 1.0f);
        float s = 0.5f / root;
        quat.q[i] = root * 0.5f;
        quat.q[3] = (r[k + j * 4] - r[j + k * 4]) * s;
        quat.q[j] = (r[i + j * 4] + r[j + i * 4]) * s;
        quat.q[k] = (r[i + k * 4] + r[k + i * 4]) * s;
    }
    else {
        float root = x87Sqrt(trace + 1.0f);
        float s = 0.5f / root;
        quat.q[0] = (r[6] - r[9]) * s;
        quat.q[1] = (r[8] - r[2]) * s;
        quat.q[2] = (r[1] - r[4]) * s;
        quat.q[3] = root * 0.5f;
    }

    // normalise: one Newton step on the rsqrtps estimate of 1 / |q|
    float lengthSq = (quat.q[1] * quat.q[1] + quat.q[3] * quat.q[3]) +
                     (quat.q[0] * quat.q[0] + quat.q[2] * quat.q[2]);
    float estimate = sseRsqrt(lengthSq);
    float invLength = (3.0f - estimate * lengthSq * estimate) * (0.5f * estimate);
    Vec4 rotation;
    rotation.x = invLength * quat.q[0];
    rotation.y = invLength * quat.q[1];
    rotation.z = invLength * quat.q[2];
    rotation.w = invLength * quat.q[3];

    FUN_008fa520(&transform[12], &rotation.x, invTimeStep, (int)*handle, (int *)arg2, (int *)arg3);
    havokUnlock();
}

// 00921130  FUN_00921130  size=138  [callgraph]
// Calls FUN_0091f260(entry[0], timeStep, 1) for every 0x18-byte entry of the array at self+0x8
// (count at self+0xC), under the world lock.  __thiscall, ret 4.
void FUN_00921130(int self, undefined4 timeStep)
{
    using namespace RigidBodyManagerImplement_p1;
    char guard;
    havokLock(&guard);
    undefined4 *entry = fld<undefined4 *>((void *)self, 0x8);
    if (entry != entry + fld<int>((void *)self, 0xC) * 6) {
        do {
            FUN_0091f260(*entry, timeStep, 1);
            entry = entry + 6;
        } while (entry != fld<undefined4 *>((void *)self, 0x8) + fld<int>((void *)self, 0xC) * 6);
    }
    havokUnlock();
}

// 009211C0  FUN_009211c0  size=117  [callgraph]
// Releases two consecutive hkArrays of 16-byte elements (e.g. hkGeometry: vertices, triangles),
// the second one first.
void __fastcall FUN_009211c0(undefined4 *arrays)
{
    using namespace RigidBodyManagerImplement_p1;
    arrays[4] = 0;
    if ((int)arrays[5] >= 0) {
        containerFree((void *)arrays[3], (arrays[5] & 0x3FFFFFFF) << 4);
    }
    arrays[3] = 0;
    arrays[5] = 0x80000000;
    arrays[1] = 0;
    if ((int)arrays[2] >= 0) {
        containerFree((void *)arrays[0], (arrays[2] & 0x3FFFFFFF) << 4);
    }
    arrays[2] = 0x80000000;
    arrays[0] = 0;
}

// 009214A0  RigidBodyManagerImplement::vf24  size=214  [class]
unsigned int *RigidBodyManagerImplement::vf24(unsigned int *result, void *cinfo, void *shape,
                                              const float *position, const float *rotation,
                                              int option)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    unsigned int *handle = allocHandle(this);
    if (handle == 0) {
        *result = 0;
    }
    else {
        cinfoShape(cinfo) = shape;
        if (FUN_0091fd10(this, handle, cinfo, position, rotation, option) == 0) {
            if (handle != 0) {
                FUN_00dd4920((int)handle);
                handle = 0;
            }
            *result = 0;
        }
        else {
            FUN_010060a0((undefined4 *)shape);  // shape->removeReference()
            if (bodyList() != 0) {
                vcall<void>(bodyList(), 0x8, &handle);  // push_back
            }
            *result = *handle;
        }
    }
    leaveLock(this);
    return result;
}

// 00921580  RigidBodyManagerImplement::vf20  size=313  [class]
unsigned int *RigidBodyManagerImplement::vf20(unsigned int *result, void *cinfo, void *childShapes,
                                              int childCount, const float *position,
                                              const float *rotation, int option)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    unsigned int *handle = allocHandle(this);
    if (handle == 0) {
        *result = 0;
        leaveLock(this);
        return result;
    }
    void *memory = heapAlloc(0x70);
    fld<unsigned short>(memory, 4) = 0x70;  // hkReferencedObject::m_memSizeAndFlags
    void *listShape = thiscall<void *>(HKP_LIST_SHAPE_CTOR, memory, childShapes, childCount, 1);
    if (listShape == 0) {
        if (handle != 0) {
            FUN_00dd4920((int)handle);
            handle = 0;
        }
    }
    else {
        cinfoShape(cinfo) = listShape;
        if (FUN_0091fd10(this, handle, cinfo, position, rotation, option) != 0) {
            FUN_010060a0((undefined4 *)listShape);  // shape->removeReference()
            if (bodyList() != 0) {
                vcall<void>(bodyList(), 0x8, &handle);  // push_back
            }
            *result = *handle;
            leaveLock(this);
            return result;
        }
        FUN_010060a0((undefined4 *)listShape);
        if (handle != 0) {
            FUN_00dd4920((int)handle);
            handle = 0;
            *result = 0;
            leaveLock(this);
            return result;
        }
    }
    *result = 0;
    leaveLock(this);
    return result;
}

// 009264E0  RigidBodyManagerImplement::vf00  size=30  [class]
undefined4 *RigidBodyManagerImplement::vf00(byte flags)
{
    using namespace RigidBodyManagerImplement_p1;
    thiscall<void>(DTOR_BODY_00921360, this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00926500  RigidBodyManagerImplement::vf1C  size=3624  [class]
// "combine": picks, for each of the 8 diagonal directions (+-1, +-1, +-1), the scaled vertex
// farthest from the centroid, drops near-duplicates (0.001), builds the convex hull of what is
// left (at least 3 points) as an hkpConvexVerticesShape, computes its mass properties when the
// cinfo has a mass, and creates the body with FUN_00922210.  Refused while the Havok heap has
// 786432 bytes or less free.
unsigned int *RigidBodyManagerImplement::vf1C(unsigned int *result, void *cinfo,
                                              const float *transform, const float *vertices,
                                              int unused5, int unused6, short vertexCount,
                                              int option)
{
    using namespace RigidBodyManagerImplement_p1;
    enterLock(this);
    unsigned int freeBytes = thiscall<unsigned int>(HW_HEAP_GET_FREE_SIZE, DAT_01b7c218);
    float freeSize = (float)(int)freeBytes;
    if ((int)freeBytes < 0) {
        freeSize = freeSize + 4294967296.0f;
    }
    if (freeSize > 786432.0f) {
        unsigned int *handle = allocHandle(this);
        if (handle != 0) {
            int count = vertexCount;
            ArrayPair arrays;
            HkArray16 &points = arrays.first;
            points.data = 0;
            points.size = 0;
            arrays.second.data = 0;
            arrays.second.size = 0;
            points.capacityAndFlags = 0x80000000;
            arrays.second.capacityAndFlags = 0x80000000;

            float scaleX = x87Sqrt((transform[0] * transform[0] + transform[1] * transform[1]) +
                                   transform[2] * transform[2]);
            float scaleY = x87Sqrt((transform[4] * transform[4] + transform[5] * transform[5]) +
                                   transform[6] * transform[6]);
            float scaleZ = x87Sqrt((transform[9] * transform[9] + transform[8] * transform[8]) +
                                   transform[10] * transform[10]);

            // centroid of the unscaled vertices
            float sumX = 0.0f;
            float sumY = 0.0f;
            float sumZ = 0.0f;
            for (int i = 0; i < count; i++) {
                sumX = sumX + vertices[i * 4];
                sumY = sumY + vertices[i * 4 + 1];
                sumZ = sumZ + vertices[i * 4 + 2];
            }
            float centroidX = sumX / (float)count;
            float centroidY = sumY / (float)count;
            float centroidZ = sumZ / (float)count;

            Vec4 directions[8];  // w is not set
            directions[0].x = 1.0f;  directions[0].y = 1.0f;  directions[0].z = 1.0f;
            directions[1].x = -1.0f; directions[1].y = 1.0f;  directions[1].z = 1.0f;
            directions[2].x = 1.0f;  directions[2].y = -1.0f; directions[2].z = 1.0f;
            directions[3].x = -1.0f; directions[3].y = -1.0f; directions[3].z = 1.0f;
            directions[4].x = 1.0f;  directions[4].y = 1.0f;  directions[4].z = -1.0f;
            directions[5].x = -1.0f; directions[5].y = 1.0f;  directions[5].z = -1.0f;
            directions[6].x = 1.0f;  directions[6].y = -1.0f; directions[6].z = -1.0f;
            directions[7].x = -1.0f; directions[7].y = -1.0f; directions[7].z = -1.0f;

            Vec4 candidate;  // w is never written
            Vec4 best;
            for (int d = 0; d < 8; d++) {
                Vec4 *dir = &directions[d];
                float lengthSq = (dir->x * dir->x + dir->y * dir->y) + dir->z * dir->z;
                if (!(lengthSq <= 0.0f) && !isNan(dir->x) && !isNan(dir->y) && !isNan(dir->z)) {
                    FUN_00ddf460(&dir->x, &dir->x);  // normalise in place
                }
                else {
                    DebugPrint(DAT_0163d0ac);
                    dir->x = 0.0f;
                    dir->y = 1.0f;
                    dir->z = 0.0f;
                }

                // farthest scaled vertex along dir (measured from the centroid)
                float bestDot = 1.17549435e-38f;
                best.x = vertices[0] * scaleX;
                best.y = scaleY * vertices[1];
                best.z = scaleZ * vertices[2];
                for (int i = 0; i < count; i++) {
                    const float *vertex = vertices + i * 4;
                    candidate.x = vertex[0] * scaleX;
                    candidate.y = vertex[1] * scaleY;
                    candidate.z = vertex[2] * scaleZ;
                    float dot = ((candidate.x - centroidX) * dir->x + (candidate.y - centroidY) * dir->y) +
                                dir->z * (candidate.z - centroidZ);
                    if (dot >= bestDot) {
                        bestDot = dot;
                        best = candidate;
                    }
                }

                if (points.size == (int)(points.capacityAndFlags & 0x3FFFFFFF)) {
                    FUN_0100a290((int *)&PTR_vftable_018e9b94, (undefined4 *)&points, 0x10);  // reserve more
                }
                points.data[points.size] = best;
                points.size = points.size + 1;
            }

            // drop points within 0.001 (x, y and z) of an earlier one; the last point fills the gap
            int size = points.size;
            Vec4 *data = points.data;
            if (size > 0) {
                int i = 0;
                bool more;
                do {
                    int j = i + 1;
                    if (j < size) {
                        do {
                            Vec4 *a = &data[i];
                            Vec4 *b = &data[j];
                            if (absBits(a->x - b->x) <= 0.001f && absBits(a->y - b->y) <= 0.001f &&
                                absBits(a->z - b->z) <= 0.001f) {
                                size = size - 1;
                                points.size = size;
                                if (j == size) {
                                    break;
                                }
                                data[j] = data[size];
                            }
                            else {
                                j = j + 1;
                            }
                        } while (j < size);
                    }
                    more = i + 1 < size;
                    i = i + 1;
                } while (more);
            }

            if (size < 3) {
                if (handle != 0) {
                    FUN_00dd4920((int)handle);
                    handle = 0;
                }
                *result = 0;
                clearArray16(arrays.second);
                clearArray16(points);
                leaveLock(this);
                return result;
            }

            StridedVertices stridedVertices;
            stridedVertices.numVertices = size;
            stridedVertices.vertices = data;
            stridedVertices.striding = 0x10;
            PlaneArray planes;
            planes.header.data = planes.storage;
            planes.header.size = 0;
            planes.header.capacityAndFlags = 0x80000020;

            ArrayPair *geometry = (ArrayPair *)heapAlloc(0x18);  // hkGeometry
            if (geometry == 0) {
                if (handle != 0) {
                    FUN_00dd4920((int)handle);
                    handle = 0;
                }
                *result = 0;
                clearArray16(planes.header);
                clearArray16(arrays.second);
                clearArray16(points);
                leaveLock(this);
                return result;
            }
            geometry->first.data = 0;
            geometry->first.size = 0;
            geometry->first.capacityAndFlags = 0x80000000;
            geometry->second.data = 0;
            geometry->second.size = 0;
            geometry->second.capacityAndFlags = 0x80000000;
            FUN_01074110((undefined4)&stridedVertices, (undefined4)geometry, (undefined4)&planes);  // convex hull

            void *memory = heapAlloc(0x70);
            fld<unsigned short>(memory, 4) = 0x70;  // hkReferencedObject::m_memSizeAndFlags
            void *shape = thiscall<void *>(HKP_CONVEX_VERTICES_CTOR, memory, &stridedVertices, &planes, 0.01f);
            cinfoShape(cinfo) = shape;
            if (shape == 0) {
                FUN_009211c0((undefined4 *)geometry);
                heapFree(geometry, 0x18);
            }
            else {
                int inertiaDefaulted = 1;
                if (0.0f < cinfoMass(cinfo)) {
                    MassProperties massProperties;
                    massProperties.volume = 0.0f;
                    massProperties.mass = 0.0f;
                    massProperties.centerOfMass.x = 0.0f;
                    massProperties.centerOfMass.y = 0.0f;
                    massProperties.centerOfMass.z = 0.0f;
                    massProperties.centerOfMass.w = 0.0f;
                    for (int row = 0; row < 3; row++) {
                        massProperties.inertia[row].x = 0.0f;
                        massProperties.inertia[row].y = 0.0f;
                        massProperties.inertia[row].z = 0.0f;
                        massProperties.inertia[row].w = 0.0f;
                    }
                    FUN_010615c0((undefined4 *)geometry, cinfoMass(cinfo), (float *)&massProperties);
                    Vec4 inertia0 = massProperties.inertia[0];
                    Vec4 inertia1 = massProperties.inertia[1];
                    Vec4 inertia2 = massProperties.inertia[2];
                    if (inertia0.x == 0.0f && inertia0.y == 0.0f && inertia0.z == 0.0f &&
                        inertia1.x == 0.0f && inertia1.y == 0.0f && inertia1.z == 0.0f &&
                        inertia2.x == 0.0f && inertia2.y == 0.0f && inertia2.z == 0.0f) {
                        // identity rows (0x01701CA0)
                        inertia0.x = 1.0f; inertia0.y = 0.0f; inertia0.z = 0.0f; inertia0.w = 0.0f;
                        inertia1.x = 0.0f; inertia1.y = 1.0f; inertia1.z = 0.0f; inertia1.w = 0.0f;
                        inertia2.x = 0.0f; inertia2.y = 0.0f; inertia2.z = 1.0f; inertia2.w = 0.0f;
                        inertiaDefaulted = 0;
                    }
                    cinfoInertia(cinfo)[0] = inertia0;
                    cinfoInertia(cinfo)[1] = inertia1;
                    cinfoInertia(cinfo)[2] = inertia2;
                    cinfoMass(cinfo) = massProperties.mass;
                    cinfoMotionType(cinfo) = 1;
                    if (massProperties.mass < 0.05f) {
                        cinfoMass(cinfo) = 0.05f;
                    }
                    cinfoCenterOfMass(cinfo) = massProperties.centerOfMass;
                    cinfoQualityType(cinfo) = 5;
                    cinfoByteC8(cinfo) = 3;
                }
                else {
                    cinfoMotionType(cinfo) = 4;
                }
                FUN_009211c0((undefined4 *)geometry);
                heapFree(geometry, 0x18);

                int created = thiscall<int>(FUN_00922210, this, handle, cinfo, transform, option);
                if (created != 0) {
                    FUN_010060a0((undefined4 *)cinfoShape(cinfo));  // shape->removeReference()
                    if (bodyList() != 0) {
                        vcall<void>(bodyList(), 0x8, &handle);  // push_back
                    }
                    if (inertiaDefaulted == 0) {
                        char guardA;
                        char guardB;
                        havokLock(&guardA);
                        int body = (int)*handle;
                        havokLock(&guardB);
                        unsigned int *props;
                        if (body != 0 && (props = bodyProps(body)) != 0) {
                            props[2] = props[2] | 0x10;  // property 0 |= 0x10
                            props[0] = props[0] | 1;
                        }
                        havokUnlock();
                        havokUnlock();
                    }
                    *result = *handle;
                    clearArray16(planes.header);
                    FUN_009211c0((undefined4 *)&arrays);
                    leaveLock(this);
                    return result;
                }
                FUN_010060a0((undefined4 *)cinfoShape(cinfo));
            }

            if (handle != 0) {
                FUN_00dd4920((int)handle);
                handle = 0;
            }
            *result = 0;
            clearArray16(planes.header);
            FUN_009211c0((undefined4 *)&arrays);
            leaveLock(this);
            return result;
        }
    }
    else {
        cdeclcall<void>(FUN_00dd5650, DAT_0164d3d0, 1.5);
    }
    *result = 0;
    leaveLock(this);
    return result;
}
