// src/behavior/Behavior.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "Behavior.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// kernel32 (the lock at Behavior+0x638 starts with a CRITICAL_SECTION)
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *criticalSection);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *criticalSection);
// CRT (the compiler inlined strcmp / emitted fsqrt)
extern "C" int __cdecl strcmp(const char *a, const char *b);
extern "C" double __cdecl sqrt(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern char DAT_01b7bd48[];  // default heap (second argument of MemAlloc)
extern char DAT_01b7c0b8[];  // heap used for collision attack data
extern char DAT_01b35df8[];  // collision world object (ECX of FUN_0090fa30 / FUN_00907640)
extern char DAT_01be8e40[];  // object queried by FUN_00a4af30
extern char DAT_018b9140[];  // object queried by FUN_00d466f0
extern char DAT_01be939c[];  // fallback object used by vf54 when field4F0() is null
extern int *DAT_01be9bf4;    // object pointer: vf10(field584, field588) in vf44
extern char DAT_016416fa[];  // "" (empty string)
// Shift-JIS debug messages (translated)
extern char DAT_01665048[];  // "Behavior:startup cloth memory allocation failed %d"
extern char DAT_01664fd8[];  // "Behavior::startup cloth internal allocation failed, discarding the cloth (%X,%X)"
extern char DAT_0166508c[];  // "Behavior::setupCloth cloth setup failed. %d"
extern char DAT_016650c8[];  // "Behavior:setupCloth cloth memory allocation failed %d"
extern char DAT_01665128[];  // "Behavior::addBodyOffenseCollisionFromRigidBody Collision creation failed"
extern char DAT_01665178[];  // "Behavior::addDefenseCollisionFromRigidBody Collision creation failed"
extern char DAT_01665230[];  // "Behavior::createAttackImpactWave: could not create the explosion attack hit"
extern char DAT_01665278[];  // "Behavior::createAttackImpactWave: could not allocate memory for the explosion attack hit"
extern char DAT_01665310[];  // "Behavior::createAttackImpactVolume: could not allocate memory for the explosion attack hit"
extern char DAT_016652c8[];  // "Behavior::createAttackImpactVolume: could not create the explosion attack hit"

// ---------------------------------------------------------------------------------------------
// Call helpers
// ---------------------------------------------------------------------------------------------
// Virtual call through byte offset `offset` of obj's vftable, with an explicit prototype.
#define VCALL(obj, offset, proto) ((proto)((*(void ***)(obj))[(offset) / 4]))

// FUN_00dd5650: debug printf.
#define DebugPrint ((int (*)(const char *, ...))FUN_00dd5650)

// FUN_00dd3500: allocate `size` bytes from `heap` (functions.h declares it void).
static inline void *MemAlloc(unsigned int size, void *heap)
{
    return ((void *(*)(unsigned int, void *))FUN_00dd3500)(size, heap);
}

// The functions.h prototypes of the callees below lost arguments (usually the ECX `this` of a
// __thiscall). These overloads have the argument list seen in the machine code at the call sites.
static inline int FUN_00a04230(int cloth, int clpFile, int model, Behavior *owner, float scale)
{
    return ((int (__thiscall *)(int, int, int, Behavior *, float))
            static_cast<undefined (*)(void)>(FUN_00a04230))(cloth, clpFile, model, owner, scale);
}
static inline void FUN_00a04490(int cloth, int clwFile, Behavior *owner)
{
    ((void (__thiscall *)(int, int, Behavior *))
     static_cast<void (*)(int, undefined4)>(FUN_00a04490))(cloth, clwFile, owner);
}
static inline void FUN_00a04420(int cloth, int clhFile, Behavior *owner)
{
    ((void (__thiscall *)(int, int, Behavior *))
     static_cast<void (*)(int, undefined4)>(FUN_00a04420))(cloth, clhFile, owner);
}
// 0090FA30 (not in functions.h): sphere/ray query on the collision world.
static inline void FUN_0090fa30(int *world, int queryId, int param2, float *start, float radius,
                                float *dir, unsigned int filter, const char *caller)
{
    ((void (__thiscall *)(int *, int, int, float *, float, float *, unsigned int, const char *))0x0090FA30)(
        world, queryId, param2, start, radius, dir, filter, caller);
}
static inline int FUN_00907640(int *world, int queryId, int *hitRecord, float *hitPos)
{
    return ((int (__thiscall *)(int *, int, int *, float *))
            static_cast<undefined4 (*)(int *, undefined4, undefined4)>(FUN_00907640))(world, queryId, hitRecord, hitPos);
}
static inline void FUN_00a8c3b0(int self, int collision, int ownerParam, int collisionId)
{
    ((void (__thiscall *)(int, int, int, int))
     static_cast<void (*)(int, undefined4, undefined4)>(FUN_00a8c3b0))(self, collision, ownerParam, collisionId);
}
static inline void FUN_00d77620(int collision, float a, float b, float c, float d, float e, float f)
{
    ((void (__thiscall *)(int, float, float, float, float, float, float))
     static_cast<undefined (*)(void)>(FUN_00d77620))(collision, a, b, c, d, e, f);
}
static inline int FUN_00e3ff90(int unit, char *animName, int param2, float param3, float param4,
                               unsigned int flags, float param6, float param7)
{
    return ((int (__thiscall *)(int, char *, int, float, float, unsigned int, float, float))
            static_cast<undefined (*)(void)>(FUN_00e3ff90))(unit, animName, param2, param3, param4, flags,
                                                            param6, param7);
}
static inline void FUN_00e3fa90(int self, int seqFile, char *name, int param3)
{
    ((void (__thiscall *)(int, int, char *, int))
     static_cast<undefined4 (*)(undefined4, undefined4, undefined4)>(FUN_00e3fa90))(self, seqFile, name, param3);
}
static inline int FUN_00e355e0(int unit, char *name)
{
    return ((int (__thiscall *)(int, char *))static_cast<void (*)(char *)>(FUN_00e355e0))(unit, name);
}
static inline void FUN_0099a460(char *out, char *format, int value)  // sprintf-like
{
    ((int (*)(char *, const char *, ...))static_cast<void (*)(char *, char *)>(FUN_0099a460))(out, format, value);
}
// 00D7E080 "CollisionMesh::CollisionMesh": a cdecl factory returning the new collision (not a ctor).
static inline int CollisionMesh_create(int meshArg0, int meshArg1, int meshArg2)
{
    return ((int (*)(int, int, int))0x00D7E080)(meshArg0, meshArg1, meshArg2);
}
// 00D77E40 Collision::addObjDatReference (__thiscall on the collision).
static inline void Collision_addObjDatReference(int collision, unsigned int modelObjId, unsigned int setFlags)
{
    ((void (__thiscall *)(int, unsigned int, unsigned int))0x00D77E40)(collision, modelObjId, setFlags);
}
// 00D73030 CollisionAttackData::CollisionAttackData (constructs in place, returns this).
static inline int *CollisionAttackData_construct(void *memory)
{
    return ((int *(__thiscall *)(void *))0x00D73030)(memory);
}
// 00E3FD90 Animation::Unit::setAnimation.
static inline int AnimationUnit_setAnimation(int unit, int clip, char *animName, int param3, float param4,
                                             float param5, unsigned int flags, float param7, float param8)
{
    return ((int (__thiscall *)(int, int, char *, int, float, float, unsigned int, float, float))0x00E3FD90)(
        unit, clip, animName, param3, param4, param5, flags, param7, param8);
}
// 00A17A40 (Ghidra: "switchD_0080dbae::default"), __thiscall on a cModel. // ?
static inline void FUN_00a17a40(int model)
{
    ((void (__fastcall *)(int))0x00A17A40)(model);
}
// FUN_00e26e90 returns a value although functions.h declares it void.
static inline int FUN_00e26e90_result(int unit)
{
    return ((int (__fastcall *)(int))FUN_00e26e90)(unit);
}

// Unit (animation holder) of an object: FUN_00a7c890(field4F0()), or 0 when field4F0() is null.
static inline int unitOf(Behavior *behavior)
{
    return (behavior->field4F0() == 0) ? 0 : (int)FUN_00a7c890(behavior->field4F0());
}

// 00A8B7F0  Behavior::vf4C  size=67  [class]
void Behavior::vf4C()
{
    vf218();
    if (field734() < 1 && 0 < counter730()) {
        counter730() = counter730() - 1;
    }
    if (field7CC() != 0 && field7D0() != 0) {
        FUN_00d82990((undefined4 *)field7CC(), field7D0());
    }
}

// 00A91E90  Behavior::startup  size=1250  [class]
undefined4 Behavior::startup()
{
    float uninitW;  // never written: the original copies an uninitialised stack slot into vec6D0()[3]
    int clpFile;
    int cloth;
    void *memory;

    vec560()[0] = 0.0f;
    vec560()[1] = 0.0f;
    vec560()[2] = 0.0f;
    vec560()[3] = 0.0f;
    groundSupportRange() = 0.1f;
    animStarted() = 0;
    field77C() = 0;
    field780() = 0;
    field754() = 0;
    queue63C() = 0;
    queueLock() = 0;
    field7C8() = 0;
    field640() = 0;
    vf1D4(0);
    field6C4() = -1;
    vec6D0()[0] = 0.0f;
    vec6D0()[1] = 0.0f;
    vec6D0()[2] = 0.0f;
    vec6D0()[3] = uninitW;
    field6E4() = -1;
    field6E0() = -1;
    field6E8() = 1.0f;
    field738() = 1.0f;
    field6EC() = 0;
    counter730() = 0;
    field734() = 0;
    field73C() = 0;
    field748() = 0;
    field6C0() = 0;
    field674() = 0;
    byte6B0() = 0;
    field80C() = 0;
    field690() = 0;
    field710() = 0;
    clothEnabled() = 0;
    field800() = 0;
    groundAttribute() = 0;

    if (modelObjId() == 0x60330 || modelObjId() == 0x60332) {
        clpFile = FUN_00de4550((int *)&filePair0(), "_0_1_clp.bxm", 0);
        if (clpFile != 0) {
            memory = MemAlloc(0xBE0, DAT_01b7bd48);
            cloth = (memory == 0) ? 0 : (int)FUN_009fad80((int)memory);
            cloth0() = cloth;
            if (cloth == 0) {
                DebugPrint(DAT_01665048, modelObjId());
                return 0;
            }
            if (FUN_00a04230(cloth, clpFile, (int)FUN_00a7c800(field4F0()), this, 0.5f) == 0) {
                cloth = cloth0();
                if (cloth != 0) {
                    FUN_00a01300(cloth);
                    FUN_00dd4920(cloth);
                    cloth0() = 0;
                }
                DebugPrint(DAT_01664fd8, objId(), modelObjId());
            }
            else {
                int clwFile = FUN_00de4550((int *)&filePair0(), "_0_1_clw.bxm", 0);
                if (clwFile != 0) {
                    FUN_00a04490(cloth0(), clwFile, this);
                }
                int clhFile = FUN_00de4550((int *)&filePair0(), "_0_1_clh.bxm", 0);
                if (clhFile != 0) {
                    FUN_00a04420(cloth0(), clhFile, this);
                }
                clothEnabled() = 1;
            }
        }
    }
    else {
        clpFile = FUN_00de4550((int *)&filePair0(), "_0_0_clp.bxm", 0);
        if (clpFile != 0) {
            memory = MemAlloc(0xBE0, DAT_01b7bd48);
            cloth = (memory == 0) ? 0 : (int)FUN_009fad80((int)memory);
            cloth0() = cloth;
            if (cloth == 0) {
                DebugPrint(DAT_01665048, modelObjId());
                return 0;
            }
            if (FUN_00a04230(cloth, clpFile, (int)FUN_00a7c800(field4F0()), this, 0.5f) == 0) {
                cloth = cloth0();
                if (cloth != 0) {
                    FUN_00a01300(cloth);
                    FUN_00dd4920(cloth);
                    cloth0() = 0;
                }
                DebugPrint(DAT_01664fd8, objId(), modelObjId());
            }
            else {
                int clwFile = FUN_00de4550((int *)&filePair0(), "_0_0_clw.bxm", 0);
                if (clwFile != 0) {
                    FUN_00a04490(cloth0(), clwFile, this);
                }
                int clhFile = FUN_00de4550((int *)&filePair0(), "_0_0_clh.bxm", 0);
                if (clhFile != 0) {
                    FUN_00a04420(cloth0(), clhFile, this);
                }
            }
            if (modelObjId() == 0x20110) {
                clpFile = FUN_00de4550((int *)&filePair0(), "_0_1_clp.bxm", 0);
                if (clpFile != 0) {
                    memory = MemAlloc(0xBE0, DAT_01b7bd48);
                    cloth = (memory == 0) ? 0 : (int)FUN_009fad80((int)memory);
                    cloth1() = cloth;
                    if (cloth == 0) {
                        DebugPrint(DAT_01665048, modelObjId());
                        return 0;
                    }
                    if (FUN_00a04230(cloth, clpFile, (int)FUN_00a7c800(field4F0()), this, 0.5f) == 0) {
                        cloth = cloth1();
                        if (cloth != 0) {
                            FUN_00a01300(cloth);
                            FUN_00dd4920(cloth);
                            cloth1() = 0;
                        }
                        DebugPrint(DAT_01664fd8, objId(), modelObjId());
                    }
                    else {
                        int clwFile = FUN_00de4550((int *)&filePair0(), "_0_1_clw.bxm", 0);
                        if (clwFile != 0) {
                            FUN_00a04490(cloth1(), clwFile, this);
                        }
                        int clhFile = FUN_00de4550((int *)&filePair0(), "_0_1_clh.bxm", 0);
                        if (clhFile != 0) {
                            FUN_00a04420(cloth1(), clhFile, this);
                            clothEnabled() = 1;
                            goto done;
                        }
                    }
                }
            }
            clothEnabled() = 1;
        }
    }
done:
    field6BC() = 0;
    vf1F0(1);
    field784() = 1.0f;
    field814() = -1;
    field810() = 0;
    vf1EC();
    field83C() = field51C();
    field840() = 1;
    field844() = 1;
    return 1;
}

// 00A92380  Behavior::setupCloth  size=283  [class]
int Behavior::setupCloth(void *dataFile)
{
    int clpFile = FUN_00de4550((int *)dataFile, "_0_0_clp.bxm", 0);
    if (clpFile != 0) {
        void *memory = MemAlloc(0xBE0, DAT_01b7bd48);
        int cloth = (memory == 0) ? 0 : (int)FUN_009fad80((int)memory);
        cloth0() = cloth;
        if (cloth != 0) {
            if (FUN_00a04230(cloth, clpFile, (int)FUN_00a7c800(field4F0()), this, 0.5f) == 0) {
                cloth = cloth0();
                if (cloth != 0) {
                    FUN_00a01300(cloth);
                    FUN_00dd4920(cloth);
                    cloth0() = 0;
                }
                DebugPrint(DAT_0166508c, modelObjId());
                return 0;
            }
            int clwFile = FUN_00de4550((int *)dataFile, "_0_0_clw.bxm", 0);
            if (clwFile != 0) {
                FUN_00a04490(cloth0(), clwFile, this);
            }
            int clhFile = FUN_00de4550((int *)dataFile, "_0_0_clh.bxm", 0);
            if (clhFile != 0) {
                FUN_00a04420(cloth0(), clhFile, this);
            }
            clothEnabled() = 1;
            return 1;
        }
        DebugPrint(DAT_016650c8, modelObjId());
    }
    return 0;
}

// 00A92B10  Behavior::updateGroundSupportForParts  size=986  [class]
// Casts a sphere (radius 0.15) down from above the parts and reports the ground hit.
// groundState: 0 = no ground, 1 = found this frame, 2 = found on consecutive frames.
void Behavior::updateGroundSupportForParts(int queryId, float *hitPos, int *groundState, int *hitCollision,
                                           int partsNo)
{
    float basePos[4];
    float rotation[16];
    float up[4];
    float a[4];       // a[3], b[3], c[3]: w components never written by D3DXVec3TransformNormal
    float b[4];       // (uninitialised in the original too)
    float c[4];
    float dir[4];
    float start[4];
    int hitRecord;
    char attribute[0x80];  // ? scratch object filled by FUN_00910a40 (shares stack with the matrices)

    cParts *parts = (cParts *)FUN_00a12290((int)this, partsNo);
    if (parts == 0) {
        basePos[0] = matrix()[12];
        basePos[1] = matrix()[13];
        basePos[2] = matrix()[14];
        basePos[3] = matrix()[15];
    }
    else {
        basePos[0] = parts->matrix()[12];
        basePos[1] = parts->matrix()[13];
        basePos[2] = parts->matrix()[14];
        basePos[3] = parts->matrix()[15];
    }
    float *world = matrixB0();

    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, vec90(), 5);
    D3DXVec3TransformNormal(a, up, rotation);
    D3DXVec3TransformNormal(a, a, world);
    a[0] = (world[12] + a[0]) * 0.1f;
    a[1] = (world[13] + a[1]) * 0.1f;
    a[2] = (world[14] + a[2]) * 0.1f;
    a[3] = a[3] * 0.1f;

    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, vec90(), 5);
    D3DXVec3TransformNormal(b, up, rotation);
    D3DXVec3TransformNormal(b, b, world);
    b[0] = (world[12] + b[0]) * 0.15f + a[0];
    b[1] = (world[13] + b[1]) * 0.15f + a[1];
    b[2] = (world[14] + b[2]) * 0.15f + a[2];
    b[3] = b[3] * 0.15f + a[3];

    up[0] = 0.0f;
    up[1] = 1.0f;
    up[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, vec90(), 5);
    D3DXVec3TransformNormal(c, up, rotation);
    D3DXVec3TransformNormal(c, c, world);
    c[0] = (world[12] + c[0]) * -0.35f;
    c[1] = (world[13] + c[1]) * -0.35f;
    c[2] = (world[14] + c[2]) * -0.35f;
    c[3] = c[3] * -0.35f;

    int filterGroup = *(int *)FUN_009f8b60((int)this);
    dir[0] = c[0] * 1.1f;
    dir[1] = c[1] * 1.1f;
    dir[2] = c[2] * 1.1f;
    dir[3] = c[3] * 1.1f;
    start[0] = b[0] + basePos[0];
    start[1] = b[1] + basePos[1];
    start[2] = b[2] + basePos[2];
    start[3] = b[3] + basePos[3];
    FUN_0090fa30((int *)DAT_01b35df8, queryId, 1, start, 0.15f, dir,
                 ((unsigned int)filterGroup << 16) | 0x1e, "Behavior::updateGroundSupportForParts");

    if (FUN_00907640((int *)DAT_01b35df8, queryId, &hitRecord, hitPos) == 0) {
        *groundState = 0;
        if (hitCollision != 0) {
            *hitCollision = 0;
        }
        return;
    }

    FUN_0112bcf0((unsigned int)hitRecord);
    float *hitPoint = *(float **)(hitRecord + 0x10);
    hitPos[0] = hitPoint[0];
    hitPos[1] = hitPoint[1];
    hitPos[2] = hitPoint[2];
    hitPos[3] = hitPoint[3];
    if (hitCollision != 0) {
        int shape = *(int *)(*(int *)(hitRecord + 0x10) + 0x28);
        *hitCollision = *(signed char *)(shape + 0x10) + shape;
    }
    int shape = *(int *)(*(int *)(hitRecord + 0x10) + 0x28);
    if (*(char *)(shape + 0x18) == 1) {
        int body = *(signed char *)(shape + 0x10) + shape;
        if (body != 0) {
            FUN_00910a40((undefined4 *)attribute, body);
            groundAttribute() = (unsigned char)FUN_00915990((int *)attribute, 9);
        }
    }

    float dx = hitPos[0] - basePos[0];
    float dy = hitPos[1] - basePos[1];
    float dz = hitPos[2] - basePos[2];
    if (groundSupportRange() <= sqrt(dx * dx + dy * dy + dz * dz)) {
        *groundState = 0;
        return;
    }
    hitPos[0] = hitPos[0] - b[0];
    hitPos[1] = hitPos[1] - b[1];
    hitPos[2] = hitPos[2] - b[2];
    hitPos[3] = hitPos[3] - b[3];
    if (*groundState == 1) {
        *groundState = 2;
        return;
    }
    if (*groundState == 0) {
        *groundState = 1;
    }
}

