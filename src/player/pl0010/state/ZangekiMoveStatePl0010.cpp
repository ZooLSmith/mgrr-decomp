// src/player/pl0010/state/ZangekiMoveStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiMoveStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll imports (thunks 0x01436F2C..0x01436F44)
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (the compiler emitted fsqrt / fpatan / fabs inline and _CIacos = FUN_00fdc4e0)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl acos(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ed8[];  // ZangekiMoveStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern int DAT_01b77e30;              // pad layout: 1 or 3 use input bit 0x8000 for the hold button, else 0x1000
extern unsigned char DAT_01be9448[];  // ECX of FUN_00e049b0 (frame time)
extern char DAT_0163d0ac[];           // message printed by FUN_00dd5650 when a zero vector is normalized
// global camera matrix written by qteSafeCheck (float[16]) followed by a float
extern unsigned char DAT_01d618e0[];
extern float DAT_01d61920;

namespace ZangekiMoveStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __cdecl call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, typeSlot), (undefined4 *)type);
    return isKind != 0 ? (char *)obj : 0;
}

inline StateMachineContextPl0010 *asContext(const void *obj)
{
    return (StateMachineContextPl0010 *)downcast(obj, 0x0, DAT_01be9ef4);
}

inline Pl0000 *asPl0000(const void *obj)
{
    return (Pl0000 *)downcast(obj, 0x4, DAT_01be9db8);
}

// 00E35DE0 (ECX = animation + 0xF4): blend a motion out
typedef void (__thiscall *BlendOutFn)(int self, int motionSet, unsigned int motionId, float blendTime);

// 00A947E0 (ECX = player): sets a blend layer's weight / angle (functions.h has no parameters)
typedef void (__thiscall *SetBlendFn)(void *player, unsigned int layer, float weight, float angle, float arg4);

// 00A82870 (ECX = embedded control at +0x70): limits (functions.h has no parameters)
typedef void (__thiscall *SetLimitsFn)(void *control, float maxAngle, float minAngle, float arg3,
                                       float rate0, float rate1);

static const float kRadToDeg = 57.29578f;
static const float kDegToRad = 0.017453292f;

// One motion of a blend set: FUN_00a9f600(player, -1, layer, kind, angle, row, motion, 1/12, flags).
struct BlendEntry {
    int kind;
    int angle;
    int row;
    int motion;
};

// "ZangekiMove": three rows (0, 1, -1) of six directions
static const BlendEntry kMoveEntries[] = {
    {0, 0, 0, 0x51A},   {0, 0x5A, 0, 0x51C},  {0, 0x87, 0, 0x51F},
    {0, 0xB4, 0, 0x51B}, {0, -0x2D, 0, 0x51E}, {0, -0x5A, 0, 0x51D},
    {0, 0, 1, 0x50C},   {0, 0x5A, 1, 0x50E},  {0, 0x87, 1, 0x511},
    {0, 0xB4, 1, 0x50D}, {0, -0x2D, 1, 0x510}, {0, -0x5A, 1, 0x50F},
    {0, 0, -1, 0x513},  {0, 0x5A, -1, 0x515}, {0, 0x87, -1, 0x518},
    {0, 0xB4, -1, 0x514}, {0, -0x2D, -1, 0x517}, {0, -0x5A, -1, 0x516},
};

// "ZangekiMoveCircle": the first entry has kind 1
static const BlendEntry kCircleEntries[] = {
    {1, 0, 0, 0x109},    {0, 0, 0, 0x10A},    {0, 0x2D, 0, 0x10B},  {0, 0x5A, 0, 0x10C},
    {0, 0x87, 0, 0x10D}, {0, 0xA0, 0, 0x10E}, {0, 0xAA, 0, 0x10F},  {0, -0xA0, 0, 0x110},
    {0, -0x87, 0, 0x111}, {0, -0x5A, 0, 0x112}, {0, -0x2D, 0, 0x113},
};

