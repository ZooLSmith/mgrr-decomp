// src/managers/scenebgmanager/SceneBgManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SceneBgManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern SceneBgManagerImplement *DAT_01bea180;  // the SceneBgManagerImplement instance
extern unsigned char DAT_01dc53d8[];           // type record tested by EntityDeletedSlot::vf18

// ---------------------------------------------------------------------------------------------
// Helpers.  The raw decompilation dropped the ECX argument of most callees (the SceneBgWork slot
// the loop is visiting); the disassembly shows it, so it is passed here.  Callees whose
// functions.h prototype does not match the machine code are called through a cast.
// ---------------------------------------------------------------------------------------------
namespace SceneBgManagerImplement_p1 {

typedef SceneBgManagerImplement::SceneBgWork SceneBgWork;

// number of SceneBgWork slots
const int kWorkCount = 8;

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

// FUN_00dd3500: allocate `size` bytes from `heap`
inline void *MemAlloc(unsigned int size, void *heap)
{
    return cdeclcall<void *>(FUN_00dd3500, size, heap);
}

// FUN_00d89ec0: register `slot` for signal `id` (functions.h lists only one parameter)
inline void RegisterSlot(int id, void *slot)
{
    cdeclcall<void>(FUN_00d89ec0, id, slot);
}

// FUN_00933750 (SceneBgWork, ECX = work): functions.h says bool, the callers use all of EAX
inline int WorkState(SceneBgWork *work)
{
    return ((int (__fastcall *)(int))FUN_00933750)((int)work);
}

// Function at 0x00C5EB00 (FILEMAP: SceneBgManager::SceneBgManager): the destructor body of
// SceneBgManagerImplement (it writes this class's vftable and unregisters the 0x3A slot)
inline void DestroyBody(SceneBgManagerImplement *self)
{
    ((void (__thiscall *)(void *))0x00C5EB00)(self);
}

// x87 fabs
inline double AbsD(double value)
{
    return value < 0.0 ? -value : value;
}

}  // namespace SceneBgManagerImplement_p1

// 00C17C70  SceneBgManagerImplement::PredicateRigidBodyBase::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *SceneBgManagerImplement::PredicateRigidBodyBase::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C17D20  SceneBgManagerImplement::vf94  size=53  [class]
// Forwards (arg1, arg2) to FUN_00934890 of every slot whose id is `id`.  ret 0xC.
void SceneBgManagerImplement::vf94(int id, undefined4 arg1, undefined4 arg2)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() == id) {
            thiscall<void>(FUN_00934890, work, arg1, arg2);
        }
    }
}

// 00C17D60  SceneBgManagerImplement::vf5C  size=42  [class]
void SceneBgManagerImplement::vf5C(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_00934810((int)work);
        }
    }
}

// 00C17D90  SceneBgManagerImplement::vf60  size=42  [class]
void SceneBgManagerImplement::vf60(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_00934850((int)work);
        }
    }
}

// 00C17DC0  SceneBgManagerImplement::vf68  size=70  [class]
// Object `index` counted over all slots (free slots included): FUN_00933d60 of the slot that
// holds it, with the slot-local index; 0 when out of range.
undefined4 SceneBgManagerImplement::vf68(int index)
{
    using namespace SceneBgManagerImplement_p1;
    if ((int)this == -8) {  // the binary tests works() == 0
        return 0;
    }
    SceneBgWork *work = works();
    int base = 0;
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        int count = work->objectCount();
        if (index < count + base) {
            return thiscall<undefined4>(FUN_00933d60, work, index - base);
        }
        base = count + base;
    }
    return 0;
}

// 00C17E10  SceneBgManagerImplement::vf64  size=42  [class]
void SceneBgManagerImplement::vf64(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_00933db0((int)work);
        }
    }
}

// 00C17E40  SceneBgManagerImplement::vf40  size=53  [class]
// First non-zero FUN_009340d0(arg) of the used slots, else 0.
int SceneBgManagerImplement::vf40(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() != -1) {
            int result = thiscall<int>(FUN_009340d0, work, (int)arg);
            if (result != 0) {
                return result;
            }
        }
    }
    return 0;
}

// 00C17E80  SceneBgManagerImplement::vf44  size=44  [class]
void SceneBgManagerImplement::vf44(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_00934130, work, (float *)arg);
        }
    }
}

