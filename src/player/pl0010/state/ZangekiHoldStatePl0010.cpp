// src/player/pl0010/state/ZangekiHoldStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiHoldStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll imports (thunks 0x01436F2C..0x01436F44)
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (the compiler emitted fsqrt / fpatan / fabs inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);
extern "C" double __cdecl fabs(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9eb0[];  // ZangekiHoldStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// global camera matrix written by qteSafeCheck (float[16]) followed by a float
extern unsigned char DAT_01d618e0[];
extern float DAT_01d61920;
extern float DAT_01d61ab0;  // divisor of the player's slow timer (player mode 0xC)

namespace ZangekiHoldStatePl0010_p1 {

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

// __cdecl call of a function (symbol or address) whose generated prototype is wrong
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __fastcall call with ECX = arg (for prototypes that lost their return value)
template <class R, class F> inline R fastcall(F fn, int arg)
{
    typedef R (__fastcall *Fn)(int);
    return ((Fn)fn)(arg);
}

// Functions without a generated prototype (both in src/lib/StaticArray.cpp, __cdecl).
// FUN_00bd6680(context, motionA, motionB, layerMotion0, layerMotion1)
static void *const kFUN_00bd6680 = (void *)0x00BD6680;
// FUN_00bd6860(context, layerMotion0, layerMotion1, layerMotion2, blend, yawDegrees)
static void *const kFUN_00bd6860 = (void *)0x00BD6860;

// Animation::blend-out style call FUN_00e35de0 (ECX = animation + 0xF4)
typedef void (__thiscall *BlendOutFn)(int self, int motionSet, unsigned int motionId, float blendTime);

static const float kDegToRad = 0.017453292f;
static const float kRadToDeg = 57.29578f;

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    // FUN_00dd6d80 is __thiscall (ECX = type record)
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// |180 - atan2(x, z - 1) in degrees|, kept in x87 precision (not rounded to float)
inline double yawDegrees(float x, float z)
{
    return fabs(180.0f - atan2((double)x, (double)z - 1.0) * kRadToDeg);
}

}  // namespace ZangekiHoldStatePl0010_p1

// 00B83090  ZangekiHoldStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiHoldStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B830A0  ZangekiHoldStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14.
void ZangekiHoldStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B830B0  ZangekiHoldStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18.
undefined4 ZangekiHoldStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B830C0  ZangekiHoldStatePl0010::vf24  size=19  [class]
bool ZangekiHoldStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83100  ZangekiHoldStatePl0010::vf00  size=6  [class]
undefined *ZangekiHoldStatePl0010::vf00()
{
    return DAT_01be9eb0;
}

// 00B916A0  ZangekiHoldStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiHoldStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB5E40  ZangekiHoldStatePl0010::vf20  size=329  [class]
// Leave: blends the three layer motions out (10 frames, 0 for layerMotion1) and clears them.
undefined4 ZangekiHoldStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiHoldStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (FUN_00a92f90((int)player) != 0) {
        if (fld<int>(player, 0x40C8) == 8) {  /* Pl0000+0x40C8: mode */
            if (fld<int>(ctx, 0x330) == 0xC) {  /* StateMachineContextPl0010+0x330: ? */
                unsigned int motion = layerMotion0();
                int animation = FUN_00a92f90((int)player);
                thiscall<void>(FUN_00808650, (void *)animation, motion, 10.0f);
            }
        }
        else {
            unsigned int motion = layerMotion0();
            int animation = FUN_00a92f90((int)player);
            FUN_00e26e90(animation);
            ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 10.0f);
        }
        unsigned int motion = layerMotion1();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.0f);
        motion = layerMotion2();
        animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 10.0f);
    }
    layerMotion0() = 0xFFFFFFFF;
    layerMotion1() = 0xFFFFFFFF;
    layerMotion2() = 0xFFFFFFFF;
    return 1;
}