// Inlined vector normalize (x, 0, z): FUN_00ddf460 when the length is positive and no component
// is NaN, otherwise FUN_00dd5650(message) and (0, 1, 0).
inline void normalizeXZ(float *v, double x, double z)
{
    double lengthSq = x * x + z * z;
    if (0.0 < lengthSq && x == x && z == z) {
        FUN_00ddf460(v, v);
    }
    else {
        cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
    }
}

// Signed angle (radians) of a normalized (x, y, z) around Y: acos(z), negated when x <= 0.
// The products with 0 are kept (the compiler kept them: they matter for NaN / -0).
inline double signedAngle(float *v, float *yTimesZero)
{
    *yTimesZero = v[1] * 0.0f;
    double angle = acos(*yTimesZero + v[0] * 0.0 + v[2]);
    if (*yTimesZero + v[0] + v[2] * 0.0 <= 0.0) {
        angle = angle * -1.0f;
    }
    return angle;
}

}  // namespace ZangekiMoveStatePl0010_p1

// 00B83630  ZangekiMoveStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiMoveStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B83640  ZangekiMoveStatePl0010::thunk_vf14  size=5  [class]
// vftable slot 0x14: a tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiMoveStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83650  ZangekiMoveStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiMoveStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83660  ZangekiMoveStatePl0010::vf24  size=19  [class]
bool ZangekiMoveStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83680  ZangekiMoveStatePl0010::ZangekiMoveStatePl0010  size=33  [class]
ZangekiMoveStatePl0010::ZangekiMoveStatePl0010(undefined4 arg) : StateMachineNode(arg)
{
    // vftable = ZangekiMoveStatePl0010::vftable (0x016A1F78)
    FUN_00a826e0((int)moveControl());
}

// 00B836B0  ZangekiMoveStatePl0010::vf00  size=6  [class]
undefined *ZangekiMoveStatePl0010::vf00()
{
    return DAT_01be9ed8;
}

// 00B91870  ZangekiMoveStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiMoveStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6E70  ZangekiMoveStatePl0010::vf08  size=1534  [class]
// Enter: builds the "ZangekiMove" and "ZangekiMoveCircle" blend sets, sets up the embedded move
// control (+0x70) and resets the step timer.
bool ZangekiMoveStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiMoveStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    motionA() = 0x143;
    motionB() = 0xEF;
    motionC() = 0x109;
    moveLayer() = 0;
    layer44() = 3;
    circleLayer() = 1;
    layer4C() = 2;

    FUN_00a9f560((int)player, (char *)"ZangekiMove", 0.083333336f, 0xC0200, 0);
    for (int i = 0; i < 18; i++) {
        const BlendEntry &e = kMoveEntries[i];
        FUN_00a9f600((int)player, -1, moveLayer(), e.kind, e.angle, e.row, e.motion, 0.083333336f, 0xC0200);
    }
    ((SetBlendFn)FUN_00a947e0)(player, moveLayer(), 1.0f, 0.0f, 0.0f);

    FUN_00a9f560((int)player, (char *)"ZangekiMoveCircle", 0.083333336f, 0, circleLayer());
    for (int i = 0; i < 11; i++) {
        const BlendEntry &e = kCircleEntries[i];
        FUN_00a9f600((int)player, -1, circleLayer(), e.kind, e.angle, e.row, e.motion, 0.083333336f, 0);
    }
    ((SetBlendFn)FUN_00a947e0)(player, circleLayer(), 1.0f, 0.0f, 0.0f);

    FUN_00a82790((undefined4 *)moveControl(), fld<int>(player, 0x4F0), 3, 0);  /* Pl0000+0x4F0: ? */
    moveControlFlags() = moveControlFlags() | 2;
    ((SetLimitsFn)FUN_00a82870)(moveControl(), 0.34906584f, -0.34906584f, 0.1f, 0.0017453292f, 0.017453292f);
    stepTimer() = 0.0f;
    turnLocked() = 0;
    stepPeriod() = 63.0f;
    turnAngle() = 0.0f;
    fld<int>(ctx, 0x564) = 0;  /* StateMachineContextPl0010+0x564: ? */
    FUN_00e25450((int)player + 0x3BF0, 0.0f);  /* Pl0000+0x3BF0: ? */
    return true;
}