// 00C17EB0  SceneBgManagerImplement::vf48  size=44  [class]
void SceneBgManagerImplement::vf48(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_009341d0, work, (float *)arg);
        }
    }
}

// 00C17EE0  SceneBgManagerImplement::vf4C  size=44  [class]
void SceneBgManagerImplement::vf4C(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_00934270, work, (int)arg);
        }
    }
}

// 00C17F10  SceneBgManagerImplement::vf50  size=44  [class]
void SceneBgManagerImplement::vf50(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_00934320, work, (int)arg);
        }
    }
}

// 00C17F40  SceneBgManagerImplement::vf54  size=44  [class]
void SceneBgManagerImplement::vf54(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_009343d0, work, (float *)arg);
        }
    }
}

// 00C17F70  SceneBgManagerImplement::vf58  size=44  [class]
void SceneBgManagerImplement::vf58(undefined4 arg)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            thiscall<void>(FUN_00934470, work, (float *)arg);
        }
    }
}

// 00C17FD0  SceneBgManagerImplement::vf34  size=35  [class]
void SceneBgManagerImplement::vf34()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        FUN_00934ab0((int)work);
    }
}

// 00C18000  SceneBgManagerImplement::vf24  size=37  [class]
// The binary pops 2 unused stack arguments (ret 8).
void SceneBgManagerImplement::vf24()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        ((void (__fastcall *)(int))FUN_009338b0)((int)work);
    }
}

// 00C18030  SceneBgManagerImplement::vf28  size=37  [class]
// The binary pops 2 unused stack arguments (ret 8).
void SceneBgManagerImplement::vf28()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        FUN_00933f00((int)work);
    }
}

// 00C18060  SceneBgManagerImplement::vf2C  size=37  [class]
// The binary pops 2 unused stack arguments (ret 8).
void SceneBgManagerImplement::vf2C()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        ((void (__fastcall *)(int))FUN_009338c0)((int)work);
    }
}

// 00C18090  SceneBgManagerImplement::vf30  size=37  [class]
// The binary pops 2 unused stack arguments (ret 8).
void SceneBgManagerImplement::vf30()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        ((void (__fastcall *)(int))FUN_009338d0)((int)work);
    }
}

// 00C180C0  SceneBgManagerImplement::vf1C  size=31  [class]
// 1 when no slot has flag48 set.
undefined4 SceneBgManagerImplement::vf1C()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->flag48() != 0) {
            return 0;
        }
    }
    return 1;
}

// 00C180E0  SceneBgManagerImplement::vf20  size=36  [class]
// 1 when no used slot has flag48 set.
undefined4 SceneBgManagerImplement::vf20()
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->flag48() != 0 && work->id() != -1) {
            return 0;
        }
    }
    return 1;
}

// 00C18110  SceneBgManagerImplement::vf6C  size=112  [class]
// Total object count of the used slots (the binary unrolls this loop).
int SceneBgManagerImplement::vf6C()
{
    using namespace SceneBgManagerImplement_p1;
    int total = 0;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            total = total + work->objectCount();
        }
    }
    return total;
}

// 00C18180  SceneBgManagerImplement::vf70  size=64  [class]
// Object `index` counted over the used slots: FUN_00933e80 of the slot that holds it, with the
// slot-local index; 0 when out of range.
undefined4 SceneBgManagerImplement::vf70(int index)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    int base = 0;
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() != -1) {
            int end = work->objectCount() + base;
            if (index < end) {
                return thiscall<undefined4>(FUN_00933e80, work, index - base);
            }
            base = end;
        }
    }
    return 0;
}

// 00C181C0  SceneBgManagerImplement::vf98  size=3  [class]
// Empty; the binary pops 1 unused stack argument (ret 4).
void SceneBgManagerImplement::vf98()
{
}

// 00C181D0  SceneBgManagerImplement::vf04  size=56  [class]
// Starts the 0.5 s wait that vf00 counts down, then FUN_00933ff0 on every used slot.
void SceneBgManagerImplement::vf04()
{
    using namespace SceneBgManagerImplement_p1;
    waitTimer() = 0.5f;
    waitActive() = 1;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            FUN_00933ff0((int)work);
        }
    }
}

