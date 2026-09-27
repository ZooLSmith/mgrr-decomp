// REFINED
// NinjaRunEventManagerImplement -- the "ninja run" event manager.
// Three-level tree of phantom units (Havok phantoms placed in the world):
//   events (EventUnit, array at +0x8) -> regions (RegionUnit, EventUnit+0x170)
//   -> points (PointUnit, RegionUnit+0x170).
// Every unit carries an id (+0x10) and a transform attached to a model part.
#pragma once
#include "NinjaRunEventManager.h"
#include "ghidra_types.h"
#include "auto/fwd.h"

struct NinjaRunEventManagerImplement : public NinjaRunEventManager {
    struct PhantomUnit;

    // 0x64-byte transform attached to a model part (copied verbatim by the PhantomUnit ctor).
    // Updated by updateAttachTransform: matrix = translation(offset) * parts matrix.
    struct AttachTransform {
        unsigned int handle;       // +0x00 object handle (init FUN_00a7c930, copy FUN_00a7c940, resolve FUN_00a81330)
        int          partsNo;      // +0x04 parts index passed to FUN_00a12210
        unsigned int flags;        // +0x08 bit 0: follow the part's translation only
        char         pad0C[0x04];
        float        offset[4];    // +0x10 local offset (x, y, z, w)
        float        matrix[16];   // +0x20 resulting world matrix
        int          valid;        // +0x60 1 once the matrix was computed
    };

    // lib::AllocatedArray<Unit*> layout (0x18 bytes).
    // vftable slot 0x0 = scalar deleting destructor, slot 0x8 = push_back(Unit *const *).
    struct UnitArray {
        void         **vftable;    // +0x00
        PhantomUnit  **data;       // +0x04
        unsigned int   count;      // +0x08
        unsigned int   field0C;    // +0x0C
        unsigned int   field10;    // +0x10
        unsigned int   field14;    // +0x14
    };

    // Result of the point queries vf04 / vf08 (12 bytes, returned through a hidden pointer).
    struct PointHit {
        AttachTransform *transform;   // +0x0 point transform (PhantomUnit+0x20)
        int              value;       // +0x4 PhantomUnit+0xE4
        AttachTransform *transform2;  // +0x8 second transform (PhantomUnit+0xF0), 0 from vf04
    };

    // 0x180-byte unit owning a Havok phantom.
    struct PhantomUnit {
        // virtual functions, in vftable order (slot = byte offset / 4)
        virtual void destroy();                               // 00C1BA90 slot 0x0 (release phantom, delete this)
        virtual PhantomUnit *destruct(unsigned char flags);   // 00C1BB70 slot 0x4 (scalar deleting destructor)
        // non-virtual members
        PhantomUnit(void *heap, int unitId, const AttachTransform *transform, const float *extents);  // 00C50510

        // fields (absolute byte offsets from object start)
        int             &id()             { return *(int *)((char *)this + 0x10); }              // +0x10
        AttachTransform *attach()         { return (AttachTransform *)((char *)this + 0x20); }   // +0x20
        float           *matrix()         { return (float *)((char *)this + 0x40); }             // +0x40 == attach()->matrix
        int             &transformValid() { return *(int *)((char *)this + 0x80); }              // +0x80 == attach()->valid
        float           *extents()        { return (float *)((char *)this + 0x90); }             // +0x90 float[4] box size
        void            *phantom()        { return (void *)((char *)this + 0xA0); }              // +0xA0 embedded Phantom (first dword: hkpPhantom *)
        PhantomUnit    *&parent()         { return *(PhantomUnit **)((char *)this + 0xB0); }     // +0xB0 owning region (PointUnit)
        unsigned int    &flags()          { return *(unsigned int *)((char *)this + 0xC0); }     // +0xC0 bit 3: attach2 used, bit 4: mask160 filter
        int             &fieldE4()        { return *(int *)((char *)this + 0xE4); }              // +0xE4
        AttachTransform *attach2()        { return (AttachTransform *)((char *)this + 0xF0); }   // +0xF0
        unsigned int    &mask160()        { return *(unsigned int *)((char *)this + 0x160); }    // +0x160 tested against DAT_01b7b914
        UnitArray      *&children()       { return *(UnitArray **)((char *)this + 0x170); }      // +0x170 EventUnit / RegionUnit: child units
        int             &used()           { return *(int *)((char *)this + 0x170); }             // +0x170 PointUnit: already handed out
    };

