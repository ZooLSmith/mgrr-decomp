// src/behavior/BehaviorAppBase.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BehaviorAppBase.h"

// D3DX9_43.DLL import (0x01436F2C): out = v * m (rotation part only)
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

// address of the sub-object / foreign field at byte offset `off` of this object
#define AT(type, off) ((type *)((char *)this + (off)))

// Default slow-rate unit used when the object has no model (DAT_01be939c).
#define DEFAULT_SLOW_RATE_UNIT ((int *)0x01BE939C)

// 004EC370  BehaviorAppBase::BehaviorAppBase_36  size=29  [class]
BehaviorAppBase::BehaviorAppBase()
{
    // Behavior::Behavior() (0x00AA3540) -- implicit base constructor
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
}

// 004EC390  BehaviorAppBase::vf04  size=6  [class]
undefined *BehaviorAppBase::vf04()
{
    return (undefined *)0x01BE9C24;  // DAT_01be9c24
}

// 004EC3A0  BehaviorAppBase::vf314  size=11  [class]
void BehaviorAppBase::vf314()
{
    flag884() = 0;
}

// 004EC3B0  BehaviorAppBase::vf318  size=11  [class]
void BehaviorAppBase::vf318()
{
    flag884() = 1;
}

// 004EC3C0  BehaviorAppBase::vf31C  size=1  [class]
void BehaviorAppBase::vf31C()
{
}

// 004EC3D0  BehaviorAppBase::vf324  size=7  [class]
undefined4 BehaviorAppBase::vf324()
{
    return field8A0();
}

// 004EC3F0  BehaviorAppBase::vf00  size=30  [class]
undefined4 BehaviorAppBase::destruct(byte flags)
{
    Behavior::ctor_00AA3690();  // Behavior destructor body (0x00AA3690)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4)this;
}

// 004ED790  BehaviorAppBase::BehaviorAppBase_34  size=133  [class]
BehaviorAppBase *BehaviorAppBase::ctor_004ED790()  // BehaviorEmBase constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorEmBase::vftable (0x0163FA54)
    *AT(unsigned int, 0xA18) = 0;  /* BehaviorEmBase+0xA18: ? */
    FUN_00a7c930(AT(undefined4, 0xA4C));
    FUN_00904d60(AT(undefined4, 0xA5C));
    FUN_00904d60(AT(undefined4, 0xA60));
    FUN_00de3530((undefined4)AT(char, 0xA64));
    FUN_00de3530((undefined4)AT(char, 0xA6C));
    FUN_00de3530((undefined4)AT(char, 0xA74));
    FUN_004ec5c0(AT(undefined4, 0xAB0));
    AT(cEnemyCautionStateManager, 0xC10)->cEnemyCautionStateManager::cEnemyCautionStateManager();
    return this;
}

// 00A8E790  BehaviorAppBase::vfFC  size=5  [class]
void BehaviorAppBase::vfFC()
{
    Behavior::vfFC();  // jmp 0x00A8C110
}

// 00A8E7A0  BehaviorAppBase::vf100  size=5  [class]
void BehaviorAppBase::vf100()
{
    Behavior::vf100();  // jmp 0x00A8C180
}

// 00A8E7B0  BehaviorAppBase::vfDC  size=20  [class]
undefined4 BehaviorAppBase::vfDC()
{
    int controller = *AT(int, 0x764);  /* Behavior+0x764: ? */
    if (controller != 0) {
        return *(undefined4 *)(controller + 0x114);
    }
    return 0;
}

// 00A8E7D0  BehaviorAppBase::vfE0  size=20  [class]
undefined4 BehaviorAppBase::vfE0()
{
    int controller = *AT(int, 0x764);  /* Behavior+0x764: ? */
    if (controller != 0) {
        return *(undefined4 *)(controller + 0x10C);
    }
    return 0;
}

// 00A8E7F0  BehaviorAppBase::vfE4  size=27  [class]
undefined4 BehaviorAppBase::vfE4()
{
    int controller = *AT(int, 0x764);  /* Behavior+0x764: ? */
    if (controller != 0) {
        return *(int *)(controller + 0x104) == 0;
    }
    return 0;
}

// 00A8E810  BehaviorAppBase::vfE8  size=3  [class]
undefined4 BehaviorAppBase::vfE8()
{
    return 0;
}

// 00A8E820  BehaviorAppBase::vfEC  size=6  [class]
undefined4 BehaviorAppBase::vfEC()
{
    return 1;
}

// 00A8E830  BehaviorAppBase::vf114  size=21  [class]
bool BehaviorAppBase::vf114(int arg)
{
    return vf118(*(int *)(arg + 4));  // tail call through the vftable
}

// 00A8E850  BehaviorAppBase::vf1D0  size=3  [class]
void BehaviorAppBase::vf1D0(undefined4)
{
}

// 00A8E860  BehaviorAppBase::vf300  size=1  [class]
void BehaviorAppBase::vf300()
{
}

// 00A8E870  BehaviorAppBase::vf304  size=1  [class]
void BehaviorAppBase::vf304()
{
}