// 00C18240  FUN_00c18240  size=104  [between]
// Per-frame update of the used slots (called first by SceneBgManagerImplement::vf00).
void __fastcall FUN_00c18240(int self)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgManagerImplement *manager = (SceneBgManagerImplement *)self;
    SceneBgWork *work = manager->works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            int before = WorkState(work);
            if (work->flag50() != 0) {
                FUN_00935420((int)work);
                int after = WorkState(work);
                if (before != after) {
                    FUN_00933900((int)work);
                }
                if (work->flag4C() == 0) {
                    FUN_00935420((int)work);
                    if (work->flag54() != 0) {
                        FUN_00934940((int)work);
                        FUN_00933910((int)work);
                    }
                }
            }
        }
    }
}

// 00C18320  SceneBgManagerImplement::EntityDeletedSlot::vf10  size=1  [class]
void SceneBgManagerImplement::EntityDeletedSlot::vf10()
{
}

// 00C18330  SceneBgManagerImplement::EntityDeletedSlot::vf14  size=13  [class]
// Deletes the slot through its scalar deleting destructor (slot 0x0, flags 1).
void SceneBgManagerImplement::EntityDeletedSlot::vf14()
{
    using namespace SceneBgManagerImplement_p1;
    EntityDeletedSlot *self = this;
    if (self != 0) {
        vcall<void>(self, 0x0, 1);
    }
}

// 00C29AD0  SceneBgManagerImplement::DisableHitByRange::vf04  size=129  [class]
// Disables the hit of the rigid body when its position lies in [minPoint, maxPoint].
void SceneBgManagerImplement::DisableHitByRange::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    float *low = minPoint();
    if (low[0] <= position[0]) {
        float *high = maxPoint();
        if (position[0] <= high[0] && low[1] <= position[1] && position[1] <= high[1] &&
            low[2] <= position[2] && position[2] <= high[2]) {
            FUN_00916360((undefined4 *)rigidBodyRef);
            return;
        }
    }
}

// 00C29B80  SceneBgManagerImplement::EnableHitByRange::vf04  size=129  [class]
// Enables the hit of the rigid body when its position lies in [minPoint, maxPoint].
void SceneBgManagerImplement::EnableHitByRange::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    float *low = minPoint();
    if (low[0] <= position[0]) {
        float *high = maxPoint();
        if (position[0] <= high[0] && low[1] <= position[1] && position[1] <= high[1] &&
            low[2] <= position[2] && position[2] <= high[2]) {
            FUN_0091a8a0((undefined4 *)rigidBodyRef);
            return;
        }
    }
}