// 00A933E0  FUN_00a933e0  size=106  [callgraph]
// Unregisters every collision of collisionList7A4 and deletes the list.
void __fastcall FUN_00a933e0(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->collisionList7A4();
    if (list != 0) {
        int *it = (int *)list->data;
        if (it != it + list->count) {
            do {
                FUN_00d7b0f0(*it);
                int *manager = (int *)FUN_00d773c0();
                VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, *it);
                it = it + 1;
            } while (it != (int *)behavior->collisionList7A4()->data + behavior->collisionList7A4()->count);
        }
        if (behavior->collisionList7A4() != 0) {
            VCALL(behavior->collisionList7A4(), 0x0, void (__thiscall *)(Behavior::Array *, int))(
                behavior->collisionList7A4(), 1);  // delete
            behavior->collisionList7A4() = 0;
        }
    }
}

// 00A93450  FUN_00a93450  size=106  [callgraph]
// Unregisters every collision of bodyOffenseCollisionList and deletes the list.
void __fastcall FUN_00a93450(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->bodyOffenseCollisionList();
    if (list != 0) {
        int *it = (int *)list->data;
        if (it != it + list->count) {
            do {
                FUN_00d7b0f0(*it);
                int *manager = (int *)FUN_00d773c0();
                VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, *it);
                it = it + 1;
            } while (it != (int *)behavior->bodyOffenseCollisionList()->data +
                               behavior->bodyOffenseCollisionList()->count);
        }
        if (behavior->bodyOffenseCollisionList() != 0) {
            VCALL(behavior->bodyOffenseCollisionList(), 0x0, void (__thiscall *)(Behavior::Array *, int))(
                behavior->bodyOffenseCollisionList(), 1);  // delete
            behavior->bodyOffenseCollisionList() = 0;
        }
    }
}

// 00A934C0  FUN_00a934c0  size=106  [callgraph]
// Unregisters every collision of defenseCollisionList (manager slot 0x14) and deletes the list.
void __fastcall FUN_00a934c0(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    if (list != 0) {
        int *it = (int *)list->data;
        if (it != it + list->count) {
            do {
                FUN_00d7b0f0(*it);
                int *manager = (int *)FUN_00d773c0();
                VCALL(manager, 0x14, void (__thiscall *)(int *, int))(manager, *it);
                it = it + 1;
            } while (it != (int *)behavior->defenseCollisionList()->data +
                               behavior->defenseCollisionList()->count);
        }
        if (behavior->defenseCollisionList() != 0) {
            VCALL(behavior->defenseCollisionList(), 0x0, void (__thiscall *)(Behavior::Array *, int))(
                behavior->defenseCollisionList(), 1);  // delete
            behavior->defenseCollisionList() = 0;
        }
    }
}

// 00A93530  FUN_00a93530  size=65  [callgraph]
// Finds the collision with the given id (Collision+0x380) in collisionList7A4.
int FUN_00a93530(int self, int collisionId)
{
    Behavior::Array *list = ((Behavior *)self)->collisionList7A4();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        int *end = it + list->count;
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                return *it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 00A93580  FUN_00a93580  size=65  [callgraph]
// Finds the collision with the given id in bodyOffenseCollisionList.
int FUN_00a93580(int self, int collisionId)
{
    Behavior::Array *list = ((Behavior *)self)->bodyOffenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        int *end = it + list->count;
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                return *it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 00A935D0  FUN_00a935d0  size=61  [callgraph]
// Calls FUN_00d7b890 on every collision of bodyOffenseCollisionList.
void __fastcall FUN_00a935d0(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->bodyOffenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            FUN_00d7b890(*it);
            it = it + 1;
        } while (it != (int *)behavior->bodyOffenseCollisionList()->data +
                           behavior->bodyOffenseCollisionList()->count);
    }
}

// 00A93610  FUN_00a93610  size=65  [callgraph]
// Finds the collision with the given id in defenseCollisionList.
int FUN_00a93610(int self, int collisionId)
{
    Behavior::Array *list = ((Behavior *)self)->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        int *end = it + list->count;
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                return *it;
            }
            it = it + 1;
        } while (it != end);
    }
    return 0;
}

// 00A93660  FUN_00a93660  size=98  [callgraph]
// Passes each defense collision whose name (Collision+0x394) contains `pattern` to visitor->vf08.
void FUN_00a93660(int self, int *visitor, undefined4 pattern)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            if (FUN_00fdbbd0((uint *)(*it + 0x394), (char *)pattern) != 0) {
                VCALL(visitor, 0x8, void (__thiscall *)(int *, int *))(visitor, it);
            }
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A936D0  FUN_00a936d0  size=86  [callgraph]
// Passes each defense collision with the given id to visitor->vf08.
void FUN_00a936d0(int self, int *visitor, int collisionId)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                VCALL(visitor, 0x8, void (__thiscall *)(int *, int *))(visitor, it);
            }
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A93730  FUN_00a93730  size=68  [callgraph]
// FUN_00d771d0(collision, value) on every defense collision.
void FUN_00a93730(int self, undefined4 value)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            FUN_00d771d0(*it, value);
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A93780  FUN_00a93780  size=88  [callgraph]
// FUN_00d7acc0 on each defense collision whose name contains `pattern`.
void FUN_00a93780(int self, undefined4 pattern)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            if (FUN_00fdbbd0((uint *)(*it + 0x394), (char *)pattern) != 0) {
                FUN_00d7acc0(*it);
            }
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A937E0  FUN_00a937e0  size=61  [callgraph]
// FUN_00d7acc0 on every defense collision.
void __fastcall FUN_00a937e0(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            FUN_00d7acc0(*it);
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A93820  FUN_00a93820  size=61  [callgraph]
// FUN_00d7b890 on every defense collision.
void __fastcall FUN_00a93820(int self)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            FUN_00d7b890(*it);
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A938C0  FUN_00a938c0  size=75  [callgraph]
// FUN_00d7acc0 on each defense collision with the given id.
void FUN_00a938c0(int self, int collisionId)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                FUN_00d7acc0(*it);
            }
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A93910  FUN_00a93910  size=75  [callgraph]
// FUN_00d7b890 on each defense collision with the given id.
void FUN_00a93910(int self, int collisionId)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->defenseCollisionList();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            if (*(int *)(*it + 0x380) == collisionId) {
                FUN_00d7b890(*it);
            }
            it = it + 1;
        } while (it != (int *)behavior->defenseCollisionList()->data +
                           behavior->defenseCollisionList()->count);
    }
}

// 00A93960  Behavior::addBodyOffenseCollisionFromRigidBody  size=156  [class]
int Behavior::addBodyOffenseCollisionFromRigidBody(int *rigidBodyRef, int ownerParam, int collisionId,
                                                   int meshArg0, int meshArg2)
{
    if (*rigidBodyRef == 0) {
        return 0;
    }
    int collision = CollisionMesh_create(meshArg0, *(int *)FUN_009f8b60((int)this), meshArg2);
    if (collision == 0) {
        DebugPrint(DAT_01665128);
        return 0;
    }
    *(int *)(collision + 0x3f0) = field4F0();  // Collision+0x3F0: ? owner unit
    FUN_00d771d0(collision, FUN_00915990(rigidBodyRef, 9));
    FUN_00d78e50(collision, *rigidBodyRef);
    FUN_00a8c3b0((int)this, collision, ownerParam, collisionId);
    FUN_00d7b0f0(collision);
    FUN_00d7b890(collision);
    return 1;
}

// 00A93A00  FUN_00a93a00  size=189  [between]
// Adds `collision` to defenseCollisionList and registers it with the collision manager.
// (__thiscall with two stack arguments; functions.h lists only one.)
undefined4 FUN_00a93a00(int self, int collision, int ownerParam)
{
    Behavior *behavior = (Behavior *)self;
    VCALL(behavior->defenseCollisionList(), 0x8, void (__thiscall *)(Behavior::Array *, int *))(
        behavior->defenseCollisionList(), &collision);  // push_back
    FUN_00d77200(collision);
    Collision_addObjDatReference(collision, behavior->modelObjId(), behavior->setFlags());
    *(int *)(collision + 0x374) = ownerParam;           // Collision+0x374
    char *name = (char *)(collision + 0x394);           // Collision+0x394: name, char[0x20]
    if (strcmp(name, DAT_016416fa) == 0) {
        _strncpy_s(name, 0x20, "DefenseCol", 0x1f);
    }
    int *manager = (int *)FUN_00d773c0();
    if (VCALL(manager, 0xc, int (__thiscall *)(int *, int))(manager, collision) == 0) {
        FUN_00d77210(collision);
        return 0;
    }
    return 1;
}

// 00A93AC0  Behavior::addDefenseCollisionFromRigidBody  size=172  [class]
int Behavior::addDefenseCollisionFromRigidBody(int *rigidBodyRef, int meshArg0, int ownerParam)
{
    if (*rigidBodyRef == 0) {
        return 0;
    }
    int collision = CollisionMesh_create(meshArg0, *(int *)FUN_009f8b60((int)this), 0);
    if (collision == 0) {
        DebugPrint(DAT_01665178);
        return 0;
    }
    *(int *)(collision + 0x3f0) = field4F0();  // Collision+0x3F0
    FUN_00d771d0(collision, FUN_00915990(rigidBodyRef, 9));
    FUN_00d78e50(collision, *rigidBodyRef);
    if (FUN_00a93a00((int)this, collision, ownerParam) == 0) {
        FUN_00d78e90(collision);
        FUN_00d7b0f0(collision);
        return 0;
    }
    FUN_00d7b0f0(collision);
    FUN_00d7b890(collision);
    return 1;
}

// 00A93B70  Behavior::addDefenseCollisionFromRigidBody_2  size=258  [class]
// Same as addDefenseCollisionFromRigidBody for every rigid body of a list
// (list->vf0C() = count, list->vf12C(&out, index) = get).
int Behavior::addDefenseCollisionFromRigidBody_2(int *rigidBodyList, int meshArg0)
{
    int ownerParam = (int)FUN_00a4af30((int)DAT_01be8e40, 5);
    int index = 0;
    if (0 < VCALL(rigidBodyList, 0xc, int (__thiscall *)(int *))(rigidBodyList)) {
        do {
            int rigidBody;  // the original reuses the stack slot of rigidBodyList
            VCALL(rigidBodyList, 0x12c, void (__thiscall *)(int *, int *, int))(rigidBodyList, &rigidBody, index);
            if (rigidBody == 0) {
                return 0;
            }
            int collision = CollisionMesh_create(meshArg0, *(int *)FUN_009f8b60((int)this), 0);
            if (collision == 0) {
                DebugPrint(DAT_01665178);
                return 0;
            }
            *(int *)(collision + 0x3f0) = field4F0();  // Collision+0x3F0
            FUN_00d771d0(collision, FUN_00915990(&rigidBody, 9));
            FUN_00d78e50(collision, rigidBody);
            if (FUN_00a93a00((int)this, collision, ownerParam) == 0) {
                FUN_00d78e90(collision);
                FUN_00d7b0f0(collision);
                return 0;
            }
            FUN_00d7b0f0(collision);
            FUN_00d7b890(collision);
            index = index + 1;
        } while (index < VCALL(rigidBodyList, 0xc, int (__thiscall *)(int *))(rigidBodyList));
    }
    return 1;
}

// 00A94010  Behavior::createAttackImpactWave  size=369  [class]
// desc: attack description (+0x10 attack data, +0x110 transform, +0x120..+0x13C parameters).
int *Behavior::createAttackImpactWave(int desc)
{
    char *d = (char *)desc;
    int *attackData;
    void *memory = MemAlloc(0x110, DAT_01b7c0b8);
    if (memory == 0 || (attackData = CollisionAttackData_construct(memory)) == 0) {
        DebugPrint(DAT_01665278);
        return 0;
    }
    FUN_0043e160((undefined4 *)attackData[2], (undefined4 *)(d + 0x10));  // ECX = attackData[2] (a pointer stored at +0x8)
    if (*(int *)(d + 0x12c) != 0) {
        attackData[1] = 1;
    }
    int *wave = (int *)FUN_00602cb0(*(undefined4 *)(d + 0x134), *(undefined4 *)(d + 0x138),
                                    (undefined4)attackData);
    if (wave == 0) {
        DebugPrint(DAT_01665230);
        VCALL(attackData, 0x4, void (__thiscall *)(int *, int))(attackData, 1);  // delete
        return 0;
    }
    VCALL(wave, 0x6c, void (__thiscall *)(int *, char *))(wave, d + 0x110);
    int collision = *(int *)((char *)wave + 0x870);           // wave+0x870: its collision
    *(float *)((char *)wave + 0x874) = *(float *)(d + 0x130);
    if (collision == 0) {
        VCALL(attackData, 0x4, void (__thiscall *)(int *, int))(attackData, 1);  // delete
        return 0;
    }
    if (*(int *)(d + 0x13c) != 0) {
        VCALL(collision, 0x20, void (__thiscall *)(int, int, int, int))(
            collision, 0xb, *(int *)FUN_009f8b60((int)this), 8);
    }
    int *manager = (int *)FUN_00d773c0();
    VCALL(manager, 0x8, void (__thiscall *)(int *, int))(manager, collision);
    FUN_00d7b0f0(collision);
    FUN_00d77c50(collision, *(undefined4 *)((char *)wave + 0x4f0), 0xffffffff);  // wave's cObj::field4F0
    *(float *)(collision + 0x510) = *(float *)(d + 0x124);
    FUN_00d77580(collision, *(undefined4 *)(d + 0x124), *(undefined4 *)(d + 0x120), *(undefined4 *)(d + 0x128));
    *(int *)(collision + 0x380) = 0x187;
    FUN_00d7b890(collision);
    return wave;
}