// 00A8E880  FUN_00a8e880  size=215  [between]
// Stores `pos` as target position and the world-space yaw from this object towards it.
void FUN_00a8e880(int selfAddr, float *pos)  // __thiscall, this = BehaviorAppBase
{
    BehaviorAppBase *self = (BehaviorAppBase *)selfAddr;
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *position = (const float *)(selfAddr + 0x50);  /* cObj+0x50: position */
    float target[4];
    float origin[4];

    target[0] = pos[0];
    target[1] = pos[1];
    target[2] = pos[2];
    target[3] = pos[3];
    origin[0] = position[0];
    origin[1] = position[1];
    origin[2] = position[2];
    origin[3] = position[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    self->targetYaw() = (float)atan2(target[0] - (world[12] + origin[0]),
                                     target[2] - (world[14] + origin[2]));
    self->targetPos()[0] = pos[0];
    self->targetPos()[1] = pos[1];
    self->targetPos()[2] = pos[2];
    self->targetPos()[3] = pos[3];
}

// 00A8E960  FUN_00a8e960  size=13  [between]
void FUN_00a8e960(int selfAddr, undefined4 yaw)  // __thiscall; yaw is a float (fld/fstp)
{
    ((BehaviorAppBase *)selfAddr)->targetYaw() = *(float *)&yaw;
}

// 00A8E9B0  FUN_00a8e9b0  size=7  [between]
int __fastcall FUN_00a8e9b0(int selfAddr)
{
    return (int)((BehaviorAppBase *)selfAddr)->targetRot();
}

// 00A8E9C0  FUN_00a8e9c0  size=223  [between]
// World-space yaw from this object towards the stored target position (0 when nearly coincident).
float10 __fastcall FUN_00a8e9c0(int selfAddr)
{
    BehaviorAppBase *self = (BehaviorAppBase *)selfAddr;
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *position = (const float *)(selfAddr + 0x50);  /* cObj+0x50: position */
    float target[4];
    float origin[4];

    target[0] = self->targetPos()[0];
    target[1] = self->targetPos()[1];
    target[2] = self->targetPos()[2];
    target[3] = self->targetPos()[3];
    origin[0] = position[0];
    origin[1] = position[1];
    origin[2] = position[2];
    origin[3] = position[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    double dx = target[0] - (world[12] + origin[0]);
    double dz = target[2] - (world[14] + origin[2]);
    if (fabs(dx) < 0.001f && fabs(dz) < 0.001f) {
        return 0;
    }
    return atan2(dx, dz);
}

// 00A8EAA0  FUN_00a8eaa0  size=170  [between]
// Negated world-space pitch from this object towards `pos`.
float10 FUN_00a8eaa0(int selfAddr, float *pos)  // __thiscall, this = BehaviorAppBase
{
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *position = (const float *)(selfAddr + 0x50);  /* cObj+0x50: position */
    float target[4];
    float origin[4];

    target[0] = pos[0];
    target[1] = pos[1];
    target[2] = pos[2];
    target[3] = pos[3];
    origin[0] = position[0];
    origin[1] = position[1];
    origin[2] = position[2];
    origin[3] = position[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    return -atan2(target[1] - (world[13] + origin[1]),
                  target[2] - (world[14] + origin[2]));
}

// 00A8EB50  FUN_00a8eb50  size=221  [between]
float *FUN_00a8eb50(int selfAddr, float *out, float *pos)  // __thiscall, this = BehaviorAppBase
{
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *position = (const float *)(selfAddr + 0x50);  /* cObj+0x50: position */
    float target[4];
    float origin[4];

    target[0] = pos[0];
    target[1] = pos[1];
    target[2] = pos[2];
    target[3] = pos[3];
    origin[0] = position[0];
    origin[1] = position[1];
    origin[2] = position[2];
    origin[3] = position[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    float dx = target[0] - (origin[0] + world[12]);
    origin[0] = dx;
    float dz = target[2] - (world[14] + origin[2]);
    origin[2] = dz;
    // FUN_00fdc8b0 / FUN_00fdc4e0: CRT x87 intrinsics (_CI*), argument and result in ST0
    out[0] = (float)((double (*)(double))FUN_00fdc8b0)(dx);
    out[1] = (float)atan2((double)origin[0], (double)origin[2]);
    out[2] = (float)((double (*)(double))FUN_00fdc4e0)(origin[2]);
    return out;
}

// 00A8EC30  FUN_00a8ec30  size=217  [between]
// World-space yaw from this object towards `pos` (0 when nearly coincident).
float10 FUN_00a8ec30(int selfAddr, float *pos)  // __thiscall, this = BehaviorAppBase
{
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *position = (const float *)(selfAddr + 0x50);  /* cObj+0x50: position */
    float target[4];
    float origin[4];

    target[0] = pos[0];
    target[1] = pos[1];
    target[2] = pos[2];
    target[3] = pos[3];
    origin[0] = position[0];
    origin[1] = position[1];
    origin[2] = position[2];
    origin[3] = position[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    double dx = target[0] - (world[12] + origin[0]);
    double dz = target[2] - (world[14] + origin[2]);
    if (fabs(dx) < 0.001f && fabs(dz) < 0.001f) {
        return 0;
    }
    return atan2(dx, dz);
}

// 00A8ED10  FUN_00a8ed10  size=219  [between]
// World-space yaw from `from` towards `pos`, both transformed by this object's matrix.
float10 FUN_00a8ed10(int selfAddr, float *pos, undefined4 *from)  // __thiscall, this = BehaviorAppBase
{
    const float *world = (const float *)(selfAddr + 0xF0);  /* cObj+0xF0: world matrix */
    const float *fromVec = (const float *)from;
    float target[4];
    float origin[4];

    target[0] = pos[0];
    target[1] = pos[1];
    target[2] = pos[2];
    target[3] = pos[3];
    origin[0] = fromVec[0];
    origin[1] = fromVec[1];
    origin[2] = fromVec[2];
    origin[3] = fromVec[3];
    D3DXVec3TransformNormal(target, target, world);
    target[0] = world[12] + target[0];
    target[1] = world[13] + target[1];
    target[2] = world[14] + target[2];
    D3DXVec3TransformNormal(origin, origin, world);
    double dx = target[0] - (world[12] + origin[0]);
    double dz = target[2] - (world[14] + origin[2]);
    if (fabs(dx) < 0.001f && fabs(dz) < 0.001f) {
        return 0;
    }
    return atan2(dx, dz);
}

// 00A8EDF0  FUN_00a8edf0  size=19  [between]
void FUN_00a8edf0(int selfAddr, undefined4 value)  // __thiscall: set HP and max HP
{
    BehaviorAppBase *self = (BehaviorAppBase *)selfAddr;
    self->maxHp() = value;
    self->hp() = value;
}

// 00A8EE10  FUN_00a8ee10  size=13  [between]
void FUN_00a8ee10(int selfAddr, undefined4 value)  // __thiscall: set max HP
{
    ((BehaviorAppBase *)selfAddr)->maxHp() = value;
}

// 00A8EE20  FUN_00a8ee20  size=13  [between]
void FUN_00a8ee20(int selfAddr, undefined4 value)  // __thiscall: set HP
{
    ((BehaviorAppBase *)selfAddr)->hp() = value;
}

// 00A8EE30  BehaviorAppBase::vf30C  size=59  [class]
void BehaviorAppBase::vf30C(int damage, int keepAlive)
{
    hp() = hp() - damage;
    if (hp() < 1) {
        hp() = 0;
    }
    if (keepAlive != 0 && hp() < 1) {
        hp() = 1;
    }
}

// 00A8EE70  BehaviorAppBase::vf310  size=37  [class]
void BehaviorAppBase::vf310(int amount)
{
    if (amount >= 0) {
        hp() = hp() + amount;
        if (maxHp() < hp()) {
            hp() = maxHp();
        }
    }
}

// 00A8EEA0  FUN_00a8eea0  size=7  [between]
undefined4 __fastcall FUN_00a8eea0(int selfAddr)  // get HP
{
    return ((BehaviorAppBase *)selfAddr)->hp();
}

// 00A8EEB0  FUN_00a8eeb0  size=7  [between]
undefined4 __fastcall FUN_00a8eeb0(int selfAddr)  // get max HP
{
    return ((BehaviorAppBase *)selfAddr)->maxHp();
}

// 00A8EEC0  FUN_00a8eec0  size=7  [between]
void __fastcall FUN_00a8eec0(int *object)
{
    ((Behavior *)object)->vf64();  // tail call through the vftable
}

// 00A8EED0  BehaviorAppBase::vf220  size=13  [class]
void BehaviorAppBase::vf220(float timer)
{
    timer8D8() = timer;
}

// 00A8EEE0  BehaviorAppBase::vf328  size=34  [class]
void BehaviorAppBase::vf328(float dt)
{
    if (0.0f < timer8D8()) {
        timer8D8() = timer8D8() - dt;
    }
}

// 00A8EF10  FUN_00a8ef10  size=24  [between]
undefined4 __fastcall FUN_00a8ef10(int selfAddr)
{
    if (0.0f < ((BehaviorAppBase *)selfAddr)->timer8D8()) {
        return 1;
    }
    return 0;
}

// 00A8EF30  BehaviorAppBase::vf320  size=166  [class]
undefined4 BehaviorAppBase::vf320(float dt)
{
    float scale = dt * 60.0f;
    float move[4];

    move[0] = move890()[0] * scale;
    move[1] = move890()[1] * scale;
    move[2] = move890()[2] * scale;
    move[3] = move890()[3] * scale;
    if (0.0f < move[1]) {
        return 0;
    }
    if (!FUN_008e2740(*AT(int, 0x764))) {  /* Behavior+0x764: ? */
        // 0x008EB310 (named hkpCdPointCollector::hkpCdPointCollector_11 in the raw output)
        int moved = ((int (__thiscall *)(int, float *, float))0x008EB310)(
            *AT(int, 0x764), move, dt);  /* Behavior+0x764: ? */
        if (moved == 0) {
            return 0;
        }
    }
    FUN_008e2760(*AT(int, 0x764));  /* Behavior+0x764: ? */
    return 1;
}

// 00A8EFE0  FUN_00a8efe0  size=19  [between]
void __fastcall FUN_00a8efe0(int selfAddr)
{
    int *object = *(int **)(selfAddr + 0x7B0);  /* Behavior+0x7B0: ? */
    if (object != 0) {
        FUN_008f5990(object, selfAddr);
    }
}

// 00A8F000  FUN_00a8f000  size=34  [between]
void __fastcall FUN_00a8f000(int selfAddr)
{
    void *object = *(void **)(selfAddr + 0x7B0);  /* Behavior+0x7B0: ? */
    if (object != 0) {
        // virtual slot 0x4 with argument 1
        (*(void (__thiscall **)(void *, int))(*(char **)object + 4))(object, 1);
        *(int *)(selfAddr + 0x7B0) = 0;  /* Behavior+0x7B0: ? */
    }
}

// 00A8F030  BehaviorAppBase::vf15C  size=14  [class]
void BehaviorAppBase::vf15C(unsigned int, unsigned int)
{
    FUN_00a7c950(&handle91C());
}

// 00A982F0  BehaviorAppBase::vf30  size=70  [class]
void BehaviorAppBase::vf30()
{
    char *unit = *AT(char *, 0x588);  /* Behavior+0x588: ? */
    *AT(int, 0x674) = 1;              /* Behavior+0x674: ? */
    if (unit != 0) {
        unsigned int value;
        if (*(int *)(unit + 0x3C) == 0) {
            value = *(unsigned int *)FUN_009f8b60((int)this);
            unit = *AT(char *, 0x588);  /* Behavior+0x588: ? */
        }
        else {
            value = *(unsigned int *)(unit + 0x40);
        }
        *(unsigned int *)(unit + 0x40) = value;
        *(int *)(unit + 0x3C) = 1;
    }
    vf300();  // tail call through the vftable
}

// 00A98340  BehaviorAppBase::vf40  size=360  [class]
undefined4 BehaviorAppBase::startup()
{
    float uninitialized;  // ? an uninitialised stack slot is copied to +0x6DC

    if (Behavior::startup() == 0) {
        return 0;
    }
    vf304();
    *AT(float, 0x6E8) = 2.0f;  /* Behavior+0x6E8: ? */
    *AT(int, 0x6C4) = 0;       /* Behavior+0x6C4: ? */
    *AT(int, 0x6E4) = 0;       /* Behavior+0x6E4: ? */
    *AT(float, 0x6D0) = 0.0f;  /* Behavior+0x6D0: float[4] ? */
    *AT(float, 0x6D4) = 0.0f;
    *AT(float, 0x6D8) = 0.0f;
    *AT(float, 0x6DC) = uninitialized;
    *AT(int, 0x6EC) = 1;       /* Behavior+0x6EC: ? */
    field9D0() = 0;
    vec9E0()[0] = 0.0f;
    vec9E0()[1] = 0.0f;
    vec9E0()[2] = 0.0f;
    vec9E0()[3] = 0.0f;
    yawDelta() = 0.0f;
    field878() = 0;
    field87C() = 0x16;
    field880() = 0x12;
    int model = *AT(int, 0x4F0);  /* Behavior+0x4F0: model */
    int *slowRate = (model == 0) ? DEFAULT_SLOW_RATE_UNIT : (int *)FUN_00a7c910(model);
    FUN_00e08640(slowRate, 3);
    float *matrix = matrix990();
    matrix[14] = 0.0f;
    matrix[13] = 0.0f;
    matrix[12] = 0.0f;
    matrix[11] = 0.0f;
    matrix[9] = 0.0f;
    matrix[8] = 0.0f;
    matrix[7] = 0.0f;
    matrix[6] = 0.0f;
    matrix[4] = 0.0f;
    matrix[3] = 0.0f;
    matrix[2] = 0.0f;
    matrix[1] = 0.0f;
    matrix[15] = 1.0f;
    matrix[10] = 1.0f;
    matrix[5] = 1.0f;
    matrix[0] = 1.0f;
    for (int i = 0; i < 8; i++) {
        fill8B8()[i] = 0xFEFEFEFE;
    }
    return 1;
}

// 00A984B0  BehaviorAppBase::vf308  size=379  [class]
// Turns the object's yaw towards targetYaw() + yawOffset.
void BehaviorAppBase::vf308(float rate, float deadZone, float maxStep, float yawOffset)
{
    float rotation[4];
    const float *current = (const float *)vf84();

    rotation[0] = current[0];
    rotation[1] = current[1];
    rotation[2] = current[2];
    rotation[3] = current[3];
    // FUN_00ddba30: wrap angle into [-pi, pi] (result in ST0)
    float target = ((float (*)(float))FUN_00ddba30)(targetYaw() + yawOffset);
    float delta = ((float (*)(float))FUN_00ddba30)(target - rotation[1]);
    yawDelta() = delta;
    if (0.0f < deadZone) {
        if (-deadZone <= delta && delta <= deadZone) {
            return;
        }
        float scale = (fabsf(delta) - deadZone) * 3.8197186f;  // 12/pi (DAT_0163d9d0)
        if (!(scale <= 0.0f)) {
            if (scale >= 1.0f) {
                scale = 1.0f;
            }
            rate = scale * rate;
        }
        else {
            rate = 0.0f * rate;
        }
    }
    float newYaw;
    if (1.0f <= rate && 3.1415927f <= maxStep) {
        newYaw = target;
    }
    else {
        int model = *AT(int, 0x4F0);  /* Behavior+0x4F0: model */
        float slowRate1 = (float)FUN_00e049b0(model == 0 ? DEFAULT_SLOW_RATE_UNIT : (int *)FUN_00a7c910(model));
        model = *AT(int, 0x4F0);      /* Behavior+0x4F0: model */
        float slowRate2 = (float)FUN_00e049b0(model == 0 ? DEFAULT_SLOW_RATE_UNIT : (int *)FUN_00a7c910(model));
        // FUN_00dde210: step angle `from` towards `to` by factor, clamped to +-limit (result in ST0)
        newYaw = ((float (*)(float, float, float, float))FUN_00dde210)(
            rotation[1], target, slowRate2 * rate, slowRate1 * maxStep);
    }
    rotation[1] = newYaw;
    callVf88(rotation);
}

// 00A98630  BehaviorAppBase::vf200  size=33  [class]
undefined4 BehaviorAppBase::vf200()
{
    if (!FUN_00a7c7e0(*AT(int, 0x4F0))) {  /* Behavior+0x4F0: model */
        return 0;
    }
    return 0 < hp();
}

// 00AA0C30  BehaviorAppBase::vfF4  size=94  [class]
void BehaviorAppBase::vfF4(int which, unsigned int *outA, unsigned int *outB)
{
    int entry;
    if (which == 0) {
        entry = *AT(int, 0x5F0);  /* Behavior+0x5F0: ? */
    }
    else {
        entry = *AT(int, 0x5F4);  /* Behavior+0x5F4: ? */
    }
    if (entry != 0) {
        unsigned int sub = *(unsigned int *)(entry + 0xC);
        unsigned int value;
        if (sub == 0) {
            value = 0;
        }
        else {
            value = *(unsigned int *)(sub + 0x2C);
        }
        *outA = value;
        int owner = FUN_008f7780(entry);
        if (owner != 0) {
            *outB = *(unsigned int *)(owner + 0x4B4);
            return;
        }
        *outB = 0x700000;
    }
}

// 00AA0C90  BehaviorAppBase::vf48  size=28  [class]
void BehaviorAppBase::vf48()
{
    Behavior::vf48();  // 0x00A9D2F0
    vf328(1.0f);
}

// 00AA0CB0  BehaviorAppBase::vf50  size=304  [class]
void BehaviorAppBase::vf50()
{
    // 0x00A17A40 (named switchD_0080dbae::default in the raw output), __thiscall on this
    void (__thiscall *update_00a17a40)(BehaviorAppBase *) = (void (__thiscall *)(BehaviorAppBase *))0x00A17A40;

    if (*AT(int, 0x7CC) != 0 && *AT(int, 0x7D0) != 0) {  /* Behavior+0x7CC, +0x7D0: ? */
        FUN_00d829e0(*AT(undefined4 *, 0x7CC), *AT(undefined4, 0x7D0));
    }
    if ((*AT(int, 0x76C) != 0 || *AT(int, 0x770) != 0) && *AT(int, 0x768) != 0) {  /* Behavior+0x768..0x770: ? */
        update_00a17a40(this);
    }
    FUN_00a96f60((int)this);
    if (*AT(int, 0x764) != 0) {  /* Behavior+0x764: ? */
        int model = *AT(int, 0x4F0);  /* Behavior+0x4F0: model */
        float slowRate = (float)FUN_00e049b0(model == 0 ? DEFAULT_SLOW_RATE_UNIT : (int *)FUN_00a7c910(model));
        *(float *)(*AT(int, 0x764) + 0x170) = slowRate;
    }
    if (*AT(int, 0x4F0) != 0 && FUN_00a7c890(*AT(int, 0x4F0)) != 0) {
        int motion = (*AT(int, 0x4F0) == 0) ? 0 : FUN_00a7c890(*AT(int, 0x4F0));
        if ((*(unsigned char *)(motion + 0x94) & 1) != 0) {
            double seconds;
            if (*AT(int, 0x4F0) == 0 || FUN_00a7c890(*AT(int, 0x4F0)) == 0) {
                seconds = 0.0;
            }
            else {
                int motion2 = (*AT(int, 0x4F0) == 0) ? 0 : FUN_00a7c890(*AT(int, 0x4F0));
                if (((int (__fastcall *)(int))FUN_00e26e90)(motion2) == 0) {
                    seconds = -1.0f;  // DAT_0163b73c
                }
                else {
                    seconds = FUN_00e36970(motion2 + 0xF4, 0);
                }
            }
            frames8B4() = (int)(seconds * 60.0f);  // _ftol2 (FUN_00fdbc60)
        }
    }
    int controller = *AT(int, 0x764);  /* Behavior+0x764: ? */
    if ((controller == 0 || *(int *)(controller + 0x10C) != 0) && *AT(int, 0x570) == 0) {  /* Behavior+0x570: ? */
        return;
    }
    update_00a17a40(this);
}

// 00AA0DE0  BehaviorAppBase::vf19C  size=179  [class]
void BehaviorAppBase::vf19C(int msg, undefined4 arg)
{
    struct {
        float matrix[16];
        unsigned int info[20];  // initialised by FUN_009dbcf0
    } hit;

    float x = *(float *)(msg + 0x100);
    float y = *(float *)(msg + 0x104);
    float z = *(float *)(msg + 0x108);
    FUN_009dbcf0(hit.info);
    FID_conflict__memcpy(hit.matrix, (void *)(msg + 0x40), 0x40);
    hit.matrix[12] = x;
    hit.matrix[13] = y;
    hit.matrix[14] = z;
    if (*(short *)(msg + 0x84) == -1) {
        callVf1AC(*(unsigned int *)(msg + 0x144), msg, *(unsigned int *)(msg + 0x12C), &hit, this);
        return;
    }
    vf1A8(msg, arg, (undefined4)this);
}

// 00AA4AC0  BehaviorAppBase::thunk_vf64  size=5  [class]
void BehaviorAppBase::vf64()
{
    Behavior::vf64();  // jmp 0x00AA36F0
}

// 00AAB480  BehaviorAppBase::BehaviorAppBase_16  size=35  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAB480()  // PlWig constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = PlWig::vftable (0x01674AFC)
    return this;
}

// 00AAB520  BehaviorAppBase::BehaviorAppBase_17  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAB520()  // Pl0013 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Pl0013::vftable (0x01674E2C)
    AT(cEspControler, 0xA10)->cEspControler::cEspControler();
    return this;
}

// 00AAB650  BehaviorAppBase::BehaviorAppBase_18  size=271  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAB650()  // Pl2040 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Pl2040::vftable (0x016754D4)
    AT(cEspControler, 0xA30)->cEspControler::cEspControler();
    AT(cEspControler, 0xAE0)->cEspControler::cEspControler();
    AT(cEspControler, 0xB90)->cEspControler::cEspControler();
    AT(cEspControler, 0xC40)->cEspControler::cEspControler();
    AT(cEspControler, 0xCF0)->cEspControler::cEspControler();
    *AT(unsigned int, 0xDE8) = 0;  /* Pl2040+0xDE8: ? */
    AT(stKogekkoCamParamBase, 0xDF0)->stKogekkoCamParamBase::stKogekkoCamParamBase();
    *AT(unsigned int, 0xDF0) = 0x01664F74;  // stKogekkoCamParamNormal::vftable
    AT(stKogekkoCamParamBase, 0xE40)->stKogekkoCamParamBase::stKogekkoCamParamBase();
    *AT(unsigned int, 0xE40) = 0x01664F80;  // stKogekkoCamParamNarrow::vftable
    FUN_00a8b210((int)AT(char, 0xED0));
    *AT(float, 0xFB4) = 0.0f;        /* Pl2040+0xFB4: ? */
    *AT(unsigned int, 0xFB8) = 0;    /* Pl2040+0xFB8: ? */
    *AT(unsigned int, 0xFB0) = 0;    /* Pl2040+0xFB0: ? */
    AT(cEspControler, 0xFC0)->cEspControler::cEspControler();
    FUN_00a603a0(AT(undefined2, 0x1080));
    FUN_004ec5c0(AT(undefined4, 0x10E0));
    AT(cEspControler, 0x1200)->cEspControler::cEspControler();
    FUN_00904d60(AT(undefined4, 0x12E0));
    FUN_00904d60(AT(undefined4, 0x12E4));
    FUN_009003e0(AT(undefined4, 0x12E8));
    FUN_00a7c930(AT(undefined4, 0x12F8));
    return this;
}

// 00AAB8A0  BehaviorAppBase::BehaviorAppBase_14  size=35  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAB8A0()  // BehaviorTest constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorTest::vftable (0x01675B24)
    return this;
}

// 00AABDC0  BehaviorAppBase::BehaviorAppBase_15  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AABDC0()  // EmAfterImage constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = EmAfterImage::vftable (0x016761CC)
    FUN_00a7c930(AT(undefined4, 0xA00));
    return this;
}

