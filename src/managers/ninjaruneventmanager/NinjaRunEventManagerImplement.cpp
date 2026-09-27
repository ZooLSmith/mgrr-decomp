// src/managers/ninjaruneventmanager/NinjaRunEventManagerImplement.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "NinjaRunEventManagerImplement.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9
extern "C" float *__stdcall D3DXMatrixTranslation(float *out, float x, float y, float z);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fsqrt / fpatan)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);
// compiler intrinsic: fs:[0x2C] = TEB ThreadLocalStoragePointer
extern "C" unsigned long __readfsdword(unsigned long offset);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern "C" unsigned int _tls_index;  // 01F8EF48
extern int DAT_01885d68;             // cHavok: 1 = no world locking
extern int DAT_01b35fac;             // cHavok: world present
extern int DAT_01885db8;             // cHavok: in the unlock period
extern char DAT_01885d70[];          // cHavok lock object (ECX of FUN_00dd72e0 / FUN_00dd7320)
extern unsigned int DAT_01b7b914;    // mask tested against PhantomUnit::mask160()
extern char DAT_0163b898[];          // "cHavok::lock アンロック期間中にワールドに書き込みしようとしています"
extern char DAT_0163d0ac[];          // "[Hw::VecNormalize]ゼロベクトルの単位ベクトル化はできません。"