// 00C29C30  SceneBgManagerImplement::DisableHitByRangeX::vf04  size=77  [class]
void SceneBgManagerImplement::DisableHitByRangeX::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (minValue() <= position[0] && position[0] <= maxValue()) {
        FUN_00916360((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29CA0  SceneBgManagerImplement::EnableHitByRangeX::vf04  size=77  [class]
void SceneBgManagerImplement::EnableHitByRangeX::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (minValue() <= position[0] && position[0] <= maxValue()) {
        FUN_0091a8a0((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29D10  SceneBgManagerImplement::DisableHitByRangeY::vf04  size=77  [class]
void SceneBgManagerImplement::DisableHitByRangeY::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (minValue() <= position[1] && position[1] <= maxValue()) {
        FUN_00916360((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29D80  SceneBgManagerImplement::EnableHitByRangeY::vf04  size=77  [class]
void SceneBgManagerImplement::EnableHitByRangeY::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (minValue() <= position[1] && position[1] <= maxValue()) {
        FUN_0091a8a0((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29DF0  SceneBgManagerImplement::DisableHitByRangeZ::vf04  size=77  [class]
// ? The binary compares both bounds against +0x8 (maxValue); kept as is.
void SceneBgManagerImplement::DisableHitByRangeZ::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (maxValue() <= position[2] && position[2] <= maxValue()) {
        FUN_00916360((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29E60  SceneBgManagerImplement::EnableHitByRangeZ::vf04  size=77  [class]
// ? The binary compares both bounds against +0x8 (maxValue); kept as is.
void SceneBgManagerImplement::EnableHitByRangeZ::vf04(int *rigidBodyRef)
{
    using namespace SceneBgManagerImplement_p1;
    float position[4];

    thiscall<undefined4 *>(FUN_00911d10, rigidBodyRef, (undefined4 *)position);
    if (maxValue() <= position[2] && position[2] <= maxValue()) {
        FUN_0091a8a0((undefined4 *)rigidBodyRef);
        return;
    }
}

// 00C29EB0  SceneBgManagerImplement::EntityDeletedSlot::vf18  size=75  [class]
// An entity was deleted: when it is of the type DAT_01dc53d8, FUN_00933e10(entity+0x8) on every
// slot of the manager instance.  ret 8 (`sender` is not read).
void SceneBgManagerImplement::EntityDeletedSlot::vf18(undefined4 sender, int *entity)
{
    using namespace SceneBgManagerImplement_p1;
    if (entity != 0) {
        // entity->vf00() returns its type record; FUN_00dd6d80 = is-kind-of
        undefined4 *type = vcall<undefined4 *>(entity, 0x0);
        if (thiscall<undefined4>(FUN_00dd6d80, type, (undefined4 *)DAT_01dc53d8) != 0) {
            int key = entity[2];
            SceneBgWork *work = DAT_01bea180->works();
            for (int i = 0; i < kWorkCount; i++, work++) {
                thiscall<void>(FUN_00933e10, work, key);
            }
        }
    }
}

// 00C29F00  SceneBgManagerImplement::DisableHitByRange::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *SceneBgManagerImplement::DisableHitByRange::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29F20  SceneBgManagerImplement::EnableHitByRange::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::EnableHitByRange::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29F40  SceneBgManagerImplement::DisableHitByRangeX::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::DisableHitByRangeX::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29F60  SceneBgManagerImplement::EnableHitByRangeX::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::EnableHitByRangeX::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29F80  SceneBgManagerImplement::DisableHitByRangeY::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::DisableHitByRangeY::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29FA0  SceneBgManagerImplement::EnableHitByRangeY::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::EnableHitByRangeY::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29FC0  SceneBgManagerImplement::DisableHitByRangeZ::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::DisableHitByRangeZ::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C29FE0  SceneBgManagerImplement::EnableHitByRangeZ::vf00  size=31  [class]
undefined4 *SceneBgManagerImplement::EnableHitByRangeZ::vf00(byte flags)
{
    // vftable = SceneBgManagerImplement::PredicateRigidBodyBase::vftable (0x016A3754)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C2A000  FUN_00c2a000  size=151  [between]
// ECX = the manager, stack = a PredicateRigidBodyBase: applies predicate->vf04 to every rigid body
// (indices -1 .. count-1 of FUN_00a8c570) of the model of every layout object (vf6C / vf70).
void FUN_00c2a000(int *manager, int *predicate)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgManagerImplement *self = (SceneBgManagerImplement *)manager;
    int rigidBody;

    int objectCount = self->vf6C();
    int objectIndex = 0;
    if (0 < objectCount) {
        do {
            int object = (int)self->vf70(objectIndex);
            if (object != 0) {
                int model = (int)FUN_00a7c8a0(object);
                int source = *(int *)(model + 0x360);  // model+0x360: ? parent model, used when set
                if (*(int *)(model + 0x360) == 0) {
                    source = model;
                }
                short bodyCount = *(short *)(source + 0x358);  // model+0x358: rigid body count
                int bodyIndex = -1;
                if (-1 < bodyCount) {
                    do {
                        thiscall<undefined4>(FUN_00a8c570, (void *)model, (undefined4)&rigidBody,
                                             (undefined4)bodyIndex);
                        if (rigidBody != 0) {
                            vcall<void>(predicate, 0x4, &rigidBody);
                        }
                        bodyIndex = bodyIndex + 1;
                    } while ((short)bodyIndex < bodyCount);
                }
            }
            objectIndex = objectIndex + 1;
        } while (objectIndex < objectCount);
    }
}

// 00C2A0A0  SceneBgManagerImplement::vf08  size=46  [class]
void SceneBgManagerImplement::vf08(int *idRef)
{
    using namespace SceneBgManagerImplement_p1;
    int id = *idRef;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            if (work->flag50() == 0) {
                FUN_00934940((int)work);
            }
            return;
        }
    }
}

// 00C2A0E0  SceneBgManagerImplement::vf0C  size=40  [class]
void SceneBgManagerImplement::vf0C(int *idRef)
{
    using namespace SceneBgManagerImplement_p1;
    int id = *idRef;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_00934a70((int)work);
            return;
        }
    }
}

// 00C2A110  SceneBgManagerImplement::vf10  size=43  [class]
void SceneBgManagerImplement::vf10(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_00934f10((undefined4 *)work);
            return;
        }
    }
}

// 00C2A140  SceneBgManagerImplement::vf18  size=108  [class]
// Loads the layout "r<id>.ly2" of room *roomRef into the first free slot.
void SceneBgManagerImplement::vf18(int *roomRef)
{
    using namespace SceneBgManagerImplement_p1;
    char fileName[16];

    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == -1) {
            work->id() = *roomRef;
            _sprintf_s(fileName, 0x10, (char *)"r%03x.ly2", *roomRef);
            int file = thiscall<int>(FUN_00de4500, roomRef + 2, fileName);  // ECX = roomRef+0x8
            thiscall<void>(FUN_00933890, work, file);
            FUN_00933720((int)work);
            return;
        }
    }
}

// 00C2A1B0  SceneBgManagerImplement::vf14  size=112  [class]
undefined4 SceneBgManagerImplement::vf14(int *idRef)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *first = works();

    SceneBgWork *work = first;
    for (int i = 0; i < kWorkCount; i++, work++) {
        if (work->id() != -1) {
            FUN_00935420((int)work);
        }
    }
    work = first;
    int id = *idRef;
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            if (work->flag50() != 0) {
                if (WorkState(work) != 0) {
                    FUN_00933900((int)work);
                }
            }
            return (undefined4)WorkState(work);
        }
    }
    return 1;
}

// 00C2A220  SceneBgManagerImplement::vf38  size=43  [class]
void SceneBgManagerImplement::vf38(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_009338e0((int)work);
            return;
        }
    }
}

// 00C2A250  SceneBgManagerImplement::vf3C  size=43  [class]
void SceneBgManagerImplement::vf3C(int id)
{
    using namespace SceneBgManagerImplement_p1;
    SceneBgWork *work = works();
    for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
        if (work->id() == id) {
            FUN_009338f0((int)work);
            return;
        }
    }
}

// 00C2A280  SceneBgManagerImplement::vf00  size=193  [class]
// Per-frame update.  While the wait started by vf04 runs, count it down by 1/60 s; once it has
// expired, on every other frame (floor(|remaining| * 60) even) check the used slots with
// FUN_00934040 and end the wait (waitDone = 1) when none of them reports non-zero.
void SceneBgManagerImplement::vf00()
{
    using namespace SceneBgManagerImplement_p1;
    FUN_00c18240((int)this);
    if (waitActive() == 0) {
        SceneBgWork *work = works();
        for (int i = 0; i < kWorkCount; i++, work++) {
            if (work->id() != -1) {
                FUN_00934db0((int)work);
            }
        }
        return;
    }
    // x87: the difference stays unrounded on the FPU stack after the float store
    double remaining = (double)waitTimer() - (double)0.016666668f;
    waitTimer() = (float)remaining;
    if (!(0.0 < remaining)) {  // fcomp + test ah,5: also taken when unordered
        // FUN_00fde300 (? floor), then FUN_00fdbc60 (_ftol2) for the int conversion
        int frames = (int)FUN_00fde300(AbsD(remaining) * (double)60.0f);
        if (frames % 2 == 0) {
            SceneBgWork *work = works();
            for (unsigned int i = 0; i < (unsigned int)kWorkCount; i++, work++) {
                if (work->id() != -1 && FUN_00934040((int)work) != 0) {
                    return;
                }
            }
            waitActive() = 0;
            waitDone() = 1;
            return;
        }
    }
}

// 00C2A350  SceneBgManagerImplement::EntityDeletedSlot::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *SceneBgManagerImplement::EntityDeletedSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C420F0  SceneBgManagerImplement::vf74  size=42  [class]
// Disables the hit of every layout rigid body inside the box [minPoint, maxPoint].
void SceneBgManagerImplement::vf74(undefined4 minPoint, undefined4 maxPoint)
{
    DisableHitByRange predicate;  // vftable = DisableHitByRange::vftable (0x016A3E2C)
    predicate.minPoint() = (float *)minPoint;
    predicate.maxPoint() = (float *)maxPoint;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C42120  SceneBgManagerImplement::vf78  size=42  [class]
// The two arguments are floats (copied through the FPU); stored bit for bit.
void SceneBgManagerImplement::vf78(undefined4 minValue, undefined4 maxValue)
{
    DisableHitByRangeX predicate;  // vftable = DisableHitByRangeX::vftable (0x016A3E44)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C42150  SceneBgManagerImplement::vf7C  size=42  [class]
void SceneBgManagerImplement::vf7C(undefined4 minValue, undefined4 maxValue)
{
    DisableHitByRangeY predicate;  // vftable = DisableHitByRangeY::vftable (0x016A3E5C)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C42180  SceneBgManagerImplement::vf80  size=42  [class]
void SceneBgManagerImplement::vf80(undefined4 minValue, undefined4 maxValue)
{
    DisableHitByRangeZ predicate;  // vftable = DisableHitByRangeZ::vftable (0x016A3E74)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C421B0  SceneBgManagerImplement::vf84  size=42  [class]
// Enables the hit of every layout rigid body inside the box [minPoint, maxPoint].
void SceneBgManagerImplement::vf84(undefined4 minPoint, undefined4 maxPoint)
{
    EnableHitByRange predicate;  // vftable = EnableHitByRange::vftable (0x016A3E38)
    predicate.minPoint() = (float *)minPoint;
    predicate.maxPoint() = (float *)maxPoint;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C421E0  SceneBgManagerImplement::vf88  size=42  [class]
void SceneBgManagerImplement::vf88(undefined4 minValue, undefined4 maxValue)
{
    EnableHitByRangeX predicate;  // vftable = EnableHitByRangeX::vftable (0x016A3E50)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C42210  SceneBgManagerImplement::vf8C  size=42  [class]
void SceneBgManagerImplement::vf8C(undefined4 minValue, undefined4 maxValue)
{
    EnableHitByRangeY predicate;  // vftable = EnableHitByRangeY::vftable (0x016A3E68)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C42240  SceneBgManagerImplement::vf90  size=42  [class]
void SceneBgManagerImplement::vf90(undefined4 minValue, undefined4 maxValue)
{
    EnableHitByRangeZ predicate;  // vftable = EnableHitByRangeZ::vftable (0x016A3E80)
    *(undefined4 *)&predicate.minValue() = minValue;
    *(undefined4 *)&predicate.maxValue() = maxValue;
    FUN_00c2a000((int *)this, (int *)&predicate);
}

// 00C625E0  SceneBgManagerImplement::EntityDeletedSlot::EntityDeletedSlot  size=807  [class]
// Really the SceneBgManagerImplement constructor (writes its vftable 0x016A6F7C).  The binary
// unrolls the per-slot initialisation.
SceneBgManagerImplement::SceneBgManagerImplement(void *heapArg)
{
    using namespace SceneBgManagerImplement_p1;
    // vftable = SceneBgManagerImplement::vftable (0x016A6F7C)
    heap() = heapArg;
    SceneBgWork *work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        work->field18() = 0;
        work->field1C() = 0;
        work->field28() = 0;
        work->field2C() = 0;
        work->field30() = 0;
        work->field34() = 0;
        work->field38() = 0;
        work->field3C() = 0;
        work->field40() = 0;
        work->field44() = 0;
        work->layoutsCount() = 0;
        work->layoutsData() = work->layoutsStorage();
        work->layoutsCapacity() = 0x80;
        work->layoutsVftable() = (void *)0x016A6DB4;  // lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable
    }
    waitTimer() = 0.0f;
    waitActive() = 0;
    work = works();
    for (int i = 0; i < kWorkCount; i++, work++) {
        FUN_00935030((int)work);  // ? SceneBgWork init
    }
    void *slot = MemAlloc(4, heapArg);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(void **)slot = (void *)0x016A3760;  // vftable = SceneBgManagerImplement::EntityDeletedSlot::vftable
    }
    entityDeletedSlot() = (EntityDeletedSlot *)slot;
    RegisterSlot(0x3a, slot);
}

// 00C62910  SceneBgManagerImplement::vf9C  size=30  [class]
// Scalar deleting destructor.
undefined4 *SceneBgManagerImplement::vf9C(byte flags)
{
    using namespace SceneBgManagerImplement_p1;
    DestroyBody(this);
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
