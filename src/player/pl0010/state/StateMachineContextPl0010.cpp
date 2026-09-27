// src/player/pl0010/state/StateMachineContextPl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "StateMachineContextPl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01be9ef4[];  // type record of StateMachineContextPl0010 (returned by vf00)
extern unsigned char DAT_01b353e0[];  // type record the "Pl001c" objects are checked against
extern unsigned char DAT_01b7bd48[];  // default heap / allocator object (vftable; slot 0x18 = free size)
extern unsigned char DAT_01be9a98[];  // object table searched by FUN_00a82090 (find by name / id)
extern unsigned char DAT_0163cadc[];  // "cFixedVector::create <alloc failed>[%s need:%d Allocatable:%d]"

namespace StateMachineContextPl0010_p1 {

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

// cEspControler::cEspControler() -- a constructor cannot be called by name
static void *const kEspControlerCtor = (void *)0x00EAA060;
// cEspControler::~cEspControler() (the class is only forward-declared here)
static void *const kEspControlerDtor = (void *)0x00EAA9B0;
// vftable of lib::AllocatedArray<FreeRunActivity::Info> (stored by its inlined constructor)
static const int kAllocatedArrayInfoVftable = 0x016A2814;

// obj when its type record (vftable slot 4) derives from `record`, else 0
inline int asKind(int obj, unsigned char *record)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>((void *)obj, 0x4), (undefined4 *)record);
    return isKind != 0 ? obj : 0;
}

// Frees a heap buffer (inlined buffer destructor / clear)
inline void freeBuffer(StateMachineContextPl0010::Buffer &buffer)
{
    if (buffer.data != 0) {
        buffer.count = 0;
        if (buffer.owned != 0) {
            FUN_00dd48d0(buffer.data, 0);
            buffer.owned = 0;
        }
        buffer.data = 0;
        buffer.capacity = 0;
    }
}

// Allocates `bytes` (32-byte aligned) for a buffer of `capacity` entries; prints the
// cFixedVector allocation failure otherwise.
inline void allocBuffer(StateMachineContextPl0010::Buffer &buffer, int bytes, int capacity)
{
    if (buffer.data == 0) {
        int block = thiscall<int>(FUN_00dd29b0, DAT_01b7bd48, bytes, 0x20, 0, 0);
        buffer.data = block;
        if (block == 0) {
            // Ghidra shows FUN_00dd2960(bytes, free) + FUN_00dd5650(fmt, name); the machine code
            // pushes free and bytes, calls FUN_00dd2960 (ECX = heap only, returns the heap
            // name) and passes all three to FUN_00dd5650, cleaning 0x10 bytes.
            int allocatable = vcall<int>(DAT_01b7bd48, 0x18);
            int heapName = (int)FUN_00dd2960((int)DAT_01b7bd48);
            cdeclcall<void>(FUN_00dd5650, DAT_0163cadc, heapName, bytes, allocatable);
        }
        else {
            buffer.capacity = capacity;
            buffer.count = 0;
            buffer.owned = 1;
        }
    }
}

// Releases the object behind a handle (FUN_00a81330 resolves it, FUN_00a805f0 releases it).
inline void releaseHandleObject(undefined4 *handle)
{
    int object = FUN_00a81330((uint *)handle);
    if (object != 0) {
        FUN_00a805f0(object);
    }
}

// Finds the object `name`/`id` in DAT_01be9a98 and stores it in `handle`.
inline void findIntoHandle(undefined4 *handle, const char *name, int id)
{
    int found = thiscall<int>(FUN_00a82090, DAT_01be9a98, name, id, 0);
    if (found != 0) {
        int value = FUN_00a7c7f0(found);
        FUN_00a7c960(handle, (undefined4 *)value);
    }
}

// FreeRunActivity::Info as built on the stack by the constructor (0x68 bytes; the array
// stores entries 0x70 apart).
struct FreeRunInfo {
    int active;          // +0x00 1
    int detected;        // +0x04
    float vec08[4];      // +0x08
    int field18;         // +0x18
    float field1C;       // +0x1C
    int field20;         // +0x20
    int field24;         // +0x24
    int field28;         // +0x28
    int field2C;         // +0x2C
    int field30;         // +0x30
    unsigned char gap34[0x40 - 0x34];
    float vec40[8];      // +0x40
    undefined4 handle60; // +0x60 object handle (FUN_00a7c930 / FUN_00a7c950)
    undefined4 handle64; // +0x64 object handle
};

}  // namespace StateMachineContextPl0010_p1

