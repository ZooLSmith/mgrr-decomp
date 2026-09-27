// src/player/pl0010/state/ZangekiOnPartsStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiOnPartsStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ee0[];  // ZangekiOnPartsStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // Et0006
// global objects passed in ECX
extern unsigned char DAT_01b5d1e0[];  // FUN_009c4bf0
// debug-print strings (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] a zero vector cannot be normalized."
// plain globals
extern unsigned int DAT_01bea060;  // global flags
extern unsigned int DAT_01bea090;  // global flags
extern int          DAT_01d61384;  // set to 0x10 on enter (debug/tutorial condition), -1 on leave
extern int          DAT_01d61388;
extern int          DAT_01d6138c;
extern int          DAT_01d61a88;  // 1 while this state is active
extern float        DAT_01d61a90;  // float[4] (0,0,0,1) at 0x01D61A90
extern float        DAT_01d61a94;
extern float        DAT_01d61a98;
extern float        DAT_01d61a9c;
extern float        DAT_01d61aa0;  // float[4] (0,0,0,1) at 0x01D61AA0
extern float        DAT_01d61aa4;
extern float        DAT_01d61aa8;
extern float        DAT_01d61aac;
extern float        DAT_01d61ab0;  // blend time for the next enter (0 -> 1.0)
extern int          DAT_01dc08bc;
extern int          DAT_01dc08d4;

namespace ZangekiOnPartsStatePl0010_p1 {

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

// Function at 0x00A60400 (named cXml::cXml_7 in FILEMAP, ctor_00A60400 in cXml.h): tears down the member at +0xFC
static void *const kReleaseMemberFC = (void *)0x00A60400;

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// Position and Euler angles extracted from a parts matrix (cParts +0x10, float[16]).
struct PartsFrame {
    float pos[4];     // translation row (matrix[12..15])
    float angles[4];  // angles for FUN_00ddc1d0(..., 5); angles[3] is never written (uninitialised)
};

inline void readPartsFrame(int parts, PartsFrame &frame)
{
    const float *m = (const float *)(parts + 0x10);
    frame.pos[0] = m[12];
    frame.pos[1] = m[13];
    frame.pos[2] = m[14];
    frame.pos[3] = m[15];
    float lenRow0 = (float)sqrt(m[0] * m[0] + m[1] * m[1] + m[2] * m[2]);
    float lenRow1 = (float)sqrt(m[5] * m[5] + m[4] * m[4] + m[6] * m[6]);
    float lenRow2 = (float)sqrt(m[9] * m[9] + m[8] * m[8] + m[10] * m[10]);
    float sinA = m[6] / lenRow2;
    float cosA = m[10] / lenRow2;
    float angle1 = (float)FUN_00ddbaa0(-(m[2] / lenRow2));
    frame.angles[0] = (float)atan2(sinA, cosA);
    frame.angles[1] = angle1;
    frame.angles[2] = (float)atan2(m[1] / lenRow1, m[0] / lenRow0);
}

// Rotated unit axes; the w components are never written by D3DXVec3TransformNormal
// (uninitialised in the original too, yet they feed the w of the points below).
struct Axes {
    float x[4];
    float y[4];
    float z[4];
};

// FUN_00ddc1d0 builds the rotation matrix from the angles; Z, X and Y are transformed in that order.
inline void rotationAxes(float *angles, Axes &axes)
{
    float rotation[16];
    float v[4];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 1.0f;
    FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
    D3DXVec3TransformNormal(axes.z, v, rotation);
    v[0] = 1.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
    D3DXVec3TransformNormal(axes.x, v, rotation);
    v[0] = 0.0f;
    v[1] = 1.0f;
    v[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, angles, 5);
    D3DXVec3TransformNormal(axes.y, v, rotation);
}

// out = origin + x * offset[0] + z * offset[2] + y * offset[1]  (all four components)
inline void transformPoint(float *out, const float *origin, const Axes &axes, const float *offset)
{
    for (int i = 0; i < 4; i++) {
        out[i] = origin[i] + axes.x[i] * offset[0] + axes.z[i] * offset[2] + axes.y[i] * offset[1];
    }
}

// Inlined Hw::VecNormalize: a zero vector is left alone; a vector that cannot be normalised
// (non-positive squared length or NaN) prints a debug message and becomes (0,1,0).
inline void vecNormalize(float *v)
{
    if (v[0] != 0.0f || v[1] != 0.0f || v[2] != 0.0f) {
        float lengthSq = v[1] * v[1] + v[0] * v[0] + v[2] * v[2];
        if (lengthSq < 0.0f || lengthSq == 0.0f || NAN_CHECK(v[0]) || NAN_CHECK(v[1]) || NAN_CHECK(v[2])) {
            cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
            v[0] = 0.0f;
            v[1] = 1.0f;
            v[2] = 0.0f;
        }
        else {
            FUN_00ddf460(v, v);
        }
    }
}

// offsetPos = anchorPos + normalize(offsetPos - anchorPos) * distance  (w: anchor.w + dw * distance)
inline void clampToDistance(ZangekiOnPartsStatePl0010 *self)
{
    float *anchor = self->anchorPos();
    float *target = self->offsetPos();
    float dir[4];
    dir[0] = target[0] - anchor[0];
    dir[1] = target[1] - anchor[1];
    dir[2] = target[2] - anchor[2];
    dir[3] = target[3] - anchor[3];
    vecNormalize(dir);
    float dist = self->distance();
    target[0] = anchor[0] + dir[0] * dist;
    target[1] = anchor[1] + dir[1] * dist;
    target[2] = anchor[2] + dir[2] * dist;
    target[3] = dist * dir[3] + anchor[3];
}

}  // namespace ZangekiOnPartsStatePl0010_p1

// 00B83760  ZangekiOnPartsStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiOnPartsStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83770  ZangekiOnPartsStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18.
undefined4 ZangekiOnPartsStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83780  ZangekiOnPartsStatePl0010::vf24  size=19  [class]
bool ZangekiOnPartsStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B837A0  ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010  size=36  [class]
ZangekiOnPartsStatePl0010::ZangekiOnPartsStatePl0010(undefined4 owner) : StateMachineNode(owner)
{
    // vftable = ZangekiOnPartsStatePl0010::vftable (0x016A1FD0)
    FUN_00a603a0((undefined2 *)((char *)this + 0xFC));
}

// 00B837D0  ZangekiOnPartsStatePl0010::vf00  size=6  [class]
undefined *ZangekiOnPartsStatePl0010::vf00()
{
    return DAT_01be9ee0;
}

