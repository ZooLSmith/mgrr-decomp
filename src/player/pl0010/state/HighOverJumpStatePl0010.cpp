// src/player/pl0010/state/HighOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "HighOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e18[];  // HighOverJumpStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

// D3DX import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fabs / fcos / fsin inline)
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl cos(double x);
extern "C" double __cdecl sin(double x);

namespace HighOverJumpStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

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

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Pl0000+0x764: movement controller; Pl0000+0x40D4: parameter table
inline char *controllerOf(Pl0000 *player)
{
    return fld<char *>(player, 0x764);
}

inline char *paramsOf(Pl0000 *player)
{
    return fld<char *>(player, 0x40D4);
}

// StateMachineContextPl0010+0xC0 -> +0x4: obstacle / environment info
inline char *envInfoOf(const char *ctx)
{
    return fld<char *>(fld<char *>(ctx, 0xC0), 4);  /* StateMachineContextPl0010+0xC0: ? (+0x4: environment info) */
}

// StateMachineNode fields (base class, header not owned here)
inline int &nodeEntered(void *node)   { return fld<int>(node, 0x20); }  /* StateMachineNode+0x20: ? (skip when set) */
inline int &nodeRequested(void *node) { return fld<int>(node, 0x24); }  /* StateMachineNode+0x24: requested state (-1: none) */

// StateMachineNode::FUN_00d82510(state, priority): request a change to `state`
inline void requestState(void *node, int state, int priority)
{
    thiscall<void>(FUN_00d82510, node, state, priority);
}

// motions of this state
const int kMotionTakeOff = 0xB3;
const int kMotionTakeOff2 = 0xB4;
const int kMotionAir = 0xB5;

}  // namespace HighOverJumpStatePl0010_p1

// 00B81620  HighOverJumpStatePl0010::vf08  size=55  [class]
// Enter.
bool HighOverJumpStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    airTime() = 0.0f;
    pastApex() = 0;
    mayFall() = 0;
    wallHit() = 0;
    speedScale() = 0.8f;
    return true;
}

// 00B81660  HighOverJumpStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 HighOverJumpStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81670  HighOverJumpStatePl0010::vf24  size=19  [class]
bool HighOverJumpStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B816B0  HighOverJumpStatePl0010::vf00  size=6  [class]
undefined *HighOverJumpStatePl0010::vf00()
{
    return DAT_01be9e18;
}

// 00B90FA0  HighOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *HighOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAB090  HighOverJumpStatePl0010::SafeCheck  size=404  [class]
// First frame: starts the take-off motion, locks the camera angles, saves two controller values
// and solves the launch (angle, speed) for the obstacle height (clamped to 3.0).
void HighOverJumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace HighOverJumpStatePl0010_p1;

    if (nodeEntered(this) == 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        thiscall<int>(FUN_00aa3f60, player, kMotionTakeOff);
        char *controller = controllerOf(player);
        if (fld<int>(controller, 0x104) != 1) {  /* controller+0x104: ? */
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;  /* controller+0xD0: ? (+0x4 float) */
        }
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        savedCtrl1C0() = fld<int>(controllerOf(player), 0x1C0);  /* controller+0x1C0: ? */
        savedCtrl1CC() = fld<int>(controllerOf(player), 0x1CC);  /* controller+0x1CC: ? */
        thiscall<void>(FUN_008e0b70, controllerOf(player), 0);
        thiscall<void>(FUN_008e0ba0, controllerOf(player), 0);
        char *env = envInfoOf(ctx);
        float distance = fld<float>(env, 0x3F8);  /* env+0x3F8: ? (distance to the obstacle) */
        float height = fld<float>(env, 0x3FC);    /* env+0x3FC: obstacle height */
        if (height >= 3.0f) {
            height = 3.0f;
        }
        float controllerFC = fld<float>(controllerOf(player), 0xFC);  /* controller+0xFC: ? */
        if (fld<float>(envInfoOf(ctx), 0x548) < 1.0f) {  /* env+0x548: ? */
            speedScale() = 0.5f;
        }
        cdeclcall<undefined4>(FUN_00d83250, &launchAngle(), &launchSpeed(), distance, height + controllerFC,
                              (float)fabs(fld<float>(controllerOf(player), 0xF4)));  /* controller+0xF4: gravity */
        prevForward() = 0.0f;
        prevUp() = 0.0f;
        startY() = fld<float>(player, 0x44);  /* Pl0000+0x44: position y */
        gravityDrop() = 0.0f;
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAB230  HighOverJumpStatePl0010::vf20  size=210  [class]
// Leave: releases the camera angles and restores the two controller values.
undefined4 HighOverJumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace HighOverJumpStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>(controllerOf(player), 0x104) != 0) {  /* controller+0x104: ? */
        fld<int>(controllerOf(player), 0x104) = 0;
    }
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<int>(player, 0x4170) = 0;                             /* Pl0000+0x4170: camera angles overridden */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    thiscall<void>(FUN_008e0b70, controllerOf(player), savedCtrl1C0());
    thiscall<void>(FUN_008e0ba0, controllerOf(player), savedCtrl1CC());
    return 1;
}