// 00BD3340  StateMachineContextPl0010::~StateMachineContextPl0010  size=710  [class]
StateMachineContextPl0010::~StateMachineContextPl0010()
{
    using namespace StateMachineContextPl0010_p1;

    // vftable = StateMachineContextPl0010::vftable (0x016A27EC)
    if (activities() != 0) {
        vcall<void>((void *)activities(), 0x0, 1);  // scalar deleting destructor
        activities() = 0;
    }
    freeBuffer(buffer348());
    FUN_00a7c950(handle320());
    field324() = 0.0f;
    field328() = 0.0f;
    buffer594().count = 0;
    buffer5A8().count = 0;
    buffer5BC().count = 0;
    freeBuffer(buffer594());
    freeBuffer(buffer5A8());
    freeBuffer(buffer5BC());
    releaseHandleObject(&pl001cHandles()[0]);
    releaseHandleObject(&pl001cHandles()[1]);
    pl001cObject0() = 0;
    pl001cObject1() = 0;
    releaseHandleObject(effectDiskDummyHandle());
    releaseHandleObject(cameraDummyHandle());
    FUN_00a7c950(effectDiskDummyHandle());
    FUN_00a7c950(cameraDummyHandle());
    field5DC() = 0;
    freeBuffer(buffer5BC());
    freeBuffer(buffer5A8());
    freeBuffer(buffer594());
    freeBuffer(buffer4AC());
    freeBuffer(buffer348());
    thiscall<void>(kEspControlerDtor, espControler240());
    thiscall<void>(kEspControlerDtor, espControler190());
    // vftable = StateMachineContext::vftable (0x016A1318)
}

// 00BD3610  StateMachineContextPl0010::vf00  size=6  [class]
undefined *StateMachineContextPl0010::vf00()
{
    return DAT_01be9ef4;
}