// 00A94190  Behavior::createAttackImpactVolume  size=452  [class]
int *Behavior::createAttackImpactVolume(int desc)
{
    char *d = (char *)desc;
    int *attackData;
    void *memory = MemAlloc(0x110, DAT_01b7c0b8);
    if (memory == 0 || (attackData = CollisionAttackData_construct(memory)) == 0) {
        DebugPrint(DAT_01665310);
        return 0;
    }
    FUN_0043e160((undefined4 *)attackData[2], (undefined4 *)(d + 0x10));  // ECX = attackData[2] (a pointer stored at +0x8)
    if (0.0f < *(float *)(d + 0x138) || *(float *)(d + 0x13c) != 0.0f) {
        attackData[1] = 1;
    }
    int *volume = (int *)FUN_006029f0(*(undefined4 *)(d + 0x144), *(undefined4 *)(d + 0x148),
                                      (undefined4)attackData);
    if (volume == 0) {
        DebugPrint(DAT_016652c8);
        VCALL(attackData, 0x4, void (__thiscall *)(int *, int))(attackData, 1);  // delete
        return 0;
    }
    VCALL(volume, 0x6c, void (__thiscall *)(int *, char *))(volume, d + 0x110);
    int collision = *(int *)((char *)volume + 0x870);         // volume+0x870: its collision
    *(float *)((char *)volume + 0x878) = *(float *)(d + 0x138);
    *(float *)((char *)volume + 0x87c) = *(float *)(d + 0x13c);
    *(float *)((char *)volume + 0x874) = *(float *)(d + 0x140);
    if (collision == 0) {
        VCALL(attackData, 0x4, void (__thiscall *)(int *, int))(attackData, 1);  // delete
        return 0;
    }
    if (*(int *)(d + 0x14c) != 0) {
        VCALL(collision, 0x20, void (__thiscall *)(int, int, int, int))(collision, 0xb, *(int *)(d + 0x148), 8);
    }
    int *manager = (int *)FUN_00d773c0();
    VCALL(manager, 0x8, void (__thiscall *)(int *, int))(manager, collision);
    FUN_00d7b0f0(collision);
    FUN_00d77c50(collision, *(undefined4 *)((char *)volume + 0x4f0), 0xffffffff);  // volume's cObj::field4F0
    *(float *)(collision + 0x570) = *(float *)(d + 0x124);
    *(float *)(collision + 0x574) = *(float *)(d + 0x130);
    FUN_00d77620(collision, *(float *)(d + 0x124), *(float *)(d + 0x120), *(float *)(d + 0x128),
                 *(float *)(d + 0x130), *(float *)(d + 0x12c), *(float *)(d + 0x134));
    *(int *)(collision + 0x380) = *(int *)(d + 0x10);
    if (*(float *)(d + 0x140) <= 0.0f) {  // fcomp / test ah,1: NaN skips the call
        FUN_00d7b890(collision);
    }
    return volume;
}

// 00A9CBA0  FUN_00a9cba0  size=97  [callgraph]
// Sets the parent/child parts numbers of the attachment with the given key.
void FUN_00a9cba0(int *holder, int key, int parentPartsNo, int childPartsNo)
{
    Behavior::Array *list = (Behavior::Array *)*holder;
    if (list != 0) {
        Behavior::Attachment *entry = (Behavior::Attachment *)list->data;
        Behavior::Attachment *end = entry + list->count;
        while (entry != end && entry->key != key) {
            entry = entry + 1;
        }
        if (entry != (Behavior::Attachment *)list->data + list->count) {
            entry->parentPartsNo = parentPartsNo;
            entry->childPartsNo = childPartsNo;
        }
    }
}

// 00A9CC10  FUN_00a9cc10  size=90  [callgraph]
// Sets Attachment::lateUpdate of the attachment with the given key.
void FUN_00a9cc10(int *holder, int key, int lateUpdate)
{
    Behavior::Array *list = (Behavior::Array *)*holder;
    if (list != 0) {
        Behavior::Attachment *entry = (Behavior::Attachment *)list->data;
        Behavior::Attachment *end = entry + list->count;
        while (entry != end && entry->key != key) {
            entry = entry + 1;
        }
        if (entry != (Behavior::Attachment *)list->data + list->count) {
            entry->lateUpdate = lateUpdate;
        }
    }
}

// 00A9CC70  FUN_00a9cc70  size=54  [callgraph]
// Returns the attachment with the given key, or 0.
uint FUN_00a9cc70(int *holder, undefined4 key)
{
    if (*holder == 0) {
        return 0;
    }
    uint entry = (uint)FUN_00a91be0(holder, key);
    Behavior::Array *list = (Behavior::Array *)*holder;
    return (entry != (uint)(list->data + list->count * 0x50)) ? entry : 0;
}

// 00A9CCB0  FUN_00a9ccb0  size=570  [callgraph]
// Applies every attachment with lateUpdate == 0: child matrix = rotation * parent matrix,
// translated by the parent-space offset.
void __fastcall FUN_00a9ccb0(int *holder)
{
    Behavior::Array *list = (Behavior::Array *)*holder;
    if (list == 0) {
        return;
    }
    Behavior::Attachment *entry = (Behavior::Attachment *)list->data;
    if (entry == entry + list->count) {
        return;
    }
    do {
        if (entry->lateUpdate == 0) {
            int childObj = (int)FUN_00a81330(&entry->childHandle);
            if (childObj != 0) {
                int child = (int)FUN_00a7c800(childObj);
                if (entry->childPartsNo != -1) {
                    child = FUN_00a12210((int)FUN_00a7c800(childObj), entry->childPartsNo);
                }
                int parent;
                int parentObj = (int)FUN_00a81330(&entry->parentHandle);
                if (parentObj == 0) {
                    parent = 0;
                }
                else {
                    parent = (int)FUN_00a7c800(parentObj);
                    if (parent != 0 && entry->parentPartsNo != -1) {
                        parent = FUN_00a12210((int)FUN_00a7c800(parentObj), entry->parentPartsNo);
                    }
                }
                if (child != 0 && parent != 0) {
                    float *parentMatrix = ((cParts *)parent)->matrix();
                    float *childMatrix = ((cParts *)child)->matrix();
                    FID_conflict__memcpy(childMatrix, parentMatrix, 0x40);
                    float rotation[16] = { 1.0f, 0.0f, 0.0f, 0.0f,
                                           0.0f, 1.0f, 0.0f, 0.0f,
                                           0.0f, 0.0f, 1.0f, 0.0f,
                                           0.0f, 0.0f, 0.0f, 1.0f };
                    float temp[16];
                    if (entry->rotZ != 0.0f) {
                        D3DXMatrixRotationZ(temp, entry->rotZ);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    if (entry->rotY != 0.0f) {
                        D3DXMatrixRotationY(temp, entry->rotY);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    if (entry->rotX != 0.0f) {
                        D3DXMatrixRotationX(temp, entry->rotX);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    D3DXMatrixMultiply(childMatrix, rotation, childMatrix);
                    float offset[4];
                    D3DXVec3TransformNormal(offset, entry->offset, parentMatrix);
                    offset[0] = parentMatrix[12] + offset[0];
                    offset[1] = parentMatrix[13] + offset[1];
                    offset[2] = parentMatrix[14] + offset[2];
                    childMatrix[14] = offset[2];
                    childMatrix[12] = offset[0];
                    childMatrix[13] = offset[1];
                    FUN_00a17a40((int)FUN_00a7c800(childObj));
                }
            }
        }
        entry = entry + 1;
    } while (entry != (Behavior::Attachment *)((Behavior::Array *)*holder)->data + ((Behavior::Array *)*holder)->count);
}

// 00A9CEF0  FUN_00a9cef0  size=570  [callgraph]
// Same as FUN_00a9ccb0 for the attachments with lateUpdate != 0.
void __fastcall FUN_00a9cef0(int *holder)
{
    Behavior::Array *list = (Behavior::Array *)*holder;
    if (list == 0) {
        return;
    }
    Behavior::Attachment *entry = (Behavior::Attachment *)list->data;
    if (entry == entry + list->count) {
        return;
    }
    do {
        if (entry->lateUpdate != 0) {
            int childObj = (int)FUN_00a81330(&entry->childHandle);
            if (childObj != 0) {
                int child = (int)FUN_00a7c800(childObj);
                if (entry->childPartsNo != -1) {
                    child = FUN_00a12210((int)FUN_00a7c800(childObj), entry->childPartsNo);
                }
                int parent;
                int parentObj = (int)FUN_00a81330(&entry->parentHandle);
                if (parentObj == 0) {
                    parent = 0;
                }
                else {
                    parent = (int)FUN_00a7c800(parentObj);
                    if (parent != 0 && entry->parentPartsNo != -1) {
                        parent = FUN_00a12210((int)FUN_00a7c800(parentObj), entry->parentPartsNo);
                    }
                }
                if (child != 0 && parent != 0) {
                    float *parentMatrix = ((cParts *)parent)->matrix();
                    float *childMatrix = ((cParts *)child)->matrix();
                    FID_conflict__memcpy(childMatrix, parentMatrix, 0x40);
                    float rotation[16] = { 1.0f, 0.0f, 0.0f, 0.0f,
                                           0.0f, 1.0f, 0.0f, 0.0f,
                                           0.0f, 0.0f, 1.0f, 0.0f,
                                           0.0f, 0.0f, 0.0f, 1.0f };
                    float temp[16];
                    if (entry->rotZ != 0.0f) {
                        D3DXMatrixRotationZ(temp, entry->rotZ);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    if (entry->rotY != 0.0f) {
                        D3DXMatrixRotationY(temp, entry->rotY);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    if (entry->rotX != 0.0f) {
                        D3DXMatrixRotationX(temp, entry->rotX);
                        D3DXMatrixMultiply(rotation, temp, rotation);
                    }
                    D3DXMatrixMultiply(childMatrix, rotation, childMatrix);
                    float offset[4];
                    D3DXVec3TransformNormal(offset, entry->offset, parentMatrix);
                    offset[0] = parentMatrix[12] + offset[0];
                    offset[1] = parentMatrix[13] + offset[1];
                    offset[2] = parentMatrix[14] + offset[2];
                    childMatrix[14] = offset[2];
                    childMatrix[12] = offset[0];
                    childMatrix[13] = offset[1];
                    FUN_00a17a40((int)FUN_00a7c800(childObj));
                }
            }
        }
        entry = entry + 1;
    } while (entry != (Behavior::Attachment *)((Behavior::Array *)*holder)->data + ((Behavior::Array *)*holder)->count);
}

// 00A9D130  Behavior::vf44  size=434  [class]
void Behavior::vf44()
{
    if (animNames() != 0) {
        VCALL(animNames(), 0x0, void (__thiscall *)(Behavior::Array *, int))(animNames(), 1);  // delete
        animNames() = 0;
    }
    if (field75C() != 0) {
        int *registry = (int *)FUN_008d7570();
        VCALL(registry, 0x8, void (__thiscall *)(int *, unsigned int))(registry, objId());
    }
    field75C() = 0;
    if (field754() != 0) {
        int *registry = (int *)FUN_00d72970();
        VCALL(registry, 0x8, void (__thiscall *)(int *, unsigned int))(registry, objId());
    }
    field754() = 0;
    if (field584() != 0) {
        VCALL(DAT_01be9bf4, 0x10, void (__thiscall *)(int *, int, int))(DAT_01be9bf4, field584(), field588());
    }
    field588() = 0;
    field584() = 0;
    if (ownedObj808() != 0) {
        FUN_00dd4920(ownedObj808());
        ownedObj808() = 0;
    }
    int obj = ownedObj7D8();
    if (obj != 0) {
        FUN_00c730c0(obj);
        FUN_00905ce0((int *)(obj + 0x868));
        FUN_00905ce0((int *)(obj + 0x858));
        FUN_00dd4920(obj);
        ownedObj7D8() = 0;
    }
    FUN_00a8c820((int)this);
    if (queueLock() != 0) {
        FUN_00dd7270((undefined4)queueLock());
    }
    void *lock = queueLock();
    if (lock != 0) {
        FUN_00dd7270((undefined4)lock);
        FUN_00dd4920((int)lock);
        queueLock() = 0;
    }
    if (queue63C() != 0) {
        VCALL(queue63C(), 0x0, void (__thiscall *)(Behavior::Array *, int))(queue63C(), 1);  // delete
        queue63C() = 0;
    }
    if (attachments() != 0) {
        FUN_00a91a00((int *)attachments());
    }
    if (attachments() != 0) {
        FUN_00dd4920((int)attachments());
        attachments() = 0;
    }
    int cloth = cloth1();
    if (cloth != 0) {
        FUN_00a01300(cloth);
        FUN_00dd4920(cloth);
        cloth1() = 0;
    }
    cloth = cloth0();
    if (cloth != 0) {
        FUN_00a01300(cloth);
        FUN_00dd4920(cloth);
        cloth0() = 0;
    }
    if (array788() != 0) {
        FUN_00dd4940((int)array788());
        array788() = 0;
    }
}

// 00A9D380  Behavior::vf50  size=71  [class]
void Behavior::vf50()
{
    if (field7CC() != 0 && field7D0() != 0) {
        FUN_00d829e0((undefined4 *)field7CC(), field7D0());
    }
    if ((cloth0() != 0 || cloth1() != 0) && clothEnabled() != 0) {
        FUN_00a17a40((int)this);
    }
    FUN_00a96f60((int)this);
}

// 00A9D3E0  Behavior::vf54  size=216  [class]
void Behavior::vf54()
{
    if (field4F0() != 0) {
        int unit = (int)FUN_00a7c890(field4F0());
        if (unit != 0 && (*(unsigned char *)(unit + 0x94) & 1) != 0) {  // unit+0x94: flags
            FUN_00e30490(unit);
            FUN_00e304b0(unit);
        }
    }
    if (attachments() != 0) {
        FUN_00a9ccb0((int *)attachments());
    }
    if (clothEnabled() != 0 && vf244() != 0) {
        if (cloth0() != 0) {
            int timer = (field4F0() == 0) ? (int)DAT_01be939c : (int)FUN_00a7c910(field4F0());
            float step = (float)FUN_00e049b0((int *)timer);
            FUN_00a01350((int *)cloth0(), step, 0);
        }
        if (cloth1() != 0) {
            int timer = (field4F0() == 0) ? (int)DAT_01be939c : (int)FUN_00a7c910(field4F0());
            float step = (float)FUN_00e049b0((int *)timer);
            FUN_00a01350((int *)cloth1(), step, 0);
        }
    }
    if (attachments() != 0) {
        FUN_00a9cef0((int *)attachments());
    }
}

// 00A9D4C0  FUN_00a9d4c0  size=284  [between]
// out = Rz(vec90.z) * Ry(vec90.y) * Rx(vec90.x) product (each only when non-zero) * matrixB0.
undefined4 FUN_00a9d4c0(int self, undefined4 out)
{
    cModelBase *model = (cModelBase *)self;
    float rotation[16] = { 1.0f, 0.0f, 0.0f, 0.0f,
                           0.0f, 1.0f, 0.0f, 0.0f,
                           0.0f, 0.0f, 1.0f, 0.0f,
                           0.0f, 0.0f, 0.0f, 1.0f };
    float temp[16];
    if (model->vec90()[2] != 0.0f) {
        D3DXMatrixRotationZ(temp, model->vec90()[2]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    if (model->vec90()[1] != 0.0f) {
        D3DXMatrixRotationY(temp, model->vec90()[1]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    if (model->vec90()[0] != 0.0f) {
        D3DXMatrixRotationX(temp, model->vec90()[0]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    D3DXMatrixMultiply((float *)out, rotation, model->matrixB0());
    return out;
}

// 00A9D5E0  FUN_00a9d5e0  size=313  [between]
// As FUN_00a9d4c0, then adds the xyz at cParts+0x50 to the translation row.
int FUN_00a9d5e0(int self, int out)
{
    cModelBase *model = (cModelBase *)self;
    float *result = (float *)out;
    float rotation[16] = { 1.0f, 0.0f, 0.0f, 0.0f,
                           0.0f, 1.0f, 0.0f, 0.0f,
                           0.0f, 0.0f, 1.0f, 0.0f,
                           0.0f, 0.0f, 0.0f, 1.0f };
    float temp[16];
    if (model->vec90()[2] != 0.0f) {
        D3DXMatrixRotationZ(temp, model->vec90()[2]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    if (model->vec90()[1] != 0.0f) {
        D3DXMatrixRotationY(temp, model->vec90()[1]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    if (model->vec90()[0] != 0.0f) {
        D3DXMatrixRotationX(temp, model->vec90()[0]);
        D3DXMatrixMultiply(rotation, temp, rotation);
    }
    D3DXMatrixMultiply(result, rotation, model->matrixB0());
    result[12] = result[12] + model->quat()[0];  // cParts+0x50 (named quat(); used as a position here)
    result[13] = model->quat()[1] + result[13];
    result[14] = model->quat()[2] + result[14];
    return out;
}

// 00A9D720  FUN_00a9d720  size=156  [between]
// Pushes a copy of `record` (extra = 0.0f) onto queue63C under queueLock.
void FUN_00a9d720(int self, undefined4 *record)
{
    Behavior *behavior = (Behavior *)self;
    char *lock = (char *)behavior->queueLock();
    if (*(int *)(lock + 0x18) != 0) {
        EnterCriticalSection(lock);
    }
    Behavior::QueueEntry entry;
    entry.words[0] = record[0];
    entry.words[1] = record[1];
    entry.words[2] = record[2];
    entry.words[3] = record[3];
    entry.words[4] = record[4];
    entry.words[5] = record[5];
    entry.words[6] = record[6];
    entry.vec[0] = ((float *)record)[8];
    entry.vec[1] = ((float *)record)[9];
    entry.vec[2] = ((float *)record)[10];
    entry.vec[3] = ((float *)record)[11];
    entry.extra = 0.0f;
    VCALL(behavior->queue63C(), 0x8, void (__thiscall *)(Behavior::Array *, Behavior::QueueEntry *))(
        behavior->queue63C(), &entry);  // push_back
    if (*(int *)(lock + 0x18) != 0) {
        LeaveCriticalSection(lock);
    }
}

// 00A9D7C0  FUN_00a9d7c0  size=157  [between]
// Same as FUN_00a9d720 with an explicit `extra` value (a float, passed as its bits).
void FUN_00a9d7c0(int self, undefined4 *record, undefined4 extra)
{
    Behavior *behavior = (Behavior *)self;
    char *lock = (char *)behavior->queueLock();
    if (*(int *)(lock + 0x18) != 0) {
        EnterCriticalSection(lock);
    }
    Behavior::QueueEntry entry;
    entry.words[0] = record[0];
    entry.words[1] = record[1];
    entry.words[2] = record[2];
    entry.words[3] = record[3];
    entry.words[4] = record[4];
    entry.words[5] = record[5];
    entry.words[6] = record[6];
    entry.vec[0] = ((float *)record)[8];
    entry.vec[1] = ((float *)record)[9];
    entry.vec[2] = ((float *)record)[10];
    entry.vec[3] = ((float *)record)[11];
    entry.extra = *(float *)&extra;
    VCALL(behavior->queue63C(), 0x8, void (__thiscall *)(Behavior::Array *, Behavior::QueueEntry *))(
        behavior->queue63C(), &entry);  // push_back
    if (*(int *)(lock + 0x18) != 0) {
        LeaveCriticalSection(lock);
    }
}

// 00A9D860  FUN_00a9d860  size=58  [between]
// Clears queue63C under queueLock.
void __fastcall FUN_00a9d860(int self)
{
    Behavior *behavior = (Behavior *)self;
    char *lock = (char *)behavior->queueLock();
    if (*(int *)(lock + 0x18) != 0) {
        EnterCriticalSection(lock);
    }
    Behavior::Array *queue = behavior->queue63C();
    if (queue->data != 0) {
        queue->count = 0;
    }
    if (*(int *)(lock + 0x18) != 0) {
        LeaveCriticalSection(lock);
    }
}

// 00A9D8A0  FUN_00a9d8a0  size=52  [between]
// Releases the three collision lists and ownedObj7B8.
void __fastcall FUN_00a9d8a0(int self)
{
    Behavior *behavior = (Behavior *)self;
    FUN_00a934c0(self);
    FUN_00a933e0(self);
    FUN_00a93450(self);
    if (behavior->ownedObj7B8() != 0) {
        VCALL(behavior->ownedObj7B8(), 0x0, void (__thiscall *)(void *, int))(behavior->ownedObj7B8(), 1);  // delete
        behavior->ownedObj7B8() = 0;
    }
}

// 00A9D9A0  FUN_00a9d9a0  size=38  [between]
// Hands the range of collisionList7A4 to FUN_00a9c270(dest, begin, end).
// (__thiscall with one stack argument; functions.h lists none.)
void FUN_00a9d9a0(int self, int *dest)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->collisionList7A4() != 0) {
        Behavior::Array *list = behavior->collisionList7A4();
        int begin = (int)list->data;
        FUN_00a9c270(dest, begin, begin + list->count * 4);
    }
}

// 00A9DAC0  FUN_00a9dac0  size=237  [between]
// Removes from collisionList7A4 (and unregisters) every collision sharing Collision+0x354 with
// `other` whose state (Collision+0x360) is <= 3 and != 1.
void FUN_00a9dac0(int self, int other)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->collisionList7A4();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        int *next;
        do {
            int collision = *it;
            if (*(int *)(collision + 0x354) == *(int *)(other + 0x354) &&
                *(int *)(collision + 0x360) < 4 && *(int *)(collision + 0x360) != 1) {
                FUN_00d7b0f0(collision);
                Behavior::Array *current = behavior->collisionList7A4();
                unsigned int count = current->count;
                int *data = (int *)current->data;
                int *end = data + count;
                if (it == end || data == 0 || count == 0 ||
                    count <= (unsigned int)((int)((char *)it - (char *)data) >> 2)) {
                    int *manager = (int *)FUN_00d773c0();
                    VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, collision);
                    next = end;
                }
                else {
                    for (int *p = it; p != end - 1; p = p + 1) {
                        *p = p[1];
                    }
                    current->count = current->count - 1;
                    int *manager = (int *)FUN_00d773c0();
                    VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, collision);
                    next = it;
                }
            }
            else {
                next = it + 1;
            }
            it = next;
        } while (next != (int *)behavior->collisionList7A4()->data + behavior->collisionList7A4()->count);
    }
}

// 00A9DD90  FUN_00a9dd90  size=229  [between]
// Same as FUN_00a9dac0, matching the collision id (Collision+0x380) instead.
void FUN_00a9dd90(int self, int collisionId)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *list = behavior->collisionList7A4();
    int *it;
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        int *next;
        do {
            int collision = *it;
            if (*(int *)(collision + 0x380) == collisionId &&
                *(int *)(collision + 0x360) < 4 && *(int *)(collision + 0x360) != 1) {
                FUN_00d7b0f0(collision);
                Behavior::Array *current = behavior->collisionList7A4();
                unsigned int count = current->count;
                int *data = (int *)current->data;
                int *end = data + count;
                if (it == end || data == 0 || count == 0 ||
                    count <= (unsigned int)((int)((char *)it - (char *)data) >> 2)) {
                    int *manager = (int *)FUN_00d773c0();
                    VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, collision);
                    next = end;
                }
                else {
                    for (int *p = it; p != end - 1; p = p + 1) {
                        *p = p[1];
                    }
                    current->count = current->count - 1;
                    int *manager = (int *)FUN_00d773c0();
                    VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, collision);
                    next = it;
                }
            }
            else {
                next = it + 1;
            }
            it = next;
        } while (next != (int *)behavior->collisionList7A4()->data + behavior->collisionList7A4()->count);
    }
}

// 00A9E060  FUN_00a9e060  size=18  [between]
// (__thiscall with one stack argument, forwarded; functions.h lists none.)
void FUN_00a9e060(int self, int param)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->attachments() != 0) {
        FUN_004bdf70((int *)behavior->attachments(), param);
        return;
    }
}

// 00A9E080  FUN_00a9e080  size=76  [between]
// Removes the attachment at `index`.
void FUN_00a9e080(int self, uint index)
{
    Behavior::Array **holder = ((Behavior *)self)->attachments();
    Behavior::Array *list;
    if (holder != 0 && (list = *holder) != 0) {
        Behavior::Attachment *entry;
        if (index < list->count) {
            entry = (Behavior::Attachment *)list->data + index;
        }
        else {
            entry = 0;
        }
        if (entry != (Behavior::Attachment *)list->data + list->count) {
            FUN_004b53d0((undefined4 *)entry);
            FUN_004bde80((int)*holder, (int)entry);
        }
    }
}

// 00A9E0D0  FUN_00a9e0d0  size=69  [between]
// Removes the attachment with the given key.
void FUN_00a9e0d0(int self, undefined4 key)
{
    Behavior::Array **holder = ((Behavior *)self)->attachments();
    int entry;
    if (holder != 0 && *holder != 0 &&
        (entry = FUN_00a91be0((int *)holder, key),
         entry != (int)((*holder)->data + (*holder)->count * 0x50))) {
        FUN_004b53d0((undefined4 *)entry);
        FUN_004bde80((int)*holder, entry);
    }
}

// 00A9E120  FUN_00a9e120  size=18  [between]
// (__thiscall with three stack arguments, forwarded; functions.h lists none.)
void FUN_00a9e120(int self, int key, int parentPartsNo, int childPartsNo)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->attachments() != 0) {
        FUN_00a9cba0((int *)behavior->attachments(), key, parentPartsNo, childPartsNo);
        return;
    }
}

// 00A9E140  FUN_00a9e140  size=18  [between]
// (__thiscall with two stack arguments, forwarded; functions.h lists none.)
void FUN_00a9e140(int self, int key, int lateUpdate)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->attachments() != 0) {
        FUN_00a9cc10((int *)behavior->attachments(), key, lateUpdate);
        return;
    }
}

