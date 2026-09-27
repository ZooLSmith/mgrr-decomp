// src/managers/targetmanager/TargetManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TargetManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// CRT (the compiler emitted fabs inline)
extern "C" double __cdecl fabs(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern TargetManagerImplement *DAT_01bea108;  // the TargetManager singleton
extern int DAT_01b7bcf0;                      // heap passed to FUN_00dd3500
extern char DAT_01be9a98[];                   // owner of the target list (ECX of FUN_00a7ca30)
extern char DAT_01bea1d0[];                   // camera / view (ECX of FUN_00d9fa80 and FUN_00dc0f70)
extern int DAT_01be8e54;                      // non-zero: vf3C / vf44 scan the target list
extern void **PTR_vftable_018e9b94;           // Havok container heap allocator object (first word = vftable)

namespace TargetManagerImplement_p1 {

// The global target list: lib::Array-like { vftable, data, count } of target-entry pointers.
struct TargetList {
    void         *vftable;  // +0x0
    int          *data;     // +0x4
    unsigned int  count;    // +0x8
};

inline TargetList *targetList()
{
    return (TargetList *)FUN_00a7ca30((int)DAT_01be9a98);
}

// Target entry accessors (functions of src/unsorted/unit_00A7C870.cpp and raw fields).
inline cObj *entryObject(int entry) { return (cObj *)FUN_00a7c800(entry); }           // entry+0x3C
inline Behavior *entryBehavior(int entry) { return (Behavior *)FUN_00a7c8a0(entry); } // entry+0x48
inline float *entryPosition(int entry) { return (float *)FUN_00a7c8b0(entry); }
inline unsigned int entryId(int entry) { return *(unsigned int *)(entry + 0x24); }    // entry+0x24: id
inline unsigned char entryFlags(int entry) { return *(unsigned char *)(entry + 0x28); } // entry+0x28: bit 1 = ignore

// cParts+0x50 used as the object position here.
inline float *objPosition(void *object) { return (float *)((char *)object + 0x50); }

inline void copyVec4(float *dst, const float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}

// Is `entry` (non-zero) in the target list?
inline bool listContainsEntry(int entry)
{
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0 && entry == *it) {
            return true;
        }
    }
    return false;
}

// Is `behavior` the Behavior of an entry in the target list?
inline bool listContainsBehavior(int behavior)
{
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0) {
            int candidate = (int)entryBehavior(*it);
            if (candidate != 0 && behavior == candidate) {
                return true;
            }
        }
    }
    return false;
}

// Clears target/isSet when the target is not set any more or has left the target list.
inline void validateEntryTarget(int &target, int &isSet)
{
    if (target != 0) {
        if (isSet != 0) {
            if (listContainsEntry(target)) {
                return;
            }
            isSet = 0;
        }
        target = 0;
    }
}
inline void validateBehaviorTarget(int &target, int &isSet)
{
    if (target != 0) {
        if (isSet != 0) {
            if (listContainsBehavior(target)) {
                return;
            }
            isSet = 0;
        }
        target = 0;
    }
}

inline bool isExcluded(const int *excluded, int excludedCount, int entry)
{
    if (excluded != 0) {
        for (int i = 0; i < excludedCount; ++i) {
            if (excluded[i] == entry) {
                return true;
            }
        }
    }
    return false;
}

// Debug drawing (src/unsorted/unit_00F95B30.cpp), cdecl.
typedef void (__cdecl *DrawTextFn)(float x, float y, const char *format, ...);
inline void drawMarker(float x, float y, float size, unsigned int color)
{
    ((void (__cdecl *)(float, float, float, unsigned int))FUN_00f95eb0)(x, y, size, color);
}

// FUN_00d9fa80 (__thiscall on the camera): world position -> screen position.
inline void worldToScreen(float *screen, const float *world)
{
    ((void (__thiscall *)(void *, float *, const float *))FUN_00d9fa80)(DAT_01bea1d0, screen, world);
}

// FUN_00dc0f70 (__thiscall on the camera, ret 8).
inline double cameraDistance(Behavior *behavior, float param)
{
    return ((double (__thiscall *)(void *, Behavior *, float))FUN_00dc0f70)(DAT_01bea1d0, behavior, param);
}

