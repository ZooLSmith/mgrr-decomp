// src/managers/charactercontrolmanager/CharacterControlManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "CharacterControlManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// kernel32
extern "C" __declspec(dllimport) void *__stdcall TlsGetValue(unsigned long tlsIndex);
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
// d3dx9
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fsqrt inline)
extern "C" double __cdecl sqrt(double x);
// CRT TLS index and the fs:[0x2C] read (TEB ThreadLocalStoragePointer)
extern "C" unsigned long _tls_index;
extern "C" unsigned long __readfsdword(unsigned long offset);
#pragma intrinsic(__readfsdword)
// rdtsc
extern "C" unsigned __int64 __rdtsc(void);
#pragma intrinsic(__rdtsc)

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned long DAT_01f8fc54;    // TLS slot of the per-thread profiler marker buffer
extern unsigned char DAT_0164b09c[];  // profiler "end of section" marker
extern int DAT_01885d68;              // lock mode: 1 = locking disabled
extern int DAT_01b35fac;              // non-zero once the global lock is usable
extern int DAT_01885db8;              // non-zero: do not leave the critical section
extern int DAT_01b7c218;              // heap passed to FUN_00dd3500 by createControl

namespace CharacterControlManagerImplement_p1 {

// __cdecl call of a function (symbol or address); used for __fastcall / __thiscall callees whose
// register argument the decompiler did not show ("ECX: ?") and for mismatching prototypes.
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __fastcall call with ECX = self
template <class R, class F, class S> inline R fastcall1(F fn, S self)
{
    typedef R (__fastcall *Fn)(S);
    return ((Fn)fn)(self);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Field at byte offset `offset` of an object this file does not own.
template <class T> inline T &at(int obj, int offset)
{
    return *(T *)(obj + offset);
}

// lib::Array<CharacterControl*> header: vftable, element data, element count.
struct ControlArray {
    void *vftable;
    int *data;           // +0x4
    unsigned int count;  // +0x8
};

// Profiler marker: appends {label, rdtsc low} to the thread's marker buffer if it has room.
inline void profileMark(const void *label)
{
    char *buffer = (char *)TlsGetValue(DAT_01f8fc54);
    unsigned int *entry = *(unsigned int **)(buffer + 4);
    if (entry < *(unsigned int **)(buffer + 0xc)) {
        entry[0] = (unsigned int)label;
        entry[1] = (unsigned int)__rdtsc();
        *(unsigned int **)(buffer + 4) = entry + 3;
    }
}

// Per-thread lock bookkeeping block (CRT TLS slot of this module).
inline int threadLockBlock()
{
    return *(int *)(__readfsdword(0x2c) + _tls_index * 4);
}

// Inlined removal of the element at `it` from an array (data +4, count +8). Returns the iterator
// to continue from: `it` when the element was removed, otherwise the array end.
inline int *eraseAt(ControlArray *array, int *it)
{
    unsigned int count = array->count;
    int data = (int)array->data;
    int *end = (int *)(data + count * 4);
    if (it != end && data != 0 && count != 0 && (unsigned int)(((int)it - data) >> 2) < count) {
        for (int *p = it; p != end + -1; p = p + 1) {
            *p = p[1];
        }
        array->count = array->count + -1;
        end = it;
    }
    return end;
}

// The per-worker element counts and buffers are handed to the job system as one block.
struct UpdateJobs {
    int counts[5];   // local_28
    int buffers[5];  // aiStack_14
};

// Collision query block passed to FUN_0090fb00 by checkRide.
struct RideQuery {
    int queryObject;      // local_60[0]  control + 0x160
    int field04;          // local_60[1]
    int field08;          // local_60[2] (not set)
    int field0C;          // local_60[3] (not set)
    float from[4];        // local_50
    float delta[4];       // local_40
    undefined4 radius;    // local_30
    unsigned int filter;  // local_2c
    undefined4 field38;   // local_28
    undefined4 field3C;   // local_24
    undefined4 field40;   // local_20
    char *name;           // local_1c
};

// CharacterControl fields used here (class not owned by this file):
//   +0x50 lib::Array (data +0x54, count +0x58) of ride children, +0x80 ride target,
//   +0xA0..0xAC position, +0xF0 owner (angle at +0x94), +0x100 collision group,
//   +0x150..0x15C ride velocity, +0x160 collision query object, +0x168 flags (bit 2: remove),
//   +0x16C flags (bit 0: riding).

} // namespace CharacterControlManagerImplement_p1

// 008E3760  CharacterControlManagerImplement::vf0C  size=53  [class]
void CharacterControlManagerImplement::markAllForRemoval()
{
    using namespace CharacterControlManagerImplement_p1;
    ControlArray *array = (ControlArray *)controls();
    int *it;

    if (array != 0 && (it = array->data, it != it + array->count)) {
        do {
            at<unsigned int>(*it, 0x168) = at<unsigned int>(*it, 0x168) | 4;
            it = it + 1;
        } while (it != (int *)((int)((ControlArray *)controls())->data +
                               ((ControlArray *)controls())->count * 4));
    }
}

// 008E37A0  CharacterControlManagerImplement::vf14  size=389  [class]
void CharacterControlManagerImplement::checkRide()
{
    using namespace CharacterControlManagerImplement_p1;
    int control;
    int *it;
    RideQuery query;

    if (controls() != 0) {
        profileMark("TtCHAR_COL_CHECK_RIDE");
        it = ((ControlArray *)controls())->data;
        if (it != it + ((ControlArray *)controls())->count) {
            do {
                control = *it;
                if (at<int>(control, 0xf0) != 0 && (at<unsigned char>(control, 0x168) & 3) == 0) {
                    query.from[0] = at<float>(control, 0xa0);
                    query.from[1] = at<float>(control, 0xa4);
                    query.from[2] = at<float>(control, 0xa8);
                    query.filter = at<int>(control, 0x100) << 0x10 | 0x11;
                    query.from[3] = at<float>(control, 0xac);
                    query.queryObject = control + 0x160;
                    query.delta[0] = at<float>(control, 0xa0) - query.from[0];
                    query.field04 = 0;
                    query.field38 = 0;
                    query.delta[1] = (at<float>(control, 0xa4) - 1.0) - query.from[1];
                    query.field3C = 0;
                    query.field40 = 0;
                    query.delta[2] = at<float>(control, 0xa8) - query.from[2];
                    query.name = "CharColCheckRide";
                    query.delta[3] = at<float>(control, 0xac) - query.from[3];
                    query.radius = 0x3dcccccd;  // 0.1f
                    FUN_0090fb00(&query.queryObject);
                }
                it = it + 1;
            } while (it != (int *)((int)((ControlArray *)controls())->data +
                                   ((ControlArray *)controls())->count * 4));
        }
        profileMark(DAT_0164b09c);
    }
}

// 008E3930  CharacterControlManagerImplement::vf04  size=171  [class]
void CharacterControlManagerImplement::preUpdate()
{
    using namespace CharacterControlManagerImplement_p1;
    unsigned int it;

    if (controls() != 0) {
        profileMark("TtCHARACTER_CONTROL_PRE_UPDATE");
        removeMarked();  // virtual slot 0x10
        it = (unsigned int)((ControlArray *)controls())->data;
        if (it < it + ((ControlArray *)controls())->count * 4) {
            do {
                cdeclcall<void>(FUN_008e27c0); /* ECX: ? (likely the control at `it`) */
                it = it + 4;
            } while (it < (unsigned int)((int)((ControlArray *)controls())->data +
                                         ((ControlArray *)controls())->count * 4));
        }
        profileMark(DAT_0164b09c);
    }
}

// 008E6870  CharacterControlManagerImplement::vf18  size=988  [class]
void CharacterControlManagerImplement::updateRide(float timeRate)
{
    using namespace CharacterControlManagerImplement_p1;
    int control;
    bool found;
    int result;
    int lockBlock;
    int *entry;
    int *it;
    int index;
    int target;
    float timeScale;
    float divisor;
    float dx;
    float dy;
    float dz;
    float dw;
    float angle;
    float rotation[4];         // local_c0 .. local_b4
    float velocity[4];         // local_b0 .. local_a4
    CharacterControlManagerImplement *self;  // local_98
    int hitList;               // local_94
    float forward[4];          // local_90
    float tempVelocity[4];     // local_80 .. fStack_74
    float tempRotation[3];     // local_70 .. fStack_68
    undefined4 tempRotationW;  // uStack_64
    float targetPos[4];        // local_60
    char matrix[76];           // local_50

    if (controls() != 0) {
        self = this;
        profileMark("TtCHAR_COL_UPDATE_RIDE");
        it = ((ControlArray *)controls())->data;
        if (it != it + ((ControlArray *)controls())->count) {
            do {
                control = *it;
                at<int>(control, 0x80) = 0;
                if (at<int>(control, 0xf0) != 0 && (at<unsigned char>(control, 0x168) & 3) == 0) {
                    found = false;
                    result = cdeclcall<int>(FUN_00907640, control + 0x160, &hitList, 0);
                    if (result != 0) {
                        // inlined global lock acquire
                        if (DAT_01885d68 != 1 &&
                            (lockBlock = threadLockBlock(), *(int *)(lockBlock + 4) == 0)) {
                            if (*(int *)(lockBlock + 8) == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
                                cdeclcall<void>(FUN_00dd72c0); /* ECX: ? */
                            }
                            *(int *)(lockBlock + 8) = *(int *)(lockBlock + 8) + 1;
                        }
                        index = 0;
                        if (0 < *(int *)(hitList + 0x14)) {
                            entry = (int *)(*(int *)(hitList + 0x10) + 0x28);
                            do {
                                target = *entry;
                                if (*(char *)(target + 0x18) == '\x01' &&
                                    (target = *(char *)(target + 0x10) + target, target != 0)) {
                                    FUN_008e4320((undefined4)targetPos);
                                    dx = targetPos[0] - at<float>(target, 0x140);
                                    dy = targetPos[1] - at<float>(target, 0x144);
                                    dz = targetPos[2] - at<float>(target, 0x148);
                                    dw = targetPos[3] - at<float>(target, 0x14c);
                                    rotation[0] = at<float>(target, 0x1c0);
                                    rotation[1] = at<float>(target, 0x1c4);
                                    rotation[2] = at<float>(target, 0x1c8);
                                    tempRotationW = at<undefined4>(target, 0x1cc);
                                    velocity[0] = (at<float>(target, 0x1c4) * dz -
                                                   at<float>(target, 0x1c8) * dy) + at<float>(target, 0x1b0);
                                    velocity[1] = (at<float>(target, 0x1c8) * dx -
                                                   at<float>(target, 0x1c0) * dz) + at<float>(target, 0x1b4);
                                    velocity[2] = (at<float>(target, 0x1c0) * dy -
                                                   at<float>(target, 0x1c4) * dx) + at<float>(target, 0x1b8);
                                    tempVelocity[3] = (at<float>(target, 0x1cc) * dw -
                                                       at<float>(target, 0x1cc) * dw) + at<float>(target, 0x1bc);
                                    found = true;
                                    at<int>(control, 0x80) = target;
                                    tempVelocity[0] = velocity[0];
                                    tempVelocity[1] = velocity[1];
                                    tempVelocity[2] = velocity[2];
                                    tempRotation[0] = rotation[0];
                                    tempRotation[1] = rotation[1];
                                    tempRotation[2] = rotation[2];
                                    break;
                                }
                                index = index + 1;
                                entry = entry + 0xc;
                            } while (index < *(int *)(hitList + 0x14));
                        }
                        // inlined global lock release
                        if (DAT_01885d68 != 1 &&
                            (lockBlock = threadLockBlock(), *(int *)(lockBlock + 4) == 0)) {
                            int *nesting = (int *)(lockBlock + 8);
                            *nesting = *nesting + -1;
                            if (*nesting == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
                                cdeclcall<void>(FUN_00dd7300); /* ECX: ? */
                            }
                        }
                    }
                    if (found) {
                        // ? velocity[3] / rotation[3] are read below without a visible store; the
                        //   decompiler most likely lost the copies from tempVelocity[3] / tempRotationW.
                        timeScale = 60.0 / timeRate;
                        divisor = timeRate * 0.016666668 * timeScale;
                        velocity[0] = velocity[0] / divisor;
                        velocity[1] = velocity[1] / divisor;
                        velocity[2] = velocity[2] / divisor;
                        velocity[3] = velocity[3] / divisor;
                        at<float>(control, 0x15c) = velocity[3];
                        at<float>(control, 0x150) = velocity[0];
                        at<float>(control, 0x154) = velocity[1];
                        at<float>(control, 0x158) = velocity[2];
                        rotation[0] = rotation[0] / timeScale;
                        rotation[1] = rotation[1] / timeScale;
                        rotation[2] = rotation[2] / timeScale;
                        rotation[3] = rotation[3] / timeScale;
                        forward[0] = 0.0;
                        forward[1] = 0.0;
                        forward[2] = 1.0;
                        FUN_00ddc1d0((undefined4 *)matrix, rotation, 5);
                        D3DXVec3TransformNormal(forward, forward, (float *)matrix);
                        forward[1] = 0.0;
                        angle = (forward[0] * 0.0 + forward[2]) /
                                (sqrt(forward[2] * forward[2] + forward[0] * forward[0]) * 1.0);
                        if (forward[2] * 0.0 - forward[0] < 0.0) {
                            double turn = FUN_00ddbb50(angle);  // x87 result kept unrounded
                            float wrapped = cdeclcall<float>(FUN_00ddba30,
                                (float)(turn + at<float>(at<int>(control, 0xf0), 0x94)));
                            at<float>(at<int>(control, 0xf0), 0x94) = wrapped;
                            at<unsigned int>(control, 0x16c) = at<unsigned int>(control, 0x16c) | 1;
                        }
                        else {
                            double turn = FUN_00ddbb50(angle);  // x87 result kept unrounded
                            float wrapped = cdeclcall<float>(FUN_00ddba30,
                                (float)(at<float>(at<int>(control, 0xf0), 0x94) - turn));
                            at<float>(at<int>(control, 0xf0), 0x94) = wrapped;
                            at<unsigned int>(control, 0x16c) = at<unsigned int>(control, 0x16c) | 1;
                        }
                    }
                    else {
                        at<unsigned int>(control, 0x16c) = at<unsigned int>(control, 0x16c) & 0xfffffffe;
                    }
                }
                it = it + 1;
            } while (it != (int *)((int)((ControlArray *)self->controls())->data +
                                   ((ControlArray *)self->controls())->count * 4));
        }
        profileMark(DAT_0164b09c);
    }
}

// 008EA200  CharacterControlManagerImplement::vf20  size=53  [class]
void CharacterControlManagerImplement::addControl(int control)
{
    using namespace CharacterControlManagerImplement_p1;
    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    vcall<void>(controls(), 0x8, &control);  // lib::Array::vf08 (append *arg)
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
}

// 008EA240  CharacterControlManagerImplement::vf24  size=44  [class]
undefined4 CharacterControlManagerImplement::getControlCount()
{
    using namespace CharacterControlManagerImplement_p1;
    undefined4 count;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    count = ((ControlArray *)controls())->count;
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
    return count;
}

// 008EA270  CharacterControlManagerImplement::vf28  size=53  [class]
undefined4 CharacterControlManagerImplement::getControl(int index)
{
    using namespace CharacterControlManagerImplement_p1;
    undefined4 control;

    if (lockEnabled() != 0) {
        EnterCriticalSection(lock());
    }
    control = ((ControlArray *)controls())->data[index];
    if (lockEnabled() != 0) {
        LeaveCriticalSection(lock());
    }
    return control;
}

// 008EA2F0  CharacterControlManagerImplement::vf00  size=77  [class]
undefined4 *CharacterControlManagerImplement::vf00(byte flags)
{
    using namespace CharacterControlManagerImplement_p1;
    // vftable = CharacterControlManagerImplement::vftable
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? (likely the critical section at +0x8) */
    if (controls() != 0) {
        vcall<void>(controls(), 0x0, 1);  // scalar deleting destructor
        controls() = 0;
    }
    cdeclcall<void>(FUN_00dd7270); /* ECX: ? */
    // vftable = CharacterControlManager::vftable
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 008EA340  CharacterControlManagerImplement::vf1C  size=32  [class]
undefined4 CharacterControlManagerImplement::createControl()
{
    using namespace CharacterControlManagerImplement_p1;
    int block;

    block = cdeclcall<int>(FUN_00dd3500, 0x1e0, &DAT_01b7c218);
    if (block != 0) {
        // 008E8220 "lib::StaticArray<CharacterControl*,8>::StaticArray" (__fastcall): it
        // initialises the new 0x1E0-byte block (ECX = block, not shown by the decompiler).
        return fastcall1<undefined4>(0x008E8220u, block);
    }
    return 0;
}

// 008EA360  CharacterControlManagerImplement::vf10  size=349  [class]
void CharacterControlManagerImplement::removeMarked()
{
    using namespace CharacterControlManagerImplement_p1;
    int control;
    int *it;
    int *next;
    int *child;
    int *childNext;
    ControlArray *children;

    if (controls() != 0) {
        cdeclcall<undefined4>(FUN_004066f0); /* ECX: ? -- global lock acquire */
        it = ((ControlArray *)controls())->data;
        if (it != it + ((ControlArray *)controls())->count) {
            do {
                control = *it;
                if ((at<unsigned char>(control, 0x168) & 4) == 0) {
                    // drop ride children that are marked for removal
                    children = (ControlArray *)(control + 0x50);
                    child = children->data;
                    if (child != child + children->count) {
                        do {
                            if ((at<unsigned char>(*child, 0x168) & 4) == 0) {
                                childNext = child + 1;
                            }
                            else {
                                cdeclcall<void>(FUN_008e9d80); /* ECX: ? */
                                childNext = eraseAt(children, child);
                            }
                            child = childNext;
                        } while (childNext != (int *)((int)children->data + children->count * 4));
                    }
                    next = it + 1;
                }
                else {
                    cdeclcall<void>(FUN_008e9d80); /* ECX: ? */
                    next = eraseAt((ControlArray *)controls(), it);
                }
                it = next;
            } while (next != (int *)((int)((ControlArray *)controls())->data +
                                     ((ControlArray *)controls())->count * 4));
        }
        // inlined global lock release (FUN_00406760)
        if (DAT_01885d68 != 1) {
            int *nesting = (int *)(threadLockBlock() + 4);
            *nesting = *nesting + -1;
            if (*nesting == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
                cdeclcall<void>(FUN_00dd7320); /* ECX: ? */
                return;
            }
        }
    }
}

// 008EBB70  CharacterControlManagerImplement::vf08  size=339  [class]
void CharacterControlManagerImplement::update()
{
    using namespace CharacterControlManagerImplement_p1;
    int isSingleThread;
    unsigned int count;
    unsigned int workerCount;
    int worker;
    int array;
    unsigned int index;
    unsigned int slot;
    int filled;
    int byteOffset;
    UpdateJobs jobs;

    if (controls() != 0) {
        profileMark("TtHARACTER_CONTROL_UPDATE");
        isSingleThread = FUN_00f98a40();
        count = ((ControlArray *)controls())->count;
        workerCount = 5 - (isSingleThread != 0);
        if (count != 0) {
            worker = 0;
            if (0 < (int)workerCount) {
                do {
                    undefined *heap = FUN_00a1d5c0();
                    unsigned __int64 bytes = (unsigned __int64)(count / workerCount + 1) * 4;
                    int buffer = cdeclcall<int>(FUN_00dd3580,
                        -(unsigned int)((int)(bytes >> 0x20) != 0) | (unsigned int)bytes, heap);
                    jobs.buffers[worker] = buffer;
                    jobs.counts[worker] = 0;
                    worker = worker + 1;
                } while (worker < (int)workerCount);
            }
            cdeclcall<void>(FUN_00dd75d0, (void *)0x008EB920 /* LAB_008eb920: job entry */,
                            jobs.counts, 0xffffffff); /* ECX: ? */
            array = (int)controls();
            index = 0;
            if (((ControlArray *)array)->count != 0) {
                do {
                    slot = index % workerCount;
                    filled = jobs.counts[slot];
                    byteOffset = index * 4;
                    index = index + 1;
                    *(undefined4 *)(jobs.buffers[slot] + -4 + (filled + 1) * 4) =
                        *(undefined4 *)((int)((ControlArray *)array)->data + byteOffset);
                    jobs.counts[slot] = filled + 1;
                    array = (int)controls();
                } while (index < ((ControlArray *)array)->count);
            }
            if (0 < jobs.counts[0]) {
                cdeclcall<void>(FUN_00dd79a0, workerCount); /* ECX: ? */
            }
            worker = 0;
            if (0 < (int)workerCount) {
                do {
                    FUN_00dd4940(jobs.buffers[worker]);
                    worker = worker + 1;
                } while (worker < (int)workerCount);
            }
        }
        profileMark(DAT_0164b09c);
    }
}