// 00AAC100  BehaviorAppBase::BehaviorAppBase_35  size=35  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAC100()  // Es0305 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Es0305::vftable (0x01676BEC)
    return this;
}

// 00AAC4F0  BehaviorAppBase::BehaviorAppBase_37  size=57  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAC4F0()  // Em0600Gun constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0600Gun::vftable (0x01678314)
    FUN_00a7c930(AT(undefined4, 0xA18));
    FUN_00a7c930(AT(undefined4, 0xA24));
    return this;
}

// 00AAD090  BehaviorAppBase::BehaviorAppBase_32  size=110  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAD090()  // Em0090 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0090::vftable (0x0167979C)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    AT(cEspControler, 0xAB0)->cEspControler::cEspControler();
    char *element = AT(char, 0xB70);
    for (int i = 1; i >= 0; i--) {
        FUN_00a826e0((int)element);
        element += 0xD0;
    }
    FUN_00a7c930(AT(undefined4, 0xDA8));
    FUN_00904d60(AT(undefined4, 0xDF0));
    return this;
}

// 00AAD570  BehaviorAppBase::BehaviorAppBase_33  size=103  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAD570()  // Em0312 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0312::vftable (0x0167A534)
    FUN_00a603a0(AT(undefined2, 0xA60));
    // lib::StaticArray<Hw::cVec4,16> at +0xAC0 (inlined constructor)
    *AT(char *, 0xAC4) = AT(char, 0xAD0);   /* Em0312+0xAC4: array data pointer */
    *AT(unsigned int, 0xAC8) = 0;           /* Em0312+0xAC8: array count */
    *AT(unsigned int, 0xACC) = 0x10;        /* Em0312+0xACC: array capacity */
    *AT(unsigned int, 0xAC0) = 0x016746DC;  // lib::StaticArray<Hw::cVec4,16>::vftable
    *AT(unsigned int, 0xBF8) = 0;           /* Em0312+0xBF8: ? */
    FUN_00a603a0(AT(undefined2, 0xC00));
    return this;
}

