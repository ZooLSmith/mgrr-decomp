// src/managers/situationmanager/SituationManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SituationManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
// CRT (the compiler emitted fsqrt inline)
extern "C" double __cdecl sqrt(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned int DAT_01bea070;     // game flags; bit 0x1000 disables the situation manager
extern unsigned int DAT_01bea094;     // game flags; bit 0x20000 disables the enemy senses
extern void *DAT_01bea100;            // manager whose vf28(0) returns the player entity
extern unsigned char DAT_01be9db8[];  // class descriptor the player must derive from
extern int *DAT_01bebdbc;             // entity list: first node (+0x0 handle, +0x8 next)
extern int *DAT_01bebdc0;             // entity list: end node
extern unsigned char DAT_01bebe78[];  // object that receives the sense notifications (FUN_00c5e350)
extern unsigned char DAT_01b35df8[];  // ray cast manager (ECX of RayCastSingleHitWork_2)

namespace SituationManagerImplement_p1 {

typedef SituationManagerImplement::Unit Unit;

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// raw field access
template <class T> inline T &at(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// FUN_00dd3500: allocate `size` bytes from `heap` (functions.h declares it void)
inline void *MemAlloc(unsigned int size, void *heap)
{
    return ((void *(__cdecl *)(unsigned int, void *))FUN_00dd3500)(size, heap);
}

// entity handles (FUN_00a7c9xx family, all __thiscall on the handle)
inline void HandleClear(int *handle)                 { FUN_00a7c930((undefined4 *)handle); }            // *handle = 0
inline void HandleSet(int *handle, const int *src)   // FUN_00a7c960: *handle = *src
{
    ((void (__thiscall *)(int *, const int *))FUN_00a7c960)(handle, src);
}
inline void HandleAssign(int *handle, const int *src)  // FUN_00a7c940: *handle = *src
{
    ((void (__thiscall *)(int *, const int *))FUN_00a7c940)(handle, src);
}
inline int HandleResolve(int *handle)  // FUN_00a81330: the entity of a handle, or 0
{
    return (int)FUN_00a81330((uint *)handle);
}
inline int EntityHandleOf(int entity) { return FUN_00a7c7f0(entity); }    // entity + 0x2C
inline int EntityOwner(int entity)    { return (int)FUN_00a7c8a0(entity); } // [entity + 0x48]
inline int EntityIsActive(int entity) { return FUN_00a7c7e0(entity); }    // ([entity + 0x28] & 3) == 0

// FUN_00416910: game flag test (functions.h says bool; the callers test all of EAX)
inline int FlagTest(unsigned int flag)
{
    return ((int (__cdecl *)(unsigned int))FUN_00416910)(flag);
}

// FUN_00dd6d80 (__thiscall, ECX = class descriptor): non-zero when it is, or derives from, `base`
inline int IsKindOf(void *classInfo, const void *base)
{
    return ((int (__thiscall *)(void *, const void *))FUN_00dd6d80)(classInfo, base);
}

// FUN_00c5e350 (__thiscall, ECX = &DAT_01bebe78): notify a sense event
inline void NotifySense(int source, void *infoA, void *infoB)
{
    ((void (__thiscall *)(void *, int, void *, void *))FUN_00c5e350)(DAT_01bebe78, source, infoA, infoB);
}

// FUN_00445d40 (__thiscall, ECX = the query, ret 0x20): set up a ray cast query
inline void SetupRayQuery(void *query, float *from, float *to, int a3, int a4, int a5, int a6,
                          const char *name, int a8)
{
    ((void (__thiscall *)(void *, float *, float *, int, int, int, int, const char *, int))FUN_00445d40)(
        query, from, to, a3, a4, a5, a6, name, a8);
}

// 0090B130 RayCastSingleHitWork::RayCastSingleHitWork_2 (__thiscall, ECX = &DAT_01b35df8,
// ret 0x14): non-zero when the ray hits something.
inline int RayCastSingleHit(float *hit, int a2, int a3, int a4, void *query)
{
    return ((int (__thiscall *)(void *, float *, int, int, int, void *))0x0090B130)(
        DAT_01b35df8, hit, a2, a3, a4, query);
}

// 008E28A0 hkBaseObject::hkBaseObject_209 (__thiscall, returns on the x87 stack)
inline float BodyExtent(void *body)
{
    return ((float (__thiscall *)(void *))0x008E28A0)(body);
}

// the sense parameter table (FUN_00d72b30 returns DAT_01dc5264); vf00 fills the four outputs
// for (id, kind) and returns non-zero when the entry exists
inline void *SenseTable()
{
    return (void *)FUN_00d72b30();
}
inline int QuerySense(void *table, float *range, float *paramA, float *threshold, int *paramB, int id,
                      int kind)
{
    return vcall<int>(table, 0x0, range, paramA, threshold, paramB, id, kind);
}

}  // namespace SituationManagerImplement_p1

// 00C3D390  FUN_00c3d390  size=101  [callgraph]
SituationManagerImplement::Unit *SituationManagerImplement::Unit::init(int kind, int source,
                                                                       const float *vector)
{
    using namespace SituationManagerImplement_p1;
    this->kind() = kind;
    HandleClear(&entityHandle());
    id() = -1;
    this->vector()[0] = vector[0];
    this->vector()[1] = vector[1];
    this->vector()[2] = vector[2];
    this->vector()[3] = vector[3];
    if (source != 0) {
        HandleSet(&entityHandle(), (const int *)EntityHandleOf(source));
        id() = at<int>((void *)EntityOwner(source), 0x4b4);  // owner+0x4B4
    }
    return this;
}

// 00C3D400  SituationManagerImplement::vf08  size=192  [class]
// Queue a Unit of `kind` with the given id.  Returns 1 when queued (or when the manager is
// disabled), 0 when there is no unit array or the allocation failed.
int SituationManagerImplement::vf08(int kind, int id, const float *vector)
{
    using namespace SituationManagerImplement_p1;
    if ((DAT_01bea070 & 0x1000) != 0) {
        return 1;
    }
    if (units() == 0) {
        return 0;
    }
    void *criticalSection = lock();
    if (lockEnabled() != 0) {
        EnterCriticalSection(criticalSection);
    }
    Unit *unit = (Unit *)MemAlloc(0x20, heap());
    if (unit != 0) {
        unit->kind() = kind;
        HandleClear(&unit->entityHandle());
        unit->id() = id;
        unit->vector()[0] = vector[0];
        unit->vector()[1] = vector[1];
        unit->vector()[2] = vector[2];
        unit->vector()[3] = vector[3];
        Unit *pushed = unit;
        if (units() != 0) {
            vcall<void>(units(), 0x8, &pushed);  // lib::AllocatedArray<Unit *>::vf08: append
        }
        if (lockEnabled() != 0) {
            LeaveCriticalSection(criticalSection);
        }
        return 1;
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(criticalSection);
    }
    return 0;
}

// 00C3D4C0  SituationManagerImplement::vf04  size=165  [class]
// Queue a Unit of `kind` for the entity `source` (see Unit::init).
int SituationManagerImplement::vf04(int kind, int source, const float *vector)
{
    using namespace SituationManagerImplement_p1;
    if ((DAT_01bea070 & 0x1000) != 0) {
        return 1;
    }
    if (units() == 0) {
        return 0;
    }
    void *criticalSection = lock();
    if (lockEnabled() != 0) {
        EnterCriticalSection(criticalSection);
    }
    Unit *memory = (Unit *)MemAlloc(0x20, heap());
    if (memory != 0) {
        Unit *unit = memory->init(kind, source, vector);
        if (unit != 0) {
            Unit *pushed = unit;
            if (units() != 0) {
                vcall<void>(units(), 0x8, &pushed);  // lib::AllocatedArray<Unit *>::vf08: append
            }
            if (lockEnabled() != 0) {
                LeaveCriticalSection(criticalSection);
            }
            return 1;
        }
    }
    if (lockEnabled() != 0) {
        LeaveCriticalSection(criticalSection);
    }
    return 0;
}

// 00C60B90  SituationManagerImplement::vf0C  size=30  [class]
// Scalar deleting destructor.
undefined4 *SituationManagerImplement::vf0C(byte flags)
{
    implementDestructor();
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return (undefined4 *)this;
}

// 00C60BC0  SituationManagerImplement::vf00  size=2055  [class]
// Per-frame update (rewritten from the disassembly: Ghidra lost track of the 16-byte aligned
// frame).  Under the lock:
//  1. every queued Unit is looked up in the sense table (id, kind); when found, a sense event
//     is sent to DAT_01bebe78 for the Unit's entity owner; the Unit is freed and removed.
//  2. for every entity of the list DAT_01bebdbc whose enemy has a "dashSense" entry (kind 7):
//     when the player is within range and visible, and the enemy's dash timer (+0xD8C) has
//     reached the threshold, the timer is reset and a sense event is sent for the player.
//  3. the same with "touchSense" (kind 8), a range grown by both bodies' extents, and the
//     touch timer (+0xD90).
// The two event records (infoA at esp+0x28, infoB at esp+0x50 in the binary) and the 4-float
// work vector (esp+0xA0) are shared by all three passes, as in the binary: fields a pass does
// not write keep whatever an earlier pass stored.
void SituationManagerImplement::vf00()
{
    using namespace SituationManagerImplement_p1;
    int infoA[9];         // sense event record A (+0x0 float param, +0x4 float, +0x8.. ids, +0x20 flags)
    int infoB[12];        // sense event record B (+0x0 param, +0x4 type, +0x8 position, +0x14 range, +0x20 position, +0x2C id)
    float work[4];        // pass 2: ray hit output; pass 3: body position of the player (FUN_004fc8e0)
    float rayTo[4];       // esp+0x80
    float rayFrom[4];     // esp+0x90
    float touchHit[4];    // esp+0xC0 (pass 3 ray hit output)
    char rayQuery[0x40];  // esp+0xD0

    if ((DAT_01bea070 & 0x1000) != 0) {
        return;
    }
    void *criticalSection = lock();
    if (lockEnabled() != 0) {
        EnterCriticalSection(criticalSection);
    }

    // 1. queued units
    Unit **entry = at<Unit **>(units(), 0x4);
    if (entry != entry + at<int>(units(), 0x8)) {
        do {
            Unit *unit = *entry;
            float range;
            float paramA;
            float threshold;
            int paramB;
            void *table = SenseTable();
            if (QuerySense(table, &range, &paramA, &threshold, &paramB, unit->id(), unit->kind()) != 0) {
                at<float>(infoA, 0x4) = 0.0f;
                infoB[0] = paramB;
                at<float>(infoB, 0x20) = unit->vector()[0];
                infoA[3] = -1;
                at<float>(infoB, 0x24) = unit->vector()[1];
                infoA[4] = -1;
                at<float>(infoB, 0x28) = unit->vector()[2];
                infoA[5] = -2;
                infoA[6] = 0;
                infoA[7] = -1;
                infoB[11] = -1;
                infoA[8] = 0x1010000;
                infoA[2] = -1;
                at<float>(infoB, 0x8) = unit->vector()[0];
                infoB[1] = 2;
                at<float>(infoB, 0xC) = unit->vector()[1];
                at<float>(infoB, 0x10) = unit->vector()[2];
                at<float>(infoB, 0x14) = range;
                at<float>(infoA, 0x0) = paramA;
                int entity = HandleResolve(&unit->entityHandle());
                int owner;
                if (entity == 0) {
                    owner = 0;
                }
                else {
                    owner = EntityOwner(entity);
                }
                NotifySense(owner, infoA, infoB);
            }
            FUN_00dd4920((int)unit);
            // remove the entry (lib::Array erase)
            int *array = units();
            unsigned int count = (unsigned int)at<int>(array, 0x8);
            Unit **data = at<Unit **>(array, 0x4);
            Unit **end = data + count;
            if (entry != end && data != 0 && count != 0 && (unsigned int)(entry - data) < count) {
                for (Unit **p = entry; p != end - 1; p++) {
                    *p = p[1];
                }
                at<int>(array, 0x8) = at<int>(array, 0x8) - 1;
            }
            else {
                entry = end;
            }
        } while (entry != at<Unit **>(units(), 0x4) + at<int>(units(), 0x8));
    }

    // the player: DAT_01bea100->vf28(0)'s owner, if it derives from DAT_01be9db8
    char *player;
    int playerEntity = vcall<int>(DAT_01bea100, 0x28, 0);
    char *candidate;
    if (playerEntity == 0 || (candidate = (char *)EntityOwner(playerEntity)) == 0) {
        player = 0;
    }
    else {
        void *classInfo = vcall<void *>(candidate, 0x4);
        player = IsKindOf(classInfo, DAT_01be9db8) != 0 ? candidate : 0;
    }

    // 2. dashSense
    for (int *node = DAT_01bebdbc; node != DAT_01bebdc0; node = (int *)node[2]) {
        int handle;
        HandleAssign(&handle, node);
        int entity = HandleResolve(&handle);
        if (entity == 0 || EntityIsActive(entity) == 0 || player == 0 ||
            (DAT_01bea094 & 0x20000) != 0) {
            continue;
        }
        float range;
        float paramA;
        float threshold;
        int paramB;
        void *table = SenseTable();
        int owner = EntityOwner(entity);
        if (QuerySense(table, &range, &paramA, &threshold, &paramB, at<int>((void *)owner, 0x4b0) /* owner+0x4B0 */,
                       7) == 0) {
            continue;
        }
        if (0.0f >= threshold || FlagTest(0x19) != 0) {  // a NaN threshold passes (fcomp)
            continue;
        }
        char *enemy = (char *)FUN_00445b60((int *)EntityOwner(entity));
        if (enemy == 0) {
            continue;
        }
        double dx = (double)at<float>(enemy, 0x40) - at<float>(player, 0x40);
        double dy = (double)at<float>(enemy, 0x44) - at<float>(player, 0x44);
        double dz = (double)at<float>(enemy, 0x48) - at<float>(player, 0x48);
        if (!(sqrt(dx * dx + dy * dy + dz * dz) > range) &&  // fcomp: NaN counts as "in range"
            vcall<int>(player, 0x3ec) != 0 && FlagTest(6) == 0 && vcall<int>(player, 0x368) == 0) {
            rayTo[0] = at<float>(player, 0x40);
            rayTo[1] = at<float>(player, 0x44) + 1.8f;
            rayTo[2] = at<float>(player, 0x48);
            rayTo[3] = at<float>(player, 0x4c) + work[3];  // ? work[3] is not written before (as in the binary)
            rayFrom[0] = at<float>(enemy, 0x40);
            rayFrom[1] = at<float>(enemy, 0x44) + 1.8f;
            rayFrom[2] = at<float>(enemy, 0x48);
            rayFrom[3] = work[3] + at<float>(enemy, 0x4c);
            SetupRayQuery(rayQuery, rayFrom, rayTo, 3, 0, 0x1c, 0, "dashSense", 0);
            if (RayCastSingleHit(work, 0, 0, 0, rayQuery) == 0) {
                FUN_00c14dc0((int)enemy);
                if (!(threshold > at<float>(enemy, 0xd8c))) {  // dash timer reached (NaN included)
                    at<float>(enemy, 0xd8c) = 0.0f;
                    FUN_0040e950((undefined4 *)infoA);
                    at<float>(infoA, 0x4) = 0.0f;
                    at<float>(infoB, 0x20) = at<float>(player, 0x40);
                    infoB[11] = -1;
                    at<float>(infoB, 0x24) = at<float>(player, 0x44);
                    infoA[2] = -1;
                    at<float>(infoB, 0x28) = at<float>(player, 0x48);
                    infoA[4] = -1;
                    infoB[0] = paramB;
                    at<float>(infoB, 0x8) = at<float>(player, 0x40);
                    at<unsigned short>(infoA, 0x20) = 0;
                    infoB[1] = 2;
                    at<float>(infoB, 0xC) = at<float>(player, 0x44);
                    at<float>(infoB, 0x10) = at<float>(player, 0x48);
                    at<float>(infoB, 0x14) = range;
                    at<float>(infoA, 0x0) = paramA;
                    NotifySense((int)player, infoA, infoB);
                }
                continue;
            }
        }
        FUN_00c14de0((int)enemy);
    }

    // 3. touchSense
    for (int *node = DAT_01bebdbc; node != DAT_01bebdc0; node = (int *)node[2]) {
        int handle;
        HandleAssign(&handle, node);
        int entity = HandleResolve(&handle);
        if (entity == 0 || EntityIsActive(entity) == 0 || player == 0 ||
            (DAT_01bea094 & 0x20000) != 0) {
            continue;
        }
        float baseRange;
        float paramA;
        float threshold;
        int paramB;
        void *table = SenseTable();
        int owner = EntityOwner(entity);
        if (QuerySense(table, &baseRange, &paramA, &threshold, &paramB, at<int>((void *)owner, 0x4b0) /* owner+0x4B0 */,
                       8) == 0) {
            continue;
        }
        if (0.0f >= threshold) {  // a NaN threshold passes (fcomp)
            continue;
        }
        char *enemy = (char *)FUN_00445b60((int *)EntityOwner(entity));
        if (enemy == 0) {
            continue;
        }
        char *enemyBody = at<char *>(enemy, 0x764);
        float range = baseRange;
        if (enemyBody != 0) {
            float enemyRadius = at<float>(enemyBody, 0xfc);
            char *playerBody = at<char *>(player, 0x764);
            range = at<float>(playerBody, 0xfc);
            float enemyExtent = BodyExtent(enemyBody);
            range = (float)(((double)BodyExtent(playerBody) + enemyExtent +
                             ((double)range + enemyRadius)) * 1.1f);
            if (vcall<int>(player, 0x368) != 0) {
                range = range + 0.6f;
            }
        }
        FUN_004fc8e0((undefined4 *)work, (int)player, 5);
        double dx = (double)at<float>(enemy, 0x40) - work[0];
        double dy = (double)at<float>(enemy, 0x44) - at<float>(player, 0x44);
        double dz = (double)at<float>(enemy, 0x48) - work[2];
        if (!(sqrt(dy * dy + dx * dx + dz * dz) > range) &&  // fcomp: NaN counts as "in range"
            vcall<int>(player, 0x330) == 0 && FlagTest(6) == 0) {
            rayFrom[0] = at<float>(player, 0x40);
            rayFrom[1] = at<float>(player, 0x44) + 1.8f;
            rayFrom[2] = at<float>(player, 0x48);
            rayFrom[3] = at<float>(player, 0x4c) + work[3];
            rayTo[0] = at<float>(enemy, 0x40);
            rayTo[1] = at<float>(enemy, 0x44) + 1.8f;
            rayTo[2] = at<float>(enemy, 0x48);
            rayTo[3] = work[3] + at<float>(enemy, 0x4c);
            SetupRayQuery(rayQuery, rayTo, rayFrom, 3, 0, 0x1c, 0, "touchSense", 0);
            if (RayCastSingleHit(touchHit, 0, 0, 0, rayQuery) == 0) {
                FUN_00c14e30((int)enemy);
                if (!(threshold > at<float>(enemy, 0xd90)) || !(threshold > at<float>(enemy, 0xd8c))) {
                    at<float>(enemy, 0xd90) = 0.0f;
                    FUN_0040e950((undefined4 *)infoA);
                    at<float>(infoA, 0x4) = 0.0f;
                    at<float>(infoB, 0x20) = work[0];
                    infoB[11] = -1;
                    infoA[2] = -1;
                    at<float>(infoB, 0x28) = work[2];
                    infoA[4] = -1;
                    at<float>(infoB, 0x24) = at<float>(enemy, 0x44);
                    at<float>(infoB, 0x8) = work[0];
                    at<float>(infoB, 0xC) = at<float>(enemy, 0x44);
                    at<unsigned short>(infoA, 0x20) = 0;
                    infoB[0] = paramB;
                    infoB[1] = 2;
                    at<float>(infoB, 0x10) = work[2];
                    at<float>(infoB, 0x14) = range;
                    at<float>(infoA, 0x0) = paramA;
                    NotifySense((int)player, infoA, infoB);
                }
                continue;
            }
        }
        FUN_00c14e50((int)enemy);
    }

    if (lockEnabled() != 0) {  // the binary reads it as criticalSection + 0x18
        LeaveCriticalSection(criticalSection);
    }
}