// 00B918B0  ZangekiOnPartsStatePl0010::vf04  size=42  [class]
// Scalar deleting destructor.
undefined4 *ZangekiOnPartsStatePl0010::vf04(byte flags)
{
    using namespace ZangekiOnPartsStatePl0010_p1;
    thiscall<void>(kReleaseMemberFC, (char *)this + 0xFC);
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB75F0  ZangekiOnPartsStatePl0010::vf08  size=1077  [class]
// Enter: resets the rig, applies camera/controller settings and picks partsKind from the target.
bool ZangekiOnPartsStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiOnPartsStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    DAT_01bea060 = DAT_01bea060 | 0x400;
    fld<int>(player, 0x40C8) = 0xF;  /* Pl0000+0x40C8: ? */
    phase() = 0;
    step() = 0;
    fld<int>(ctx, 0x2FC) = 1;        /* StateMachineContextPl0010+0x2FC: ? */
    vec40()[0] = 0.0f;
    vec40()[1] = 0.0f;
    vec40()[2] = 0.0f;
    vec40()[3] = 1.0f;
    vec50()[3] = 1.0f;
    vec50()[0] = 0.0f;
    vec50()[1] = 0.0f;
    vec50()[2] = 0.0f;
    anchorPos()[0] = 0.0f;
    anchorPos()[1] = 0.0f;
    anchorPos()[2] = 0.0f;
    anchorPos()[3] = 1.0f;
    offsetPos()[3] = 1.0f;
    offsetPos()[0] = 0.0f;
    offsetPos()[1] = 0.0f;
    offsetPos()[2] = 0.0f;
    rot80()[0] = 0.0f;
    rot80()[1] = 0.0f;
    rot80()[2] = 0.0f;
    rot80()[3] = 1.0f;
    vecB0()[3] = 1.0f;
    vecB0()[0] = 0.0f;
    vecB0()[1] = 0.0f;
    vecB0()[2] = 0.0f;
    vecC0()[0] = 0.0f;
    vecC0()[1] = 0.0f;
    vecC0()[2] = 0.0f;
    vecC0()[3] = 1.0f;
    pitchA0() = 0.0f;
    yawA4() = 0.0f;
    DAT_01d61a90 = 0.0f;
    DAT_01d61a94 = 0.0f;
    DAT_01d61a98 = 0.0f;
    DAT_01d61a9c = 1.0f;
    DAT_01d61aac = 1.0f;
    DAT_01d61aa0 = 0.0f;
    DAT_01d61aa4 = 0.0f;
    DAT_01d61aa8 = 0.0f;
    blendTime() = 0.0f;
    distance() = 0.0f;
    angleF4() = 0.0f;
    angleF8() = 0.0f;
    vec170()[0] = 0.0f;
    vec170()[1] = 0.0f;
    vec170()[2] = 0.0f;
    vec170()[3] = 1.0f;
    vec180()[3] = 1.0f;
    vec180()[0] = 0.0f;
    vec180()[1] = 0.0f;
    vec180()[2] = 0.0f;
    blendTime() = DAT_01d61ab0;
    if (blendTime() == 0.0f) {
        blendTime() = 1.0f;
    }
    thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 1.0f, 0, 0, 0.1f);
    FUN_00b7aa80((int)player);
    FUN_008e6d00(fld<int>(player, 0x764));  /* Pl0000+0x764: controller */
    FUN_008e5c50(fld<int>(player, 0x764), 6);
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    fld<int>(player, 0x3E18) = 0;  /* Pl0000+0x3E18..0x3E20: ? */
    fld<int>(player, 0x3E1C) = 0;
    fld<int>(player, 0x3E20) = 0;

    unsigned int effectEntry = FUN_00a81330(&fld<uint>(ctx, 0x4BC));  /* StateMachineContextPl0010+0x4BC: handle */
    if (effectEntry != 0) {
        void *effect = (void *)FUN_00a7c8a0(effectEntry);
        if (effect != 0 &&
            FUN_00dd6d80((undefined4 *)vcall<void *>(effect, 0x4), (undefined4 *)DAT_01b35260) != 0) {
            thiscall<void>(FUN_005ca330, effect, 1.0f);
        }
    }
    object1D0() = 0;
    partsKind() = 0;

    unsigned int targetEntry = FUN_00a81330(&fld<uint>(ctx, 0x404));  /* StateMachineContextPl0010+0x404: target handle */
    if (targetEntry != 0) {
        int target = FUN_00a7c8a0(targetEntry);
        if (target != 0) {
            int partsNo = fld<int>(ctx, 0x408);  /* StateMachineContextPl0010+0x408: target parts number */
            if (partsNo < 0x3B) {
                if (partsNo == 0x3A) {
                    partsKind() = 8;
                }
                else {
                    switch (partsNo) {
                    case 6:
                        partsKind() = 1;
                        break;
                    case 0xE:
                        partsKind() = 0xD;
                        break;
                    case 0x18:
                        partsKind() = 0xE;
                        break;
                    case 0x20:
                        partsKind() = 6;
                        break;
                    case 0x26:
                        partsKind() = 5;
                        break;
                    case 0x2B:
                        partsKind() = 4;
                        break;
                    case -1:
                        partsKind() = 0xC;
                    }
                }
            }
            else if (partsNo < 0x40A) {
                if (partsNo == 0x409) {
                    partsKind() = 0xF;
                }
                else {
                    switch (partsNo) {
                    case 0x110:
                        if (fld<int>((void *)target, 0x4B0) == 0x20200) {  /* cObj+0x4B0: modelObjId */
                            partsKind() = 3;
                        }
                        if (fld<int>((void *)target, 0x4B0) == 0x2020A) {
                            partsKind() = 0xB;
                        }
                        break;
                    case 0x111:
                        if (fld<int>((void *)target, 0x4B0) == 0x20200) {
                            partsKind() = 2;
                        }
                        if (fld<int>((void *)target, 0x4B0) == 0x2020A) {
                            partsKind() = 10;
                        }
                        break;
                    case 0x112:
                        partsKind() = 7;
                        break;
                    case 0x114:
                        partsKind() = 9;
                    }
                }
            }
            else if (partsNo == 0x509 || partsNo == 0x609) {
                partsKind() = 0x10;
            }
        }
    }
    vec210()[0] = 0.0f;
    vec210()[1] = 0.0f;
    vec210()[2] = 0.0f;
    vec210()[3] = 1.0f;
    DAT_01d61a88 = 1;
    fld<int>(ctx, 0x4A0) = 0;  /* StateMachineContextPl0010+0x4A0: ? */
    if ((DAT_01bea090 & 0x80000000) != 0 && 0 < partsKind() && partsKind() < 0xC &&
        thiscall<int>(FUN_009c4bf0, DAT_01b5d1e0) < 3) {
        DAT_01d61384 = 0x10;
        DAT_01d61388 = 0;
        DAT_01d6138c = 1;
    }
    return true;
}

// 00BCFF40  ZangekiOnPartsStatePl0010::SafeCheck  size=1606  [class]
// First update: places the rig on the target parts, starts the RAY boss music and a player effect.
void ZangekiOnPartsStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiOnPartsStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        StateMachineContextPl0010 *ctx = asContextPl0010(context);
        Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
        unsigned char request[0x150];  // object set up by FUN_004039a0 and passed to FUN_00a8c8b0

        unsigned int targetEntry = FUN_00a81330(&fld<uint>(ctx, 0x404));  /* StateMachineContextPl0010+0x404: target handle */
        if (targetEntry != 0) {
            int target = FUN_00a7c8a0(targetEntry);
            if (target != 0) {
                int parts = FUN_00a12210(target, fld<int>(ctx, 0x408));  /* +0x408: target parts number */
                if (parts != 0) {
                    PartsFrame frame;
                    Axes axes;
                    readPartsFrame(parts, frame);
                    rotationAxes(frame.angles, axes);

                    float *anchor = anchorPos();
                    anchor[0] = frame.pos[0];
                    anchor[1] = frame.pos[1];
                    anchor[2] = frame.pos[2];
                    anchor[3] = frame.pos[3];
                    transformPoint(vecB0(), frame.pos, axes, &fld<float>(ctx, 0x450));  /* +0x450: float[3] offset */
                    vecC0()[0] = fld<float>(ctx, 0x430);  /* +0x430: float[4] */
                    vecC0()[1] = fld<float>(ctx, 0x434);
                    vecC0()[2] = fld<float>(ctx, 0x438);
                    vecC0()[3] = fld<float>(ctx, 0x43C);
                    transformPoint(offsetPos(), frame.pos, axes, &fld<float>(ctx, 0x410));  /* +0x410: float[3] offset */

                    float pitch;  // outputs of FUN_00dde510 (unused)
                    float yaw;
                    thunk_FUN_00dde510(&pitch, &yaw, anchor, offsetPos());  // called through its thunk at 00DDE5D0
                    pitchA0() = 0.0f;
                    float heading = (float)atan2(anchor[0] - offsetPos()[0], anchor[2] - offsetPos()[2]);
                    yawA4() = heading;
                    rot80()[0] = 0.0f;
                    rot80()[2] = 0.0f;
                    rot80()[1] = heading;
                    rot80()[3] = frame.angles[3];
                    vec40()[0] = fld<float>(player, 0x40);  /* cObj+0x40: float[4] */
                    vec40()[1] = fld<float>(player, 0x44);
                    vec40()[2] = fld<float>(player, 0x48);
                    vec40()[3] = fld<float>(player, 0x4C);
                    float *playerVec = vcall<float *>(player, 0x84);  // Behavior::vf84
                    vec50()[0] = playerVec[0];
                    vec50()[1] = playerVec[1];
                    vec50()[2] = playerVec[2];
                    vec50()[3] = playerVec[3];
                    distance() = (float)sqrt(fld<float>(ctx, 0x410) * fld<float>(ctx, 0x410) +
                                             fld<float>(ctx, 0x414) * fld<float>(ctx, 0x414) +
                                             fld<float>(ctx, 0x418) * fld<float>(ctx, 0x418));

                    int targetId = fld<int>((void *)targetEntry, 0x24);  // object id held by the handle entry
                    if (targetId == 0x20200) {
                        StateMachineContextPl0010 *bgmCtx = asContextPl0010(context);
                        if (fld<int>(bgmCtx, 0x4C4) != 2) {  /* StateMachineContextPl0010+0x4C4: boss bgm state */
                            FUN_00b92d70(context);
                            fld<int>(bgmCtx, 0x4C4) = 2;
                            cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Zangeki_SP_Ray1_Enter");
                        }
                    }
                    else if (targetId == 0x2020A) {
                        StateMachineContextPl0010 *bgmCtx = asContextPl0010(context);
                        if (fld<int>(bgmCtx, 0x4C4) != 3) {
                            FUN_00b92d70(context);
                            fld<int>(bgmCtx, 0x4C4) = 3;
                            cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Zangeki_SP_Ray2_Enter");
                        }
                    }
                }
            }
        }
        char *sub190 = (char *)ctx + 0x190;  /* StateMachineContextPl0010+0x190: embedded object */
        vcall<void>(sub190, 0x8, 0.0f, 0.0f, 0);
        FUN_004039a0((int)request, 1, (int)player, 0);
        FUN_00dffb30((int)request, (undefined4)sub190);
        thiscall<void>(FUN_00e03080, request, fld<int>(player, 0x4F0), 0);  /* cObj+0x4F0: field4F0 */
        unsigned int extraEntry = FUN_00a81330(&fld<uint>(player, 0xFF0));  /* Pl0000+0xFF0: handle */
        if (extraEntry != 0) {
            thiscall<void>(FUN_00e03080, request, extraEntry, 1);
        }
        FUN_00a8c8b0((int)player, 0x10010, (int)request);
        value160() = 35.0f;
    }
    StateMachineNode::SafeCheck(context);
}

// 00BD0590  ZangekiOnPartsStatePl0010::vf20  size=362  [class]
// Leave: restores the camera/controller settings changed by vf08.
undefined4 ZangekiOnPartsStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiOnPartsStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    fld<int>(player, 0x40C8) = 0;  /* Pl0000+0x40C8: ? */
    FUN_00b7aa80((int)player);
    DAT_01dc08bc = 0;
    DAT_01dc08d4 = 0;
    fld<int>(ctx, 0x2FC) = 0;      /* StateMachineContextPl0010+0x2FC / +0x300: ? */
    if (fld<int>(ctx, 0x300) != 0) {
        fld<int>(ctx, 0x300) = 0;
    }
    DAT_01bea060 = DAT_01bea060 & 0xFFFFFBFF;
    DAT_01d61a90 = 0.0f;
    DAT_01d61a94 = 0.0f;
    DAT_01d61a98 = 0.0f;
    DAT_01d61a9c = 1.0f;
    DAT_01d61ab0 = 0.0f;
    FUN_008e6d00(fld<int>(player, 0x764));  /* Pl0000+0x764: controller */
    FUN_008e5c50(fld<int>(player, 0x764), 6);
    FUN_008e6c60(fld<int>(player, 0x764), 1);
    FUN_008e0b70(fld<int>(player, 0x764), 1);
    DAT_01bea060 = DAT_01bea060 & 0xFDFFFFFF;
    FUN_00a7c950(&fld<undefined4>(player, 0x91C));  /* BehaviorAppBase::handle91C */
    DAT_01d61384 = -1;
    FUN_00bbc7f0(context, (int)this);
    unsigned int entry = FUN_00a81330(&fld<uint>(ctx, 0x534));  /* StateMachineContextPl0010+0x534: handle */
    if (entry != 0) {
        FUN_00a7c950(&fld<undefined4>(ctx, 0x534));
        int obj = FUN_00a7c8a0(entry);
        if (obj != 0) {
            FUN_009fdde0((cObj *)obj);
        }
    }
    DAT_01d61a88 = 0;
    fld<int>(ctx, 0x4A0) = 0;
    return 1;
}