// 00AAE2C0  BehaviorAppBase::BehaviorAppBase_30  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAE2C0()  // BehaviorPartsModel constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    return this;
}

// 00AAE370  BehaviorAppBase::BehaviorAppBase_31  size=52  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAE370()  // cRayLeftHand constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = cRayLeftHand::vftable (0x0167C6EC)
    return this;
}

// 00AAE900  BehaviorAppBase::BehaviorAppBase_23  size=67  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAE900()  // PowGaObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = PowGaObj::vftable (0x0167D48C)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    FUN_00a7c930(AT(undefined4, 0xAD0));
    *AT(unsigned int, 0xAF8) = 0;  /* PowGaObj+0xAF8: ? */
    return this;
}

// 00AAEA30  BehaviorAppBase::BehaviorAppBase_24  size=95  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAEA30()  // ExcelObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = ExcelObj::vftable (0x0167DADC)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    undefined4 *handle = AT(undefined4, 0xAD0);
    for (int i = 4; i >= 0; i--) {
        FUN_00a7c930(handle);
        handle++;
    }
    FUN_00a7c930(AT(undefined4, 0xAF8));
    *AT(unsigned int, 0xB18) = 0;  /* ExcelObj+0xB18: ? */
    return this;
}

// 00AAEB10  BehaviorAppBase::BehaviorAppBase_25  size=77  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAEB10()  // ExcelPartsObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = ExcelPartsObj::vftable (0x0167DE0C)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    *AT(unsigned int, 0xAD0) = 0;  /* ExcelPartsObj+0xAD0: ? */
    FUN_00a7c930(AT(undefined4, 0xAFC));
    *AT(unsigned int, 0xB18) = 0;  /* ExcelPartsObj+0xB18: ? */
    return this;
}