// 00A9E160  FUN_00a9e160  size=64  [between]
// Returns the attachment with the given key, or 0.
uint FUN_00a9e160(int self, undefined4 key)
{
    Behavior::Array **holder = ((Behavior *)self)->attachments();
    if (holder != 0 && *holder != 0) {
        uint entry = (uint)FUN_00a91be0((int *)holder, key);
        return (entry != (uint)((*holder)->data + (*holder)->count * 0x50)) ? entry : 0;
    }
    return 0;
}

// 00A9E1E0  FUN_00a9e1e0  size=163  [between]
// Records (or updates) the name of an animation id in animNames.
void FUN_00a9e1e0(int self, int animId, char *animName)
{
    Behavior *behavior = (Behavior *)self;
    Behavior::Array *table = behavior->animNames();
    Behavior::AnimName *it = (Behavior::AnimName *)table->data;
    Behavior::AnimName *end = it + table->count;
    for (; it != end; it = it + 1) {
        if (it->animId == animId) {
            it->field28 = 0.0f;
            _strcpy_s(it->name, 0x20, animName);
            return;
        }
    }
    Behavior::AnimName entry;
    entry.field28 = 0.0f;
    entry.animId = animId;
    entry.field04 = -1;
    entry.field2C = 0;
    _strcpy_s(entry.name, 0x20, animName);
    VCALL(behavior->animNames(), 0x8, void (__thiscall *)(Behavior::Array *, Behavior::AnimName *))(
        behavior->animNames(), &entry);  // push_back
}