// 00BD0700  FUN_00bd0700  size=5691  [callgraph]
// Per-frame rig update: re-derives anchorPos / offsetPos / vecB0 / vecC0 from the target parts
// (one parts, or a blend of two when context +0x484 is set), then calls FUN_00bb7a90.
void FUN_00bd0700(ZangekiOnPartsStatePl0010 *self, undefined4 *context)
{
    using namespace ZangekiOnPartsStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
    const float *offset450 = &fld<float>(ctx, 0x450);  /* StateMachineContextPl0010+0x450: float[3] */
    const float *offset410 = &fld<float>(ctx, 0x410);  /* +0x410: float[3] */
    const float *offset420 = &fld<float>(ctx, 0x420);  /* +0x420: float[3] */

    if (fld<int>(ctx, 0x484) == 0) {  /* +0x484: blend between two parts */
        unsigned int entry = FUN_00a81330(&fld<uint>(ctx, 0x404));  /* +0x404: target handle */
        if (entry == 0) {
            return;
        }
        int target = FUN_00a7c8a0(entry);
        if (target == 0) {
            return;
        }
        int parts = FUN_00a12210(target, fld<int>(ctx, 0x408));  /* +0x408: parts number */
        if (parts == 0) {
            return;
        }
        if (self->phase() == 0xC) {
            return;
        }
        PartsFrame frame;
        Axes axes;
        readPartsFrame(parts, frame);
        rotationAxes(frame.angles, axes);

        float *anchor = self->anchorPos();
        anchor[0] = frame.pos[0];
        anchor[1] = frame.pos[1];
        anchor[2] = frame.pos[2];
        anchor[3] = frame.pos[3];
        transformPoint(self->vecB0(), frame.pos, axes, offset450);
        self->vecC0()[0] = fld<float>(ctx, 0x430);  /* +0x430: float[4] */
        self->vecC0()[1] = fld<float>(ctx, 0x434);
        self->vecC0()[2] = fld<float>(ctx, 0x438);
        self->vecC0()[3] = fld<float>(ctx, 0x43C);

        if (fld<int>(ctx, 0x47C) != 0) {  /* +0x47C: blend the offset over time */
            float t = fld<float>(player, 0x341C) / self->blendTime();  /* Pl0000::slowTimer341C */
            float u = 1.0f - t;
            float blended[3];
            blended[0] = offset410[0] * t + offset420[0] * u;
            blended[1] = offset410[1] * t + offset420[1] * u;
            blended[2] = offset410[2] * t + offset420[2] * u;
            transformPoint(self->offsetPos(), frame.pos, axes, blended);
        }
        else if (fld<int>(ctx, 0x480) != 0) {  /* +0x480: blend, then keep the distance */
            float t = fld<float>(player, 0x341C) / self->blendTime();
            float u = 1.0f - t;
            float blended[3];
            blended[0] = offset410[0] * t + offset420[0] * u;
            blended[1] = offset410[1] * t + offset420[1] * u;
            blended[2] = offset410[2] * t + offset420[2] * u;
            transformPoint(self->offsetPos(), frame.pos, axes, blended);
            clampToDistance(self);
        }
        else {
            transformPoint(self->offsetPos(), frame.pos, axes, offset410);
        }
    }
    else {
        unsigned int entry = FUN_00a81330(&fld<uint>(ctx, 0x404));
        if (entry == 0) {
            return;
        }
        int target = FUN_00a7c8a0(entry);
        if (target == 0) {
            return;
        }
        int parts1 = FUN_00a12210(target, fld<int>(ctx, 0x408));  /* +0x408: first parts number */
        int parts2 = FUN_00a12210(target, fld<int>(ctx, 0x40C));  /* +0x40C: second parts number */
        if (parts1 == 0) {
            return;
        }
        if (parts2 == 0) {
            return;
        }
        float offsetY = fld<float>(ctx, 0x454);  /* +0x454: y of the +0x450 offset */

        PartsFrame frame1;
        Axes axes1;
        readPartsFrame(parts1, frame1);
        rotationAxes(frame1.angles, axes1);
        float upper1[4];  // frame1.pos + y1 * offsetY
        upper1[0] = axes1.y[0] * offsetY + frame1.pos[0];
        upper1[1] = axes1.y[1] * offsetY + frame1.pos[1];
        upper1[2] = axes1.y[2] * offsetY + frame1.pos[2];
        upper1[3] = axes1.y[3] * offsetY + frame1.pos[3];

        PartsFrame frame2;
        Axes axes2;
        readPartsFrame(parts2, frame2);
        rotationAxes(frame2.angles, axes2);
        float upper2[4];  // frame2.pos + y2 * offsetY
        upper2[0] = axes2.y[0] * offsetY + frame2.pos[0];
        upper2[1] = axes2.y[1] * offsetY + frame2.pos[1];
        upper2[2] = axes2.y[2] * offsetY + frame2.pos[2];
        upper2[3] = axes2.y[3] * offsetY + frame2.pos[3];

        float t = 0.0f;
        if (0.0f < self->blendTime()) {
            t = fld<float>(player, 0x341C) / self->blendTime();  /* Pl0000::slowTimer341C */
        }
        float u = 1.0f - t;

        float *anchor = self->anchorPos();
        anchor[0] = frame2.pos[0] * u + frame1.pos[0] * t;
        anchor[1] = frame2.pos[1] * u + frame1.pos[1] * t;
        anchor[2] = frame2.pos[2] * u + frame1.pos[2] * t;
        anchor[3] = frame2.pos[3] * u + frame1.pos[3] * t;
        float *upper = self->vecB0();
        upper[0] = upper2[0] * u + upper1[0] * t;
        upper[1] = upper2[1] * u + upper1[1] * t;
        upper[2] = upper2[2] * u + upper1[2] * t;
        upper[3] = upper2[3] * u + upper1[3] * t;
        float *vc0 = self->vecC0();
        vc0[0] = fld<float>(ctx, 0x440) * u + fld<float>(ctx, 0x430) * t;  /* +0x430 / +0x440: float[4] */
        vc0[1] = fld<float>(ctx, 0x444) * u + fld<float>(ctx, 0x434) * t;
        vc0[2] = fld<float>(ctx, 0x448) * u + fld<float>(ctx, 0x438) * t;
        vc0[3] = fld<float>(ctx, 0x44C) * u + fld<float>(ctx, 0x43C) * t;

        // Axes of the blended angles: computed, but every path below recomputes the per-parts axes.
        float blendedAngles[4];
        blendedAngles[0] = frame2.angles[0] * u + frame1.angles[0] * t;
        blendedAngles[1] = frame2.angles[1] * u + frame1.angles[1] * t;
        blendedAngles[2] = frame2.angles[2] * u + frame1.angles[2] * t;
        blendedAngles[3] = frame2.angles[3] * u + frame1.angles[3] * t;
        Axes blendedAxes;
        rotationAxes(blendedAngles, blendedAxes);

        if (fld<int>(ctx, 0x47C) != 0 || fld<int>(ctx, 0x480) != 0) {
            float point1[4];
            float point2[4];
            rotationAxes(frame1.angles, axes1);
            transformPoint(point1, frame1.pos, axes1, offset410);
            rotationAxes(frame2.angles, axes2);
            transformPoint(point2, frame2.pos, axes2, offset420);
            float *target70 = self->offsetPos();
            target70[0] = (point2[0] - point1[0]) * u + point1[0];
            target70[1] = (point2[1] - point1[1]) * u + point1[1];
            target70[2] = (point2[2] - point1[2]) * u + point1[2];
            target70[3] = (point2[3] - point1[3]) * u + point1[3];
            if (fld<int>(ctx, 0x47C) == 0) {
                // +0x480 set
                clampToDistance(self);
            }
        }
    }
    thiscall<void>(FUN_00bb7a90, self, context);
}