// 00AAECC0  BehaviorAppBase::BehaviorAppBase_26  size=91  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAECC0()  // MonQteObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = MonQteObj::vftable (0x0167E7D4)
    char *element = AT(char, 0xA00);
    for (int i = 7; i >= 0; i--) {
        FUN_004105d0((undefined4 *)element);
        element += 0x100;
    }
    AT(cEspControler, 0x1230)->cEspControler::cEspControler();
    *AT(unsigned int, 0x12F8) = 0;  /* MonQteObj+0x12F8: ? */
    return this;
}

// 00AAEDA0  BehaviorAppBase::BehaviorAppBase_27  size=110  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAEDA0()  // cRayBattery constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = cRayBattery::vftable (0x0167EB04)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    AT(cEspControler, 0xAB0)->cEspControler::cEspControler();
    char *element = AT(char, 0xB70);
    for (int i = 1; i >= 0; i--) {
        FUN_00a826e0((int)element);
        element += 0xD0;
    }
    FUN_00a7c930(AT(undefined4, 0xDA8));
    FUN_00a7c930(AT(undefined4, 0xDB4));
    return this;
}

// 00AAEE90  BehaviorAppBase::BehaviorAppBase_28  size=151  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAEE90()  // cGeckoBattery constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = cGeckoBattery::vftable (0x0167EE34)
    char *element = AT(char, 0xA00);
    for (int i = 1; i >= 0; i--) {
        FUN_00a826e0((int)element);
        element += 0xD0;
    }
    FUN_00a7c930(AT(undefined4, 0xBA0));
    FUN_00a7c930(AT(undefined4, 0xBD0));
    *AT(unsigned short, 0xBD8) = 0;  /* cGeckoBattery+0xBD8: ? */
    *AT(unsigned int, 0xBDC) = 0;    /* cGeckoBattery+0xBDC: ? */
    *AT(float, 0xBE0) = 0.0f;        /* cGeckoBattery+0xBE0: ? */
    *AT(float, 0xBE4) = 1.0f;        /* cGeckoBattery+0xBE4: ? */
    FUN_00a7c930(AT(undefined4, 0xBE8));
    *AT(unsigned int, 0xBEC) = 0;    /* cGeckoBattery+0xBEC: ? */
    FUN_00a7c950(AT(undefined4, 0xBE8));
    return this;
}