// FUN_009f8c60 (__thiscall): yaw from `self` towards `target`.
inline double yawTo(cObj *self, float *target)
{
    return ((double (__thiscall *)(cObj *, float *))FUN_009f8c60)(self, target);
}

// FUN_00ddba30: wraps an angle into [-pi, pi] (returned in ST0).
inline double normalizeAngle(float angle)
{
    return ((double (__cdecl *)(float))FUN_00ddba30)(angle);
}

// FUN_00a12290 (__thiscall on the Behavior).
inline int behaviorPart(Behavior *behavior, int index)
{
    return ((int (__thiscall *)(Behavior *, int))FUN_00a12290)(behavior, index);
}

// hkArray<Candidate> on the stack of vf50 / vf54.
struct Candidate {
    int   entry;     // +0x0
    int   field4;    // +0x4
    float distance;  // +0x8 sort key
    float fieldC;    // +0xC
};
struct CandidateArray {
    Candidate    *data;              // +0x0
    int           size;              // +0x4
    unsigned int  capacityAndFlags;  // +0x8 bit 31 = do not deallocate
};

inline int *heapAllocator() { return (int *)&PTR_vftable_018e9b94; }

// Inlined hkArray destructor: size = 0, then bufFree (allocator vftable slot 0x10) unless flagged.
inline void freeCandidates(CandidateArray &candidates)
{
    candidates.size = 0;
    if (-1 < (int)candidates.capacityAndFlags) {
        ((void (__thiscall *)(void *, void *, int))PTR_vftable_018e9b94[0x10 / 4])(
            &PTR_vftable_018e9b94, candidates.data, candidates.capacityAndFlags << 4);
    }
}

// Reserves 64 candidates (hkArrayUtil::_reserve) and default-initialises them.
inline void initCandidates(CandidateArray &candidates)
{
    candidates.data = 0;
    candidates.size = 0;
    candidates.capacityAndFlags = 0x80000000;
    FUN_0100a210(heapAllocator(), (undefined4 *)&candidates, 0x40, 0x10);
    int remaining = 0x40 - candidates.size;
    if (0 < remaining) {
        Candidate *candidate = candidates.data + candidates.size;
        do {
            if (candidate != 0) {
                candidate->distance = 0.0f;
                candidate->entry = 0;
                candidate->fieldC = 0.0f;
                candidate->field4 = 0;
            }
            candidate = candidate + 1;
            remaining = remaining + -1;
        } while (remaining != 0);
    }
    candidates.size = 0;
}

// Appends a candidate for `entry` whose Behavior is `behavior` (hkArray::expandOne inlined).
inline void addCandidate(CandidateArray &candidates, int entry, Behavior *behavior)
{
    float fieldC = 0.0f;
    float distance = (float)cameraDistance(behavior, 8.0f);
    if ((unsigned int)candidates.size == (candidates.capacityAndFlags & 0x3fffffff)) {
        FUN_0100a290(heapAllocator(), (undefined4 *)&candidates, 0x10);
    }
    Candidate *slot = candidates.data + candidates.size;
    if (slot != 0) {
        slot->entry = entry;
        slot->field4 = 0;
        slot->distance = distance;
        slot->fieldC = fieldC;
    }
    candidates.size = candidates.size + 1;
}

// Sorts the candidates by ascending distance (compare function at 0x00C15810: a.distance < b.distance).
inline void sortCandidates(CandidateArray &candidates)
{
    if (1 < candidates.size) {
        FUN_00c3fa00((int)candidates.data, 0, candidates.size - 1, (code *)0x00C15810);
    }
}

}  // namespace TargetManagerImplement_p1

// 00C15740  TargetManagerImplement::TargetManagerImplement  size=29  [class]
TargetManagerImplement::TargetManagerImplement()
{
    // vftable = TargetManagerImplement::vftable (0x016A352C)
    FUN_00a7c930((undefined4 *)&handle08());
    target14() = 0;
    target1C() = 0;
}

// 00C15760  TargetManagerImplement::vf00  size=12  [class]
void TargetManagerImplement::vf00()
{
    targetEntry0CSet() = 0;
    target1CSet() = 0;
    target14Set() = 0;
}