// Most callees below are invoked with arguments recovered from the machine code (the raw Ghidra
// output dropped many of them); stack layouts were followed instruction by instruction.

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fsqrt / fpatan inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl atan2(double y, double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// global objects passed in ECX
extern unsigned char DAT_01b36a60[];  // FUN_0093dc50
extern unsigned char DAT_01be9a98[];  // object table (FUN_00a82090 find by name / FUN_00a7f600 find by id)
extern unsigned char DAT_01bea1d0[];  // camera controller (FUN_00da8810 / FUN_00dc1270 / FUN_00da8ea0)
extern unsigned char DAT_01bea750[];  // FUN_00db3e80
extern unsigned char DAT_01b35df8[];  // collision world (ECX of RayCastSingleHitWork_2)
extern unsigned char DAT_01d616d0[];  // FUN_00c5bbb0
// debug-print strings (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] a zero vector cannot be normalized."
// plain globals
extern int          DAT_01d61a88;  // 1 while this state is active
extern float        DAT_01d61ab0;  // blend time for the next enter (0 -> 1.0)
extern int          DAT_01bea9a0;  // 1 while the rig camera of phase 6 is active
extern float        DAT_01bea940;  // camera value mirrored with FUN_00dc1270 / FUN_00da8810

namespace ZangekiOnPartsStatePl0010_p2 {

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

// Callees without (or with a wrong) generated declaration.
static void *const kRotateByAxisAngles = (void *)0x00DDEFE0;  // FUN_00ddefe0(out, in, angles, t, 5) (cdecl)
static void *const kPlaySe             = (void *)0x00E5E080;  // FUN_00e5e080(name, pos, 0, -1, 0) (cdecl)
static void *const kSetCameraNo        = (void *)0x00E36B80;  // Animation::Motion::Unit::setCameraNo (unit, motion, camera)
static void *const kRayCastSingleHit   = (void *)0x0090B130;  // RayCastSingleHitWork::RayCastSingleHitWork_2 (ECX = &DAT_01b35df8): (hit, normal, 0, 0, work) -> hit?
static void *const kMemcpy             = (void *)0x00FDBD90;  // CRT memcpy (FID_conflict:_memcpy)

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// Object of an object handle: FUN_00a81330 gives the handle's entry, FUN_00a7c8a0 its object (0 if none).
inline int objectOf(unsigned int *handle)
{
    unsigned int entry = FUN_00a81330(handle);
    if (entry == 0) {
        return 0;
    }
    return FUN_00a7c8a0(entry);
}

// Controller object of the player (Behavior+0x764), re-read at every use like the original.
inline int controllerOf(Pl0000 *player)
{
    return fld<int>(player, 0x764);
}

// Sets the camera of the motion unit of the player's animation (FUN_00a92f90(player) + 0xF4).
inline void setCameraNo(Pl0000 *player, int motion, int camera)
{
    thiscall<void>(kSetCameraNo, (void *)(FUN_00a92f90((int)player) + 0xF4), motion, camera);
}

// Ray cast against the collision world; non-zero on a hit (hit position / normal written).
inline int rayCastSingleHit(float *hit, float *normal, void *work)
{
    return thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, normal, 0, 0, work);
}

// Euler angles of a (scaled) rotation matrix, in the form FUN_00ddc1d0(..., 5) takes them.
// angles[3] is left untouched.
inline void matrixAngles(const float *m, float *angles)
{
    float lenRow0 = (float)sqrt(m[0] * m[0] + m[1] * m[1] + m[2] * m[2]);
    float lenRow1 = (float)sqrt(m[5] * m[5] + m[4] * m[4] + m[6] * m[6]);
    float lenRow2 = (float)sqrt(m[9] * m[9] + m[8] * m[8] + m[10] * m[10]);
    float sinA = m[6] / lenRow2;
    float cosA = m[10] / lenRow2;
    float angle1 = (float)FUN_00ddbaa0(-(m[2] / lenRow2));
    angles[0] = (float)atan2(sinA, cosA);
    angles[1] = angle1;
    angles[2] = (float)atan2(m[1] / lenRow1, m[0] / lenRow0);
}

// Position and Euler angles extracted from a parts matrix (cParts +0x10, float[16]).
struct PartsFrame {
    float pos[4];     // translation row (matrix[12..15])
    float angles[4];  // angles[3] is never written (uninitialised, and still used by the callers)
};

inline void readPartsFrame(int parts, PartsFrame &frame)
{
    const float *m = (const float *)(parts + 0x10);
    frame.pos[0] = m[12];
    frame.pos[1] = m[13];
    frame.pos[2] = m[14];
    frame.pos[3] = m[15];
    matrixAngles(m, frame.angles);
}

// Inlined Hw::VecNormalize without the zero-vector shortcut: a vector that cannot be normalised
// (non-positive squared length or NaN) prints a debug message and becomes (0,1,0).
inline void normalizeOrUp(float *v)
{
    float lengthSq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (lengthSq < 0.0f || lengthSq == 0.0f || NAN_CHECK(v[0]) || NAN_CHECK(v[1]) || NAN_CHECK(v[2])) {
        cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
        v[0] = 0.0f;
        v[1] = 1.0f;
        v[2] = 0.0f;
    }
    else {
        FUN_00ddf460(v, v);
    }
}

// Inlined Hw::VecNormalize(out, in).  As in the original, the zero test is made on `out` (which the
// callers never initialise), the length and NaN tests on `in`.
inline void vecNormalizeTo(float *out, float *in)
{
    if (out[0] != 0.0f || out[1] != 0.0f || out[2] != 0.0f) {
        float lengthSq = in[0] * in[0] + in[1] * in[1] + in[2] * in[2];
        if (lengthSq < 0.0f || lengthSq == 0.0f || NAN_CHECK(in[0]) || NAN_CHECK(in[1]) || NAN_CHECK(in[2])) {
            cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
            out[0] = 0.0f;
            out[1] = 1.0f;
            out[2] = 0.0f;
        }
        else {
            FUN_00ddf460(out, in);
        }
    }
}

// Places the effect object held by context +0x534 at the start position of the cut: the ray
// from the target parts along the effect's own axis (parts 0 minus parts -1) is cast and, on a
// hit, the effect is moved to hit - axis + normal * 0.5 with the target's vf84 rotation.
// `effect` is the object to move (re-fetched from the handle when 0).
inline void placeEffectAtStartPos(ZangekiOnPartsStatePl0010 *self, StateMachineContextPl0010 *ctx,
                                  int target, int effect)
{
    unsigned int *handle404 = &fld<unsigned int>(ctx, 0x404);  /* StateMachineContextPl0010+0x404: target handle */
    unsigned int *handle534 = &fld<unsigned int>(ctx, 0x534);  /* +0x534: effect object handle */

    int targetId = -1;
    int target2 = objectOf(handle404);
    if (target2 != 0) {
        targetId = FUN_009f8b40(target2);
    }
    float axis[4];  // uninitialised when there is no effect object (as in the original)
    int axisObj = effect != 0 ? effect : objectOf(handle534);
    if (axisObj != 0) {
        int tailParts = FUN_00a12210(axisObj, -1);
        int headParts = FUN_00a12210(axisObj, 0);
        axis[0] = fld<float>((void *)headParts, 0x40) - fld<float>((void *)tailParts, 0x40);
        axis[1] = fld<float>((void *)headParts, 0x44) - fld<float>((void *)tailParts, 0x44);
        axis[2] = fld<float>((void *)headParts, 0x48) - fld<float>((void *)tailParts, 0x48);
        axis[3] = fld<float>((void *)headParts, 0x4C) - fld<float>((void *)tailParts, 0x4C);
    }
    float direction[4];  // result unused
    vecNormalizeTo(direction, axis);

    int parts = FUN_00a12210(target, self->effectPartsNo());
    float from[4];
    from[0] = fld<float>((void *)parts, 0x40);
    from[1] = fld<float>((void *)parts, 0x44);
    from[2] = fld<float>((void *)parts, 0x48);
    from[3] = fld<float>((void *)parts, 0x4C);
    float to[4];
    to[0] = from[0] + axis[0];
    to[1] = from[1] + axis[1];
    to[2] = from[2] + axis[2];
    to[3] = from[3] + axis[3];
    unsigned int filter = FUN_00410130(6, targetId, 0, 0, 0);
    unsigned char rayWork[0xD0];
    thiscall<void>(FUN_00445d40, rayWork, from, to, filter, 0, 0x60, 0, "zangekiOnPartsStartPosCheck", 0);
    float hit[4];
    float normal[4];
    if (rayCastSingleHit(hit, normal, rayWork) == 0) {
        return;
    }
    int moved = effect;
    if (moved == 0) {
        moved = objectOf(handle534);
        if (moved == 0) {
            return;
        }
    }
    float pos[4];
    pos[0] = (hit[0] - axis[0]) + normal[0] * 0.5f;
    pos[1] = (hit[1] - axis[1]) + normal[1] * 0.5f;
    pos[2] = (hit[2] - axis[2]) + normal[2] * 0.5f;
    pos[3] = (hit[3] - axis[3]) + normal[3] * 0.5f;
    void *targetRot = vcall<void *>((void *)target, 0x84);  // Behavior::vf84
    vcall<void>((void *)moved, 0x7C, pos, targetRot);       // Behavior::vf7C (position, rotation)
}

}  // namespace ZangekiOnPartsStatePl0010_p2