// 00A9E290  FUN_00a9e290  size=429  [between]
// Starts animation `animName` on this object's unit and loads its sequence file.
// (__thiscall with seven stack arguments; functions.h lists none.)
int FUN_00a9e290(int self, char *animName, int param2, float param3, float param4, unsigned int flags,
                 float param6, float param7)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    int animId = FUN_00e3ff90(unitOf(behavior), animName, param2, param3, param4, flags, param6, param7);
    if (FUN_00d466f0((int)DAT_018b9140) != 0) {
        char fileName[64];
        unsigned int fileRef[2];
        FUN_009f8ea0(fileName, 0x40, behavior->vf98(), 0);
        _strcat_s(fileName, 0x40, "_");
        _strcat_s(fileName, 0x40, animName);
        FUN_00de3530((undefined4)fileRef);
        fileRef[0] = behavior->filePair0();
        fileRef[1] = behavior->filePair1();
        if ((flags & 0x400) == 0) {
            // vf9C returns a value here although it is declared void (see Behavior.h)
            int seqFile = VCALL(behavior, 0x9c, int (__thiscall *)(Behavior *, char *))(behavior, fileName);
            int unit = unitOf(behavior);
            if (FUN_00e26e90_result(unit) != 0) {
                FUN_00e3fa90(unit + 0xf4, seqFile, fileName, param2);
            }
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = unitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;  // unit+0xE4..0xEC
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = unitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->vf24C(animName);
    behavior->animStarted() = 1;
    return animId;
}

// 00A9E440  FUN_00a9e440  size=595  [between]
// Starts on this object's unit the animation `animName` taken from `source`'s unit
// (clip "<modelObjId>_<animName>"), then loads "<...>_<vf94()>_seq.bxm" from source's files.
// (__thiscall with eight stack arguments; functions.h lists none.)
int FUN_00a9e440(int self, int source, char *animName, int param3, float param4, float param5,
                 unsigned int flags, float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    Behavior *src = (Behavior *)source;
    if (src->field4F0() == 0 || FUN_00a7c890(src->field4F0()) == 0 ||
        behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    char suffix[16];
    char baseName[64];
    char seqName[64];
    unsigned int modelId = behavior->modelObjId();
    if (modelId == 0x10100) {
        modelId = 0x10010;
    }
    FUN_009f8ea0(baseName, 0x40, modelId, 0);
    _strcat_s(baseName, 0x40, "_");
    _strcat_s(baseName, 0x40, animName);
    int clip = FUN_00e355e0(unitOf(src), baseName);
    int animId = AnimationUnit_setAnimation(unitOf(behavior), clip, animName, param3, param4, param5,
                                            flags | 0x400, param7, param8);
    unsigned int fileRef[2];
    FUN_00de3530((undefined4)fileRef);
    fileRef[0] = src->filePair0();
    fileRef[1] = src->filePair1();
    if ((flags & 0x400) == 0) {
        _strcpy_s(seqName, 0x40, baseName);
        FUN_0099a460(suffix, "_%d_seq.bxm", (int)behavior->vf94());
        _strcat_s(seqName, 0x40, suffix);
        int seqFile = FUN_00de4500((int *)fileRef, seqName);
        int unit = unitOf(behavior);
        if (FUN_00e26e90_result(unit) != 0) {
            FUN_00e3fa90(unit + 0xf4, seqFile, baseName, param3);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = unitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = unitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9 (same declarations as part 1)
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fpatan inline)
extern "C" double __cdecl atan2(double y, double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// Shift-JIS debug messages (translated)
extern char DAT_016656f0[];  // "Behavior::setSeqAtk: could not allocate memory for the attack"
extern char DAT_016656c0[];  // "Behavior::setSeqAtk: attack collision creation failed"
#define OBJ_READ_MANAGER  ((void *)0x01B7B364)  // cObjReadManager instance (ECX of getDataAtSet)
#define ATTACK_EVENT_LIST 0x01D61B88            // object receiving attack-type-0 records (FUN_00c63390)

// ---------------------------------------------------------------------------------------------
// Call helpers
// ---------------------------------------------------------------------------------------------
// Virtual call through byte offset `offset` of obj's vftable, with an explicit prototype.
#define VCALL(obj, offset, proto) ((proto)((*(void ***)(obj))[(offset) / 4]))

// FUN_00dd5650: debug printf.
#define DebugPrint ((int (*)(const char *, ...))FUN_00dd5650)

// sprintf-like helpers (functions.h lists only two arguments for them).
#define Sprintf_0099a390 ((int (*)(char *, const char *, ...))static_cast<void (*)(char *, char *)>(FUN_0099a390))
#define Sprintf_0099a460 ((int (*)(char *, const char *, ...))static_cast<void (*)(char *, char *)>(FUN_0099a460))
#define Sprintf_00a2a030 ((int (*)(char *, const char *, ...))static_cast<void (*)(char *, char *)>(FUN_00a2a030))

// Address of the byte at offset `offset` of `object` (sub-objects / fields of derived classes).
#define AT_OFFSET(object, offset) ((void *)((char *)(object) + (offset)))

// Record of an attack sequence (Behavior::setSeqAtk; 16 are fetched with FUN_00e33870).
struct SeqAtkRecord {
    unsigned short attackType;  // +0x00 0: event only, 1: special data, 2/3: ignored, >= 4: normal
    unsigned char  shape;       // +0x02 0 sphere, 1 capsule, 2 box, 3 none, 4 cylinder
    unsigned char  direction;   // +0x03 0..12, see setSeqAtk
    unsigned short attackId82;  // +0x04 matched with AttackInfo+0x82
    unsigned short partsNo;     // +0x06 0xFFFF = whole model
    unsigned short attackId80;  // +0x08 matched with AttackInfo+0x80
    unsigned short pad0A;
    float          pos[3];      // +0x0C
    float          rot[3];      // +0x18
    float          size[3];     // +0x24
};

// Animation unit of an object: FUN_00a7c890(field4F0()), or 0 when field4F0() is null.
static inline int animUnitOf(Behavior *behavior)
{
    return (behavior->field4F0() == 0) ? 0 : (int)FUN_00a7c890(behavior->field4F0());
}
// FUN_00e26e90 returns a value although functions.h declares it void.
static inline int Unit_isActive(int unit)
{
    return ((int (__fastcall *)(int))FUN_00e26e90)(unit);
}
// 00E3FD90 Animation::Unit::setAnimation (__thiscall on the unit).
static inline int Unit_setAnimation(int unit, int clip, char *animName, int param3, float param4, float param5,
                                    unsigned int flags, float param7, float param8)
{
    return ((int (__thiscall *)(int, int, char *, int, float, float, unsigned int, float, float))0x00E3FD90)(
        unit, clip, animName, param3, param4, param5, flags, param7, param8);
}
// 00E355E0: clip of `name` in a unit (__thiscall on the unit).
static inline int Unit_findClip(int unit, char *name)
{
    return ((int (__thiscall *)(int, char *))0x00E355E0)(unit, name);
}
// 00E3FA90: attaches a sequence file to the unit's sequence holder (unit+0xF4).
static inline void Unit_setSequence(int holder, int seqFile, char *name, int param3)
{
    ((void (__thiscall *)(int, int, char *, int))0x00E3FA90)(holder, seqFile, name, param3);
}
static inline int FUN_00e36390_thiscall(int holder, int list, int param2, char *animName, int param4, float param5,
                                        int param6)
{
    return ((int (__thiscall *)(int, int, int, char *, int, float, int))0x00E36390)(holder, list, param2, animName,
                                                                                  param4, param5, param6);
}
static inline int FUN_00e36450_thiscall(int holder, int list, int param2, char *animName, int param4, float param5,
                                        int param6)
{
    return ((int (__thiscall *)(int, int, int, char *, int, float, int))0x00E36450)(holder, list, param2, animName,
                                                                                  param4, param5, param6);
}
// 00A01170 cObjReadManager::getDataAtSet: fills `out` (a file reference pair) for data set `dataSet`.
static inline void cObjReadManager_getDataAtSet(unsigned int *out, int dataSet, int param3)
{
    ((void (__thiscall *)(void *, unsigned int *, int, int))0x00A01170)(OBJ_READ_MANAGER, out, dataSet, param3);
}
// Callees in src/object/bh0064/Bh0064.cpp (functions.h lists no arguments for them).
static inline int FUN_00a94640_thiscall(int self, int param1, int param2, int param3, int param4, int param5,
                                        char *animName, float param7, unsigned int flags)
{
    return ((int (__thiscall *)(int, int, int, int, int, int, char *, float, unsigned int))0x00A94640)(
        self, param1, param2, param3, param4, param5, animName, param7, flags);
}
static inline int FUN_00a94850_thiscall(int self, int other, int param2, int param3, int param4, int param5,
                                        int param6, char *animName, float param8, unsigned int flags)
{
    return ((int (__thiscall *)(int, int, int, int, int, int, int, char *, float, unsigned int))0x00A94850)(
        self, other, param2, param3, param4, param5, param6, animName, param8, flags);
}
static inline int FUN_00a95140_thiscall(int self, char *animName, float startFrame)
{
    return ((int (__thiscall *)(int, char *, float))0x00A95140)(self, animName, startFrame);
}
static inline int FUN_00a94f00_thiscall(int self, char *animName, float startFrame, float endFrame)
{
    return ((int (__thiscall *)(int, char *, float, float))0x00A94F00)(self, animName, startFrame, endFrame);
}
// Callees in src/misc/HoldEntitySignalContext.cpp, __thiscall on cModel::ownedObject370().
static inline int FUN_00a1b020_thiscall(void *context, int owner, int isPlayer, int param3, int param4, int param5)
{
    return ((int (__thiscall *)(void *, int, int, int, int, int))0x00A1B020)(context, owner, isPlayer, param3,
                                                                            param4, param5);
}
static inline unsigned int FUN_00a1a480_thiscall(void *context, int owner, int request, float param3, float param4,
                                                 int param5, int param6, int isPlayer)
{
    return ((unsigned int (__thiscall *)(void *, int, int, float, float, int, int, int))0x00A1A480)(
        context, owner, request, param3, param4, param5, param6, isPlayer);
}
// 00D77250 (__thiscall on a collision; functions.h lists the float as undefined4).
static inline void FUN_00d77250_thiscall(int collision, int value, float param2)
{
    ((void (__thiscall *)(int, int, float))0x00D77250)(collision, value, param2);
}
// Collision "constructors": cdecl factories returning the new collision (as CollisionMesh in part 1).
static inline int CollisionSphere_create(int collisionType, int objInfo, int attackInfo)
{
    return ((int (*)(int, int, int))0x00D7DF90)(collisionType, objInfo, attackInfo);
}
static inline int CollisionCapsule_create(int collisionType, int objInfo, int attackInfo)
{
    return ((int (*)(int, int, int))0x00D7DEA0)(collisionType, objInfo, attackInfo);
}
static inline int CollisionBox_create(int collisionType, int objInfo, int attackInfo)
{
    return ((int (*)(int, int, int))0x00D7DF40)(collisionType, objInfo, attackInfo);
}
static inline int CollisionCylinder_create(int collisionType, int objInfo, int attackInfo)
{
    return ((int (*)(int, int, int))0x00D7DEF0)(collisionType, objInfo, attackInfo);
}
// Constructors / destructors of sub-objects (__thiscall, no arguments).
static inline void callMember(unsigned int address, void *object)
{
    ((void (__thiscall *)(void *))address)(object);
}
#define cLockonPartsList_construct(p)  callMember(0x00A87D90, (p))  // cLockonPartsList::cLockonPartsList
#define cLockonPartsList_destroy(p)    callMember(0x00A87DC0, (p))  // cLockonPartsList::~cLockonPartsList
#define cEspControler_destroy(p)       callMember(0x00EAA9B0, (p))  // cEspControler::~cEspControler
#define EspControllerBullet_destroy(p) callMember(0x009CF300, (p))  // EspControllerBullet::EspControllerBullet_6
#define cXml_destroy_00A60400(p)       callMember(0x00A60400, (p))  // cXml::cXml_7
#define PostControlWork_destroy(p)     callMember(0x00E2CDB0, (p))  // Animation::PostControl::Work::Work
#define cObj_destroyBase(p)            callMember(0x009F88E0, (p))  // base destructor (Ghidra: cXml::cXml_2)

// Inlined body of Behavior's destructor. The same code is Behavior::ctor_00AA3690 and is repeated at
// the end of every derived-class destructor below (after that class destroyed its own members).
static inline void destroyBehaviorBase(Behavior *self)
{
    // vftable = Behavior::vftable (0x0166581C)
    cLockonPartsList_destroy(self->lockonPartsList());
    if (self->buffer67C() != 0) {
        self->field684() = 0;
        if (self->bufferOwned688() != 0) {
            FUN_00dd48d0(self->buffer67C(), 0);
            self->bufferOwned688() = 0;
        }
        self->buffer67C() = 0;
        self->field680() = 0;
    }
    cObj_destroyBase(self);  // tail jump
}

// Defined in part 1 (__thiscall with seven stack arguments; functions.h lists none).
int FUN_00a9e290(int self, char *animName, int param2, float param3, float param4, unsigned int flags,
                 float param6, float param7);

// Common tail of the animation starters: records the name, resets the unit rates and flags.
// (Written out in every function below, as in the machine code.)

// 00A9E6A0  FUN_00a9e6a0  size=572  [between]
// Starts on this object's unit the animation `animName` taken from `source`'s unit (clip
// "<modelId>_<animName>"), then loads "<modelId>_<animName>_<vf94()>_seq.bxm" from source's files.
// Same as FUN_00a9e440 with an explicit model id. (__thiscall with nine stack arguments.)
int FUN_00a9e6a0(int self, int source, unsigned int modelId, char *animName, int param4, float param5,
                 float param6, unsigned int flags, float param8, float param9)
{
    Behavior *behavior = (Behavior *)self;
    Behavior *src = (Behavior *)source;
    if (src->field4F0() == 0 || FUN_00a7c890(src->field4F0()) == 0 ||
        behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    char suffix[16];
    char baseName[64];
    char seqName[64];
    FUN_009f8ea0(baseName, 0x40, modelId, 0);
    _strcat_s(baseName, 0x40, "_");
    _strcat_s(baseName, 0x40, animName);
    int clip = Unit_findClip(animUnitOf(src), baseName);
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, animName, param4, param5, param6, flags | 0x400,
                                   param8, param9);
    unsigned int fileRef[2];
    FUN_00de3530((undefined4)fileRef);
    fileRef[0] = src->filePair0();
    fileRef[1] = src->filePair1();
    if ((flags & 0x400) == 0) {
        _strcpy_s(seqName, 0x40, baseName);
        Sprintf_0099a460(suffix, "_%d_seq.bxm", behavior->vf94());
        _strcat_s(seqName, 0x40, suffix);
        int seqFile = FUN_00de4500((int *)fileRef, seqName);
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, baseName, param4);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9E8E0  FUN_00a9e8e0  size=571  [between]
// As FUN_00a9e6a0 with the model id of `source` (source->modelObjId()). (__thiscall, eight stack arguments.)
int FUN_00a9e8e0(int self, int source, char *animName, int param3, float param4, float param5,
                 unsigned int flags, float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    Behavior *src = (Behavior *)source;
    if (src->field4F0() == 0 || FUN_00a7c890(src->field4F0()) == 0 ||
        behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    char suffix[16];
    char baseName[64];
    char seqName[64];
    FUN_009f8ea0(baseName, 0x40, src->modelObjId(), 0);
    _strcat_s(baseName, 0x40, "_");
    _strcat_s(baseName, 0x40, animName);
    int clip = Unit_findClip(animUnitOf(src), baseName);
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, animName, param3, param4, param5, flags | 0x400,
                                   param7, param8);
    unsigned int fileRef[2];
    FUN_00de3530((undefined4)fileRef);
    fileRef[0] = src->filePair0();
    fileRef[1] = src->filePair1();
    if ((flags & 0x400) == 0) {
        _strcpy_s(seqName, 0x40, baseName);
        Sprintf_0099a460(suffix, "_%d_seq.bxm", behavior->vf94());
        _strcat_s(seqName, 0x40, suffix);
        int seqFile = FUN_00de4500((int *)fileRef, seqName);
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, baseName, param3);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9EB20  FUN_00a9eb20  size=572  [between]
// Byte-for-byte the same code as FUN_00a9e6a0. (__thiscall with nine stack arguments.)
int FUN_00a9eb20(int self, int source, unsigned int modelId, char *animName, int param4, float param5,
                 float param6, unsigned int flags, float param8, float param9)
{
    Behavior *behavior = (Behavior *)self;
    Behavior *src = (Behavior *)source;
    if (src->field4F0() == 0 || FUN_00a7c890(src->field4F0()) == 0 ||
        behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    char suffix[16];
    char baseName[64];
    char seqName[64];
    FUN_009f8ea0(baseName, 0x40, modelId, 0);
    _strcat_s(baseName, 0x40, "_");
    _strcat_s(baseName, 0x40, animName);
    int clip = Unit_findClip(animUnitOf(src), baseName);
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, animName, param4, param5, param6, flags | 0x400,
                                   param8, param9);
    unsigned int fileRef[2];
    FUN_00de3530((undefined4)fileRef);
    fileRef[0] = src->filePair0();
    fileRef[1] = src->filePair1();
    if ((flags & 0x400) == 0) {
        _strcpy_s(seqName, 0x40, baseName);
        Sprintf_0099a460(suffix, "_%d_seq.bxm", behavior->vf94());
        _strcat_s(seqName, 0x40, suffix);
        int seqFile = FUN_00de4500((int *)fileRef, seqName);
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, baseName, param4);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9ED60  FUN_00a9ed60  size=585  [between]
// Loads "<modelObjId>_<animName>.mot" from the files of data set `dataSet` (cObjReadManager) and
// starts it on this object's unit, then its "<...>_<vf94()>_seq.bxm". Model 0x10100 uses 0x10010's
// files. (__thiscall with eight stack arguments.)
int FUN_00a9ed60(int self, int dataSet, char *animName, int param3, float param4, float param5,
                 unsigned int flags, float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    unsigned int fileRef[2];
    char suffix[16];
    char baseName[64];
    char fileName[64];
    unsigned int modelId = behavior->modelObjId();
    if (modelId == 0x10100) {
        modelId = 0x10010;
    }
    FUN_009f8ea0(baseName, 0x40, modelId, 0);
    _strcat_s(baseName, 0x40, "_");
    _strcat_s(baseName, 0x40, animName);
    FUN_00de3530((undefined4)fileRef);
    cObjReadManager_getDataAtSet(fileRef, dataSet, 0);
    _strcpy_s(fileName, 0x40, baseName);
    _strcat_s(fileName, 0x40, ".mot");
    int clip = FUN_00de4500((int *)fileRef, fileName);
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, animName, param3, param4, param5, flags | 0x400,
                                   param7, param8);
    if ((flags & 0x400) == 0) {
        _strcpy_s(fileName, 0x40, baseName);
        Sprintf_0099a460(suffix, "_%d_seq.bxm", behavior->vf94());
        _strcat_s(fileName, 0x40, suffix);
        int seqFile = FUN_00de4500((int *)fileRef, fileName);
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, baseName, param3);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9EFB0  FUN_00a9efb0  size=292  [between]
// Starts an already loaded motion `clip` (sequence `seqFile`) under the name "Direct".
// (__thiscall with eight stack arguments.)
int FUN_00a9efb0(int self, int clip, int seqFile, int param3, float param4, float param5, unsigned int flags,
                 float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, "Direct", param3, param4, param5, flags | 0x400,
                                   param7, param8);
    if ((flags & 0x400) == 0) {
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, "Direct", param3);
        }
    }
    FUN_00a9e1e0(self, animId, "Direct");
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9F0E0  FUN_00a9f0e0  size=155  [between]
// Loads "<name>.mot" and "<name>_<vf94()>_seq.bxm" from `fileSet` and starts them as "Direct".
// Returns FUN_00a9efb0's result (EAX is passed through; Ghidra typed it void).
// (__thiscall with eight stack arguments.)
int FUN_00a9f0e0(int self, int fileSet, char *name, int param3, float param4, float param5, unsigned int flags,
                 float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    char seqName[32];
    char motName[32];
    Sprintf_0099a390(motName, "%s.mot", name);
    Sprintf_0099a390(seqName, "%s_%d_seq.bxm", name, behavior->vf94());
    int seqFile = FUN_00de4550((int *)fileSet, seqName, 0);
    int clip = FUN_00de4550((int *)fileSet, motName, 0);
    return FUN_00a9efb0(self, clip, seqFile, param3, param4, param5, flags, param7, param8);
}

// 00A9F180  FUN_00a9f180  size=292  [between]
// Starts an already loaded motion `clip` (sequence `seqFile`) under the name `animName`.
// (__thiscall with nine stack arguments.)
int FUN_00a9f180(int self, int clip, int seqFile, char *animName, int param4, float param5, float param6,
                 unsigned int flags, float param8, float param9)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return -1;
    }
    int animId = Unit_setAnimation(animUnitOf(behavior), clip, animName, param4, param5, param6, flags | 0x400,
                                   param8, param9);
    if ((flags & 0x400) == 0) {
        int unit = animUnitOf(behavior);
        if (Unit_isActive(unit) != 0) {
            Unit_setSequence(unit + 0xf4, seqFile, animName, param4);
        }
    }
    FUN_00a9e1e0(self, animId, animName);
    int unit = animUnitOf(behavior);
    FUN_00e26e90(unit);
    *(float *)(unit + 0xe4) = 1.0f;
    *(float *)(unit + 0xe8) = 1.0f;
    *(float *)(unit + 0xec) = 1.0f;
    unit = animUnitOf(behavior);
    *(unsigned int *)(unit + 0x90) = *(unsigned int *)(unit + 0x90) & 0xfffffffe;
    behavior->animStarted() = 1;
    return animId;
}

// 00A9F2B0  FUN_00a9f2b0  size=64  [between]
// FUN_00a9e290 with flag 0x8000000 added. Returns its result (EAX passed through; Ghidra typed it void).
// (__thiscall with seven stack arguments; not in functions.h.)
int FUN_00a9f2b0(int self, char *animName, int param2, float param3, float param4, unsigned int flags,
                 float param6, float param7)
{
    return FUN_00a9e290(self, animName, param2, param3, param4, flags | 0x8000000, param6, param7);
}

// 00A9F2F0  FUN_00a9f2f0  size=208  [between]
// Returns the id of animation `animName` if the unit already has it, otherwise starts it with
// FUN_00a9e290 (param2 == -1 only when FUN_00a94ce0(-1) allows it). (__thiscall, seven stack arguments.)
int FUN_00a9f2f0(int self, char *animName, int param2, float param3, float param4, unsigned int flags,
                 float param6, float param7)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() != 0 && FUN_00a7c890(behavior->field4F0()) != 0) {
        int animId = FUN_00e33270((int *)(animUnitOf(behavior) + 0xf4), (undefined4)animName);
        if (animId != -1) {
            return animId;
        }
    }
    if (param2 != -1) {
        return FUN_00a9e290(self, animName, param2, param3, param4, flags, param6, param7);
    }
    if (FUN_00a94ce0(self, -1) == 0) {
        return -1;
    }
    return FUN_00a9e290(self, animName, -1, param3, param4, flags, param6, param7);
}

// 00A9F3C0  FUN_00a9f3c0  size=255  [between]
// Starts, as "Direct", motion number `motionIndex` of `fileSet`: its ".mot" file and
// "<first 11 chars of its name>_<vf94()>_seq.bxm". (__thiscall with eight stack arguments.)
int FUN_00a9f3c0(int self, int fileSet, unsigned int motionIndex, int param3, float param4, float param5,
                 unsigned int flags, float param7, float param8)
{
    Behavior *behavior = (Behavior *)self;
    char suffix[16];
    char seqName[64];
    char motName[64];
    int fileIndex = FUN_00de4130((int *)fileSet, (undefined4)".mot", motionIndex);  // DAT_01665404
    if (fileIndex == -1) {
        return -1;
    }
    char *name = (char *)FUN_00de38d0(fileSet, fileIndex);
    Sprintf_00a2a030(motName, "%s", name);  // DAT_016575ac
    _strncpy_s(seqName, 0x40, name, 0xb);
    Sprintf_0099a460(suffix, "_%d_seq.bxm", behavior->vf94());
    _strcat_s(seqName, 0x40, suffix);
    int seqFile = FUN_00de4550((int *)fileSet, seqName, 0);
    int clip = FUN_00de4550((int *)fileSet, motName, 0);
    return FUN_00a9efb0(self, clip, seqFile, param3, param4, param5, flags, param7, param8);
}

// 00A9F4C0  FUN_00a9f4c0  size=145  [between]
// Starts `animName` through FUN_00e36390 on the unit (list at unit+0x98) and records its name.
// (__thiscall with four stack arguments.)
int FUN_00a9f4c0(int self, char *animName, float param2, int param3, int param4)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() != 0) {
        if (FUN_00a7c890(behavior->field4F0()) != 0) {
            int unit = animUnitOf(behavior);
            if (Unit_isActive(unit) == 0) {
                FUN_00a9e1e0(self, -1, animName);
                return -1;
            }
            int animId = FUN_00e36390_thiscall(unit + 0xf4, unit + 0x98, param4, animName, -1, param2, param3);
            FUN_00a9e1e0(self, animId, animName);
            return animId;
        }
    }
    return -1;
}

// 00A9F560  FUN_00a9f560  size=145  [between]
// Same as FUN_00a9f4c0 through FUN_00e36450. (__thiscall with four stack arguments.)
int FUN_00a9f560(int self, char *animName, float param2, int param3, int param4)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() != 0) {
        if (FUN_00a7c890(behavior->field4F0()) != 0) {
            int unit = animUnitOf(behavior);
            if (Unit_isActive(unit) == 0) {
                FUN_00a9e1e0(self, -1, animName);
                return -1;
            }
            int animId = FUN_00e36450_thiscall(unit + 0xf4, unit + 0x98, param4, animName, -1, param2, param3);
            FUN_00a9e1e0(self, animId, animName);
            return animId;
        }
    }
    return -1;
}