// 00C15770  TargetManagerImplement::vf04  size=30  [class]
void TargetManagerImplement::vf04()
{
    if (DAT_01bea108 != 0) {
        DAT_01bea108->vf08(1);
        DAT_01bea108 = 0;
    }
}

// 00C157A0  TargetManagerImplement::vf08  size=31  [class]
undefined4 *TargetManagerImplement::vf08(byte flags)
{
    // vftable = TargetManager::vftable (0x016A3124)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00C157C0  TargetManagerImplement::vf40  size=43  [class]
void TargetManagerImplement::vf40(int entry)
{
    flag04() = 1;
    FUN_00a7c950((undefined4 *)&handle08());
    if (entry != 0) {
        undefined4 *entryHandle = (undefined4 *)FUN_00a7c7f0(entry);
        ((void (__thiscall *)(undefined4 *, undefined4 *))FUN_00a7c960)((undefined4 *)&handle08(), entryHandle);
    }
}

// 00C157F0  TargetManagerImplement::vf48  size=4  [class]
undefined4 TargetManagerImplement::vf48()
{
    return flag04();
}

// 00C15800  TargetManagerImplement::vf4C  size=8  [class]
void TargetManagerImplement::vf4C()
{
    // tail call (jmp): EAX = the resolved handle is passed through to the caller
    FUN_00a81330(&handle08());
}

// 00C26530  TargetManagerImplement::TargetManagerImplement_2  size=77  [class]
void TargetManagerImplement::createInstance()
{
    if (DAT_01bea108 == 0) {
        void *memory = ((void *(__cdecl *)(unsigned int, int *))FUN_00dd3500)(0x24, &DAT_01b7bcf0);
        if (memory != 0) {
            // inlined constructor
            TargetManagerImplement *instance = (TargetManagerImplement *)memory;
            *(void **)instance = (void *)0x016A352C;  // vftable = TargetManagerImplement::vftable
            FUN_00a7c930((undefined4 *)&instance->handle08());
            instance->target14() = 0;
            instance->target1C() = 0;
            DAT_01bea108 = instance;
            return;
        }
        DAT_01bea108 = 0;
    }
}

// 00C26580  TargetManagerImplement::vf0C  size=246  [class]
void TargetManagerImplement::vf0C()
{
    using namespace TargetManagerImplement_p1;
    validateEntryTarget(targetEntry0C(), targetEntry0CSet());
    validateBehaviorTarget(target1C(), target1CSet());
    validateBehaviorTarget(target14(), target14Set());
}

// 00C26680  TargetManagerImplement::vf10  size=209  [class]
void TargetManagerImplement::vf10()
{
    using namespace TargetManagerImplement_p1;
    char idText[32];
    char categoryText[32];

    unsigned int row = 0;
    ((DrawTextFn)FUN_00f96550)(400.0f, 85.0f, "%s" /* 016575AC */, "ref" /* 016A3DB4 */);
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        FUN_009f92a0(categoryText, 0x20, entryId(*it));
        FUN_009f92f0(idText, 0x20, entryId(*it));
        ((DrawTextFn)FUN_00f96550)(400.0f, (float)row * 15.0f + 100.0f, "%s%s" /* 0165864C */,
                                   categoryText, idText);
        row = row + 1;
    }
}