// 00BD1D40  FUN_00bd1d40  size=1816  [callgraph]
// Orbit rig around object1D0: the stick input (FUN_00bbcb90) turns angleF4 / angleF8 (clamped to
// +-limit degrees when the limit is positive, forced to 0 when keep* is 0, never exactly 0), then
// the player is placed on the rotated offset of the parts 0 of object1D0 and turned with the
// angles of the look-at matrix (FUN_00db6410).  __thiscall (ECX = self), ret 0x14.
void FUN_00bd1d40(ZangekiOnPartsStatePl0010 *self, undefined4 *context, int keepAngleF4, int keepAngleF8,
                  float limitF8Deg, float limitF4Deg)
{
    using namespace ZangekiOnPartsStatePl0010_p2;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
    if (self->object1D0() == 0) {
        return;
    }

    float input[2];
    FUN_00bbcb90((undefined4 *)input, context);
    float inputX = input[0];
    float inputY = input[1];
    if (fld<int>(ctx, 0x330) == 0xF) {  /* StateMachineContextPl0010+0x330: ? (0xF inverts the input) */
        inputX = inputX * -1.0f;
        inputY = inputY * -1.0f;
    }
    float turnX = (float)(FUN_00da7570() * inputX);
    float10 turnY = FUN_00da7500() * inputY;
    // newF4 / newF8 / limit stay in x87 precision for the comparisons (as in the original)
    float10 newF4 = (float10)self->angleF4() - (float10)turnX * 2e-05f;
    self->angleF4() = (float)newF4;
    float10 newF8 = (float10)self->angleF8() - turnY * 2e-05f;
    self->angleF8() = (float)newF8;
    if (limitF8Deg > 0.0f) {
        float10 limit = (float10)limitF8Deg * 0.017453292f;
        if (newF8 > limit) {
            self->angleF8() = (float)limit;
        }
        if (self->angleF8() < -limit) {
            self->angleF8() = (float)-limit;
        }
    }
    if (limitF4Deg > 0.0f) {
        float10 limit = (float10)limitF4Deg * 0.017453292f;
        if (newF4 > limit) {
            self->angleF4() = (float)limit;
        }
        if (self->angleF4() < -limit) {
            self->angleF4() = (float)-limit;
        }
    }
    if (keepAngleF4 == 0) {
        self->angleF4() = 0.0f;
    }
    if (keepAngleF8 == 0) {
        self->angleF8() = 0.0f;
    }
    if (self->angleF4() == 0.0f) {
        self->angleF4() = 0.0001f;
    }
    if (self->angleF8() == 0.0f) {
        self->angleF8() = 0.0001f;
    }

    int parts = FUN_00a12210((int)self->object1D0(), 0);
    PartsFrame frame;
    readPartsFrame(parts, frame);
    const float *matrix = (const float *)(parts + 0x10);
    // axes of the parts matrix (w components never written)
    float axisY[4];
    axisY[0] = 0.0f;
    axisY[1] = 1.0f;
    axisY[2] = 0.0f;
    D3DXVec3TransformNormal(axisY, axisY, matrix);
    float axisX[4];
    axisX[0] = 1.0f;
    axisX[1] = 0.0f;
    axisX[2] = 0.0f;
    D3DXVec3TransformNormal(axisX, axisX, matrix);
    float axisZ[4];  // unused
    axisZ[0] = 0.0f;
    axisZ[1] = 0.0f;
    axisZ[2] = 1.0f;
    D3DXVec3TransformNormal(axisZ, axisZ, matrix);

    float top[4];
    top[0] = frame.pos[0] + axisY[0] * 1.5f;
    top[1] = frame.pos[1] + axisY[1] * 1.5f;
    top[2] = frame.pos[2] + axisY[2] * 1.5f;
    top[3] = frame.pos[3] + axisY[3] * 1.5f;
    float dir[4];
    dir[0] = frame.pos[0] - top[0];
    dir[1] = frame.pos[1] - top[1];
    dir[2] = frame.pos[2] - top[2];
    dir[3] = frame.pos[3] - top[3];
    float rotation[16];
    cdeclcall<void>(FUN_00ddcfe0, rotation, axisX, -self->angleF8());
    D3DXVec3TransformNormal(dir, dir, rotation);

    float angles[4];
    angles[0] = frame.angles[0];
    angles[1] = frame.angles[1];
    angles[2] = frame.angles[2];
    angles[3] = frame.angles[3];
    float up[4];
    up[0] = dir[0] * -1.0f;
    up[1] = dir[1] * -1.0f;
    up[2] = dir[2] * -1.0f;
    up[3] = dir[3] * -1.0f;
    normalizeOrUp(up);

    float side[4];
    side[0] = dir[0];
    side[1] = dir[1];
    side[2] = dir[2];
    side[3] = dir[3];
    cdeclcall<void>(FUN_00ddcfe0, rotation, axisX, -1.5707964f);
    D3DXVec3TransformNormal(side, side, rotation);
    cdeclcall<void>(FUN_00ddcfe0, rotation, up, self->angleF4());
    D3DXVec3TransformNormal(side, side, rotation);

    float eye[4];
    eye[0] = dir[0] + top[0];
    eye[1] = dir[1] + top[1];
    eye[2] = dir[2] + top[2];
    eye[3] = dir[3] + top[3];
    float look[4];
    look[0] = eye[0] + side[0];
    look[1] = eye[1] + side[1];
    look[2] = eye[2] + side[2];
    look[3] = eye[3] + side[3];
    float view[16];
    cdeclcall<void>(FUN_00db6410, view, eye, look, up);
    matrixAngles(view, angles);

    float pos[4];
    pos[0] = dir[0] + top[0];
    pos[1] = dir[1] + top[1];
    pos[2] = dir[2] + top[2];
    pos[3] = dir[3] + top[3];
    vcall<void>(player, 0x6C, pos);     // Behavior::vf6C (set position)
    vcall<void>(player, 0x88, angles);  // Behavior::vf88 (set rotation)
}