// 00BE6600  StateMachineContextPl0010::vf04  size=30  [class]
// Scalar deleting destructor.
undefined4 *StateMachineContextPl0010::vf04(byte flags)
{
    this->~StateMachineContextPl0010();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BF1BA0  StateMachineContextPl0010::StateMachineContextPl0010  size=2371  [class]
StateMachineContextPl0010::StateMachineContextPl0010(undefined4 baseArg, undefined4 ownerArg)
    : StateMachineContext(baseArg)
{
    using namespace StateMachineContextPl0010_p1;

    field10() = 0.0f;
    field70() = 0.0f;
    owner() = (void *)ownerArg;
    field74() = 0.0f;
    // vftable = StateMachineContextPl0010::vftable (0x016A27EC)
    field14() = 0;
    field34() = 0;
    upperMotionsStarted() = 0;
    field7C() = 0;
    field80() = 0;
    FUN_00a7f290((undefined4 *)object90(), 0);
    fieldC4() = 0;
    fieldC8() = 0;
    fieldCC() = 0;
    fieldD0() = 0.0f;
    thiscall<void>(kEspControlerCtor, espControler190());
    thiscall<void>(kEspControlerCtor, espControler240());
    FUN_00a7c930(handle320());
    FUN_00a7c930(handle338());
    field344() = 0;
    buffer348().data = 0;
    buffer348().capacity = 0;
    buffer348().count = 0;
    buffer348().owned = 0;
    undefined4 *handle = pl001cHandles();
    int left = 1;
    do {
        FUN_00a7c930(handle);
        handle++;
        left--;
    } while (-1 < left);
    FUN_00a7c930(handle404());
    field4A8() = 0;
    buffer4AC().data = 0;
    buffer4AC().capacity = 0;
    buffer4AC().count = 0;
    buffer4AC().owned = 0;
    FUN_00a7c930(effectDiskDummyHandle());
    FUN_00a7c930(cameraDummyHandle());
    FUN_00a7c930(handle534());
    field590() = 0;
    buffer594().data = 0;
    buffer594().capacity = 0;
    buffer594().count = 0;
    buffer594().owned = 0;
    field5A4() = 0;
    buffer5A8().data = 0;
    buffer5A8().capacity = 0;
    buffer5A8().count = 0;
    buffer5A8().owned = 0;
    field5B8() = 0;
    buffer5BC().data = 0;
    buffer5BC().capacity = 0;
    buffer5BC().count = 0;
    buffer5BC().owned = 0;
    vec20()[0] = 0.0f;
    vec20()[1] = 0.0f;
    vec20()[2] = 0.0f;
    vec20()[3] = 0.0f;
    vec50()[0] = 0.0f;
    vec50()[1] = 0.0f;
    vec50()[2] = 0.0f;
    vec50()[3] = 0.0f;
    vec60()[0] = 0.0f;
    vec60()[1] = 0.0f;
    vec60()[2] = 0.0f;
    vec60()[3] = 0.0f;

    // new lib::AllocatedArray<FreeRunActivity::Info> (0x18 bytes, inlined constructor)
    int *activityArray = cdeclcall<int *>(FUN_00dd3500, 0x18, DAT_01b7bd48);
    if (activityArray == 0) {
        activityArray = 0;
    }
    else {
        activityArray[1] = 0;
        activityArray[2] = 0;
        activityArray[3] = 0;
        activityArray[0] = kAllocatedArrayInfoVftable;
        activityArray[4] = 0;
        activityArray[5] = 0;
    }
    unsigned char *heap = DAT_01b7bd48;
    FUN_00be6d80((int)activityArray, 0x1e, (undefined4 *)&heap);  // reserve 30 entries
    int remaining = 0x1e;
    do {
        FreeRunInfo info;
        info.active = 1;
        FUN_00a7c930(&info.handle60);
        FUN_00a7c930(&info.handle64);
        info.vec08[0] = 0.0f;
        info.vec08[1] = 0.0f;
        info.detected = 0;
        info.vec08[2] = 0.0f;
        info.field18 = 0;
        info.vec08[3] = 0.0f;
        info.field24 = 0;
        info.field1C = 0.0f;
        info.field20 = 0;
        info.vec40[0] = 0.0f;
        info.field2C = 0;
        info.vec40[1] = 0.0f;
        info.field28 = 0;
        info.vec40[2] = 0.0f;
        info.field30 = 0;
        info.vec40[3] = 0.0f;
        info.vec40[4] = 0.0f;
        info.vec40[5] = 0.0f;
        info.vec40[6] = 0.0f;
        info.vec40[7] = 0.0f;
        FUN_00a7c950(&info.handle60);
        FUN_00a7c950(&info.handle64);
        vcall<void>(activityArray, 0x8, &info);  // push_back
        remaining--;
    } while (remaining != 0);

    field8C() = 0.0f;
    activities() = (int)activityArray;
    field110() = 0;
    field18C() = 4.0f;
    field308() = 0;
    field310() = 0;
    field318() = 0;
    field180() = 0.0f;
    field31C() = 0;
    field2F0() = 0;
    field184() = 180.0f;
    field2F4() = 0;
    field304() = 0;
    field2F8() = 0;
    field2FC() = 0;
    FUN_00a7c950(handle338());
    allocBuffer(buffer348(), 0x20, 8);
    field32C() = 1;
    field33C() = 36.0f;
    pl001cObject0() = 0;
    pl001cObject1() = 0;
    field340() = 185.0f;
    field374() = 0.0f;
    field378() = 0.0f;
    field37C() = 0.0f;
    field380() = 0.0f;
    field3C0() = 0.0f;
    vec3A0()[0] = 0.0f;
    vec3A0()[1] = 0.0f;
    vec3A0()[2] = 0.0f;
    vec3A0()[3] = 1.0f;
    vec3B0()[3] = 1.0f;
    vec3B0()[0] = 0.0f;
    vec3B0()[1] = 0.0f;
    vec3B0()[2] = 0.0f;
    field560() = 1.6f;
    field3C8() = 0;
    field3E0() = 0;
    field3E4() = 0;
    field3E8() = 0;
    field3CC() = 0.0f;
    vec3D0()[0] = 1.0f;
    vec3D0()[1] = 1.0f;
    vec3D0()[2] = 1.0f;
    vec3D0()[3] = 1.0f;
    FUN_00a7c950(handle404());
    field408() = -1;
    field40C() = -1;
    vec410()[0] = 0.0f;
    vec410()[1] = 0.0f;
    vec410()[2] = 0.0f;
    vec410()[3] = 1.0f;
    vec420()[3] = 1.0f;
    vec420()[0] = 0.0f;
    vec420()[1] = 0.0f;
    vec420()[2] = 0.0f;
    vec430()[0] = 0.0f;
    vec430()[1] = 0.0f;
    vec430()[2] = 0.0f;
    vec430()[3] = 1.0f;
    field478() = 1;
    field470() = 0.5235988f;  // 30 degrees
    field47C() = 0;
    field474() = 0.5235988f;
    field480() = 0;
    field484() = 0;
    vec490()[0] = 0.0f;
    vec490()[1] = 0.0f;
    vec490()[2] = 0.0f;
    vec490()[3] = 1.0f;
    field4A0() = 0;
    field3EC() = 0;
    field3F8() = 0.0f;
    field3F0() = 0;
    field400() = 0.0f;
    field370() = 0;
    field3F4() = 0;
    field3FC() = 0;
    FUN_00a7c950(effectDiskDummyHandle());
    FUN_00a7c950(cameraDummyHandle());
    FUN_00a7c950(handle534());
    vec4E0()[0] = 0.0f;
    vec4E0()[1] = 0.0f;
    vec4E0()[2] = 0.0f;
    vec4E0()[3] = 1.0f;
    vec4F0()[3] = 1.0f;
    vec4F0()[0] = 0.0f;
    vec4F0()[1] = 0.0f;
    vec4F0()[2] = 0.0f;
    field500() = 0;
    vec510()[0] = 0.0f;
    vec510()[1] = 0.0f;
    vec510()[2] = 0.0f;
    vec510()[3] = 1.0f;
    field520() = 0;
    field188() = 0;
    field574() = 2.6f;
    fieldD8() = 0;
    fieldDC() = 0;
    fieldE0() = 0;
    fieldE4() = 0;
    fieldE8() = 0;
    fieldEC() = 0;
    fieldF0() = 0;
    field334() = 0;
    fieldF4() = 0;
    fieldF8() = 0;
    fieldFC() = 0;
    field100() = 0;
    allocBuffer(buffer594(), 0xe00, 0x20);
    allocBuffer(buffer5A8(), 0xe00, 0x20);
    allocBuffer(buffer5BC(), 0x380, 8);

    // the two "Pl001c" objects
    findIntoHandle(&pl001cHandles()[0], "Pl001c", 0x1001c);
    int object = FUN_00a81330((uint *)&pl001cHandles()[0]);
    if (object != 0) {
        pl001cObject0() = asKind((int)FUN_00a7c8a0(object), DAT_01b353e0);
    }
    findIntoHandle(&pl001cHandles()[1], "Pl001c", 0x1001c);
    object = FUN_00a81330((uint *)&pl001cHandles()[1]);
    if (object != 0) {
        pl001cObject1() = asKind((int)FUN_00a7c8a0(object), DAT_01b353e0);
    }

    // the zangeki dummies
    findIntoHandle(effectDiskDummyHandle(), "zangekiEffectDiskDummy", 0x40006);
    if (FUN_00a81330((uint *)effectDiskDummyHandle()) == 0) {
        cdeclcall<void>(FUN_00dd5650, "zangekiStatePl0010::startup failed to create EffectDiskDummy");
    }
    findIntoHandle(cameraDummyHandle(), "zangekiCameraDummy", 0x4000d);
    if (FUN_00a81330((uint *)cameraDummyHandle()) == 0) {
        cdeclcall<void>(FUN_00dd5650, "zangekiStatePl0010::startup failed to create CameraDummy");
    }
    object = FUN_00a81330((uint *)cameraDummyHandle());
    if (FUN_00a7c8a0(object) == 0) {
        cdeclcall<void>(FUN_00dd5650, "zangekiStatePl0010::startup failed to setRoutine CameraDummy");
    }
    object = FUN_00a81330((uint *)cameraDummyHandle());
    int routine = (int)FUN_00a7c8a0(object);
    thiscall<void>(FUN_00a8caf0, (void *)routine, 1, 0, 0, 0);

    field5CC() = -1.0f;
    field528() = 0;
    field52C() = 0;
    field5D0() = 0.3f;
    vec580()[0] = 0.0f;
    vec580()[1] = 0.0f;
    vec580()[2] = 0.0f;
    vec580()[3] = 1.0f;
    vec360()[3] = 1.0f;
    vec360()[0] = 0.0f;
    vec360()[1] = 0.0f;
    vec360()[2] = 0.0f;
    field5D4() = 0;
    field370() = 0;
    field5D8() = 0.0f;
    field5DC() = 0;
}