// 00BB5FA0  FUN_00bb5fa0  size=264  [callgraph]
// __thiscall on the state (self): updates blendTarget / blendRate from the stick input
// (stickX, stickY in -1000..1000) and moves blend toward blendTarget.
void FUN_00bb5fa0(int self, undefined4 *context, float stickX, float stickY)
{
    using namespace ZangekiHoldStatePl0010_p1;

    ZangekiHoldStatePl0010 *state = (ZangekiHoldStatePl0010 *)self;
    Pl0000 *player = asPl0000(fld<void *>(asContext(context), 0xC));  /* StateMachineContextPl0010+0xC: owner */

    // kept in x87 precision (not rounded to float)
    double x = stickX * (double)0.001f;
    double y = (double)0.001f * stickY;
    double magnitude = sqrt(x * x + y * y);
    if (0.1f <= magnitude) {
        double target = (magnitude + 1.0) * 0.5f;
        state->blendTarget() = (float)target;
        if (1.0 < target) {
            state->blendTarget() = 1.0f;
        }
        if (state->blendTarget() < 0.5f) {
            state->blendTarget() = 0.5f;
        }
    }
    else {
        state->blendTarget() = 0.0f;
    }
    float rate = state->blendTarget() * state->blendTarget();
    state->blendRate() = rate;
    if (rate == 0.0f) {
        state->blendRate() = 0.4f;
    }
    if (fld<int>(player, 0x40C8) == 0x13) {  /* Pl0000+0x40C8: mode */
        state->blendRate() = 0.2f;
    }
    state->blend() = (state->blendTarget() - state->blend()) * (state->blendRate() * state->blendRate()) +
                     state->blend();
}

// 00BE2410  ZangekiHoldStatePl0010::vf08  size=326  [class]
// Enter: sets the motions, seeds stickDir / yaw48 from the current stick and resets the blend.
bool ZangekiHoldStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiHoldStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    motionA() = 0xEB;
    motionB() = 0x143;
    motionC() = 0xEF;
    layerMotion0() = FUN_00bbc680(context);
    layerMotion1() = 3;
    layerMotion2() = 1;
    stickDir()[0] = 0.0f;
    stickDir()[1] = 0.0f;
    stickDir()[2] = 0.0f;
    stickDir()[3] = 1.0f;
    holdFrames() = 0;
    holdFramesMax() = 0;
    yaw48() = 0.0f;

    float stick[4];
    FUN_00bbc9f0(stick, context);
    yaw48() = (float)atan2(-(double)stick[0], 1.0 - stick[1]);
    stickDir()[0] = 0.0f;
    stickDir()[1] = 0.0f;
    stickDir()[2] = 0.0f;
    stickDir()[3] = 1.0f;
    stickDir()[0] = stick[0];
    stickDir()[1] = 0.0f;
    stickDir()[2] = stick[1];
    stickDir()[3] = stick[3];
    cdeclcall<void>(kFUN_00bd6680, context, motionA(), motionB(), layerMotion0(), layerMotion1());

    int kind = *(int *)((char *)this + 0x2C);  /* StateMachineNode+0x2C: ? */
    param70() = 0.5f;
    param74() = 0.8f;
    blend() = 0.0f;
    blendTarget() = 0.0f;
    blendRate() = 0.0f;
    rate8C() = 20.0f;
    param90() = 5.0f;
    timerFired88() = 0.0f;
    timer84() = 0.0f;
    if (kind != 0x31 && kind != 0x45 && kind != 0x46) {
        return true;
    }
    timer84() = 5.0f;
    return true;
}