// 00BFFF20  ZangekiOnPartsStatePl0010::qteSafeCheck  size=9928  [class]
// The zangeki-on-parts sequence, one phase per value of phase() (step() counts inside a phase):
// 0 spawn the Et000d effect, 1 approach, 4 slash, 6 rig camera (FUN_00bd1d40) until the target's
// effect object dies, 7/8/9/10/11 recovery motions, 12 end.  Afterwards the rig position and
// rotation (offsetPos / rot80) are re-derived from the context +0x534 object, or restored.
void ZangekiOnPartsStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiOnPartsStatePl0010_p2;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));          /* StateMachineContext+0xC: owner */
    unsigned int *handle404 = &fld<unsigned int>(ctx, 0x404);  /* StateMachineContextPl0010+0x404: target handle */
    unsigned int *handle534 = &fld<unsigned int>(ctx, 0x534);  /* +0x534: effect object handle */
    float *returnPos = &fld<float>(ctx, 0x490);                /* +0x490: float[4] position to return to (0 = none) */
    float *playerPos = &fld<float>(player, 0x40);              /* cObj+0x40: float[4] position */
    FUN_0093dc50((int)DAT_01b36a60);

    switch (phase()) {
    case 0: {
        phase() = 1;
        step() = 0;
        thiscall<void>(FUN_00bc6e00, player, (char *)this + 0xFC, vec40(), offsetPos());
        value15C() = 0.0f;
        unsigned int effectEntry = thiscall<unsigned int>(FUN_00a82090, DAT_01be9a98, "Et000d", 0x4000D, 0);
        if (effectEntry == 0) {
            break;
        }
        int effect = FUN_00a7c8a0(effectEntry);
        if (effect == 0) {
            break;
        }
        thiscall<void>(FUN_00a7c960, handle534, FUN_00a7c7f0(effectEntry));
        float *playerRot = vcall<float *>(player, 0x84);  // Behavior::vf84
        float yawOnly[4];
        yawOnly[0] = 0.0f;
        yawOnly[2] = 0.0f;
        yawOnly[1] = playerRot[1];
        vcall<void>((void *)effect, 0x7C, playerPos, yawOnly);
        int effectId;
        switch (partsKind()) {
        case 1:    effectId = 0x25; break;
        case 2:    effectId = 0x26; break;
        case 3:    effectId = 0x27; break;
        case 4:    effectId = 0x28; break;
        case 5:    effectId = 0x29; break;
        case 6:    effectId = 0x2A; break;
        case 7:    effectId = 0x2B; break;
        case 8:    effectId = 0x2C; break;
        case 9:    effectId = 0x2D; break;
        case 10:   effectId = 0x2E; break;
        case 0xB:  effectId = 0x2F; break;
        case 0xC:  effectId = 0x30; break;
        case 0xD:  effectId = 0x31; break;
        case 0xE:  effectId = 0x32; break;
        case 0xF:  effectId = 0x33; break;
        case 0x10: effectId = 0x34; break;
        default:   effectId = 0; break;
        }
        if (effectId != 0) {
            thiscall<void>(FUN_00a8caf0, (void *)effect, effectId, 0, 0, 0);
            effectPartsNo() = -1;
        }
        int target = objectOf(handle404);
        if (target != 0) {
            int parts = FUN_00a12210(target, effectPartsNo());
            void *targetRot = vcall<void *>((void *)target, 0x84);
            vcall<void>((void *)effect, 0x7C, (float *)(parts + 0x40), targetRot);
        }
        object1D0() = (int *)effect;
        break;
    }

    case 1:
        switch (step()) {
        case 0: {
            int partner = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
            if (partner != 0) {
                thiscall<void>(FUN_00aa4520, player, 0xDC, partner, 0, 0.2f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            else {
                int motionId = 0x52E;
                if (vcall<int>(player, 0x320, 0.016666668f) == 0) {  // BehaviorAppBase::vf320
                    motionId = 0x52F;
                }
                thiscall<void>(FUN_00aa4080, player, motionId, 0, 0.2f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 20.0f);
            thiscall<void>(FUN_00db3e80, DAT_01bea750, 20.0f, 1, DAT_01bea1d0);
            float *playerRot = vcall<float *>(player, 0x84);
            rot1A0()[0] = playerRot[0];
            rot1A0()[1] = playerRot[1];
            rot1A0()[2] = playerRot[2];
            rot1A0()[3] = playerRot[3];
            rot1B0()[0] = rot1A0()[0];
            rot1B0()[1] = rot1A0()[1];
            rot1B0()[2] = rot1A0()[2];
            rot1B0()[3] = rot1A0()[3];
            fld<int>(player, 0x26D4) = 0;  /* Pl0000+0x26D4: ? */
            step()++;
        }
            // fall through
        case 1: {
            unsigned int unit = FUN_00a92f90((int)player);
            FUN_00e26e90(unit);
            FUN_00e22f10(unit + 0x338, 0);
            if (FUN_00a94ce0((int)player, 0)) {
                phase() = 4;
                step() = 0;
                FUN_008e3c10(controllerOf(player));
                FUN_008e5c50(controllerOf(player), 0x1F);
                fld<int>(ctx, 0x4A0) = 1;  /* StateMachineContextPl0010+0x4A0: ? */
            }
            else if (FUN_00a94e10((int)player, 0, 0.0f, 30.0f) == 0) {
                vcall<void>(player, 0x88, rot1B0());
            }
            else {
                float rot[4];
                rot[0] = rot1A0()[0];
                rot[1] = rot1A0()[1];
                rot[2] = rot1A0()[2];
                rot[3] = rot1A0()[3];
                float playerX = playerPos[0];
                float playerZ = playerPos[2];
                float targetX = offsetPos()[0];
                float targetZ = offsetPos()[2];
                int target = objectOf(handle404);
                if (target != 0) {
                    int parts = FUN_00a12210(target, fld<int>(ctx, 0x408));  /* +0x408: target parts number */
                    if (parts != 0) {
                        targetX = fld<float>((void *)parts, 0x40);
                        targetZ = fld<float>((void *)parts, 0x48);
                    }
                }
                if (partsKind() == 0xE || partsKind() == 0xD) {
                    int targetObj = objectOf(handle404);
                    if (targetObj != 0) {
                        targetX = fld<float>((void *)targetObj, 0x40);
                        targetZ = fld<float>((void *)targetObj, 0x48);
                    }
                }
                float yaw = cdeclcall<float>(FUN_00ddba30, (float)atan2(targetX - playerX, targetZ - playerZ));
                float yawRot[4];
                yawRot[0] = 0.0f;
                yawRot[2] = 0.0f;
                yawRot[1] = yaw;
                int frameNo = thiscall<int>(FUN_00a959f0, player, 0);
                cdeclcall<void>(kRotateByAxisAngles, rot, rot, yawRot, (float)frameNo * 0.033333335f, 5);
                vcall<void>(player, 0x88, rot);
                rot1B0()[0] = rot[0];
                rot1B0()[1] = rot[1];
                rot1B0()[2] = rot[2];
                rot1B0()[3] = rot[3];
            }
            break;
        }
        }
        fld<float>(player, 0x341C) = blendTime();  /* Pl0000::slowTimer341C */
        {
            int effect = objectOf(handle534);
            if (effect != 0) {
                int target = objectOf(handle404);
                if (target != 0) {
                    int parts = FUN_00a12210(target, effectPartsNo());
                    void *targetRot = vcall<void *>((void *)target, 0x84);
                    vcall<void>((void *)effect, 0x7C, (float *)(parts + 0x40), targetRot);
                }
            }
        }
        if (partsKind() == 0xC || partsKind() == 0xD || partsKind() == 0xE) {
            int target = objectOf(handle404);
            if (target != 0) {
                placeEffectAtStartPos(this, ctx, target, 0);
            }
        }
        break;

    default:
        break;

    case 4: {
        switch (step()) {
        case 0: {
            int partnerA = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
            int partnerB = FUN_00a7f600((int)DAT_01be9a98, 0x20080);
            int kind = partsKind();
            if ((kind == 0xF || kind == 0x10) && partnerA != 0) {
                thiscall<void>(FUN_00aa4520, player, 0xDD, partnerA, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            else if ((kind == 0xE || kind == 0xD) && partnerB != 0) {
                thiscall<void>(FUN_00aa4520, player, 0x100, partnerB, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            else {
                thiscall<void>(FUN_00aa4080, player, 0x52C, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            fld<int>(player, 0x3E20) = 1;  /* Pl0000+0x3E20: ? */
            vcall<void>(player, 0x6C, offsetPos());
            float yawOnly[4];
            yawOnly[0] = 0.0f;
            yawOnly[1] = rot80()[1];
            yawOnly[2] = 0.0f;
            vcall<void>(player, 0x88, yawOnly);
            step() += 1;
        }
            // fall through
        case 1: {
            unsigned int unit = FUN_00a92f90((int)player);
            FUN_00e26e90(unit);
            FUN_00e22f10(unit + 0x338, 0);
            if (FUN_00a94ce0((int)player, 0)) {
                phase() = 6;
                step() = 0;
                thiscall<void>(FUN_00da8810, DAT_01bea1d0, 60.0f);
                thiscall<void>(FUN_00db3e80, DAT_01bea750, 60.0f, 1, DAT_01bea1d0);
            }
            if (FUN_00a8c760((int)player, 0x20)) {
                thiscall<void>(FUN_00b85350, player, 250.0f, fld<float>(player, 0x4068), fld<float>(player, 0x406C),
                               0, 0, 0.1f);  /* Pl0000+0x4068 / +0x406C: ? */
                FUN_00bbc2a0(context);
                float timer = fld<float>(player, 0x341C);
                blendTime() = timer;
                DAT_01d61ab0 = timer;
                FUN_00bd9360(context);
            }
            break;
        }
        }
        fld<float>(player, 0x341C) = blendTime();
        int effect = objectOf(handle534);
        if (effect == 0) {
            break;
        }
        int target = objectOf(handle404);
        if (target != 0) {
            int parts = FUN_00a12210(target, effectPartsNo());
            void *targetRot = vcall<void *>((void *)target, 0x84);
            vcall<void>((void *)effect, 0x7C, (float *)(parts + 0x40), targetRot);
        }
        if (partsKind() == 0xC || partsKind() == 0xD || partsKind() == 0xE) {
            int target2 = objectOf(handle404);
            if (target2 != 0) {
                placeEffectAtStartPos(this, ctx, target2, effect);
            }
        }
        vcall<void>(player, 0x6C, offsetPos());
        vcall<void>(player, 0x88, rot80());
        break;
    }

    case 6:
        if (step() == 0) {
            FUN_008e3c10(controllerOf(player));
            FUN_008e5c50(controllerOf(player), 0x1F);
            FUN_008e6c60(controllerOf(player), 0);
            void *listener = (void *)context[1];  /* StateMachineContext+0x4: ? (vftable slot 0 answers message 0x3D) */
            int answer = vcall<int>(listener, 0x0, 0x3D, context);
            thiscall<void>(FUN_00d82bf0, this, answer);
            if (fld<int>(ctx, 0x480) != 0) {  /* +0x480: keep the distance */
                float dx = offsetPos()[0] - anchorPos()[0];
                float dy = offsetPos()[1] - anchorPos()[1];
                float dz = offsetPos()[2] - anchorPos()[2];
                distance() = (float)sqrt(dx * dx + dy * dy + dz * dz);
            }
            if (FUN_00a81330(handle534) != 0) {
                thiscall<void>(FUN_00da8810, DAT_01bea1d0, 60.0f);
                FUN_00dc1270((int)DAT_01bea1d0, 60.0f, 0);
                fld<int>(player, 0x40C8) = 0xF;  /* Pl0000+0x40C8: ? */
                DAT_01bea9a0 = 1;
            }
            int effect = objectOf(handle534);
            if (effect != 0) {
                FUN_00a8cb60(effect, 2);
            }
            fld<int>(player, 0x40C8) = 0xF;
            DAT_01d61a88 = 0;
            int kind = partsKind();
            if (kind == 0xE || kind == 0xD) {
                angleF8() = -0.2617994f;  // -15 degrees
            }
            if (kind == 0xC) {
                angleF8() = -0.5235988f;  // -30 degrees
                angleF4() = -0.34906584f; // -20 degrees
            }
            step()++;
        }
        object1D0() = 0;
        {
            int effect = objectOf(handle534);
            if (effect != 0) {
                object1D0() = (int *)effect;
            }
        }
        if (object1D0() != 0 && fld<int>(object1D0(), 0x87C) == 0) {  /* BehaviorAppBase::field87C */
            cdeclcall<void>(FUN_00bd7600, context, this);
            cdeclcall<void>(FUN_00bf24f0, context, 1.0f);
            float limit;
            if (partsKind() == 0xC) {
                limit = 50.0f;
            }
            else {
                limit = 30.0f;
            }
            FUN_00bd1d40(this, context, 1, 1, limit, limit);
            pos1C0()[0] = playerPos[0];
            pos1C0()[1] = playerPos[1];
            pos1C0()[2] = playerPos[2];
            pos1C0()[3] = playerPos[3];
            int effect2 = objectOf(&fld<unsigned int>(ctx, 0x4BC));  /* +0x4BC: handle */
            if (effect2 != 0) {
                unsigned int owner = FUN_00860b50((int *)effect2);
                if (owner != 0) {
                    thiscall<void>(FUN_005ca330, (void *)owner, 2.0f);
                }
            }
            float dx = anchorPos()[0] - playerPos[0];
            float dy = anchorPos()[1] - playerPos[1];
            float dz = anchorPos()[2] - playerPos[2];
            double range = sqrt(dx * dx + dy * dy + dz * dz) * 1.5f;
            thiscall<void>(FUN_00b83ea0, ctx, (float)(range + range));
            if (partsKind() == 0xC) {
                thiscall<void>(FUN_00b83ea0, ctx, 15.0f);
            }
            FUN_00b8bb40((int)player, 0.0f);
            thiscall<void>(FUN_00b8bbb0, player, 0.0f);
            FUN_00bbc310(context);
            cdeclcall<void>(FUN_00bd7600, context, this);
            FUN_00c5bbb0((int)DAT_01d616d0, 0x2000);
        }
        else {
            if (returnPos[0] == 0.0f && returnPos[1] == 0.0f && returnPos[2] == 0.0f) {
                fld<int>(player, 0x3E18) = 1;  /* Pl0000+0x3E18: ? */
                phase() = 0xC;
                FUN_00b92ea0(context);
                vcall<void>(player, 0x6C, playerPos);
                float yawOnly[4];
                yawOnly[0] = 0.0f;
                yawOnly[1] = vec50()[1];
                yawOnly[2] = 0.0f;
                vcall<void>(player, 0x88, yawOnly);
                int target = objectOf(handle404);
                if (target != 0) {
                    int parts = FUN_00a12210(target, fld<int>(ctx, 0x408));
                    if (parts != 0) {
                        float playerX = playerPos[0];
                        float playerZ = playerPos[2];
                        float frontBuf[4];
                        float *front = FUN_00a925a0((int)player, frontBuf);
                        float aheadX = front[0] * 5.0f + playerX;
                        float aheadZ = front[2] * 5.0f + playerZ;
                        vcall<void>(player, 0x6C, playerPos);
                        float face[4];
                        face[0] = 0.0f;
                        face[1] = (float)atan2(aheadX - playerX, aheadZ - playerZ);
                        face[2] = 0.0f;
                        vcall<void>(player, 0x88, face);
                    }
                    FUN_009f8b40(target);
                }
                float backBuf[4];
                float *back = FUN_00a926e0((int)player, backBuf);
                float from[4];
                from[0] = playerPos[0] + back[0] * 1.5f;
                from[1] = back[1] * 1.5f + playerPos[1];
                from[2] = playerPos[2] + back[2] * 1.5f;
                from[3] = back[3] * 1.5f + playerPos[3];
                float to[4];
                to[0] = vec40()[0];
                to[1] = vec40()[1];
                to[2] = vec40()[2];
                to[3] = vec40()[3];
                unsigned int filter = FUN_00410130(6, -1, 0, 0, 0);
                unsigned char forwardWork[0xD0];
                unsigned char returnWork[0xD0];
                thiscall<void>(FUN_00445d40, forwardWork, from, to, filter, 0, 0x60, 0, "partsZanEndForward", 0);
                thiscall<void>(FUN_00445d40, returnWork, to, from, filter, 0, 0x60, 0, "partsZanEndReturn", 0);
                float hit[4];
                float normal[4];
                if (rayCastSingleHit(hit, normal, forwardWork) != 0 || rayCastSingleHit(hit, normal, returnWork) != 0) {
                    float hx = hit[0] - vec40()[0];
                    float hy = hit[1] - vec40()[1];
                    float hz = hit[2] - vec40()[2];
                    if (sqrt(hx * hx + hy * hy + hz * hz) > 0.1f) {
                        if (partsKind() == 0xC) {
                            float face[4];
                            face[0] = 0.0f;
                            face[1] = (float)atan2(playerPos[0] - vec40()[0], playerPos[2] - vec40()[2]);
                            face[2] = 0.0f;
                            float pos[4];  // pos[3] never written
                            pos[0] = vec40()[0];
                            pos[1] = playerPos[1];
                            pos[2] = vec40()[2];
                            vcall<void>(player, 0x7C, pos, face);  // Pl0000::vf7C (position, rotation)
                        }
                        else {
                            float face[4];
                            face[0] = 0.0f;
                            face[1] = (float)atan2(playerPos[0] - vec40()[0], playerPos[2] - vec40()[2]);
                            face[2] = 0.0f;
                            vcall<void>(player, 0x7C, vec40(), face);
                        }
                    }
                }
            }
            else {
                phase() = 9;
            }
            step() = 0;
            fld<int>(ctx, 0x56C) = 1;  /* StateMachineContextPl0010+0x56C: ? */
            thiscall<void>(FUN_00e25500, (char *)player + 0x3BF0, 1.0f);  /* Pl0000+0x3BF0: embedded object */
            DAT_01d61a88 = 1;
            DAT_01bea9a0 = 0;
        }
        break;

    case 9:
        if (step() == 0) {
            thiscall<void>(FUN_00aa4080, player, 0x530, 0, 0.16666667f, 1.0f, 0x8000000, -1.0f, 1.0f);
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 15.0f);
            FUN_00dc1270((int)DAT_01bea1d0, 15.0f, 0);
            thiscall<void>(FUN_00db3e80, DAT_01bea750, 15.0f, 1, DAT_01bea1d0);
            DAT_01bea9a0 = 0;
            FUN_00b92ea0(context);
            vec210()[0] = playerPos[0];
            vec210()[1] = playerPos[1];
            vec210()[2] = playerPos[2];
            vec210()[3] = playerPos[3];
            int target = objectOf(handle404);
            if (target != 0 && fld<int>((void *)target, 0x4B0) == 0x2020A) {  /* cObj+0x4B0: modelObjId */
                FUN_00b92d70(context);
            }
            step()++;
        }
        else if (step() != 1) {
            break;
        }
        {
            unsigned int unit = FUN_00a92f90((int)player);
            FUN_00e26e90(unit);
            FUN_00e22f10(unit + 0x338, 0);
            if (FUN_00a94ce0((int)player, 0)) {
                phase() = 10;
                step() = 0;
                int parts = FUN_00a12210((int)player, 0x16);
                if (parts != 0) {
                    float hitPos[4];
                    hitPos[0] = fld<float>((void *)parts, 0x40);
                    hitPos[1] = fld<float>((void *)parts, 0x44);
                    hitPos[2] = fld<float>((void *)parts, 0x48);
                    hitPos[3] = fld<float>((void *)parts, 0x4C);
                    unsigned char request[0x150];  // object set up by FUN_004039a0 and passed to FUN_00a8c930
                    FUN_004039a0((int)request, 0x45, (int)player, 0);
                    FUN_0041cdb0((int)request, (undefined4 *)hitPos);
                    FUN_00a8c930((int)player, 0, (int)request);
                    cdeclcall<void>(kPlaySe, "core_se_hit_kick_mg", hitPos, 0, -1, 0);
                    if (partsKind() == 0xF || partsKind() == 0x10) {
                        unsigned char request2[0x150];
                        FUN_004039a0((int)request2, 0x14D, (int)player, 0);
                        FUN_0041cdb0((int)request2, (undefined4 *)hitPos);
                        FUN_00a8c930((int)player, 0, (int)request2);
                    }
                }
                fld<int>(player, 0x3E18) = 1;
                FUN_00b7aa80((int)player);
            }
            if (thiscall<int>(FUN_00a952e0, player, 0, 10.0f) != 0) {
                thiscall<void>(FUN_00b7ab80, player, 30.0f, 0.01f);
            }
            int frameNo = thiscall<int>(FUN_00a959f0, player, 0);
            float t = (float)frameNo * 0.04347826f;
            float frontBuf[4];
            float *front = FUN_00a925a0((int)player, frontBuf);
            float pos[4];
            pos[0] = t * front[0] + vec210()[0];
            pos[1] = front[1] * t + vec210()[1];
            pos[2] = front[2] * t + vec210()[2];
            pos[3] = front[3] * t + vec210()[3];
            vcall<void>(player, 0x6C, pos);
        }
        break;

    case 10:
        if (step() == 0) {
            int partner = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
            if ((partsKind() == 0xF || partsKind() == 0x10) && partner != 0) {
                thiscall<void>(FUN_00aa4520, player, 0xDE, partner, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
                if (partsKind() == 0x10) {
                    setCameraNo(player, 0, 1);
                }
            }
            else {
                thiscall<void>(FUN_00aa4080, player, 0x531, 0, 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
            }
            step()++;
        }
        else if (step() != 1) {
            break;
        }
        if (player != 0 && FUN_00a92f90((int)player) != 0) {
            thiscall<void>(FUN_00404b90, (void *)FUN_00a92f90((int)player), 0);
        }
        if (FUN_00a94ce0((int)player, 0)) {
            phase() = 8;
            step() = 0;
            DAT_01bea9a0 = 0;
            FUN_00b7aa80((int)player);
        }
        break;

    case 0xB: {
        if (step() == 0) {
            thiscall<void>(FUN_00aa4080, player, 0x3C1, 0, 0.16666667f, 1.0f, 0x8000000, 0.06666667f, 1.0f);
            if (FUN_00a81330(handle534) != 0) {
                FUN_00a7c970((undefined4 *)handle534, 0);
                thiscall<void>(FUN_00da8810, DAT_01bea1d0, 10.0f);
                FUN_00dc1270((int)DAT_01bea1d0, 10.0f, 0);
            }
            DAT_01bea9a0 = 0;
            FUN_00b92ea0(context);
            FUN_00b7aa80((int)player);
            step()++;
        }
        else if (step() != 1) {
            break;
        }
        int effect = objectOf(handle534);
        if (effect != 0 && FUN_00a92f90(effect) != 0) {
            thiscall<void>(FUN_00404b90, (void *)FUN_00a92f90(effect), 0);
        }
        if (FUN_00a94ce0((int)player, 0)) {
            phase() = 7;
            step() = 0;
            DAT_01bea9a0 = 0;
        }
        break;
    }

    case 7: {
        if (step() == 0) {
            thiscall<void>(FUN_00aa4080, player, 0x75, 0, 0.16666667f, 1.0f, 0x8000000, -1.0f, 1.0f);
            FUN_008e6d00(controllerOf(player));
            FUN_008e4580(controllerOf(player), (undefined4 *)playerPos, 1);
            if (fld<int>((void *)controllerOf(player), 0x104) != 0) {  /* controller+0x104: ? */
                fld<int>((void *)controllerOf(player), 0x104) = 0;
            }
            FUN_008e6c60(controllerOf(player), 1);
            FUN_008e5c50(controllerOf(player), 6);
            fld<float>(player, 0x894) = -1.0f;  /* BehaviorAppBase+0x894: ? */
            step()++;
            timer198() = 0.0f;
        }
        else if (step() != 1) {
            break;
        }
        int effect = objectOf(handle534);
        if (effect != 0 && FUN_00a92f90(effect) != 0) {
            thiscall<void>(FUN_00404b90, (void *)FUN_00a92f90(effect), 0);
        }
        float10 elapsed = FUN_00a93060((int)player) + timer198();  // compared unrounded
        timer198() = (float)elapsed;
        if (elapsed > 0.5f) {
            phase() = 8;
            step() = 0;
        }
        break;
    }

    case 8: {
        if (step() == 0) {
            int partner = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
            if (partner != 0) {
                thiscall<void>(FUN_00aa4520, player, 0xDF, partner, 0, 0.0f, 1.0f, 0x8000000, 0.06666667f, 1.0f);
                float *playerRot = vcall<float *>(player, 0x84);
                float turned[4];
                turned[0] = playerRot[0] + 3.1415927f;
                turned[1] = playerRot[1] + 3.1415927f;
                turned[2] = playerRot[2] + 3.1415927f;
                turned[3] = 3.1415927f + playerRot[3];
                vcall<void>(player, 0x7C, returnPos, turned);
                if (partsKind() == 0x10) {
                    setCameraNo(player, 0, 1);
                }
            }
            else {
                thiscall<void>(FUN_00aa4080, player, 0x52D, 0, 0.0f, 1.0f, 0x8000000, 0.06666667f, 1.0f);
                vcall<void>(player, 0x6C, returnPos);
                int target = objectOf(handle404);
                if (target != 0) {
                    float face[4];
                    face[0] = 0.0f;
                    face[1] = (float)atan2(fld<float>((void *)target, 0x40) - returnPos[0],
                                           fld<float>((void *)target, 0x48) - returnPos[2]);
                    face[2] = 0.0f;
                    vcall<void>(player, 0x88, face);
                }
                FUN_008e6d00(controllerOf(player));
                FUN_008e4580(controllerOf(player), (undefined4 *)returnPos, 1);
                if (fld<int>((void *)controllerOf(player), 0x104) != 0) {
                    fld<int>((void *)controllerOf(player), 0x104) = 0;
                }
                FUN_008e6c60(controllerOf(player), 1);
                FUN_008e5c50(controllerOf(player), 6);
            }
            FUN_00dc1270((int)DAT_01bea1d0, 0.0f, 0);
            DAT_01bea940 = 0.0f;
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
            thiscall<void>(FUN_00db3e80, DAT_01bea750, 0.0f, 0, DAT_01bea1d0);
            fld<int>(player, 0x3E18) = 1;
            fld<int>(player, 0x3E1C) = 1;  /* Pl0000+0x3E1C: ? */
            step() += 1;
        }
        else if (step() != 1) {
            break;
        }
        unsigned int unit = FUN_00a92f90((int)player);
        FUN_00e26e90(unit);
        FUN_00e22f10(unit + 0x338, 0);
        FUN_00dc1270((int)DAT_01bea1d0, 0.0f, 0);
        DAT_01bea940 = 0.0f;
        thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
        thiscall<void>(FUN_00db3e80, DAT_01bea750, 0.0f, 0, DAT_01bea1d0);
        int partner = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
        if (partner != 0) {
            int partsNo = partsKind() != 0x10 ? 0x433 : 0x633;
            int partnerObj = FUN_00a7c8a0(partner);
            int parts = FUN_00a12210(partnerObj, partsNo);
            float matrix[16];
            cdeclcall<void *>(kMemcpy, (void *)matrix, (const void *)(parts + 0x10), 0x40);
            float face[4];
            face[0] = 0.0f;
            face[1] = (float)atan2(matrix[12] - returnPos[0], matrix[14] - returnPos[2]);
            face[2] = 0.0f;
            vcall<void>(player, 0x7C, returnPos, face);
        }
        else {
            int target = objectOf(handle404);
            if (target != 0) {
                float face[4];
                face[0] = 0.0f;
                face[1] = (float)atan2(fld<float>((void *)target, 0x40) - returnPos[0],
                                       fld<float>((void *)target, 0x48) - returnPos[2]);
                face[2] = 0.0f;
                vcall<void>(player, 0x88, face);
            }
        }
        if (FUN_00a94ce0((int)player, 0)) {
            phase() = 0xC;
            step() = 0;
            if (FUN_00a81330(handle534) != 0) {
                FUN_00a7c970((undefined4 *)handle534, 0);
            }
        }
        break;
    }

    case 0xC: {
        FUN_00b7aa80((int)player);
        FUN_008e6d00(controllerOf(player));
        FUN_008e4580(controllerOf(player), (undefined4 *)returnPos, 1);
        if (fld<int>((void *)controllerOf(player), 0x104) != 0) {
            fld<int>((void *)controllerOf(player), 0x104) = 0;
        }
        FUN_008e6c60(controllerOf(player), 1);
        FUN_008e5c50(controllerOf(player), 6);
        float *lookPos = returnPos;
        if (returnPos[0] == 0.0f && returnPos[1] == 0.0f && returnPos[2] == 0.0f) {
            lookPos = playerPos;
        }
        FUN_008e4580(controllerOf(player), (undefined4 *)lookPos, 1);
        if (partsKind() == 0xF) {
            vcall<void>(player, 0x6C, returnPos);
        }
        else if (partsKind() == 0x10) {
            setCameraNo(player, 0, 1);
            vcall<void>(player, 0x6C, returnPos);
        }
        else {
            FUN_00da8ea0((int)DAT_01bea1d0);
        }
        float cameraValue = 25.0f;
        if (partsKind() == 0xC) {
            cameraValue = 5.0f;
        }
        FUN_00dc1270((int)DAT_01bea1d0, cameraValue, 0);
        DAT_01bea940 = cameraValue;
        thiscall<void>(FUN_00da8810, DAT_01bea1d0, cameraValue);
        thiscall<void>(FUN_00db3e80, DAT_01bea750, cameraValue, 1, DAT_01bea1d0);
        if (returnPos[0] == 0.0f && returnPos[1] == 0.0f && returnPos[2] == 0.0f) {
            fld<int>(ctx, 0x3EC) = 0xB;  /* StateMachineContextPl0010+0x3EC: ? */
        }
        else {
            fld<int>(ctx, 0x3EC) = 0;
        }
        FUN_00d82510((int)this, 0xB, 0x64);
        fld<int>(player, 0x3E1C) = 1;
        break;
    }
    }

    // Rig position / rotation from the parts 0 of the context +0x534 object (saved), or the saved copy.
    int effect = objectOf(handle534);
    if (effect != 0) {
        int parts = FUN_00a12210(effect, 0);
        PartsFrame frame;
        readPartsFrame(parts, frame);
        float rotation[16];
        float unit[4];
        float axisY[4];
        float axisZ[4];  // unused
        float axisX[4];
        unit[0] = 0.0f;
        unit[1] = 1.0f;
        unit[2] = 0.0f;
        FUN_00ddc1d0((undefined4 *)rotation, frame.angles, 5);
        D3DXVec3TransformNormal(axisY, unit, rotation);
        unit[0] = 0.0f;
        unit[1] = 0.0f;
        unit[2] = 1.0f;
        FUN_00ddc1d0((undefined4 *)rotation, frame.angles, 5);
        D3DXVec3TransformNormal(axisZ, unit, rotation);
        unit[0] = 1.0f;
        unit[1] = 0.0f;
        unit[2] = 0.0f;
        FUN_00ddc1d0((undefined4 *)rotation, frame.angles, 5);
        D3DXVec3TransformNormal(axisX, unit, rotation);

        float top[4];
        top[0] = frame.pos[0] + axisY[0] * 1.5f;
        top[1] = frame.pos[1] + axisY[1] * 1.5f;
        top[2] = frame.pos[2] + axisY[2] * 1.5f;
        top[3] = frame.pos[3] + axisY[3] * 1.5f;
        float dir[4];
        dir[0] = frame.pos[0] - top[0];
        dir[1] = frame.pos[1] - top[1];
        dir[2] = frame.pos[2] - top[2];
        dir[3] = frame.pos[3] - top[3];
        cdeclcall<void>(FUN_00ddcfe0, rotation, axisX, 0.0f);
        D3DXVec3TransformNormal(dir, dir, rotation);

        float angles[4];
        angles[3] = frame.angles[3];
        float up[4];
        up[0] = dir[0] * -1.0f;
        up[1] = dir[1] * -1.0f;
        up[2] = dir[2] * -1.0f;
        up[3] = dir[3] * -1.0f;
        normalizeOrUp(up);

        float side[4];
        side[0] = dir[0];
        side[1] = dir[1];
        side[2] = dir[2];
        side[3] = dir[3];
        cdeclcall<void>(FUN_00ddcfe0, rotation, axisX, -1.5707964f);
        D3DXVec3TransformNormal(side, side, rotation);
        cdeclcall<void>(FUN_00ddcfe0, rotation, up, 0.0f);
        D3DXVec3TransformNormal(side, side, rotation);

        float eye[4];
        eye[0] = dir[0] + top[0];
        eye[1] = dir[1] + top[1];
        eye[2] = dir[2] + top[2];
        eye[3] = dir[3] + top[3];
        float look[4];
        look[0] = eye[0] + side[0];
        look[1] = eye[1] + side[1];
        look[2] = eye[2] + side[2];
        look[3] = eye[3] + side[3];
        float view[16];
        cdeclcall<void>(FUN_00db6410, view, eye, look, up);
        matrixAngles(view, angles);

        offsetPos()[0] = dir[0] + top[0];
        offsetPos()[1] = dir[1] + top[1];
        offsetPos()[2] = dir[2] + top[2];
        offsetPos()[3] = dir[3] + top[3];
        rot80()[0] = angles[0];
        rot80()[1] = angles[1];
        rot80()[2] = angles[2];
        rot80()[3] = angles[3];
        savedOffsetPos()[0] = offsetPos()[0];
        savedOffsetPos()[1] = offsetPos()[1];
        savedOffsetPos()[2] = offsetPos()[2];
        savedOffsetPos()[3] = offsetPos()[3];
        savedRot()[0] = rot80()[0];
        savedRot()[1] = rot80()[1];
        savedRot()[2] = rot80()[2];
        savedRot()[3] = rot80()[3];
        StateMachineNode::qteSafeCheck(context);
        return;
    }
    offsetPos()[0] = savedOffsetPos()[0];
    offsetPos()[1] = savedOffsetPos()[1];
    offsetPos()[2] = savedOffsetPos()[2];
    offsetPos()[3] = savedOffsetPos()[3];
    rot80()[0] = savedRot()[0];
    rot80()[1] = savedRot()[1];
    rot80()[2] = savedRot()[2];
    rot80()[3] = savedRot()[3];
    StateMachineNode::qteSafeCheck(context);
}