// 00AAEFA0  BehaviorAppBase::BehaviorAppBase_29  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAEFA0()  // Em0030Wire constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0030Wire::vftable (0x0167F164)
    FUN_00a7c930(AT(undefined4, 0xA00));
    return this;
}

// 00AAF040  BehaviorAppBase::BehaviorAppBase_20  size=89  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAF040()  // Em0060Battery constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0060Battery::vftable (0x0167F494)
    *AT(unsigned int, 0xA00) = 0;  /* Em0060Battery+0xA00: ? */
    FUN_00a826e0((int)AT(char, 0xA10));
    FUN_00a7c930(AT(undefined4, 0xAE0));
    FUN_00a7c930(AT(undefined4, 0xB10));
    FUN_00a7c930(AT(undefined4, 0xB18));
    return this;
}

// 00AAF110  BehaviorAppBase::BehaviorAppBase_21  size=63  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAF110()  // cEm0010Magazine constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = cEm0010Magazine::vftable (0x0167F7C4)
    FUN_00a7c930(AT(undefined4, 0xA70));
    return this;
}

// 00AAF350  BehaviorAppBase::BehaviorAppBase_22  size=57  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAF350()  // BehaviorCamera constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorCamera::vftable (0x0168010C)
    FUN_00a7c930(AT(undefined4, 0xA04));
    FUN_00a7c930(AT(undefined4, 0xA54));
    return this;
}