// 00BCA620  HighOverJumpStatePl0010::vf14  size=294  [class]
// Chains take-off -> air motion, requests landing (0x13) near the ground after the apex and
// lets FUN_00bb90c0 cancel the jump.
void HighOverJumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace HighOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (thiscall<int>(FUN_00a94db0, player, kMotionTakeOff) != 0 ||
        thiscall<int>(FUN_00a94db0, player, kMotionTakeOff2) != 0) {
        int motion = thiscall<int>(FUN_00aa3f60, player, kMotionAir);
        thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);
    }
    if (pastApex() != 0) {
        fld<int>(ctx, 0x30) = 1;  /* StateMachineContextPl0010+0x30: ? */
        if ((fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.36f) ||  /* Pl0000+0x41E0: ground probe hit, +0x41E4: its distance */
            FUN_008e2740((int)controllerOf(player))) {
            requestState(this, 0x13, 100);
        }
    }
    if (thiscall<int>(FUN_00a94db0, player, kMotionAir) != 0 && nodeRequested(this) < 0 &&
        cdeclcall<int>(FUN_00bb90c0, contextArg, this) != 0) {
        thiscall<void>(FUN_008e0c00, controllerOf(player), (char *)player + 0x560);  /* Pl0000+0x560: ? (vector) */
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDEB40  HighOverJumpStatePl0010::qteSafeCheck  size=747  [class]
// Per-frame arc: while in motion 0xB5 the offset along the launch direction is
// (cos, sin)(launchAngle) * launchSpeed * airTime * speed, minus the accumulated gravity; the
// frame's delta is rotated by the player matrix and applied through vf70.
void HighOverJumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace HighOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_008e0b70, controllerOf(player), 0);
    thiscall<void>(FUN_008e0ba0, controllerOf(player), 0);
    if (thiscall<int>(FUN_00a9f760, player, kMotionAir) != 0) {
        char *params = paramsOf(player);
        float yawDeg = fld<float>(params, 0x174);
        fld<float>(player, 0x4180) = fld<float>(params, 0x170);  /* Pl0000+0x417C..0x4184: camera angles */
        fld<float>(player, 0x417C) = yawDeg * 0.017453292f;      // degrees -> radians
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    float speed = fld<float>(paramsOf(player), 0xF8) * speedScale();  /* params+0xF8: jump speed */
    if (thiscall<int>(FUN_00a9f760, player, kMotionAir) != 0) {
        airTime() = fld<float>(ctx, 0x8) + airTime();  /* StateMachineContextPl0010+0x8: frame time */
    }
    if (airTime() >= 0.1f) {
        if (fld<int>(fld<char *>(player, 0x4268), 0x94) != 0) {  /* Pl0000+0x4268: contact info (+0x94, +0x24: ?) */
            wallHit() = 1;
        }
        if (fld<int>(fld<char *>(player, 0x4268), 0x24) != 0) {
            wallHit() = 1;
        }
    }
    if (thiscall<int>(FUN_00a9f760, player, kMotionAir) != 0 &&
        thiscall<int>(FUN_00a95270, player, kMotionAir, 8) != 0) {
        cdeclcall<undefined4>(FUN_00bd3620, contextArg, this, 100);
    }
    if (thiscall<int>(FUN_00a9f760, player, kMotionTakeOff) != 0 || airTime() <= 1.0f) {
        float threshold = fld<float>(paramsOf(player), 0x14C);  /* params+0x14C: stick threshold */
        if (!(threshold * threshold < fld<float>(player, 0xD28)) || wallHit() != 0) {  /* Pl0000+0xD28: stick magnitude squared */
            mayFall() = 1;
        }
        else {
            mayFall() = 0;
        }
    }
    float vec[4];  // FUN_008e0ce0 output, then the frame's movement vector
    if (mayFall() != 0) {
        float *velocity = (float *)thiscall<int>(FUN_008e0ce0, controllerOf(player), vec);
        if (velocity[1] < 0.0f) {
            fld<int>(ctx, 0x30) = 1;  /* StateMachineContextPl0010+0x30: ? */
            cdeclcall<undefined4>(FUN_00bb91f0, contextArg, this);
        }
    }
    if (nodeRequested(this) < 0 && thiscall<int>(FUN_00a9f760, player, kMotionAir) != 0) {
        double forward = cos((double)launchAngle()) * launchSpeed() * airTime() * speed;
        double up = sin((double)launchAngle()) * launchSpeed() * airTime() * speed;
        float oldForward = prevForward();
        float oldUp = prevUp();
        if (1.0f < airTime()) {
            pastApex() = 1;
        }
        float dt = fld<float>(ctx, 0x8);  /* StateMachineContextPl0010+0x8: frame time */
        gravityDrop() = (float)((double)fld<float>(controllerOf(player), 0xF4) * dt * dt * speed * speed + gravityDrop());  /* controller+0xF4: gravity */
        prevForward() = (float)forward;
        prevUp() = (float)up;
        vec[0] = 0.0f;
        vec[1] = (float)((up - oldUp) + gravityDrop());
        vec[2] = (float)(forward - oldForward);
        float matrix[19];  // 76-byte buffer filled by FUN_00ddc1d0
        FUN_00ddc1d0((undefined4 *)matrix, (float *)((char *)player + 0x90), 5);  /* Pl0000+0x90: transform */
        D3DXVec3TransformNormal(vec, vec, matrix);
        vcall<void>(player, 0x70, vec);  // Behavior::vf70 (slot 0x70): move by a vector
    }
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