// 00C26760  TargetManagerImplement::vf14  size=898  [class]
void TargetManagerImplement::vf14()
{
    using namespace TargetManagerImplement_p1;
    float position[4];
    float screen[4];
    char categoryText[32];
    char idText[44];

    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0) {
            copyVec4(position, entryPosition(*it));
            Behavior *behavior = entryBehavior(*it);
            if (behavior != 0) {
                FUN_009f92a0(categoryText, 0x20, behavior->modelObjId());
                FUN_009f92f0(idText, 0x20, behavior->modelObjId());
                copyVec4(position, (float *)behavior->vf68());
                worldToScreen(screen, position);
                drawMarker((float)fabs(screen[0]), screen[1], 5.0f,
                           (behavior->field690() != 0 ? 0xFE0100u : 0u) + 0xFF00FF00u);
            }
        }
    }
    if (targetEntry0CSet() != 0) {
        FUN_009f92a0(idText, 0x20, entryId(targetEntry0C()));
        FUN_009f92f0(categoryText, 0x20, entryId(targetEntry0C()));
        copyVec4(position, entryPosition(targetEntry0C()));
        worldToScreen(screen, position);
        drawMarker(screen[0], screen[1], 20.0f, 0xffff0000);
    }
    if (target1CSet() != 0) {
        FUN_009f92a0(idText, 0x20, ((Behavior *)target1C())->modelObjId());
        FUN_009f92f0(categoryText, 0x20, ((Behavior *)target1C())->modelObjId());
        copyVec4(position, (float *)((Behavior *)target1C())->vf68());
        Behavior *target = (Behavior *)target1C();
        int part = behaviorPart(target, 3);
        if (part == 0) {
            copyVec4(position, (float *)((char *)target + 0x40));  // Behavior+0x40: ? position
        }
        else {
            copyVec4(position, (float *)(part + 0x40));
        }
        worldToScreen(screen, position);
        drawMarker(screen[0], screen[1], 10.0f, 0xff0000ff);
    }
    if (target14Set() != 0) {
        FUN_009f92a0(idText, 0x20, ((Behavior *)target14())->modelObjId());
        FUN_009f92f0(categoryText, 0x20, ((Behavior *)target14())->modelObjId());
        copyVec4(position, (float *)((Behavior *)target14())->vf68());
        Behavior *target = (Behavior *)target14();
        int part = behaviorPart(target, 3);
        if (part == 0) {
            copyVec4(position, (float *)((char *)target + 0x40));  // Behavior+0x40: ? position
        }
        else {
            copyVec4(position, (float *)(part + 0x40));
        }
        worldToScreen(screen, position);
        drawMarker(screen[0], screen[1], 15.0f, 0xff00ff00);
    }
}

// 00C26AF0  TargetManagerImplement::vf18  size=102  [class]
undefined4 TargetManagerImplement::vf18()
{
    using namespace TargetManagerImplement_p1;
    validateEntryTarget(targetEntry0C(), targetEntry0CSet());
    return targetEntry0C();
}

// 00C26B60  TargetManagerImplement::vf1C  size=95  [class]
void TargetManagerImplement::vf1C(int entry)
{
    using namespace TargetManagerImplement_p1;
    if (entry != 0) {
        int *it = targetList()->data;
        TargetList *list = targetList();
        int *end = list->data + list->count;
        for (; it != end; ++it) {
            if (*it != 0 && entry == *it) {
                targetEntry0C() = entry;
                targetEntry0CSet() = 1;
            }
        }
        return;
    }
    targetEntry0CSet() = 0;
}

// 00C26BC0  TargetManagerImplement::vf20  size=113  [class]
undefined4 TargetManagerImplement::vf20()
{
    using namespace TargetManagerImplement_p1;
    validateBehaviorTarget(target14(), target14Set());
    return target14();
}

// 00C26C40  TargetManagerImplement::vf24  size=105  [class]
void TargetManagerImplement::vf24(int behavior)
{
    using namespace TargetManagerImplement_p1;
    if (behavior == 0) {
        target14Set() = 0;
        return;
    }
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0) {
            int candidate = (int)entryBehavior(*it);
            if (candidate != 0 && behavior == candidate) {
                target14() = behavior;
                target14Set() = 1;
            }
        }
    }
}

// 00C26CB0  TargetManagerImplement::vf28  size=113  [class]
undefined4 TargetManagerImplement::vf28()
{
    using namespace TargetManagerImplement_p1;
    validateBehaviorTarget(target1C(), target1CSet());
    return target1C();
}

// 00C26D30  TargetManagerImplement::vf2C  size=105  [class]
void TargetManagerImplement::vf2C(int behavior)
{
    using namespace TargetManagerImplement_p1;
    if (behavior == 0) {
        target1CSet() = 0;
        return;
    }
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0) {
            int candidate = (int)entryBehavior(*it);
            if (candidate != 0 && behavior == candidate) {
                target1C() = behavior;
                target1CSet() = 1;
            }
        }
    }
}