// 00AAF850  BehaviorAppBase::BehaviorAppBase_19  size=79  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AAF850()  // Et002f constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Et002f::vftable (0x01681594)
    FUN_004ec5c0(AT(undefined4, 0xA00));
    FUN_00a603a0(AT(undefined2, 0xB20));
    AT(cEspControler, 0xBC0)->cEspControler::cEspControler();
    AT(cEspControler, 0xC70)->cEspControler::cEspControler();
    return this;
}

// 00AB0680  BehaviorAppBase::BehaviorAppBase_9  size=110  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB0680()  // Em0091 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em0091::vftable (0x01687C74)
    FUN_0049d2c0(AT(undefined4, 0xA00));
    AT(cEspControler, 0xA20)->cEspControler::cEspControler();
    AT(cEspControler, 0xAD0)->cEspControler::cEspControler();
    FUN_0049cd80(AT(undefined4, 0xB84));
    char *element = AT(char, 0xD80);
    for (int i = 1; i >= 0; i--) {
        FUN_00a826e0((int)element);
        element += 0xD0;
    }
    return this;
}

// 00AB0CA0  BehaviorAppBase::BehaviorAppBase_7  size=35  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB0CA0()  // Ba0041 constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Ba0041::vftable (0x0168AF3C)
    return this;
}

// 00AB0F90  BehaviorAppBase::BehaviorAppBase_8  size=117  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB0F90()  // BaContainerParts constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BaContainerParts::vftable (0x0168C52C)
    char *element = AT(char, 0xA00);
    for (int i = 7; i >= 0; i--) {
        FUN_004105d0((undefined4 *)element);
        element += 0x100;
    }
    FUN_00a603a0(AT(undefined2, 0x1230));
    AT(cEspControler, 0x12D0)->cEspControler::cEspControler();
    AT(cEspControler, 0x1380)->cEspControler::cEspControler();
    *AT(unsigned int, 0x1430) = 0;  /* BaContainerParts+0x1430: ? */
    *AT(unsigned int, 0x1488) = 0;  /* BaContainerParts+0x1488: ? */
    return this;
}

// 00AB19C0  BehaviorAppBase::BehaviorAppBase_5  size=35  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB19C0()  // DlcCatBehavior constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = DlcCatBehavior::vftable (0x01690BDC)
    return this;
}

