// REFINED
// RigidBodyManagerImplement -- the game's rigid-body factory on top of Havok.  Every create*
// virtual builds a shape, fills the caller's hkpRigidBodyCinfo and creates the body through
// FUN_0091fd10 / FUN_00922210; the result is an 8-byte "handle" block taken from the pool at +0x10
// whose first dword is the hkpRigidBody.  All handles are kept in bodyList() (+0x70); every
// public entry point runs under the critical section at +0x78.
//
// vf1C builds a convex hull around a point cloud (its error string calls it "combine"), vf20 a
// list shape, vf24 a body around a caller-supplied shape.  vf28 / vf2C / vf34 release handles
// (removal goes through HkRemoveEntity commands), vf30 attaches an entity listener.
#pragma once
#include "../../../include/ghidra_types.h"
#include "../../../include/auto/fwd.h"
#include "RigidBodyManager.h"

struct RigidBodyManagerImplement : public RigidBodyManager {
    // Container at +0x70 (lib array of handles); vftable slot 0x8 = push_back(unsigned int **handle).
    struct BodyList {
        void          *vftable;  // +0x0
        unsigned int **data;     // +0x4 handle blocks (handle[0] = hkpRigidBody *)
        unsigned int   count;    // +0x8
    };

    // virtual functions, in vftable order (slot = byte offset / 4)
    virtual undefined4 * vf00(byte flags);  // 009264E0 slot 0x0  overrides RigidBodyManager (scalar deleting destructor)
    virtual undefined createBox();  // 00921990 slot 0x4  overrides RigidBodyManager
    virtual undefined createSphere();  // 00921BB0 slot 0x8  overrides RigidBodyManager
    virtual undefined createCaspule();  // 00921D80 slot 0xC  overrides RigidBodyManager
    virtual undefined createCylinder();  // 00921FC0 slot 0x10  overrides RigidBodyManager
    virtual undefined createHexahedron();  // 00927330 slot 0x14  overrides RigidBodyManager
    virtual undefined createPlane();  // 009216C0 slot 0x18  overrides RigidBodyManager
    // "combine": convex hull of `vertexCount` vec4 points scaled by the scale of `transform`.
    // Arguments 5 and 6 are not read.  ret 0x20
    virtual unsigned int *vf1C(unsigned int *result, void *cinfo, const float *transform,
                               const float *vertices, int unused5, int unused6, short vertexCount,
                               int option);  // 00926500 slot 0x1C  overrides RigidBodyManager
    // hkpListShape over `childCount` shapes.  ret 0x1C
    virtual unsigned int *vf20(unsigned int *result, void *cinfo, void *childShapes, int childCount,
                               const float *position, const float *rotation,
                               int option);  // 00921580 slot 0x20  overrides RigidBodyManager
    // Body around the caller's `shape`.  ret 0x18
    virtual unsigned int *vf24(unsigned int *result, void *cinfo, void *shape, const float *position,
                               const float *rotation, int option);  // 009214A0 slot 0x24  overrides RigidBodyManager
    virtual void vf28(int * handle);  // 00919620 slot 0x28  overrides RigidBodyManager (release the handle holding *handle)
    virtual void vf2C(undefined4 * handle);  // 00913FC0 slot 0x2C  overrides RigidBodyManager (vf28, then *handle = 0)
    virtual uint vf30(int entity);  // 00920A30 slot 0x30  overrides RigidBodyManager (entity listener, created on demand)
    virtual void vf34();  // 00919570 slot 0x34  overrides RigidBodyManager (remove every body, empty the list)

    // fields (absolute offsets from object start)
    void      *handlePool()      { return (char *)this + 0x10; }                    // +0x10 pool of 8-byte handles (ECX of FUN_00dd2ba0 / FUN_00dd2bc0)
    BodyList *&bodyList()        { return *(BodyList **)((char *)this + 0x70); }    // +0x70
    void      *criticalSection() { return (char *)this + 0x78; }                    // +0x78 CRITICAL_SECTION (0x18 bytes)
    int       &lockEnabled()     { return *(int *)((char *)this + 0x90); }          // +0x90 non-zero = critical section in use
};