// 00A9F600  FUN_00a9f600  size=69  [between]
// FUN_00a94640 with the animation name number `nameIndex` of the table field75C().
// Returns FUN_00a94640's result (EAX passed through). (__thiscall, eight stack arguments; not in functions.h.)
int FUN_00a9f600(int self, int param1, int param2, int param3, int param4, int param5, int nameIndex,
                 float param7, unsigned int flags)
{
    char *animName = (char *)FUN_008d7d70((int *)((Behavior *)self)->field75C(), nameIndex);
    return FUN_00a94640_thiscall(self, param1, param2, param3, param4, param5, animName, param7, flags);
}

// 00A9F650  FUN_00a9f650  size=85  [between]
// FUN_00a94850 with the animation name number `nameIndex` of the table field75C() of the behaviour
// of `other` (FUN_00a7c8a0). Returns FUN_00a94850's result. (__thiscall, nine stack arguments; not in functions.h.)
int FUN_00a9f650(int self, int other, int param2, int param3, int param4, int param5, int param6, int nameIndex,
                 float param8, unsigned int flags)
{
    Behavior *otherBehavior = (Behavior *)FUN_00a7c8a0(other);
    char *animName = (char *)FUN_008d7d70((int *)otherBehavior->field75C(), nameIndex);
    return FUN_00a94850_thiscall(self, other, param2, param3, param4, param5, param6, animName, param8, flags);
}

// 00A9F6B0  FUN_00a9f6b0  size=91  [between]
// true when animation `animId` is known to the unit (FUN_00e33e50 on unit+0x108) and
// FUN_00a94ce0(animId) is false.
bool FUN_00a9f6b0(int self, unsigned int animId)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() == 0 || FUN_00a7c890(behavior->field4F0()) == 0) {
        return false;
    }
    if (FUN_00e33e50(animUnitOf(behavior) + 0x108, animId) != 0) {
        return FUN_00a94ce0(self, animId) == 0;
    }
    return false;
}

// 00A9F710  FUN_00a9f710  size=80  [between]
// FUN_00a9f6b0 for the animation named `animName` (a char *; functions.h types it undefined4).
undefined4 FUN_00a9f710(int self, undefined4 animName)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field4F0() != 0 && FUN_00a7c890(behavior->field4F0()) != 0) {
        int animId = FUN_00e33270((int *)(animUnitOf(behavior) + 0xf4), animName);
        if (animId != -1) {
            return FUN_00a9f6b0(self, animId);
        }
    }
    return 0;
}

// 00A9F760  FUN_00a9f760  size=97  [between]
// FUN_00a9f6b0 for animation name number `nameIndex` of the table field75C().
undefined4 FUN_00a9f760(int self, undefined4 nameIndex)
{
    Behavior *behavior = (Behavior *)self;
    char *animName = (char *)FUN_008d7d70((int *)behavior->field75C(), nameIndex);
    if (behavior->field4F0() != 0 && FUN_00a7c890(behavior->field4F0()) != 0) {
        int animId = FUN_00e33270((int *)(animUnitOf(behavior) + 0xf4), (undefined4)animName);
        if (animId != -1) {
            return FUN_00a9f6b0(self, animId);
        }
    }
    return 0;
}

// 00A9F7D0  FUN_00a9f7d0  size=181  [between]
// Entry `index` of the table field75C(): start/end times (seconds, 60 frames per second).
// Negative start: 0. Negative end: FUN_00a95140(name, start frame), else
// FUN_00a94f00(name, start frame, end frame).
undefined4 FUN_00a9f7d0(int self, undefined4 index)
{
    Behavior *behavior = (Behavior *)self;
    if (behavior->field75C() == 0) {
        return 0;
    }
    float startTime = (float)FUN_008d7eb0((int *)behavior->field75C(), index);
    float endTime = (float)FUN_008d7f00((int *)behavior->field75C(), index);
    if (startTime < 0.0f) {
        return 0;
    }
    float startFrame = startTime * 60.0f;
    if (endTime < 0.0f) {
        char *animName = (char *)FUN_008d7d70((int *)behavior->field75C(), index);
        return FUN_00a95140_thiscall(self, animName, startFrame);
    }
    char *animName = (char *)FUN_008d7d70((int *)behavior->field75C(), index);
    return FUN_00a94f00_thiscall(self, animName, startFrame, endTime * 60.0f + startFrame);
}

// 00A9F890  FUN_00a9f890  size=196  [between]
// Hands `request` to the entity-signal context ownedObject370() (FUN_00a1b020, then FUN_00a1a480);
// isPlayer = request+0x14 equals FUN_00c13920()->vf28(0).
undefined4 FUN_00a9f890(int self, int request)
{
    Behavior *behavior = (Behavior *)self;
    int isPlayer;
    if (*(int *)(request + 0x14) != 0) {
        int *manager = (int *)FUN_00c13920();
        if (VCALL(manager, 0x28, int (__thiscall *)(int *, int))(manager, 0) == *(int *)(request + 0x14)) {
            isPlayer = 1;
        }
        else {
            isPlayer = 0;
        }
    }
    else {
        isPlayer = 0;
    }
    if (behavior->ownedObject370() == 0) {
        return 0;
    }
    if (FUN_00a1b020_thiscall(behavior->ownedObject370(), self, isPlayer, *(int *)(request + 0xec),
                              *(int *)(request + 0xf0), 0) == 0) {
        return 0;
    }
    if (*(int *)(request + 0x14) != 0) {
        int *manager = (int *)FUN_00c13920();
        if (VCALL(manager, 0x28, int (__thiscall *)(int *, int))(manager, 0) == *(int *)(request + 0x14)) {
            isPlayer = 1;
            goto haveFlag;
        }
    }
    isPlayer = 0;
haveFlag:
    if (behavior->ownedObject370() == 0) {
        return 0;
    }
    return FUN_00a1a480_thiscall(behavior->ownedObject370(), self, request + 0xa0, *(float *)(request + 0xe0),
                                 *(float *)(request + 0xe4), *(int *)(request + 0xec), *(int *)(request + 0xf0),
                                 isPlayer);
}

// 00A9F960  Behavior::setSeqAtk  size=3564  [class]
// Synchronises the attack collisions (collisionList7A4) with the attack sequence records active on
// the animation unit: when the attacks end, active collisions are unregistered; collisions whose
// attack is no longer listed are deactivated; then, per record, the attack matrix and direction
// are built, an attack info is fetched with getAttackInfo and the matching collision is refreshed
// or created (sphere / capsule / box / cylinder).
void Behavior::setSeqAtk()
{
    int records[16];
    float partsMatrix[16];     // matrix of the attack's parts (whole model: this->matrix())
    float directionMatrix[16]; // transforms the direction: this->matrix(), or attackMatrix (modes 7..12)
    float attackMatrix[16];
    float tempMatrix[16];
    float rotationMatrix[16];
    float tipA[3];             // computed but not used afterwards
    float tipB[3];             // computed but not used afterwards
    float direction[4];        // [3] keeps its previous value in the default direction mode
    float position[4];
    float rotation[4];
    float scaledPosition[4];   // [3] is also copied into direction[3] (never initialised before a
                               // capsule with field784() != 1 has been processed)
    int count;
    int unit;

    if (field4F0() == 0 || (unit = (int)FUN_00a7c890(field4F0())) == 0 || Unit_isActive(unit) == 0) {
        count = 0;
    }
    else {
        count = FUN_00e33870(unit + 0x220, (int)records, 0x10);
    }
    int wasAttacking = field780();
    field77C() = wasAttacking;
    field780() = (count != 0);

    // The attacks just ended: unregister and remove every active attack collision.
    Array *list = collisionList7A4();
    int *it;
    if (wasAttacking != 0 && field780() == 0 && list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            int collision = *it;
            int *next;
            if (*(int *)(collision + 0x418) == 0) {  // Collision+0x418: active
                next = it + 1;
            }
            else {
                FUN_00d7b0f0(collision);
                int *manager = (int *)FUN_00d773c0();
                VCALL(manager, 0x10, void (__thiscall *)(int *, int))(manager, collision);
                Array *current = collisionList7A4();
                unsigned int listCount = current->count;
                int *data = (int *)current->data;
                int *end = data + listCount;
                if (it == end || data == 0 || listCount == 0 ||
                    listCount <= (unsigned int)((int)((char *)it - (char *)data) >> 2)) {
                    next = end;
                }
                else {
                    for (int *p = it; p != end - 1; p = p + 1) {
                        *p = p[1];
                    }
                    current->count = current->count - 1;
                    next = it;
                }
            }
            it = next;
        } while (it != (int *)collisionList7A4()->data + collisionList7A4()->count);
    }

    // Deactivate the active collisions whose attack (AttackInfo+0x80 / +0x82) is not in the records.
    list = collisionList7A4();
    if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
        do {
            int collision = *it;
            int proxy;
            if (*(int *)(collision + 0x418) != 0 && (proxy = *(int *)(collision + 0x378), proxy != 0)) {
                int k = 0;
                int found = 0;
                if (0 < count) {
                    int attackInfo = *(int *)(proxy + 8);
                    do {
                        SeqAtkRecord *record = (SeqAtkRecord *)records[k];
                        if (*(unsigned short *)(attackInfo + 0x80) == record->attackId80 ||
                            *(unsigned short *)(attackInfo + 0x82) == record->attackId82) {
                            found = found | 1;
                        }
                        k = k + 1;
                    } while (k < count);
                    if (found != 0) {
                        goto nextCollision;
                    }
                }
                FUN_00d7acc0(*it);
            }
        nextCollision:
            it = it + 1;
        } while (it != (int *)collisionList7A4()->data + collisionList7A4()->count);
    }

    for (int i = 0; i < count; i = i + 1) {
        SeqAtkRecord *record = (SeqAtkRecord *)records[i];
        FID_conflict__memcpy(partsMatrix, matrix(), 0x40);
        FID_conflict__memcpy(directionMatrix, matrix(), 0x40);
        int mirrored = 0;
        if (FUN_00e3a1e0(animUnitOf(this), 0, 0x40) != 0) {
            mirrored = 1;
        }
        unsigned int partsNo = record->partsNo;
        if (mirrored != 0) {
            partsNo = (unsigned short)FUN_00a96170((int)this, (short)partsNo);
        }
        int parts;
        if ((short)partsNo == -1) {
            parts = (int)this;
        }
        else {
            parts = FUN_00a12210((int)this, (short)partsNo);
        }
        if (parts != 0) {
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)partsMatrix)[k] = ((int *)(parts + 0x10))[k];
            }
        }

        // attackMatrix = Rz * Ry * Rx (each only when non-zero), translated to pos, times partsMatrix.
        float posX = record->pos[0];
        float posY = record->pos[1];
        float posZ = record->pos[2];
        float rotX = record->rot[0];
        float rotY = record->rot[1];
        float rotZ = record->rot[2];
        if (mirrored != 0) {
            rotY = rotY * -1.0f;
            posX = posX * -1.0f;
        }
        attackMatrix[0] = 1.0f;  attackMatrix[1] = 0.0f;  attackMatrix[2] = 0.0f;  attackMatrix[3] = 0.0f;
        attackMatrix[4] = 0.0f;  attackMatrix[5] = 1.0f;  attackMatrix[6] = 0.0f;  attackMatrix[7] = 0.0f;
        attackMatrix[8] = 0.0f;  attackMatrix[9] = 0.0f;  attackMatrix[10] = 1.0f; attackMatrix[11] = 0.0f;
        attackMatrix[12] = 0.0f; attackMatrix[13] = 0.0f; attackMatrix[14] = 0.0f; attackMatrix[15] = 1.0f;
        if (rotZ != 0.0f) {
            D3DXMatrixRotationZ(tempMatrix, rotZ);
            D3DXMatrixMultiply(attackMatrix, tempMatrix, attackMatrix);
        }
        if (rotY != 0.0f) {
            D3DXMatrixRotationY(tempMatrix, rotY);
            D3DXMatrixMultiply(attackMatrix, tempMatrix, attackMatrix);
        }
        if (rotX != 0.0f) {
            D3DXMatrixRotationX(tempMatrix, rotX);
            D3DXMatrixMultiply(attackMatrix, tempMatrix, attackMatrix);
        }
        attackMatrix[12] = posX;
        attackMatrix[13] = posY;
        attackMatrix[14] = posZ;
        D3DXMatrixMultiply(attackMatrix, attackMatrix, partsMatrix);

        float halfLength = record->size[1];
        tipA[0] = 0.0f;
        tipA[2] = 0.0f;
        tipA[1] = halfLength;
        tipB[0] = 0.0f;
        tipB[2] = 0.0f;
        tipB[1] = -record->size[1];
        D3DXVec3TransformNormal(tipA, tipA, attackMatrix);
        tipA[0] = tipA[0] + attackMatrix[12];
        tipA[1] = tipA[1] + attackMatrix[13];
        tipA[2] = tipA[2] + attackMatrix[14];
        D3DXVec3TransformNormal(tipB, tipB, attackMatrix);
        tipB[0] = tipB[0] + attackMatrix[12];
        tipB[1] = tipB[1] + attackMatrix[13];
        tipB[2] = tipB[2] + attackMatrix[14];

        // Attack direction.
        direction[0] = 0.0f;
        direction[1] = 0.0f;
        direction[2] = 1.0f;
        switch (record->direction) {
        case 0:
            direction[0] = 0.0f;  direction[1] = 0.0f;  direction[2] = 1.0f;
            direction[3] = scaledPosition[3];
            break;
        case 1:
            direction[0] = 0.0f;  direction[1] = 0.0f;  direction[2] = -1.0f;
            direction[3] = scaledPosition[3];
            break;
        case 2:
            if (mirrored == 0) {
                direction[0] = 1.0f;
            }
            else {
                direction[0] = -1.0f;
            }
            direction[1] = 0.0f;  direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            break;
        case 3:
            if (mirrored == 0) {
                direction[0] = -1.0f;
            }
            else {
                direction[0] = 1.0f;
            }
            direction[1] = 0.0f;  direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            break;
        case 4:
            direction[0] = 0.0f;  direction[1] = 1.0f;  direction[2] = 0.1f;
            direction[3] = scaledPosition[3];
            break;
        case 5:
            direction[0] = 0.0f;  direction[1] = -1.0f; direction[2] = 0.1f;
            direction[3] = scaledPosition[3];
            break;
        case 6:
            direction[0] = 0.0f;  direction[1] = 0.0f;  direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            break;
        // modes 7..12: the direction is given in the attack's own frame
        case 7:
            direction[0] = 1.0f;  direction[1] = 0.0f;  direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            break;
        case 8:
            direction[0] = 0.0f;  direction[2] = 0.0f;  direction[1] = 1.0f;
            direction[3] = scaledPosition[3];
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            break;
        case 9:
            direction[0] = 0.0f;  direction[1] = 0.0f;  direction[2] = 1.0f;
            direction[3] = scaledPosition[3];
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            break;
        case 10:
            direction[0] = -1.0f; direction[1] = 0.0f;  direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            break;
        case 11:
            direction[0] = 0.0f;  direction[1] = -1.0f;
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            direction[2] = 0.0f;
            direction[3] = scaledPosition[3];
            break;
        case 12:
            direction[0] = 0.0f;  direction[1] = 0.0f;
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)directionMatrix)[k] = ((int *)attackMatrix)[k];
            }
            direction[2] = -1.0f;
            direction[3] = scaledPosition[3];
            break;
        default:
            break;
        }
        D3DXVec3TransformNormal(direction, direction, directionMatrix);
        float directionX = direction[0];
        float directionZ = direction[2];

        int info = getAttackInfo((ushort *)record);
        if (info == 0) {
            DebugPrint(DAT_016656f0);
            continue;
        }
        int attack = *(int *)(info + 8);  // AttackInfo data
        *(unsigned short *)(attack + 0x80) = record->attackId80;
        *(unsigned short *)(attack + 0x82) = record->attackId82;
        *(float *)(attack + 0x20) = direction[0];
        *(float *)(attack + 0x24) = direction[1];
        *(float *)(attack + 0x28) = direction[2];
        *(float *)(attack + 0x2c) = direction[3];
        *(int *)(attack + 0x34) = 0;
        *(float *)(attack + 0x30) = (float)atan2(directionX, directionZ);
        int rootParts = FUN_00a12210((int)this, 0xffe);
        if (rootParts != 0) {
            for (int k = 0; k < 16; k = k + 1) {
                ((int *)(attack + 0x40))[k] = ((int *)(rootParts + 0x10))[k];
            }
        }
        else {
            tempMatrix[0] = 1.0f;  tempMatrix[1] = 0.0f;  tempMatrix[2] = 0.0f;  tempMatrix[3] = 0.0f;
            tempMatrix[4] = 0.0f;  tempMatrix[5] = 1.0f;  tempMatrix[6] = 0.0f;  tempMatrix[7] = 0.0f;
            tempMatrix[8] = 0.0f;  tempMatrix[9] = 0.0f;  tempMatrix[10] = 1.0f; tempMatrix[11] = 0.0f;
            tempMatrix[12] = 0.0f; tempMatrix[13] = 0.0f; tempMatrix[14] = 0.0f; tempMatrix[15] = 1.0f;
            D3DXMatrixRotationZ(rotationMatrix, 1.5707964f);  // pi / 2
            D3DXMatrixMultiply(tempMatrix, rotationMatrix, tempMatrix);
            D3DXMatrixRotationX(rotationMatrix, 3.1415927f);  // pi
            D3DXMatrixMultiply(tempMatrix, rotationMatrix, tempMatrix);
            D3DXMatrixMultiply((float *)(attack + 0x40), tempMatrix, attackMatrix);
        }

        int reused = 0;
        if (record->attackType < 4) {
            *(unsigned int *)(attack + 0x34) = record->attackId82;
        }
        unsigned int attackFlags = *(unsigned int *)(attack + 0x8c);
        int collisionType = field640();
        if ((attackFlags & 0x1000000) != 0) {
            collisionType = 5;
        }
        if ((attackFlags & 0x40000) != 0) {
            collisionType = 1;
        }
        position[0] = record->pos[0];
        position[1] = record->pos[1];
        position[2] = record->pos[2];
        position[3] = 1.0f;
        rotation[0] = record->rot[0];
        rotation[1] = record->rot[1];
        rotation[2] = record->rot[2];
        rotation[3] = 1.0f;
        if (mirrored != 0) {
            position[0] = position[0] * -1.0f;
            rotation[1] = rotation[1] * -1.0f;
        }
        unsigned int attackType = record->attackType;
        unsigned int attackSlot = attackType;
        if (attackType >= 4) {
            attackSlot = 4;
        }
        switch (attackType) {
        case 0: {
            undefined4 unitRef;
            FUN_00a7c940(&unitRef, (undefined4 *)FUN_00a7c7f0(field4F0()));
            FUN_00c63390(ATTACK_EVENT_LIST, unitRef, (int)record, 1);
            VCALL(info, 0x4, void (__thiscall *)(int, int))(info, 1);  // delete
            continue;
        }
        case 1: {
            int *data = *(int **)(info + 8);
            data[0] = 0x147;
            data[1] = 999999;
            data[3] = 0;
            *(unsigned char *)(data + 4) = 0;
            data[2] = 0;
            break;
        }
        case 2:
        case 3:
            VCALL(info, 0x4, void (__thiscall *)(int, int))(info, 1);  // delete
            continue;
        default:
            break;
        }
        unsigned char shape = record->shape;
        if (shape == 3) {
            VCALL(info, 0x4, void (__thiscall *)(int, int))(info, 1);  // delete
            continue;
        }

        // Look for the collision of the same attack (AttackInfo+0x80 / +0x82 of its proxy).
        int collision = 0;
        list = collisionList7A4();
        if (list != 0 && (it = (int *)list->data, it != it + list->count)) {
            do {
                int candidate = *it;
                int proxy = *(int *)(candidate + 0x378);
                if (proxy != 0) {
                    int attackInfo = *(int *)(proxy + 8);
                    if (*(unsigned short *)(attackInfo + 0x80) == record->attackId80 &&
                        *(unsigned short *)(attackInfo + 0x82) == record->attackId82) {
                        collision = candidate;
                        break;
                    }
                }
                it = it + 1;
            } while (it != (int *)collisionList7A4()->data + collisionList7A4()->count);
        }
        if (collision != 0) {
            // Refresh the existing collision; the new attack info is copied and then deleted.
            *(int *)(collision + 0x36c) = collisionType;
            *(int *)(collision + 0x370) = *(int *)FUN_009f8b60((int)this);
            *(int *)(attack + 0x88) = attackIdBase760();
            int proxy = *(int *)(collision + 0x378);
            if (proxy != 0) {
                FUN_0043e160(*(undefined4 **)(proxy + 8), *(undefined4 **)(info + 8));
            }
            reused = 1;
        }
        else {
            switch (shape) {
            case 0:
                collision = CollisionSphere_create(collisionType, *(int *)FUN_009f8b60((int)this), info);
                break;
            case 1:
                collision = CollisionCapsule_create(collisionType, *(int *)FUN_009f8b60((int)this), info);
                break;
            case 2:
                collision = CollisionBox_create(collisionType, *(int *)FUN_009f8b60((int)this), info);
                break;
            case 4:
                collision = CollisionCylinder_create(collisionType, *(int *)FUN_009f8b60((int)this), info);
                break;
            default:
                collision = 0;
                break;
            }
            if (collision == 0) {
                DebugPrint(DAT_016656c0);
                continue;
            }
            *(int *)(collision + 0x380) = record->attackType;
            FUN_00d77250_thiscall(collision, FUN_00a95ca0((int)this, 0), 0.0f);
            *(int *)(collision + 0x418) = 1;
            *(int *)(collision + 0x3f0) = field4F0();
            int attackId = attackIdBase760() + attackSlot;
            int added = collision;
            VCALL(collisionList7A4(), 0x8, void (__thiscall *)(Array *, int *))(collisionList7A4(), &added);  // push_back
            FUN_00d77200(added);
            *(int *)(added + 0x374) = attackId;
            int *manager = (int *)FUN_00d773c0();
            VCALL(manager, 0x8, void (__thiscall *)(int *, int))(manager, added);
            FUN_00d7b0f0(collision);
            FUN_00d7b890(collision);
            *(int *)(attack + 0x88) = attackIdBase760();
        }

        *(int *)(attack + 0xf4) = *(int *)(collision + 0x354);
        int isRaiden = 0;
        if (modelObjId() == 0x10010 || modelObjId() == 0x10100) {
            isRaiden = 1;
        }
        VCALL(collision, 0x20, void (__thiscall *)(int, int, int, int))(collision, 2, *(int *)FUN_009f8b60((int)this),
                                                                       isRaiden);
        if ((*(unsigned int *)(attack + 0x90) & 0x4000000) != 0) {
            *(unsigned int *)(collision + 0x384) = *(unsigned int *)(collision + 0x384) | 1;
        }
        switch (record->shape) {
        case 0:  // sphere
            FUN_00d77c50(collision, (undefined4)field4F0(), (undefined4)(int)(short)partsNo);
            *(float *)(collision + 0x510) = record->size[0];
            FUN_00d77c90(collision, (undefined4 *)position);
            break;
        case 1: {  // capsule
            FUN_00d77c50(collision, (undefined4)field4F0(), (undefined4)(int)(short)partsNo);
            float length = record->size[1] + record->size[1];
            if (field784() == 1.0f) {
                *(float *)(collision + 0x594) = length;
                *(float *)(collision + 0x590) = record->size[0];
                FUN_00d77c90(collision, (undefined4 *)position);
            }
            else {
                *(float *)(collision + 0x594) = length * field784();
                *(float *)(collision + 0x590) = record->size[0];
                float scale = field784();
                scaledPosition[0] = position[0] * scale;
                scaledPosition[1] = position[1] * scale;
                scaledPosition[2] = position[2] * scale;
                scaledPosition[3] = scale * position[3];
                FUN_00d77c90(collision, (undefined4 *)scaledPosition);
            }
            *(float *)(collision + 0x580) = rotation[0];
            *(float *)(collision + 0x584) = rotation[1];
            *(float *)(collision + 0x588) = rotation[2];
            *(float *)(collision + 0x58c) = rotation[3];
            break;
        }
        case 2:  // box
            FUN_00d77c50(collision, (undefined4)field4F0(), (undefined4)(int)(short)partsNo);
            *(float *)(collision + 0x510) = record->size[0] * 2.0f;
            *(float *)(collision + 0x514) = record->size[1] * 2.0f;
            *(float *)(collision + 0x518) = record->size[2] * 2.0f;
            *(float *)(collision + 0x51c) = 2.0f;
            FUN_00d77c90(collision, (undefined4 *)position);
            FUN_00d77cc0(collision, (undefined4 *)rotation);
            break;
        case 4:  // cylinder
            FUN_00d77c50(collision, (undefined4)field4F0(), (undefined4)(int)(short)partsNo);
            *(float *)(collision + 0x574) = record->size[1] + record->size[1];
            *(float *)(collision + 0x570) = record->size[0];
            FUN_00d77c90(collision, (undefined4 *)position);
            *(float *)(collision + 0x560) = rotation[0];
            *(float *)(collision + 0x564) = rotation[1];
            *(float *)(collision + 0x568) = rotation[2];
            *(float *)(collision + 0x56c) = rotation[3];
            break;
        default:
            break;
        }
        if (reused != 0) {
            VCALL(info, 0x4, void (__thiscall *)(int, int))(info, 1);  // delete
        }
    }
}