// 00C26DA0  TargetManagerImplement::vf30  size=14  [class]
undefined4 TargetManagerImplement::vf30()
{
    using namespace TargetManagerImplement_p1;
    return targetList()->count;
}

// 00C26DB0  TargetManagerImplement::vf34  size=390  [class]
// (ret 0x24: nine stack arguments, the last three unused.)
int TargetManagerImplement::vf34(int entry, float yaw, float maxYawDelta, float range, int *excluded,
                                 int excludedCount, int unused7, int unused8, int unused9)
{
    using namespace TargetManagerImplement_p1;
    if (entry != 0) {
        int best = 0;
        cObj *self = entryObject(entry);
        if (self != 0) {
            float rangeSq = range * range;
            float bestDelta = maxYawDelta;
            int *it = targetList()->data;
            TargetList *list = targetList();
            int *end = list->data + list->count;
            for (; it != end; ++it) {
                int other = *it;
                if (other == 0 || other == entry || (entryFlags(other) & 2) != 0) {
                    continue;
                }
                if (isExcluded(excluded, excludedCount, other)) {
                    continue;
                }
                Behavior *behavior = entryBehavior(other);
                if (behavior == 0 || behavior->vf200() == 0) {
                    continue;
                }
                cObj *otherObject = entryObject(other);
                if (otherObject == 0) {
                    continue;
                }
                float lockPosition[4];
                behavior->vf204(lockPosition);
                float dx = lockPosition[0] - objPosition(self)[0];
                float dy = lockPosition[1] - objPosition(self)[1];
                float dz = lockPosition[2] - objPosition(self)[2];
                if (dx * dx + dy * dy + dz * dz <= rangeSq) {
                    double delta = fabs(normalizeAngle((float)(yawTo(self, objPosition(otherObject)) - yaw)));
                    if (delta <= bestDelta) {
                        bestDelta = (float)delta;
                        best = other;
                    }
                }
            }
            return best;
        }
    }
    return 0;
}

// 00C26F40  TargetManagerImplement::vf38  size=116  [class]
// (ret 0xC: two more, unused, stack arguments follow `entry`.)
undefined4 TargetManagerImplement::vf38(int entry)
{
    using namespace TargetManagerImplement_p1;
    if (entry != 0 && entryObject(entry) != 0) {
        int *it = targetList()->data;
        TargetList *list = targetList();
        int *end = list->data + list->count;
        for (; it != end; ++it) {
            int other = *it;
            if (other != 0 && other != entry && (entryFlags(other) & 2) == 0) {
                Behavior *behavior = entryBehavior(other);
                if (behavior != 0) {
                    behavior->vf200();
                }
            }
        }
    }
    return 0;
}

// 00C26FC0  TargetManagerImplement::vf3C  size=118  [class]
// (ret 8: two unused stack arguments.)
undefined4 TargetManagerImplement::vf3C()
{
    using namespace TargetManagerImplement_p1;
    if (DAT_01be8e54 != 0) {
        int *it = targetList()->data;
        TargetList *list = targetList();
        int *end = list->data + list->count;
        for (; it != end; ++it) {
            if (*it != 0 && (entryFlags(*it) & 2) == 0) {
                cObj *object = entryObject(*it);
                if (object != 0 && (object->objFlags() & 0x20) != 0) {
                    Behavior *behavior = entryBehavior(*it);
                    if (behavior != 0) {
                        behavior->vf200();
                    }
                }
            }
        }
    }
    return 0;
}