namespace NinjaRunEventManagerImplement_p1 {

typedef NinjaRunEventManagerImplement::PhantomUnit PhantomUnit;
typedef NinjaRunEventManagerImplement::UnitArray UnitArray;
typedef NinjaRunEventManagerImplement::AttachTransform AttachTransform;

// vftables stored explicitly by the inlined constructors / destructors of this file
const unsigned int PhantomUnit_vftable = 0x016A3838;        // NinjaRunEventManagerImplement::PhantomUnit::vftable
const unsigned int PointUnit_vftable = 0x016A6CC8;          // NinjaRunEventManagerImplement::PointUnit::vftable
const unsigned int EventUnit_vftable = 0x016A702C;          // NinjaRunEventManagerImplement::EventUnit::vftable
const unsigned int PointUnitArray_vftable = 0x016A6DD0;     // lib::AllocatedArray<PointUnit*>::vftable
const unsigned int RegionUnitArray_vftable = 0x016A6DEC;    // lib::AllocatedArray<RegionUnit*>::vftable

// FUN_00dd3500: allocate `size` bytes from `heap` (functions.h declares it void).
inline void *memAlloc(unsigned int size, void *heap)
{
    return ((void *(*)(unsigned int, void *))FUN_00dd3500)(size, heap);
}

// FUN_00dd5650: debug printf.
inline void debugPrint(const char *message)
{
    ((void (*)(const char *, ...))FUN_00dd5650)(message);
}

// UnitArray vftable slot 0x8: push_back(Unit *const *).
inline void arrayPush(UnitArray *array, PhantomUnit **item)
{
    (*(void (__thiscall **)(UnitArray *, PhantomUnit **))((char *)array->vftable + 0x8))(array, item);
}

// UnitArray vftable slot 0x0: scalar deleting destructor.
inline void arrayDelete(UnitArray *array, int deleteFlags)
{
    (*(void (__thiscall **)(UnitArray *, int))((char *)array->vftable + 0x0))(array, deleteFlags);
}

// 00901900 Phantom::setTransform (__thiscall on the embedded Phantom at PhantomUnit+0xA0).
inline void Phantom_setTransform(void *phantom, float *matrix)
{
    ((void (__thiscall *)(void *, float *))0x00901900)(phantom, matrix);
}

// 00903ED0 (Ghidra: lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray): __thiscall on the
// embedded Phantom, takes the object returned by the factory's slot 0x8. // ?
inline void Phantom_create(void *phantom, int shape)
{
    ((void (__thiscall *)(void *, int))0x00903ED0)(phantom, shape);
}

// Per-thread cHavok lock depth (TLS block + 4).
inline int *havokLockDepth()
{
    return (int *)(*(char **)(__readfsdword(0x2C) + _tls_index * 4) + 4);
}

// Inlined cHavok::lock (write lock on the Havok world).
inline void havokLockEnter()
{
    if (DAT_01885d68 != 1) {
        int *depth = havokLockDepth();
        if (*depth == 0 && DAT_01b35fac != 0) {
            if (DAT_01885db8 == 0) {
                FUN_00dd72e0((int)DAT_01885d70);
            }
            else {
                debugPrint(DAT_0163b898);
            }
        }
        *depth = *depth + 1;
    }
}

// Inlined cHavok::unlock.
inline void havokLockLeave()
{
    if (DAT_01885d68 != 1) {
        int *depth = havokLockDepth();
        *depth = *depth - 1;
        if (*depth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
}

// Inlined Hw::VecNormalize(v, v): a zero vector is left alone; a vector whose squared length is
// not positive or that has a NaN component is reported and replaced by (0, 1, 0).
inline void vecNormalize(float *v)
{
    if (v[0] != 0.0f || v[1] != 0.0f || v[2] != 0.0f) {
        float lengthSq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
        if (!(lengthSq <= 0.0f) && v[0] == v[0] && v[1] == v[1] && v[2] == v[2]) {
            FUN_00ddf460(v, v);
        }
        else {
            debugPrint(DAT_0163d0ac);
            v[0] = 0.0f;
            v[1] = 1.0f;
            v[2] = 0.0f;
        }
    }
}

// Oriented box handed to FUN_00d91d90 (0x4C bytes).
struct OrientedBox {
    float center[4];       // +0x00
    float axisX[4];        // +0x10
    float axisY[4];        // +0x20
    float axisZ[4];        // +0x30
    float halfExtents[3];  // +0x40
};

// Inlined box setup shared by findRegionContaining and vf08: the orientation is rebuilt from
// the Euler angles of `rotation` (a unit matrix at +0x40), the centre is the translation row of
// `center` and the half extents are half of `extents`.
inline void buildBox(OrientedBox &box, const float *rotation, const float *center, const float *extents)
{
    float axisX[4];  // [3] is never written: copied into the box uninitialised
    float axisY[4];
    float axisZ[4];
    float euler[3];
    float rotationMatrix[16];

    box.center[0] = center[0];
    box.center[1] = center[1];
    box.center[2] = center[2];
    box.center[3] = center[3];
    axisX[0] = 1.0f;
    axisY[1] = 1.0f;
    axisZ[2] = 1.0f;
    axisX[1] = 0.0f;
    axisX[2] = 0.0f;
    axisY[0] = 0.0f;
    axisY[2] = 0.0f;
    axisZ[0] = 0.0f;
    axisZ[1] = 0.0f;

    float lengthRow0 = (float)sqrt(rotation[0] * rotation[0] + rotation[1] * rotation[1] + rotation[2] * rotation[2]);
    float lengthRow1 = (float)sqrt(rotation[4] * rotation[4] + rotation[5] * rotation[5] + rotation[6] * rotation[6]);
    float lengthRow2 = (float)sqrt(rotation[8] * rotation[8] + rotation[9] * rotation[9] + rotation[10] * rotation[10]);
    float row1z = rotation[6] / lengthRow2;
    float row2z = rotation[10] / lengthRow2;
    float angleY = (float)FUN_00ddbaa0(-(rotation[2] / lengthRow2));  // asin
    euler[0] = (float)atan2((double)row1z, (double)row2z);
    euler[1] = angleY;
    euler[2] = (float)atan2((double)(rotation[1] / lengthRow1), (double)(rotation[0] / lengthRow0));

    FUN_00ddc1d0((undefined4 *)rotationMatrix, euler, 5);
    D3DXVec3TransformNormal(axisX, axisX, rotationMatrix);
    FUN_00ddc1d0((undefined4 *)rotationMatrix, euler, 5);
    D3DXVec3TransformNormal(axisY, axisY, rotationMatrix);
    FUN_00ddc1d0((undefined4 *)rotationMatrix, euler, 5);
    D3DXVec3TransformNormal(axisZ, axisZ, rotationMatrix);
    vecNormalize(axisX);
    vecNormalize(axisY);
    vecNormalize(axisZ);

    box.axisX[0] = axisX[0];
    box.axisX[1] = axisX[1];
    box.axisX[2] = axisX[2];
    box.axisX[3] = axisX[3];
    box.axisY[0] = axisY[0];
    box.axisY[1] = axisY[1];
    box.axisY[2] = axisY[2];
    box.axisY[3] = axisY[3];
    box.axisZ[0] = axisZ[0];
    box.axisZ[1] = axisZ[1];
    box.axisZ[2] = axisZ[2];
    box.axisZ[3] = axisZ[3];
    box.halfExtents[0] = extents[0] * 0.5f;
    box.halfExtents[1] = extents[1] * 0.5f;
    box.halfExtents[2] = extents[2] * 0.5f;
}

}  // namespace NinjaRunEventManagerImplement_p1

// 00C1BA90  NinjaRunEventManagerImplement::PhantomUnit::vf00  size=31  [class]
void NinjaRunEventManagerImplement::PhantomUnit::destroy()
{
    FUN_00900ca0((int *)phantom());  // Phantom destructor
    if (this != 0) {
        this->destruct(1);
    }
}

// 00C1BB70  NinjaRunEventManagerImplement::PhantomUnit::vf04  size=31  [class]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::PhantomUnit::destruct(unsigned char deleteFlags)
{
    using namespace NinjaRunEventManagerImplement_p1;
    *(unsigned int *)this = PhantomUnit_vftable;  // ~PhantomUnit
    if ((deleteFlags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C1BB90  FUN_00c1bb90  size=15  [between]
undefined4 __fastcall FUN_00c1bb90(undefined4 self)
{
    FUN_00a7c930((undefined4 *)(self + 0x30));  // handle at +0x30 (ECX lost in the raw output)
    return self;
}

// 00C1BBF0  NinjaRunEventManagerImplement::vf0C  size=10  [class]
void NinjaRunEventManagerImplement::vf0C(undefined4 eventId)
{
    currentEventId() = eventId;
}

// 00C1BC00  NinjaRunEventManagerImplement::vf10  size=8  [class]
void NinjaRunEventManagerImplement::vf10()
{
    currentEventId() = -1;
}

// 00C1BC10  NinjaRunEventManagerImplement::vf14  size=1  [class]
void NinjaRunEventManagerImplement::vf14()
{
}

// 00C1BC20  NinjaRunEventManagerImplement::vf18  size=1  [class]
void NinjaRunEventManagerImplement::vf18()
{
}

// 00C2CBD0  FUN_00c2cbd0  size=113  [callgraph]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::findRegion(int eventId, int regionId)
{
    UnitArray *events = this->events();
    PhantomUnit *event = 0;
    for (PhantomUnit **it = events->data, **end = events->data + events->count; it != end; ++it) {
        if ((*it)->id() == eventId) {
            event = *it;
            break;
        }
    }
    // no null check on `event`: an unknown event id reads address 0x170, as in the binary
    UnitArray *regions = event->children();
    if (regions != 0) {
        for (PhantomUnit **it = regions->data, **end = regions->data + regions->count; it != end; ++it) {
            if ((*it)->id() == regionId) {
                return *it;
            }
        }
    }
    return 0;
}

// 00C2CC50  FUN_00c2cc50  size=82  [callgraph]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::findPointAlt(int eventId, int regionId, int pointId)
{
    // FUN_00c2cb50 is a byte-identical copy of findRegion (__thiscall, ECX = this)
    PhantomUnit *region = (PhantomUnit *)FUN_00c2cb50((int)this, eventId, regionId);
    UnitArray *points = region->children();
    if (points == 0) {
        return 0;
    }
    for (PhantomUnit **it = points->data, **end = points->data + points->count; it != end; ++it) {
        if ((*it)->id() == pointId) {
            return *it;
        }
    }
    return 0;
}

// 00C2CCB0  FUN_00c2ccb0  size=82  [callgraph]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::findPoint(int eventId, int regionId, int pointId)
{
    PhantomUnit *region = findRegion(eventId, regionId);
    UnitArray *points = region->children();
    if (points == 0) {
        return 0;
    }
    for (PhantomUnit **it = points->data, **end = points->data + points->count; it != end; ++it) {
        if ((*it)->id() == pointId) {
            return *it;
        }
    }
    return 0;
}

// 00C2D0C0  FUN_00c2d0c0  size=133  [callgraph]
void NinjaRunEventManagerImplement::updateAttachTransform(AttachTransform *transform)
{
    int model = (int)FUN_00a81330((uint *)&transform->handle);
    if (model != 0) {
        // FUN_00a12210: parts `partsNo` of the model (a cParts: matrix at +0x10, translation at +0x40)
        char *parts = (char *)FUN_00a12210((int)FUN_00a7c8a0(model), transform->partsNo);
        float *matrix = transform->matrix;
        D3DXMatrixTranslation(matrix, transform->offset[0], transform->offset[1], transform->offset[2]);
        transform->valid = 1;
        if ((transform->flags & 1) != 0) {
            matrix[12] = *(float *)(parts + 0x40) + matrix[12];
            matrix[13] = *(float *)(parts + 0x44) + matrix[13];
            matrix[14] = *(float *)(parts + 0x48) + matrix[14];
            return;
        }
        D3DXMatrixMultiply(matrix, matrix, (float *)(parts + 0x10));
    }
}

// 00C2D150  FUN_00c2d150  size=258  [callgraph]
void NinjaRunEventManagerImplement::updatePointTransforms(PhantomUnit *region)
{
    using namespace NinjaRunEventManagerImplement_p1;
    PhantomUnit **it = region->children()->data;
    if (it != it + region->children()->count) {
        do {
            PhantomUnit *point = *it;
            // updateAttachTransform(point->attach()), inlined
            AttachTransform *transform = point->attach();
            int model = (int)FUN_00a81330((uint *)&transform->handle);
            if (model != 0) {
                char *parts = (char *)FUN_00a12210((int)FUN_00a7c8a0(model), transform->partsNo);
                float *matrix = point->matrix();
                D3DXMatrixTranslation(matrix, transform->offset[0], transform->offset[1], transform->offset[2]);
                point->transformValid() = 1;
                if ((transform->flags & 1) == 0) {
                    D3DXMatrixMultiply(matrix, matrix, (float *)(parts + 0x10));
                }
                else {
                    matrix[12] = matrix[12] + *(float *)(parts + 0x40);
                    matrix[13] = *(float *)(parts + 0x44) + matrix[13];
                    matrix[14] = *(float *)(parts + 0x48) + matrix[14];
                }
            }
            Phantom_setTransform(point->phantom(), point->matrix());
            if ((point->flags() & 8) != 0) {
                updateAttachTransform(point->attach2());
            }
            ++it;
        } while (it != region->children()->data + region->children()->count);
    }
}

// 00C2D310  FUN_00c2d310  size=292  [callgraph]
void NinjaRunEventManagerImplement::updateTransforms()
{
    using namespace NinjaRunEventManagerImplement_p1;
    PhantomUnit **eventIt = events()->data;
    if (eventIt != eventIt + events()->count) {
        do {
            PhantomUnit *event = *eventIt;
            havokLockEnter();
            PhantomUnit **regionIt = event->children()->data;
            if (regionIt != regionIt + event->children()->count) {
                do {
                    PhantomUnit *region = *regionIt;
                    updateAttachTransform(region->attach());
                    Phantom_setTransform(region->phantom(), region->matrix());
                    updatePointTransforms(region);
                    ++regionIt;
                } while (regionIt != event->children()->data + event->children()->count);
            }
            havokLockLeave();
            ++eventIt;
        } while (eventIt != events()->data + events()->count);
    }
}

// 00C2D440  NinjaRunEventManagerImplement::vf04  size=232  [class]
// Hands out the first unused point of the current region whose distance to `target` lies in
// [minDistance, maxDistance] and marks it used.
void NinjaRunEventManagerImplement::vf04(PointHit *out, void *target, float minDistance, float maxDistance, int unused)
{
    PhantomUnit *region;
    if (currentEventId() == -1 || (region = findRegion(currentEventId(), currentRegionId())) == 0) {
        out->transform = 0;
        out->value = 0;
        out->transform2 = 0;
        return;
    }
    // target+0x40: world position of the querying object (matrix at +0x10, translation row) // ?
    const float *targetPosition = (const float *)((char *)target + 0x40);
    UnitArray *points = region->children();
    for (PhantomUnit **it = points->data, **end = points->data + points->count; it != end; ++it) {
        PhantomUnit *point = *it;
        if (point->used() == 0) {
            float dx = point->matrix()[12] - targetPosition[0];
            float dy = point->matrix()[13] - targetPosition[1];
            float dz = point->matrix()[14] - targetPosition[2];
            float distance = (float)sqrt(dx * dx + dy * dy + dz * dz);
            if (minDistance <= distance && distance <= maxDistance) {
                point->used() = 1;
                out->transform2 = 0;
                out->transform = point->attach();
                out->value = point->fieldE4();
                return;
            }
        }
    }
    out->transform = 0;
    out->value = 0;
    out->transform2 = 0;
}

// 00C2D530  NinjaRunEventManagerImplement::vf00  size=21  [class]
void NinjaRunEventManagerImplement::vf00()
{
    updateTransforms();
    vf90();  // tail call
}

// 00C42E50  FUN_00c42e50  size=1383  [callgraph]
// Id of the first region of event `eventId` whose box contains `target` (FUN_00d91d90), or -1.
int NinjaRunEventManagerImplement::findRegionContaining(int eventId, undefined4 target)
{
    using namespace NinjaRunEventManagerImplement_p1;
    UnitArray *events = this->events();
    for (PhantomUnit **it = events->data, **end = events->data + events->count; it != end; ++it) {
        PhantomUnit *event = *it;
        if (event->id() == eventId) {
            if (event == 0) {
                return -1;
            }
            UnitArray *regions = event->children();
            if (regions == 0) {
                return -1;
            }
            PhantomUnit **regionIt = regions->data;
            if (regionIt == regionIt + regions->count) {
                return -1;
            }
            do {
                PhantomUnit *region = *regionIt;
                if (region->transformValid() != 0) {
                    OrientedBox box;
                    buildBox(box, region->matrix(), region->matrix() + 12, region->extents());
                    if (FUN_00d91d90(target, 0.35f, (undefined4)&box) != 0) {
                        return region->id();
                    }
                }
                ++regionIt;
            } while (regionIt != event->children()->data + event->children()->count);
            return -1;
        }
    }
    return -1;
}

// 00C433C0  NinjaRunEventManagerImplement::vf28  size=132  [class]
void NinjaRunEventManagerImplement::vf28(int eventId)
{
    UnitArray *events = this->events();
    PhantomUnit **it = events->data;
    if (it == it + events->count) {
        return;
    }
    PhantomUnit **end = it + events->count;
    while ((*it)->id() != eventId) {
        ++it;
        if (it == end) {
            return;
        }
    }
    (*it)->destroy();
    // erase the element from the array
    events = this->events();
    unsigned int count = events->count;
    PhantomUnit **data = events->data;
    PhantomUnit **last = data + count;
    if (it != last && data != 0 && count != 0 && (unsigned int)(it - data) < count) {
        for (; it != last - 1; ++it) {
            *it = it[1];
        }
        events->count = events->count - 1;
    }
}

// 00C50510  NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit  size=177  [class]
NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit(void *heap, int unitId, const AttachTransform *transform,
                                                        const float *extents)
{
    // vftable = NinjaRunEventManagerImplement::PhantomUnit::vftable (0x016A3838)
    id() = unitId;
    FUN_00a7c940((undefined4 *)&attach()->handle, (undefined4 *)&transform->handle);  // copy the handle
    attach()->partsNo = transform->partsNo;
    attach()->flags = transform->flags;
    attach()->offset[0] = transform->offset[0];
    attach()->offset[1] = transform->offset[1];
    attach()->offset[2] = transform->offset[2];
    attach()->offset[3] = transform->offset[3];
    FID_conflict__memcpy(attach()->matrix, (void *)transform->matrix, 0x40);
    attach()->valid = transform->valid;
    this->extents()[0] = extents[0];
    this->extents()[1] = extents[1];
    this->extents()[2] = extents[2];
    this->extents()[3] = extents[3];
    FUN_009003e0((undefined4 *)phantom());  // Phantom constructor
    parent() = 0;
    FUN_00a7c930((undefined4 *)&attach2()->handle);
    flags() = 0;
}

// 00C50620  NinjaRunEventManagerImplement::PointUnit::vf04  size=31  [class]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::PointUnit::destruct(unsigned char deleteFlags)
{
    using namespace NinjaRunEventManagerImplement_p1;
    *(unsigned int *)this = PhantomUnit_vftable;  // ~PhantomUnit (inlined)
    if ((deleteFlags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C50640  NinjaRunEventManagerImplement::vf08  size=1449  [class]
// Selects the region of the current event containing `target` (stored as the current region)
// and returns the first unused, enabled point of it whose box contains `target`.
void NinjaRunEventManagerImplement::vf08(int *out, undefined4 target)
{
    using namespace NinjaRunEventManagerImplement_p1;
    PointHit *result = (PointHit *)out;
    if (currentEventId() != -1) {
        int regionId = findRegionContaining(currentEventId(), target);
        currentRegionId() = regionId;
        PhantomUnit *region = findRegion(currentEventId(), regionId);
        if (region != 0) {
            PhantomUnit **it = region->children()->data;
            if (it != it + region->children()->count) {
                do {
                    PhantomUnit *point = *it;
                    if (point->used() == 0 &&
                        ((point->flags() & 0x10) == 0 || (point->mask160() & DAT_01b7b914) != 0) &&
                        point->transformValid() != 0) {
                        // orientation from the region, centre and size from the point
                        OrientedBox box;
                        buildBox(box, region->matrix(), point->matrix() + 12, point->extents());
                        if (FUN_00d91d90(target, 0.35f, (undefined4)&box) != 0) {
                            result->transform2 = point->attach2();
                            result->value = point->fieldE4();
                            result->transform = point->attach();
                            return;
                        }
                    }
                    ++it;
                } while (it != region->children()->data + region->children()->count);
            }
        }
    }
    result->value = 0;
    result->transform2 = 0;
    result->transform = 0;
}

// 00C5EC40  NinjaRunEventManagerImplement::RegionUnit::vf04  size=31  [class]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::RegionUnit::destruct(unsigned char deleteFlags)
{
    using namespace NinjaRunEventManagerImplement_p1;
    *(unsigned int *)this = PhantomUnit_vftable;  // ~PhantomUnit (inlined)
    if ((deleteFlags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C5EC60  NinjaRunEventManagerImplement::RegionUnit::vf00  size=118  [class]
void NinjaRunEventManagerImplement::RegionUnit::destroy()
{
    using namespace NinjaRunEventManagerImplement_p1;
    PhantomUnit **it = children()->data;
    if (it != it + children()->count) {
        do {
            (*it)->destroy();
            ++it;
        } while (it != children()->data + children()->count);
    }
    if (children()->data != 0) {
        children()->count = 0;
    }
    if (children() != 0) {
        arrayDelete(children(), 1);
        children() = 0;
    }
    FUN_00900ca0((int *)phantom());  // Phantom destructor
    this->destruct(1);
}

// 00C5ECE0  NinjaRunEventManagerImplement::PhantomUnit::PhantomUnit_2  size=136  [class]
NinjaRunEventManagerImplement::EventUnit *NinjaRunEventManagerImplement::EventUnit::construct(void *heap, int unitId)
{
    using namespace NinjaRunEventManagerImplement_p1;
    // PhantomUnit(unitId), inlined
    *(unsigned int *)this = PhantomUnit_vftable;
    id() = unitId;
    FUN_00a7c930((undefined4 *)&attach()->handle);
    FUN_009003e0((undefined4 *)phantom());  // Phantom constructor
    FUN_00a7c930((undefined4 *)&attach2()->handle);
    flags() = 0;
    // EventUnit part
    *(unsigned int *)this = EventUnit_vftable;
    UnitArray *memory = (UnitArray *)memAlloc(0x18, heap);
    UnitArray *regions = 0;
    if (memory != 0) {
        memory->data = 0;
        memory->count = 0;
        memory->field0C = 0;
        memory->vftable = (void **)RegionUnitArray_vftable;
        memory->field10 = 0;
        memory->field14 = 0;
        regions = memory;
    }
    void *arrayHeap = heap;
    FUN_00c5ce90((int)regions, 0x10, (undefined4 *)&arrayHeap);  // reserve 16 (called even when the allocation failed)
    children() = regions;
    return this;
}

// 00C5ED80  NinjaRunEventManagerImplement::EventUnit::vf04  size=31  [class]
NinjaRunEventManagerImplement::PhantomUnit *NinjaRunEventManagerImplement::EventUnit::destruct(unsigned char deleteFlags)
{
    using namespace NinjaRunEventManagerImplement_p1;
    *(unsigned int *)this = PhantomUnit_vftable;  // ~PhantomUnit (inlined)
    if ((deleteFlags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C5EDA0  NinjaRunEventManagerImplement::EventUnit::vf00  size=107  [class]
void NinjaRunEventManagerImplement::EventUnit::destroy()
{
    using namespace NinjaRunEventManagerImplement_p1;
    PhantomUnit **it = children()->data;
    if (it != it + children()->count) {
        do {
            (*it)->destroy();
            ++it;
        } while (it != children()->data + children()->count);
    }
    if (children()->data != 0) {
        children()->count = 0;
    }
    if (children() != 0) {
        arrayDelete(children(), 1);
        children() = 0;
    }
    this->destruct(1);
}

// 00C5EE70  NinjaRunEventManagerImplement::PointUnit::PointUnit  size=403  [class]
// Adds a point (id `pointId`, box `extents`) to region `regionId` of event `eventId`;
// returns pointId, or -1.
int NinjaRunEventManagerImplement::vf48(int eventId, int regionId, int pointId, const AttachTransform *transform,
                                        const float *extents)
{
    using namespace NinjaRunEventManagerImplement_p1;
    PhantomUnit *region = findRegion(eventId, regionId);
    if (region == 0) {
        return -1;
    }
    if (region->children() == 0) {
        UnitArray *points = (UnitArray *)memAlloc(0x18, heap());
        if (points == 0) {
            return -1;
        }
        points->data = 0;
        points->count = 0;
        points->field0C = 0;
        points->vftable = (void **)PointUnitArray_vftable;
        points->field10 = 0;
        points->field14 = 0;
        void *arrayHeap = heap();
        FUN_00c5cd90((int)points, 8, (undefined4 *)&arrayHeap);  // reserve 8
        region->children() = points;
    }
    PhantomUnit *point = (PhantomUnit *)memAlloc(0x180, heap());
    if (point == 0) {
        return -1;
    }
    // new PointUnit(heap, pointId, transform, extents), constructor inlined
    point->PhantomUnit::PhantomUnit(heap(), pointId, transform, extents);
    *(unsigned int *)point = PointUnit_vftable;
    point->used() = 0;
    PhantomUnit *newPoint = point;
    point->parent() = region;

    float origin[3];
    origin[0] = 0.0f;
    origin[1] = 0.0f;
    origin[2] = 0.0f;
    int *factory = (int *)FUN_00900480();
    int shape = (*(int (__thiscall **)(int *, float *, float *, const float *, int, int, int))(*(char **)factory + 0x8))(
        factory, origin, origin, extents, 0x1F, 0, 1);
    Phantom_create(newPoint->phantom(), shape);

    int hkPhantom = *(int *)newPoint->phantom();
    if (hkPhantom != 0) {
        char lockGuard;
        FUN_004066f0((undefined4)&lockGuard);  // cHavok::lock guard
        unsigned int collidable = *(unsigned int *)(hkPhantom + 0xC);
        collidable = -(unsigned int)(collidable != 0) & collidable;  // null-safe base cast
        *(unsigned int *)(collidable + 4) = *(unsigned int *)(collidable + 4) | 0x10;
        *(PhantomUnit **)(collidable + 0x98) = newPoint;  // user data
        havokLockLeave();  // guard destructor, inlined
    }
    arrayPush(region->children(), &newPoint);
    return pointId;
}

// 00C5F1C0  NinjaRunEventManagerImplement::vf24  size=82  [class]
undefined4 NinjaRunEventManagerImplement::vf24(undefined4 eventId)
{
    using namespace NinjaRunEventManagerImplement_p1;
    EventUnit *memory = (EventUnit *)memAlloc(0x180, heap());
    if (memory != 0) {
        PhantomUnit *event = memory->construct(heap(), eventId);
        if (event != 0) {
            arrayPush(events(), &event);
            return eventId;
        }
    }
    return 0xFFFFFFFF;
}

// 00C629A0  NinjaRunEventManagerImplement::vf1C  size=4  [class]
undefined4 NinjaRunEventManagerImplement::vf1C()
{
    return currentEventId();
}

// 00C629B0  NinjaRunEventManagerImplement::vf20  size=4  [class]
undefined4 NinjaRunEventManagerImplement::vf20()
{
    return currentRegionId();
}