    struct PointUnit : public PhantomUnit {
        // slot 0x0 inherited (PhantomUnit::destroy, 00C1BA90)
        virtual PhantomUnit *destruct(unsigned char flags);   // 00C50620 slot 0x4
    };

    struct RegionUnit : public PhantomUnit {
        virtual void destroy();                               // 00C5EC60 slot 0x0
        virtual PhantomUnit *destruct(unsigned char flags);   // 00C5EC40 slot 0x4
    };

    struct EventUnit : public PhantomUnit {
        virtual void destroy();                               // 00C5EDA0 slot 0x0
        virtual PhantomUnit *destruct(unsigned char flags);   // 00C5ED80 slot 0x4
        // 00C5ECE0 (Ghidra: PhantomUnit::PhantomUnit_2): EventUnit constructor with the short
        // PhantomUnit(id) constructor inlined; allocates the region array. Returns this.
        EventUnit *construct(void *heap, int unitId);
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual void vf00();  // 00C2D530 slot 0x0  overrides NinjaRunEventManager (update transforms, then vf90)
    // slot 0x4: ret 0x14 -- hidden result pointer + 4 stack arguments; the base auto prototype has none
    virtual void vf04(PointHit *out, void *target, float minDistance, float maxDistance, int unused);  // 00C2D440 slot 0x4
    // slot 0x8: `out` is the hidden result pointer (PointHit)
    virtual void vf08(int *out, undefined4 target);  // 00C50640 slot 0x8  overrides NinjaRunEventManager
    virtual void vf0C(undefined4 eventId);  // 00C1BBF0 slot 0xC  overrides NinjaRunEventManager (select event)
    virtual void vf10();  // 00C1BC00 slot 0x10  overrides NinjaRunEventManager (clear event)
    virtual void vf14();  // 00C1BC10 slot 0x14  overrides NinjaRunEventManager
    virtual void vf18();  // 00C1BC20 slot 0x18  overrides NinjaRunEventManager
    virtual undefined4 vf1C();  // 00C629A0 slot 0x1C  overrides NinjaRunEventManager (current event id)
    virtual undefined4 vf20();  // 00C629B0 slot 0x20  overrides NinjaRunEventManager (current region id)
    virtual undefined4 vf24(undefined4 eventId);  // 00C5F1C0 slot 0x24  overrides NinjaRunEventManager (add event)
    virtual void vf28(int eventId);  // 00C433C0 slot 0x28  overrides NinjaRunEventManager (remove event)
    virtual void vf2C();  // 00C43450 slot 0x2C  overrides NinjaRunEventManager
    virtual undefined AllocatedArray_NinjaRunEventManagerImplement__RegionUnit__();  // 00C5F010 slot 0x34  overrides NinjaRunEventManager
    // slot 0x48 (Ghidra: PointUnit::PointUnit): ret 0x14 -- 5 stack arguments; the base auto prototype has none
    virtual int vf48(int eventId, int regionId, int pointId, const AttachTransform *transform,
                     const float *extents);  // 00C5EE70 slot 0x48 (add point)
    virtual undefined4 * vf94(byte param_2);  // 00C62A40 slot 0x94  overrides NinjaRunEventManager

    // non-virtual members (__thiscall helpers of this file)
    PhantomUnit *findRegion(int eventId, int regionId);                       // 00C2CBD0 (was FUN_00c2cbd0)
    PhantomUnit *findPointAlt(int eventId, int regionId, int pointId);        // 00C2CC50 (was FUN_00c2cc50) region via FUN_00c2cb50
    PhantomUnit *findPoint(int eventId, int regionId, int pointId);           // 00C2CCB0 (was FUN_00c2ccb0)
    void updateAttachTransform(AttachTransform *transform);                   // 00C2D0C0 (was FUN_00c2d0c0)
    void updatePointTransforms(PhantomUnit *region);                          // 00C2D150 (was FUN_00c2d150)
    void updateTransforms();                                                  // 00C2D310 (was FUN_00c2d310)
    int findRegionContaining(int eventId, undefined4 target);                 // 00C42E50 (was FUN_00c42e50)

    // fields (absolute byte offsets from object start)
    void      *&heap()             { return *(void **)((char *)this + 0x4); }       // +0x4 allocator passed to FUN_00dd3500
    UnitArray *&events()           { return *(UnitArray **)((char *)this + 0x8); }  // +0x8 EventUnit array
    int        &currentEventId()   { return *(int *)((char *)this + 0xC); }         // +0xC -1 = none
    int        &currentRegionId()  { return *(int *)((char *)this + 0x10); }        // +0x10 set by vf08
};