// 00AA3540  Behavior::Behavior_95  size=318  [class]
Behavior::Behavior()
{
    // cObj::cObj() (0x009FD150) -- implicit base constructor
    // vftable = Behavior::vftable (0x0166581C)
    field584() = 0;
    field588() = 0;
    field58C() = 0;
    field614() = 0;
    field644() = 0;
    field648() = 0;
    field658() = 0;
    field65C() = 0;
    field660() = 0;
    field664() = 0;
    FUN_00a7c930(&handle66C());
    field678() = 0;
    buffer67C() = 0;
    field680() = 0;
    field684() = 0;
    bufferOwned688() = 0;
    field68C() = 0;
    field6B8() = 0;
    field6E0() = -1;
    cLockonPartsList_construct(lockonPartsList());
    field7C0() = 0.0f;
    field824() = -1;
    field754() = 0;
    field758() = 0;
    field75C() = 0;
    cloth0() = 0;
    cloth1() = 0;
    array788() = 0;
    field78C() = 0;
    field798() = 0;
    field79C() = 0;
    field7A0() = 0;
    collisionList7A4() = 0;
    defenseCollisionList() = 0;
    bodyOffenseCollisionList() = 0;
    field7B0() = 0;
    field7B4() = 0;
    field7CC() = 0;
    field7D0() = 0;
    field7D4() = 0;
    ownedObj7D8() = 0;
    ownedObj808() = 0;
    field818() = 0;
    field830() = 0;
    field834() = 0;
    byte849() = 0;
}

// 00AA3680  Behavior::vf04  size=6  [class]
undefined *Behavior::vf04()
{
    return (undefined *)0x01BE9C20;  // DAT_01be9c20
}

// 00AA3690  Behavior::Behavior_96  size=84  [class]
// Behavior destructor body (called from derived destructors, e.g. BehaviorAppBase::destruct).
void Behavior::ctor_00AA3690()
{
    destroyBehaviorBase(this);
}

// 00AA4B10  Behavior::Behavior_135  size=84  [class]
// Identical copy of the Behavior destructor body (? destructor of a derived class without own members).
void Behavior::ctor_00AA4B10()
{
    destroyBehaviorBase(this);
}

// 00AA7000  Behavior::Behavior_120  size=150  [class]
// Destructor of a derived class: its members, then the inlined Behavior destructor body.
void Behavior::ctor_00AA7000()
{
    EspControllerBullet_destroy(AT_OFFSET(this, 0x1130));  /* derived+0x1130 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0x1128));          /* derived+0x1128 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0x1124));          /* derived+0x1124 */
    cEspControler_destroy(AT_OFFSET(this, 0xE60));         /* derived+0xE60 */
    cEspControler_destroy(AT_OFFSET(this, 0xDB0));         /* derived+0xDB0 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0x874));         /* derived+0x874 */
    destroyBehaviorBase(this);
}

// 00AA70A0  Behavior::Behavior_119  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA70A0()
{
    destroyBehaviorBase(this);
}

// 00AA7100  FUN_00aa7100  size=22  [between]
// Destroys the cEspControler at +0xA70, then tail-calls FUN_0040d3f0 (a destructor) on the object.
// (__thiscall; functions.h lists no arguments.)
void FUN_00aa7100(void *self)
{
    cEspControler_destroy(AT_OFFSET(self, 0xA70));
    ((void (__thiscall *)(void *))static_cast<void (*)(void)>(FUN_0040d3f0))(self);
}

// 00AA7120  Behavior::Behavior_123  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7120()
{
    destroyBehaviorBase(this);
}

// 00AA7180  Behavior::Behavior_121  size=95  [class]
// Destructor of a derived class with a cEspControler at +0x8D0.
void Behavior::ctor_00AA7180()
{
    cEspControler_destroy(AT_OFFSET(this, 0x8D0));  /* derived+0x8D0 */
    destroyBehaviorBase(this);
}

// 00AA71E0  Behavior::Behavior_122  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA71E0()
{
    destroyBehaviorBase(this);
}

// 00AA7360  Behavior::Behavior_124  size=117  [class]
// Destructor of a derived class with members at +0x904, +0x900 and +0x8E0.
void Behavior::ctor_00AA7360()
{
    FUN_00905ce0((int *)AT_OFFSET(this, 0x904));           /* derived+0x904 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0x900));           /* derived+0x900 */
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x8E0));      /* derived+0x8E0 */
    destroyBehaviorBase(this);
}

// 00AA7440  Behavior::Behavior_126  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7440()
{
    destroyBehaviorBase(this);
}

// 00AA74E0  Behavior::Behavior_125  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA74E0()
{
    destroyBehaviorBase(this);
}

// 00AA7540  Behavior::Behavior_128  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7540()
{
    destroyBehaviorBase(this);
}

// 00AA75A0  Behavior::Behavior_127  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA75A0()
{
    destroyBehaviorBase(this);
}

// 00AA7600  Behavior::Behavior_130  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7600()
{
    destroyBehaviorBase(this);
}

// 00AA7660  Behavior::Behavior_131  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7660()
{
    destroyBehaviorBase(this);
}

// 00AA76C0  Behavior::Behavior_129  size=95  [class]
// Destructor of a derived class with a cEspControler at +0x880.
void Behavior::ctor_00AA76C0()
{
    cEspControler_destroy(AT_OFFSET(this, 0x880));  /* derived+0x880 */
    destroyBehaviorBase(this);
}

// 00AA7720  Behavior::Behavior_134  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7720()
{
    destroyBehaviorBase(this);
}

// 00AA7780  Behavior::Behavior_132  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7780()
{
    destroyBehaviorBase(this);
}

// 00AA77E0  Behavior::Behavior_133  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA77E0()
{
    destroyBehaviorBase(this);
}

// 00AA7840  Behavior::Behavior_101  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7840()
{
    destroyBehaviorBase(this);
}

// 00AA78A0  Behavior::Behavior_100  size=95  [class]
// Destructor of a derived class with a cEspControler at +0xA30.
void Behavior::ctor_00AA78A0()
{
    cEspControler_destroy(AT_OFFSET(this, 0xA30));  /* derived+0xA30 */
    destroyBehaviorBase(this);
}

// 00AA7920  Behavior::Behavior_104  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7920()
{
    destroyBehaviorBase(this);
}

// 00AA7980  Behavior::Behavior_102  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7980()
{
    destroyBehaviorBase(this);
}

// 00AA79E0  Behavior::Behavior_103  size=113  [class]
// Destructor of a derived class with an array of three 0xF0-byte Animation::PostControl::Work at
// +0x870 (destroyed from the last one down).
void Behavior::ctor_00AA79E0()
{
    char *work = (char *)this + 0xB40;  /* derived+0x870 .. +0xB40 */
    int k = 2;
    do {
        work = work - 0xf0;
        PostControlWork_destroy(work);
        k = k - 1;
    } while (-1 < k);
    destroyBehaviorBase(this);
}

// 00AA7A60  Behavior::Behavior_106  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7A60()
{
    destroyBehaviorBase(this);
}

// 00AA7AC0  Behavior::Behavior_105  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7AC0()
{
    destroyBehaviorBase(this);
}

// 00AA7B20  Behavior::Behavior_108  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7B20()
{
    destroyBehaviorBase(this);
}

// 00AA7B80  Behavior::Behavior_107  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7B80()
{
    destroyBehaviorBase(this);
}

// 00AA7BE0  FUN_00aa7be0  size=22  [between]
// Same as FUN_00aa7100. (__thiscall; functions.h lists no arguments.)
void FUN_00aa7be0(void *self)
{
    cEspControler_destroy(AT_OFFSET(self, 0xA70));
    ((void (__thiscall *)(void *))static_cast<void (*)(void)>(FUN_0040d3f0))(self);
}

// 00AA7C10  Behavior::Behavior_110  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7C10()
{
    destroyBehaviorBase(this);
}

// 00AA7C70  Behavior::Behavior_111  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7C70()
{
    destroyBehaviorBase(this);
}

// 00AA7CD0  FUN_00aa7cd0  size=22  [between]
// As FUN_00aa7100 with the cEspControler at +0xA80. (__thiscall; functions.h lists no arguments.)
void FUN_00aa7cd0(void *self)
{
    cEspControler_destroy(AT_OFFSET(self, 0xA80));
    ((void (__thiscall *)(void *))static_cast<void (*)(void)>(FUN_0040d3f0))(self);
}

// 00AA7CF0  Behavior::Behavior_109  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7CF0()
{
    destroyBehaviorBase(this);
}

// 00AA7D50  Behavior::Behavior_113  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7D50()
{
    destroyBehaviorBase(this);
}

// 00AA7DB0  Behavior::Behavior_112  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7DB0()
{
    destroyBehaviorBase(this);
}

// 00AA7E10  Behavior::Behavior_115  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7E10()
{
    destroyBehaviorBase(this);
}

// 00AA7E70  Behavior::Behavior_116  size=95  [class]
// Destructor of a derived class with a cEspControler at +0x8B0.
void Behavior::ctor_00AA7E70()
{
    cEspControler_destroy(AT_OFFSET(this, 0x8B0));  /* derived+0x8B0 */
    destroyBehaviorBase(this);
}