// 00C27040  TargetManagerImplement::vf44  size=237  [class]
undefined4 TargetManagerImplement::vf44(undefined4 *outAngle)
{
    using namespace TargetManagerImplement_p1;
    if (DAT_01be8e54 == 0) {
        return 0;
    }
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        if (*it != 0 && (entryFlags(*it) & 2) == 0) {
            cObj *object = entryObject(*it);
            if (object != 0 && (object->objFlags() & 0x20) != 0) {
                Behavior *behavior = entryBehavior(*it);
                if (behavior != 0 && behavior->vf200() != 0 && behavior->field6EC() != 0) {
                    unsigned int modelObjId = behavior->modelObjId();
                    if (modelObjId == 0x20200) {
                        *(float *)outAngle = -0.2617994f;  // 0xBE860A92, -15 degrees
                        return 1;
                    }
                    if (modelObjId == 0x20030) {
                        *(float *)outAngle = -0.034906585f;  // 0xBD0EFA35, -2 degrees
                        return 1;
                    }
                    if (modelObjId == 0x20040) {
                        *(float *)outAngle = 0.20943952f;  // 0x3E567750, 12 degrees
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

// 00C27130  TargetManagerImplement::vf58  size=300  [class]
int TargetManagerImplement::vf58(int entry, float yaw, float maxYawDelta, float range)
{
    using namespace TargetManagerImplement_p1;
    if (entry != 0) {
        int best = 0;
        cObj *self = entryObject(entry);
        if (self != 0) {
            float rangeSq = range * range;
            float bestDelta = maxYawDelta;
            int *it = targetList()->data;
            TargetList *list = targetList();
            int *end = list->data + list->count;
            for (; it != end; ++it) {
                int other = *it;
                if (other == 0 || other == entry || (entryFlags(other) & 2) != 0) {
                    continue;
                }
                cObj *otherObject = entryObject(other);
                if (otherObject == 0) {
                    continue;
                }
                float *otherPosition = entryPosition(other);
                float dx = otherPosition[0] - objPosition(self)[0];
                float dy = otherPosition[1] - objPosition(self)[1];
                float dz = otherPosition[2] - objPosition(self)[2];
                if (dy * dy + dx * dx + dz * dz <= rangeSq) {
                    double delta = fabs(normalizeAngle((float)(yawTo(self, objPosition(otherObject)) - yaw)));
                    if (delta <= bestDelta) {
                        bestDelta = (float)delta;
                        best = other;
                    }
                }
            }
            return best;
        }
    }
    return 0;
}

// 00C595E0  TargetManagerImplement::vf50  size=608  [class]
undefined4 TargetManagerImplement::vf50(undefined4 *outNearest, undefined4 *outSecond, int excludedEntry)
{
    using namespace TargetManagerImplement_p1;
    CandidateArray candidates;
    initCandidates(candidates);
    if (targetList()->count < 2) {
        freeCandidates(candidates);
        return 0;
    }
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        int other = *it;
        if (other != 0 && (entryFlags(other) & 2) == 0 && other != excludedEntry) {
            Behavior *behavior = entryBehavior(other);
            if (behavior != 0 && behavior->vf200() != 0 && behavior->field6EC() != 0) {
                addCandidate(candidates, other, behavior);
            }
        }
    }
    sortCandidates(candidates);
    if (candidates.size == 0) {
        freeCandidates(candidates);
        return 0;
    }
    if (0 < candidates.size) {
        *outNearest = candidates.data[0].entry;
    }
    if (1 < candidates.size) {
        *outSecond = candidates.data[1].entry;
    }
    freeCandidates(candidates);
    return 1;
}

// 00C59850  TargetManagerImplement::vf54  size=632  [class]
undefined4 TargetManagerImplement::vf54(undefined4 *outNearest, undefined4 *outSecond, undefined4 *outThird)
{
    using namespace TargetManagerImplement_p1;
    CandidateArray candidates;
    initCandidates(candidates);
    if (targetList()->count == 0) {
        freeCandidates(candidates);
        return 0;
    }
    int *it = targetList()->data;
    TargetList *list = targetList();
    int *end = list->data + list->count;
    for (; it != end; ++it) {
        int other = *it;
        if (other != 0 && (entryFlags(other) & 2) == 0) {
            Behavior *behavior = entryBehavior(other);
            if (behavior != 0 && behavior->vf200() != 0 && behavior->field6EC() != 0) {
                addCandidate(candidates, other, behavior);
            }
        }
    }
    sortCandidates(candidates);
    if (candidates.size == 0) {
        freeCandidates(candidates);
        return 0;
    }
    if (0 < candidates.size && outNearest != 0) {
        *outNearest = candidates.data[0].entry;
    }
    if (1 < candidates.size && outSecond != 0) {
        *outSecond = candidates.data[1].entry;
    }
    if (2 < candidates.size && outThird != 0) {
        *outThird = candidates.data[2].entry;
    }
    freeCandidates(candidates);
    return 1;
}