// 00BE2560  ZangekiHoldStatePl0010::qteSafeCheck  size=3378  [class]
// Per-frame update: steers the heading (context +0x3F8) with the stick, then builds the
// camera matrix DAT_01d618e0 from the player's root parts matrix.
// Rebuilt from the machine code: the Ghidra output lost the rotated direction of the
// "no stick input" case (D3DXVec3TransformNormal on a local vector) and the value stored to +0x48.
void ZangekiHoldStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiHoldStatePl0010_p1;

    // Local vectors/matrices. yAxis[3] is never written (D3DXVec3TransformNormal only writes
    // x, y, z), yet it is read into stickDir()[3] -- uninitialised in the original too.
    float yAxis[4];
    float zAxis[4];
    float axis[4];
    float angles[4];  // angles[3] is never written
    float rotation[16];
    float basis[16];
    float camera[16];
    float temp[16];

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (fld<int>(asContext(context), 0x56C) != 0) {  /* StateMachineContextPl0010+0x56C: ? */
        thiscall<void>(FUN_00d82510, this, 0x35, 100);  // request state 0x35, priority 100
    }

    // count timer84 down by the animation frame step; fire FUN_00e25450 once when it expires
    int animation = FUN_00a92f90((int)player);
    double step;
    if (fastcall<int>(FUN_00e26e90, animation) == 0) {
        step = 1.0;
    }
    else {
        step = thiscall<double>(FUN_00e36840, (void *)(animation + 0xF4), 3);
    }
    double remaining = timer84() - step;
    timer84() = (float)remaining;
    if (timerFired88() == 0.0f && remaining < 0.0) {
        thiscall<void>(FUN_00e25450, (void *)(animation + 0x3BF0), rate8C() * 0.016666668f);
        timerFired88() = 1.0f;
        timer84() = 0.0f;
    }

    float stick[4];
    FUN_00bbc9f0(stick, context);
    float stickX = stick[0];
    float stickY = stick[1];
    if (fld<int>(ctx, 0x330) == 0xF) {  /* StateMachineContextPl0010+0x330: ? */
        stickX = stick[0] * -1.0f;
        stickY = stick[1] * -1.0f;
    }
    FUN_00bd61b0(context);
    FUN_00bd6ca0(context, (undefined4)this, 0x32);
    cdeclcall<void>(FUN_00bd6eb0, context, this, 0x32, 0);
    cdeclcall<void>(FUN_00bbad20, context, this, 0x32);

    float &heading = fld<float>(ctx, 0x3F8);  /* StateMachineContextPl0010+0x3F8: heading (degrees) */

    if (fld<int>(ctx, 0xF0) == 0) {  /* StateMachineContextPl0010+0xF0: ? */
        FUN_00bb5fa0((int)this, context, stickX, stickY);
        if (blendTarget() != 0.0f || 0.01f <= blend()) {
            float yaw = (float)yawDegrees(stickDir()[0], stickDir()[2]);
            if (blendTarget() == 0.0f) {
                yaw = heading;
            }
            cdeclcall<void>(kFUN_00bd6860, context, layerMotion0(), layerMotion1(), layerMotion2(), blend(), yaw);
            stickDir()[0] = stickX;
            stickDir()[1] = 0.0f;
            stickDir()[2] = stickY;
            stickDir()[3] = yAxis[3];
            if (fld<int>(ctx, 0x3F4) != 0) {  /* StateMachineContextPl0010+0x3F4: ? */
                int target = FUN_00a81330((uint *)((char *)ctx + 0x4BC));  /* StateMachineContextPl0010+0x4BC: handle */
                if (target != 0 && (target = FUN_00a7c8a0(target)) != 0 &&
                    (target = (int)FUN_00860b50((int *)target)) != 0) {
                    thiscall<void>(FUN_005ca1a0, (void *)target,
                                   (int)(fld<int>(ctx, 0x528) == 0));  /* StateMachineContextPl0010+0x528: ? */
                }
                double diff = yaw - heading;
                if (180.0f < diff) {
                    diff = yaw - (heading + 360.0);
                }
                if (diff < -180.0f) {
                    diff = yaw - (heading - 360.0);
                }
                if (fld<float>(player, 0x40B4) < fabs(diff)) {  /* Pl0000+0x40B4: turn threshold */
                    double turned = diff + heading;
                    heading = (float)turned;
                    if (360.0 < turned) {
                        do {
                            turned = turned - 360.0;
                        } while (360.0 < turned);
                        heading = (float)turned;
                    }
                    double wrapped = heading;
                    if (wrapped < 0.0) {
                        do {
                            wrapped = wrapped + 360.0;
                        } while (wrapped < 0.0);
                        heading = (float)wrapped;
                    }
                }
            }
        }
        else {
            thiscall<void>(FUN_00d82510, this, 0x3D, 0x19);  // request state 0x3D, priority 0x19
        }
    }
    else {
        bool snapped = false;
        double x = stickX * (double)0.001f;  // x87 precision, not rounded to float
        double y = stickY * (double)0.001f;
        if (sqrt(x * x + y * y) < 0.1f) {
            // no stick input: use a fixed direction for the current mode
            if (fld<int>(player, 0x40C8) == 0xF) {  /* Pl0000+0x40C8: mode */
                stickY = -1000.0f;
                stickX = 1000.0f;
            }
            else {
                float dir[4];
                bool rotate = true;
                float angle = 0.0f;
                if (fld<int>(player, 0x40C8) == 0xC) {
                    dir[0] = 0.0f;
                    dir[1] = -1000.0f;
                    dir[2] = 0.0f;
                    if (0.0f < DAT_01d61ab0) {
                        angle = fld<float>(player, 0x341C) / DAT_01d61ab0 * 145.0f * kDegToRad;  /* Pl0000+0x341C: slowTimer341C */
                    }
                    else {
                        rotate = false;
                    }
                }
                else {
                    int mode = fld<int>(ctx, 0x330);  /* StateMachineContextPl0010+0x330: ? */
                    dir[0] = 0.0f;
                    dir[1] = -1000.0f;
                    dir[2] = 0.0f;
                    switch (mode) {
                    case 3:
                    case 0x1C:
                        angle = 1.5707964f;
                        break;
                    case 4:
                        if (0.0f < fld<float>(ctx, 0x328)) {  /* StateMachineContextPl0010+0x328: ? */
                            float f = fld<float>(ctx, 0x324) * 0.006666667f;  /* StateMachineContextPl0010+0x324: ? */
                            angle = ((1.0f - f) * 45.0f - f * 45.0f) * kDegToRad;
                        }
                        else {
                            rotate = false;
                        }
                        break;
                    case 0xB:
                    case 0xD:
                    case 0x10:
                    case 0x1B:
                        angle = -1.5707964f;
                        break;
                    case 0xE:
                    case 0x11:
                    case 0x14:
                        angle = 0.7853982f;
                        break;
                    case 0xA:
                    case 0x15:
                        angle = -0.7853982f;
                        break;
                    case 0x16:
                        angle = -0.5235988f;
                        break;
                    case 0x12:
                        angle = 0.0f;
                        break;
                    default:
                        angle = (float)thiscall<int>(FUN_00a959f0, player, 0) * kDegToRad;
                        break;
                    }
                }
                if (rotate) {
                    D3DXMatrixRotationZ(rotation, angle);
                    D3DXVec3TransformNormal(dir, dir, rotation);
                }
                stickY = dir[1];
                stickX = dir[0];
                snapped = true;
            }
        }
        FUN_00bb5fa0((int)this, context, stickX, stickY);

        float dirX;
        float dirZ;
        if (snapped) {
            dirX = stickX;
            dirZ = stickY;
        }
        else {
            dirX = stickDir()[0];
            dirZ = stickDir()[2];
        }
        double yaw = yawDegrees(dirX, dirZ);
        if (blendTarget() == 0.0f) {
            yaw = heading;
        }
        float blendNow = blend();
        if (blendTarget() != 0.0f || 0.01f <= blend()) {
            double diff = yaw - heading;
            if (180.0f < diff) {
                diff = yaw - (heading + 360.0);
            }
            if (diff < -180.0f) {
                diff = yaw - (heading - 360.0);
            }
            double turned = diff * blendRate() * blendRate() + heading;
            heading = (float)turned;
            if (360.0 < turned) {
                do {
                    turned = turned - 360.0;
                } while (360.0 < turned);
                heading = (float)turned;
            }
            double wrapped = heading;
            if (wrapped < 0.0) {
                do {
                    wrapped = wrapped + 360.0;
                } while (wrapped < 0.0);
                heading = (float)wrapped;
            }
        }
        else {
            yaw = heading;
        }
        cdeclcall<void>(kFUN_00bd6860, context, layerMotion0(), layerMotion1(), layerMotion2(), blendNow,
                        (float)yaw);
        stickDir()[0] = stickX;
        stickDir()[1] = 0.0f;
        stickDir()[2] = stickY;
        stickDir()[3] = yAxis[3];
    }

    FUN_00bbb430(context, (undefined4)this, 100);
    float yawOut = (float)yawDegrees(stickX, stickY);
    if (blendTarget() == 0.0f) {
        yawOut = heading;
    }

    // Euler angles and position of the player's root parts matrix (float[16] at +0x10)
    int parts = thiscall<int>(FUN_00a12210, player, -1);  // __thiscall, ECX = player
    const float *m = (const float *)(parts + 0x10);
    float len0 = (float)sqrt(m[0] * m[0] + m[1] * m[1] + m[2] * m[2]);
    float len1 = (float)sqrt(m[4] * m[4] + m[5] * m[5] + m[6] * m[6]);
    double len2 = sqrt(m[8] * m[8] + m[9] * m[9] + m[10] * m[10]);
    float sinA = (float)(m[6] / len2);
    float cosA = (float)(m[10] / len2);
    double angle1 = FUN_00ddbaa0((float)-(m[2] / len2));
    angles[0] = (float)atan2(sinA, cosA);
    angles[1] = (float)angle1;
    angles[2] = (float)atan2(m[1] / len1, m[0] / len0);
    float origin[3];
    origin[0] = m[12];
    origin[1] = m[13];
    origin[2] = m[14];

    // rotated Z axis (the result is not used) and Y axis
    axis[0] = 0.0f;
    axis[1] = 0.0f;
    axis[2] = 1.0f;
    FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
    D3DXVec3TransformNormal(zAxis, axis, rotation);
    axis[0] = 0.0f;
    axis[1] = 1.0f;
    axis[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
    D3DXVec3TransformNormal(yAxis, axis, rotation);

    // camera = identity with the eye 1.35 above the root along its Y axis
    for (int i = 0; i < 16; i++) {
        basis[i] = 0.0f;
        camera[i] = 0.0f;
    }
    basis[0] = 1.0f;
    basis[5] = 1.0f;
    basis[10] = 1.0f;
    basis[15] = 1.0f;
    camera[0] = 1.0f;
    camera[5] = 1.0f;
    camera[10] = 1.0f;
    camera[15] = 1.0f;
    camera[12] = yAxis[0] * 1.35f + origin[0];
    camera[13] = yAxis[1] * 1.35f + origin[1];
    camera[14] = yAxis[2] * 1.35f + origin[2];

    if (angles[2] != 0.0f) {
        D3DXMatrixRotationZ(temp, angles[2]);
        D3DXMatrixMultiply(basis, temp, basis);
    }
    if (angles[1] != 0.0f) {
        D3DXMatrixRotationY(temp, angles[1]);
        D3DXMatrixMultiply(basis, temp, basis);
    }
    if (angles[0] != 0.0f) {
        D3DXMatrixRotationX(temp, angles[0]);
        D3DXMatrixMultiply(basis, temp, basis);
    }
    D3DXMatrixMultiply(camera, basis, camera);
    D3DXMatrixRotationX(temp, fld<float>(ctx, 0x374));  /* StateMachineContextPl0010+0x374: pitch */
    D3DXMatrixMultiply(camera, temp, camera);
    D3DXMatrixRotationZ(temp, cdeclcall<float>(FUN_00ddba30, (heading + 90.0f) * kDegToRad));
    D3DXMatrixMultiply(camera, temp, camera);
    FID_conflict__memcpy(DAT_01d618e0, camera, 0x40);
    DAT_01d61920 = 10.0f;

    if (0.1f < blend()) {
        holdFrames() = holdFrames() + 1;
        if (holdFramesMax() < holdFrames()) {
            holdFrames() = holdFramesMax();
            fld<int>(ctx, 0x3F4) = 1;  /* StateMachineContextPl0010+0x3F4: ? */
            fld<int>(ctx, 0x564) = 0;  /* StateMachineContextPl0010+0x564: ? */
            fld<int>(ctx, 0x570) = 0;  /* StateMachineContextPl0010+0x570: ? */
        }
    }
    yaw48() = yawOut;
    fld<float>(ctx, 0x400) = heading;  /* StateMachineContextPl0010+0x400: previous heading */
    int kind = *(int *)((char *)this + 0x24);  /* StateMachineNode+0x24: ? */
    if (kind == 0x31 || kind == 0x45 || kind == 0x46) {
        FUN_00b8c400((int)player);
    }
    StateMachineNode::qteSafeCheck(context);
}