// 00AB1B60  BehaviorAppBase::BehaviorAppBase_6  size=67  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB1B60()  // KamaitatiObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = KamaitatiObj::vftable (0x0169189C)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    FUN_00904d60(AT(undefined4, 0xAB0));
    *AT(unsigned int, 0xB10) = 0;  /* KamaitatiObj+0xB10: ? */
    return this;
}

// 00AB2390  BehaviorAppBase::BehaviorAppBase_4  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB2390()  // Emc030Wire constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Emc030Wire::vftable (0x016925C4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    return this;
}

// 00AB3B60  BehaviorAppBase::BehaviorAppBase  size=110  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB3B60()  // cRayBatteryDLC constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = cRayBatteryDLC::vftable (0x01694E3C)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    AT(cEspControler, 0xAB0)->cEspControler::cEspControler();
    char *element = AT(char, 0xB70);
    for (int i = 1; i >= 0; i--) {
        FUN_00a826e0((int)element);
        element += 0xD0;
    }
    FUN_00a7c930(AT(undefined4, 0xDA8));
    FUN_00a7c930(AT(undefined4, 0xDB4));
    return this;
}

// 00AB3E50  BehaviorAppBase::BehaviorAppBase_2  size=67  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB3E50()  // PowGaObjDLC constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = PowGaObjDLC::vftable (0x016954E4)
    AT(cEspControler, 0xA00)->cEspControler::cEspControler();
    FUN_00a7c930(AT(undefined4, 0xAD0));
    *AT(unsigned int, 0xAF8) = 0;  /* PowGaObjDLC+0xAF8: ? */
    return this;
}

// 00AB3F20  BehaviorAppBase::BehaviorAppBase_3  size=176  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB3F20()  // ArmThrowObj constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = ArmThrowObj::vftable (0x01695814)
    FUN_00a7c930(AT(undefined4, 0xA00));
    char *element = AT(char, 0xA10);
    for (int i = 7; i >= 0; i--) {
        FUN_004105d0((undefined4 *)element);
        element += 0x100;
    }
    FUN_00a603a0(AT(undefined2, 0x1240));
    AT(cEspControler, 0x12E0)->cEspControler::cEspControler();
    AT(cEspControler, 0x1390)->cEspControler::cEspControler();
    FUN_00a7c930(AT(undefined4, 0x1440));
    FUN_009003e0(AT(undefined4, 0x14A4));
    *AT(unsigned int, 0x14B4) = 0;  /* ArmThrowObj+0x14B4: ? */
    undefined4 *handle = AT(undefined4, 0x1504);
    for (int i = 7; i >= 0; i--) {
        FUN_00a7c930(handle);
        handle++;
    }
    *AT(unsigned int, 0x1540) = 0;  /* ArmThrowObj+0x1540: ? */
    return this;
}

// 00AB40F0  BehaviorAppBase::BehaviorAppBase_13  size=63  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB40F0()  // EmC010Magazine constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = EmC010Magazine::vftable (0x01695E4C)
    FUN_00a7c930(AT(undefined4, 0xA70));
    return this;
}

// 00AB4A10  BehaviorAppBase::BehaviorAppBase_12  size=46  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB4A10()  // Em8030Wire constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = Em8030Wire::vftable (0x016971B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    return this;
}

// 00AB5F00  BehaviorAppBase::BehaviorAppBase_11  size=63  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB5F00()  // Em8010Magazine constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = Em8010Magazine::vftable (0x0169A2DC)
    FUN_00a7c930(AT(undefined4, 0xA70));
    return this;
}

// 00AB6BA0  BehaviorAppBase::BehaviorAppBase_10  size=52  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AB6BA0()  // cRayArmor constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = cRayArmor::vftable (0x0169C5B4)
    return this;
}

// 00AC0E90  BehaviorAppBase::BehaviorAppBase_39  size=52  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AC0E90()  // cRayDamageCutArmor constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = cRayDamageCutArmor::vftable (0x0169D32C)
    return this;
}

// 00AC0F40  BehaviorAppBase::BehaviorAppBase_40  size=129  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AC0F40()  // Em01a0Parts constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = Em01a0Parts::vftable (0x0169D664)
    FUN_00a7c930(AT(undefined4, 0xA74));
    FUN_00a7c930(AT(undefined4, 0xA7C));
    FUN_00a7c930(AT(undefined4, 0xAA4));
    AT(cEspControler, 0xAC0)->cEspControler::cEspControler();
    AT(cEspControler, 0xBA0)->cEspControler::cEspControler();
    FUN_009003e0(AT(undefined4, 0xC50));
    FUN_009003e0(AT(undefined4, 0xC60));
    return this;
}

// 00AC1070  BehaviorAppBase::BehaviorAppBase_38  size=88  [class]
BehaviorAppBase *BehaviorAppBase::ctor_00AC1070()  // cRayRightHand constructor
{
    this->Behavior::Behavior();
    // vftable = BehaviorAppBase::vftable (0x0163F724)
    FUN_00a7c930(&handle91C());
    // vftable = BehaviorPartsModel::vftable (0x0167C3B4)
    FUN_00a7c930(AT(undefined4, 0xA00));
    // vftable = cRayRightHand::vftable (0x0169D99C)
    unsigned int *entry = AT(unsigned int, 0xA64);  // 16 entries of 0x1C bytes
    for (int i = 15; i >= 0; i--) {
        entry[0] = 0;
        entry[1] = 0;
        entry[4] = 0;
        entry[5] = 0;
        entry[6] = 0;
        entry += 7;
    }
    return this;
}

// 00B7CDF0  BehaviorAppBase::thunk_vf64  size=5  [class]
void BehaviorAppBase::thunk_vf64()
{
    BehaviorAppBase::vf64();  // jmp 0x00AA4AC0
}