// 00AA7ED0  Behavior::Behavior_114  size=106  [class]
// Destructor of a derived class with cEspControlers at +0x920 and +0x870.
void Behavior::ctor_00AA7ED0()
{
    cEspControler_destroy(AT_OFFSET(this, 0x920));  /* derived+0x920 */
    cEspControler_destroy(AT_OFFSET(this, 0x870));  /* derived+0x870 */
    destroyBehaviorBase(this);
}

// 00AA7F40  Behavior::Behavior_118  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7F40()
{
    destroyBehaviorBase(this);
}

// 00AA7FA0  Behavior::Behavior_117  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA7FA0()
{
    destroyBehaviorBase(this);
}

// 00AA8000  Behavior::Behavior_49  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8000()
{
    destroyBehaviorBase(this);
}

// 00AA8060  Behavior::Behavior_50  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8060()
{
    destroyBehaviorBase(this);
}

// 00AA80C0  Behavior::Behavior_48  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA80C0()
{
    destroyBehaviorBase(this);
}

// 00AA8120  Behavior::Behavior_53  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8120()
{
    destroyBehaviorBase(this);
}

// 00AA8180  Behavior::Behavior_51  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8180()
{
    destroyBehaviorBase(this);
}

// 00AA81E0  Behavior::Behavior_52  size=95  [class]
// Destructor of a derived class with a member at +0x8C4 (destroyed by FUN_00c1e230).
void Behavior::ctor_00AA81E0()
{
    callMember((unsigned int)static_cast<void (*)(void)>(FUN_00c1e230), AT_OFFSET(this, 0x8C4));  /* derived+0x8C4 */
    destroyBehaviorBase(this);
}

// 00AA8240  Behavior::Behavior_55  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8240()
{
    destroyBehaviorBase(this);
}

// 00AA82A0  Behavior::Behavior_54  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA82A0()
{
    destroyBehaviorBase(this);
}

// 00AA8300  Behavior::Behavior_57  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8300()
{
    destroyBehaviorBase(this);
}

// 00AA8360  Behavior::Behavior_58  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8360()
{
    destroyBehaviorBase(this);
}

// 00AA83C0  Behavior::Behavior_56  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA83C0()
{
    destroyBehaviorBase(this);
}

// 00AA8420  Behavior::Behavior_61  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8420()
{
    destroyBehaviorBase(this);
}

// 00AA8480  Behavior::Behavior_59  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8480()
{
    destroyBehaviorBase(this);
}

// 00AA84E0  Behavior::Behavior_60  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA84E0()
{
    destroyBehaviorBase(this);
}

// Uses the imports and call helpers defined at the top of part 2/3, plus:
#define stKogekkoCamParamBase_destroy(p) callMember(0x005F5650, (p))  // stKogekkoCamParamBase::~stKogekkoCamParamBase

// 00AA8540  Behavior::Behavior_63  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8540()
{
    destroyBehaviorBase(this);
}

// 00AA85A0  Behavior::Behavior_62  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA85A0()
{
    destroyBehaviorBase(this);
}

// 00AA8600  Behavior::Behavior_65  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8600()
{
    destroyBehaviorBase(this);
}

// 00AA8660  Behavior::Behavior_66  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8660()
{
    destroyBehaviorBase(this);
}

// 00AA86C0  Behavior::Behavior_64  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA86C0()
{
    destroyBehaviorBase(this);
}

// 00AA8720  Behavior::Behavior_69  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8720()
{
    destroyBehaviorBase(this);
}

// 00AA8780  Behavior::Behavior_67  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8780()
{
    destroyBehaviorBase(this);
}

// 00AA87E0  Behavior::Behavior_68  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA87E0()
{
    destroyBehaviorBase(this);
}

// 00AA8840  Behavior::Behavior_35  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8840()
{
    destroyBehaviorBase(this);
}

// 00AA88A0  Behavior::Behavior_34  size=95  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AA88A0()
{
    cEspControler_destroy(AT_OFFSET(this, 0x900));      /* derived+0x900 */
    destroyBehaviorBase(this);
}

// 00AA8900  Behavior::Behavior_37  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8900()
{
    destroyBehaviorBase(this);
}

// 00AA8960  Behavior::Behavior_38  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8960()
{
    destroyBehaviorBase(this);
}

// 00AA89C0  Behavior::Behavior_36  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA89C0()
{
    destroyBehaviorBase(this);
}

// 00AA8A20  Behavior::Behavior_40  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8A20()
{
    destroyBehaviorBase(this);
}

// 00AA8A80  Behavior::Behavior_39  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8A80()
{
    destroyBehaviorBase(this);
}

// 00AA8B20  Behavior::Behavior_42  size=117  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AA8B20()
{
    FUN_00905ce0((int *)AT_OFFSET(this, 0x8A8));        /* derived+0x8A8 */
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x888));   /* derived+0x888 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0x884));        /* derived+0x884 */
    destroyBehaviorBase(this);
}

// 00AA8BA0  Behavior::Behavior_41  size=95  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AA8BA0()
{
    cEspControler_destroy(AT_OFFSET(this, 0x880));      /* derived+0x880 */
    destroyBehaviorBase(this);
}

// 00AA8C80  Behavior::Behavior_43  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8C80()
{
    destroyBehaviorBase(this);
}

// 00AA8D50  Behavior::Behavior_45  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8D50()
{
    destroyBehaviorBase(this);
}

// 00AA8DB0  Behavior::Behavior_44  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8DB0()
{
    destroyBehaviorBase(this);
}

// 00AA8E10  Behavior::Behavior_46  size=95  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AA8E10()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x870));   /* derived+0x870 */
    destroyBehaviorBase(this);
}

// 00AA8E70  Behavior::Behavior_47  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA8E70()
{
    destroyBehaviorBase(this);
}

// 00AA9010  Behavior::vf00  size=105  [class]
// Scalar deleting destructor: destroy, then free the storage when bit 0 of `flags` is set.
undefined4 Behavior::destruct(byte flags)
{
    destroyBehaviorBase(this);  // (a normal call here, not a tail jump)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4)this;
}

// 00AA9350  Behavior::Behavior_33  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AA9350()
{
    destroyBehaviorBase(this);
}

// 00AAB4C0  Behavior::Behavior_30  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAB4C0()
{
    destroyBehaviorBase(this);
}

// 00AAB560  Behavior::Behavior_31  size=95  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAB560()
{
    cEspControler_destroy(AT_OFFSET(this, 0xA10));      /* derived+0xA10 */
    destroyBehaviorBase(this);
}

// 00AAB770  Behavior::Behavior_32  size=227  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAB770()
{
    FUN_00905ce0((int *)AT_OFFSET(this, 0x12E4));       /* derived+0x12E4 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0x12E0));       /* derived+0x12E0 */
    cEspControler_destroy(AT_OFFSET(this, 0x1200));     /* derived+0x1200 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0x1080));     /* derived+0x1080 */
    cEspControler_destroy(AT_OFFSET(this, 0xFC0));      /* derived+0xFC0 */
    stKogekkoCamParamBase_destroy(AT_OFFSET(this, 0xE40));/* derived+0xE40 */
    stKogekkoCamParamBase_destroy(AT_OFFSET(this, 0xDF0));/* derived+0xDF0 */
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xDD0));   /* derived+0xDD0 */
    cEspControler_destroy(AT_OFFSET(this, 0xCF0));      /* derived+0xCF0 */
    cEspControler_destroy(AT_OFFSET(this, 0xC40));      /* derived+0xC40 */
    cEspControler_destroy(AT_OFFSET(this, 0xB90));      /* derived+0xB90 */
    cEspControler_destroy(AT_OFFSET(this, 0xAE0));      /* derived+0xAE0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA30));      /* derived+0xA30 */
    destroyBehaviorBase(this);
}

// 00AAB8E0  Behavior::Behavior_28  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAB8E0()
{
    destroyBehaviorBase(this);
}

// 00AABE00  Behavior::Behavior_29  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AABE00()
{
    destroyBehaviorBase(this);
}

// 00AAC140  Behavior::Behavior_93  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAC140()
{
    destroyBehaviorBase(this);
}

// 00AAC540  Behavior::Behavior_94  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAC540()
{
    destroyBehaviorBase(this);
}

// 00AAD110  Behavior::Behavior_92  size=117  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAD110()
{
    FUN_00905ce0((int *)AT_OFFSET(this, 0xDF0));        /* derived+0xDF0 */
    cEspControler_destroy(AT_OFFSET(this, 0xAB0));      /* derived+0xAB0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AAE3C0  Behavior::Behavior_91  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAE3C0()
{
    destroyBehaviorBase(this);
}

// 00AAE960  Behavior::Behavior_84  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAE960()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xAE0));   /* derived+0xAE0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AAEAA0  Behavior::Behavior_85  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAEAA0()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xB00));   /* derived+0xB00 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AAEB70  Behavior::Behavior_86  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAEB70()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xB00));   /* derived+0xB00 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AAED30  Behavior::Behavior_87  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAED30()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x12E0));  /* derived+0x12E0 */
    cEspControler_destroy(AT_OFFSET(this, 0x1230));     /* derived+0x1230 */
    destroyBehaviorBase(this);
}

// 00AAEE20  Behavior::Behavior_88  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAEE20()
{
    cEspControler_destroy(AT_OFFSET(this, 0xAB0));      /* derived+0xAB0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AAEF40  Behavior::Behavior_90  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAEF40()
{
    destroyBehaviorBase(this);
}

// 00AAEFE0  Behavior::Behavior_89  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAEFE0()
{
    destroyBehaviorBase(this);
}

// 00AAF0B0  Behavior::Behavior_80  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF0B0()
{
    destroyBehaviorBase(this);
}

// 00AAF160  Behavior::Behavior_81  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF160()
{
    destroyBehaviorBase(this);
}

// 00AAF220  Behavior::Behavior_82  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF220()
{
    destroyBehaviorBase(this);
}

// 00AAF3A0  Behavior::Behavior_83  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF3A0()
{
    destroyBehaviorBase(this);
}

// 00AAF8B0  Behavior::Behavior_70  size=117  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AAF8B0()
{
    cEspControler_destroy(AT_OFFSET(this, 0xC70));      /* derived+0xC70 */
    cEspControler_destroy(AT_OFFSET(this, 0xBC0));      /* derived+0xBC0 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0xB20));      /* derived+0xB20 */
    destroyBehaviorBase(this);
}

// 00AAF960  Behavior::Behavior_72  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF960()
{
    destroyBehaviorBase(this);
}

// 00AAF9F0  Behavior::Behavior_71  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAF9F0()
{
    destroyBehaviorBase(this);
}

// 00AAFA80  Behavior::Behavior_73  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFA80()
{
    destroyBehaviorBase(this);
}

// 00AAFB10  Behavior::Behavior_75  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFB10()
{
    destroyBehaviorBase(this);
}

// 00AAFBA0  Behavior::Behavior_74  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFBA0()
{
    destroyBehaviorBase(this);
}

// 00AAFC30  Behavior::Behavior_77  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFC30()
{
    destroyBehaviorBase(this);
}

// 00AAFCC0  Behavior::Behavior_76  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFCC0()
{
    destroyBehaviorBase(this);
}

// 00AAFD50  Behavior::Behavior_79  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFD50()
{
    destroyBehaviorBase(this);
}

// 00AAFDE0  Behavior::Behavior_78  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AAFDE0()
{
    destroyBehaviorBase(this);
}

// 00AB0700  Behavior::Behavior_13  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB0700()
{
    cEspControler_destroy(AT_OFFSET(this, 0xAD0));      /* derived+0xAD0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA20));      /* derived+0xA20 */
    destroyBehaviorBase(this);
}

// 00AB0CE0  Behavior::Behavior_12  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB0CE0()
{
    destroyBehaviorBase(this);
}

// 00AB1030  Behavior::Behavior_10  size=128  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB1030()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x1470));  /* derived+0x1470 */
    cEspControler_destroy(AT_OFFSET(this, 0x1380));     /* derived+0x1380 */
    cEspControler_destroy(AT_OFFSET(this, 0x12D0));     /* derived+0x12D0 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0x1230));     /* derived+0x1230 */
    destroyBehaviorBase(this);
}

// 00AB1160  Behavior::Behavior_11  size=128  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB1160()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x14E0));  /* derived+0x14E0 */
    cEspControler_destroy(AT_OFFSET(this, 0x1380));     /* derived+0x1380 */
    cEspControler_destroy(AT_OFFSET(this, 0x12D0));     /* derived+0x12D0 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0x1230));     /* derived+0x1230 */
    destroyBehaviorBase(this);
}

// 00AB1A00  Behavior::Behavior_8  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB1A00()
{
    destroyBehaviorBase(this);
}

// 00AB1BD0  Behavior::Behavior_9  size=117  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB1BD0()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xAF8));   /* derived+0xAF8 */
    FUN_00905ce0((int *)AT_OFFSET(this, 0xAB0));        /* derived+0xAB0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AB2120  Behavior::Behavior_6  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB2120()
{
    destroyBehaviorBase(this);
}

// 00AB23D0  Behavior::Behavior_7  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB23D0()
{
    destroyBehaviorBase(this);
}

// 00AB29E0  Behavior::Behavior_5  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB29E0()
{
    destroyBehaviorBase(this);
}

// 00AB37E0  Behavior::Behavior_4  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB37E0()
{
    destroyBehaviorBase(this);
}

// 00AB3BF0  Behavior::Behavior_2  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB3BF0()
{
    cEspControler_destroy(AT_OFFSET(this, 0xAB0));      /* derived+0xAB0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AB3EB0  Behavior::Behavior_3  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB3EB0()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0xAE0));   /* derived+0xAE0 */
    cEspControler_destroy(AT_OFFSET(this, 0xA00));      /* derived+0xA00 */
    destroyBehaviorBase(this);
}

// 00AB4010  Behavior::Behavior_24  size=128  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AB4010()
{
    FUN_00dd7270((undefined4)AT_OFFSET(this, 0x1528));  /* derived+0x1528 */
    cEspControler_destroy(AT_OFFSET(this, 0x1390));     /* derived+0x1390 */
    cEspControler_destroy(AT_OFFSET(this, 0x12E0));     /* derived+0x12E0 */
    cXml_destroy_00A60400(AT_OFFSET(this, 0x1240));     /* derived+0x1240 */
    destroyBehaviorBase(this);
}

// 00AB4140  Behavior::Behavior_25  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB4140()
{
    destroyBehaviorBase(this);
}

// 00AB4200  Behavior::Behavior_27  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB4200()
{
    destroyBehaviorBase(this);
}

// 00AB42C0  Behavior::Behavior_26  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB42C0()
{
    destroyBehaviorBase(this);
}

// 00AB4A50  Behavior::Behavior_23  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB4A50()
{
    destroyBehaviorBase(this);
}

// 00AB50F0  Behavior::Behavior_22  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB50F0()
{
    destroyBehaviorBase(this);
}

// 00AB5A10  Behavior::Behavior_18  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB5A10()
{
    destroyBehaviorBase(this);
}

// 00AB5AA0  Behavior::Behavior_17  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB5AA0()
{
    destroyBehaviorBase(this);
}

// 00AB5B30  Behavior::Behavior_19  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB5B30()
{
    destroyBehaviorBase(this);
}

// 00AB5E40  Behavior::Behavior_20  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB5E40()
{
    destroyBehaviorBase(this);
}

// 00AB5F50  Behavior::Behavior_21  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB5F50()
{
    destroyBehaviorBase(this);
}

// 00AB6010  Behavior::Behavior_16  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB6010()
{
    destroyBehaviorBase(this);
}

// 00AB60D0  Behavior::Behavior_15  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB60D0()
{
    destroyBehaviorBase(this);
}

// 00AB6BF0  Behavior::Behavior_14  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AB6BF0()
{
    destroyBehaviorBase(this);
}

// 00ABACE0  Behavior::Behavior  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00ABACE0()
{
    destroyBehaviorBase(this);
}

// 00AC0EE0  Behavior::Behavior_98  size=84  [class]
// Identical copy of the Behavior destructor body.
void Behavior::ctor_00AC0EE0()
{
    destroyBehaviorBase(this);
}

// 00AC0FE0  Behavior::Behavior_99  size=106  [class]
// Destructor of a derived class: destroys its members, then the Behavior part.
void Behavior::ctor_00AC0FE0()
{
    cEspControler_destroy(AT_OFFSET(this, 0xBA0));      /* derived+0xBA0 */
    cEspControler_destroy(AT_OFFSET(this, 0xAC0));      /* derived+0xAC0 */
    destroyBehaviorBase(this);
}

// 00AC1850  Behavior::Behavior_97  size=151  [class]
// Destructor of a derived class holding 16 buffer records of 0x1C bytes at +0xA64..+0xC24,
// destroyed from the last to the first.
void Behavior::ctor_00AC1850()
{
    for (int index = 15; index >= 0; index--) {
        int *record = (int *)AT_OFFSET(this, 0xA64 + index * 0x1C);  /* derived+0xA64 + index*0x1C */
        // record[0] base, [1] heap block, [2] / [3] cleared, [4..6] reset to base
        if (record[1] != 0) {
            if (record[1] != 0) {
                FUN_00dd48d0(record[1], 0);
                record[1] = 0;
            }
            record[2] = 0;
            record[3] = 0;
            record[4] = record[0];
            record[5] = record[0];
            record[6] = record[0];
        }
    }
    destroyBehaviorBase(this);
}