// 00BB7470  ZangekiMoveStatePl0010::vf20  size=223  [class]
// Leave: blends both layers out (immediately / over 10 frames) and clears them.
undefined4 ZangekiMoveStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiMoveStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (FUN_00a92f90((int)player) != 0) {
        unsigned int layer = moveLayer();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, layer, 0.0f);
        layer = circleLayer();
        moveLayer() = 0xFFFFFFFF;
        animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, layer, 10.0f);
        circleLayer() = 0xFFFFFFFF;
    }
    return 1;
}

// 00BE4030  ZangekiMoveStatePl0010::qteSafeCheck  size=3035  [class]
// Per-frame update.  Rebuilt from the machine code: the Ghidra output lost most of the stack
// frame (two vectors from the pad, the clamps, the heading and blend-angle vectors).
//   moveStick  = FUN_00bbcb90 (left stick, -1000..1000)  -> moves the player (Pl0000 slots 0x68/0x6C)
//   aimStick   = FUN_00bbc9f0 (right stick)                -> heading (context +0x3F8), blend weights
void ZangekiMoveStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiMoveStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    FUN_00bd61b0(context);
    cdeclcall<void>(FUN_00bd6eb0, context, this, 0x32, 0);

    // leave when the hold button (layout dependent) is released
    unsigned int held;
    if (DAT_01b77e30 == 1 || DAT_01b77e30 == 3) {
        held = fld<unsigned int>(player, 0xCF8) & 0x8000;  /* Pl0000+0xCF8: input flags */
    }
    else {
        held = fld<unsigned int>(player, 0xCF8) & 0x1000;
    }
    if (held == 0) {
        FUN_00d82510((int)this, 0x3D, 0x19);  // request state 0x3D, priority 0x19
    }

    float moveStick[4];
    float aimStick[4];
    FUN_00bbcb90((undefined4 *)moveStick, context);
    FUN_00bbc9f0(aimStick, context);
    if (fabs((double)moveStick[1] + moveStick[0]) < 100.0f) {
        FUN_00d82510((int)this, 0x3D, 0x19);
    }

    // speed: 1 - (|move| - 0.2) * 1.25, clamped to 0..1
    // (the products stay in x87 precision for the length; the stored copies are floats)
    double moveXe = (double)moveStick[0] * 0.001f;
    double moveYe = (double)moveStick[1] * -0.001f;
    float moveX = (float)moveXe;
    float moveY = (float)moveYe;
    double speedE = 1.0 - (sqrt(moveXe * moveXe + moveYe * moveYe) - 0.2f) * 1.25f;
    float speed = (float)speedE;
    if (!(speedE < 1.0)) {  // also taken for NaN
        speed = 1.0f;
    }
    else if (speedE <= 0.0) {
        speed = 0.0f;
    }
    float aimX = aimStick[0] * 0.001f;
    float aimXClamped = aimX;  // clamped to -1..1
    if (1.0f < aimXClamped) {
        aimXClamped = 1.0f;
    }
    else if (aimX < -1.0f) {
        aimXClamped = -1.0f;
    }

    // move the player: position += (forward * -moveY' + right * -moveX') * 6e-5 * (speed + 1)
    float position[4];
    float *p = vcall<float *>(player, 0x68);
    position[0] = p[0];
    position[1] = p[1];
    position[2] = p[2];
    position[3] = p[3];
    float axisBuffer[4];
    float scale = -moveStick[1];
    float *forward = FUN_00a925a0((int)player, axisBuffer);
    double speedPlusOne = (double)speed + 1.0;
    float speedPlusOneF = (float)speedPlusOne;
    position[0] = (float)((double)forward[0] * scale * 6e-05f * speedPlusOne + position[0]);
    position[1] = (float)((double)forward[1] * scale * 6e-05f * speedPlusOne + position[1]);
    position[2] = (float)((double)forward[2] * scale * 6e-05f * speedPlusOne + position[2]);
    position[3] = (float)((double)forward[3] * scale * 6e-05f * speedPlusOne + position[3]);
    scale = -moveStick[0];
    float *right = FUN_00a92640((int)player, axisBuffer);
    position[0] = (float)((double)right[0] * scale * 6e-05f * speedPlusOneF + position[0]);
    position[1] = (float)((double)right[1] * scale * 6e-05f * speedPlusOneF + position[1]);
    position[2] = (float)((double)right[2] * scale * 6e-05f * speedPlusOneF + position[2]);
    position[3] = (float)((double)right[3] * scale * 6e-05f * speedPlusOneF + position[3]);
    vcall<void>(player, 0x6C, position);

    // heading from the aim stick (x, 0, -y)
    float temp;
    float heading[3];
    heading[0] = aimX;
    heading[1] = 0.0f;
    double aimYNeg = (double)aimStick[1] * -0.001f;
    heading[2] = (float)aimYNeg;
    if (heading[0] != 0.0f || aimYNeg != 0.0) {
        normalizeXZ(heading, heading[0], aimYNeg);
        fld<float>(ctx, 0x3F8) = (float)(signedAngle(heading, &temp) * kRadToDeg);  /* StateMachineContextPl0010+0x3F8: heading (degrees) */
    }

    // turn angle from the move stick (x, 0, -y), snapped for the side ranges
    float turn[3];
    turn[0] = moveX;
    turn[1] = 0.0f;
    turn[2] = moveY;
    float turnRad = 0.0f;
    double turnDeg = 0.0;
    if (turn[0] != 0.0f || turn[2] != 0.0f) {
        normalizeXZ(turn, turn[0], turn[2]);
        double angle = signedAngle(turn, &temp);
        turnRad = (float)angle;
        turnDeg = angle * kRadToDeg;
    }
    bool snapped = true;
    if (-81.0f < turnDeg && turnDeg < -54.0f) {
        if ((-90.0f - turnDeg) < (-45.0f - turnDeg)) {
            turnRad = -1.4137167f;
        }
        else {
            turnRad = -0.94247776f;
        }
    }
    else if (turnDeg < 126.0f && 99.0f < turnDeg) {
        if ((135.0f - turnDeg) < (90.0f - turnDeg)) {
            turnRad = 2.1991148f;
        }
        else {
            turnRad = 1.727876f;
        }
    }
    else {
        turnLocked() = 0;
        turnAngle() = 0.0f;
        snapped = false;
    }
    if (snapped && FUN_00a94e10((int)player, moveLayer(), 2.0f, 31.0f) != 0) {
        if (turnLocked() == 0) {
            turnLocked() = 1;
            turnAngle() = turnRad;
        }
        else {
            turnRad = turnAngle();
        }
    }

    // circle blend: angle of the aim stick, weight from its length (clamped; < 0.1 counts as 0)
    float circleYaw = (float)fabs(180.0f - atan2((double)aimStick[0], (double)aimStick[1] - 1.0) * kRadToDeg);
    double aimY = (double)aimStick[1] * 0.001f;
    double aimLength = sqrt(aimY * aimY + (double)aimX * aimX);
    float aimWeight = (float)aimLength;
    if (1.0 < aimLength) {
        aimWeight = 1.0f;
    }
    else if (aimLength < 0.1f) {
        aimWeight = 0.0f;
    }
    if (1.0f < speed) {
        speed = 1.0f;
    }

    thiscall<void>(FUN_00a95fb0, player, 0.0f);
    ((SetBlendFn)FUN_00a947e0)(player, circleLayer(), 1.0f - aimWeight, circleYaw, 0.0f);
    unsigned int layer = circleLayer();
    int animation = FUN_00a92f90((int)player);
    if (thiscall<int>(FUN_00e26e90, (void *)animation) != 0) {
        thiscall<void>(FUN_00e36ac0, (void *)(animation + 0xF4), layer, 1.0f);
    }
    float halfSpeed = speed * 0.5f;
    float rate = 1.2f - halfSpeed;
    thiscall<void>(FUN_00a96030, player, circleLayer(), rate);
    ((SetBlendFn)FUN_00a947e0)(player, moveLayer(), speed, turnRad * kRadToDeg, aimXClamped);
    float circleFrame = (float)FUN_00a958c0((int)player, circleLayer());
    thiscall<void>(FUN_00a95e60, player, moveLayer(), circleFrame);
    thiscall<void>(FUN_00a95fb0, player, 0.0f);
    thiscall<void>(FUN_00a96030, player, moveLayer(), rate);
    layer = moveLayer();
    animation = FUN_00a92f90((int)player);
    if (thiscall<int>(FUN_00e26e90, (void *)animation) != 0) {
        thiscall<void>(FUN_00e36ac0, (void *)(animation + 0xF4), layer, 1.0f);
    }

    double step = ((double)1.3f - halfSpeed) * FUN_00e049b0((int *)DAT_01be9448) + stepTimer();
    stepTimer() = (float)step;
    if (stepPeriod() < step) {
        stepTimer() = 0.0f;
    }

    FUN_00bd61b0(context);
    cdeclcall<void>(FUN_00bd6eb0, context, this, 0x32, 0);
    cdeclcall<void>(FUN_00bbad20, context, this, 0x32);

    // Euler angles and position of the player's root parts matrix (float[16] at +0x10)
    int parts = FUN_00a12210((int)player, -1);
    const float *m = (const float *)(parts + 0x10);
    float len0 = (float)sqrt(m[0] * m[0] + m[1] * m[1] + m[2] * m[2]);
    float len1 = (float)sqrt(m[4] * m[4] + m[5] * m[5] + m[6] * m[6]);
    double len2 = sqrt(m[8] * m[8] + m[9] * m[9] + m[10] * m[10]);
    float sinA = (float)(m[6] / len2);
    float cosA = (float)(m[10] / len2);
    double angle1 = FUN_00ddbaa0((float)-(m[2] / len2));
    float angles[3];
    angles[0] = (float)atan2(sinA, cosA);
    angles[1] = (float)angle1;
    angles[2] = (float)atan2(m[1] / len1, m[0] / len0);
    float origin[3];
    origin[0] = m[12];
    origin[1] = m[13];
    origin[2] = m[14];

    // rotated Z axis (the result is not used) and Y axis
    float axis[3];
    float rotation[16];
    float zAxis[4];
    float yAxis[4];
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
    float basis[16];
    float camera[16];
    float temp16[16];
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
        D3DXMatrixRotationZ(temp16, angles[2]);
        D3DXMatrixMultiply(basis, temp16, basis);
    }
    if (angles[1] != 0.0f) {
        D3DXMatrixRotationY(temp16, angles[1]);
        D3DXMatrixMultiply(basis, temp16, basis);
    }
    if (angles[0] != 0.0f) {
        D3DXMatrixRotationX(temp16, angles[0]);
        D3DXMatrixMultiply(basis, temp16, basis);
    }
    D3DXMatrixMultiply(camera, basis, camera);
    D3DXMatrixRotationX(temp16, fld<float>(ctx, 0x374));  /* StateMachineContextPl0010+0x374: pitch */
    D3DXMatrixMultiply(camera, temp16, camera);
    D3DXMatrixRotationZ(temp16, cdeclcall<float>(FUN_00ddba30, (fld<float>(ctx, 0x3F8) + 90.0f) * kDegToRad));
    D3DXMatrixMultiply(camera, temp16, camera);
    FID_conflict__memcpy(DAT_01d618e0, camera, 0x40);
    DAT_01d61920 = 10.0f;
    StateMachineNode::qteSafeCheck(context);
}
