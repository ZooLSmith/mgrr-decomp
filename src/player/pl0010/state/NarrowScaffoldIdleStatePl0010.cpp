// src/player/pl0010/state/NarrowScaffoldIdleStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "NarrowScaffoldIdleStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fpatan inline)
extern "C" double __cdecl atan2(double y, double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e40[];  // NarrowScaffoldIdleStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// global objects passed in ECX
extern char DAT_01bea1d0[];           // camera / view (ECX of FUN_00da0640)
// debug-print strings (Shift-JIS)
extern const char DAT_0163d0ac[];     // "[Hw::VecNormalize] a zero vector cannot be normalized."
// plain globals
extern unsigned int DAT_01b7b910;     // ? pad buttons (0x4000 selects the wider probe / motion 0xD5)
extern float        DAT_01b7b920;     // ? left stick X
extern float        DAT_01b7b924;     // ? left stick Y (used as Z)

namespace NarrowScaffoldIdleStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Type-record virtual (no arguments besides `this`) at byte offset `slot` of obj's vftable.
typedef undefined *(__thiscall *TypeRecordFn)(const void *self);
inline undefined *typeRecord(const void *obj, int slot) { return (*(TypeRecordFn **)obj)[slot / 4](obj); }

// Checked downcasts (0 when the object is null or of another type).
inline void *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)typeRecord(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (void *)obj : 0;
}
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)typeRecord(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player that owns the state machine: context (StateMachineContextPl0010) +0xC, checked
// against Pl0000.  The context is not null-checked before the load (as in the original).
inline Pl0000 *ownerPlayer(const void *context)
{
    return asPl0000(at<void *>(asContext(context), 0xC));  /* StateMachineContext+0xC: owner */
}

// Callees whose generated prototype does not match the machine-code call site.
typedef void (*VecNormalizeWarningFn)(const char *message);                         // FUN_00dd5650 (cdecl)
typedef void (*DebugLineFn)(float *from, float *to, unsigned int color, int flags); // FUN_00f95fa0 (cdecl, debug draw)
// 0090B490 RayCastSingleHitWork::RayCastSingleHitWork_4: __stdcall, ret 0x20 (the caller loads
// ECX = 0x01B35DF8, which the callee never reads).  Writes the hit position to hitPos[0..2].
typedef int (__stdcall *RayCastSingleHitFn)(float *hitPos, int a, int *hitFlag, int c, float *from,
                                            float *to, unsigned int mask, const char *name);
inline RayCastSingleHitFn rayCastSingleHit() { return (RayCastSingleHitFn)0x0090B490; }

// One downward probe: from = (pos + up) + offset, to = from + down * 2, then a "narrow" ray cast.
inline int castProbe(Pl0000 *player, const float *up, const float *offset, const float *down,
                     float *from, float *to, unsigned int color, unsigned int mask, int *hitFlag,
                     float *hitPos)
{
    float *pos = &at<float>(player, 0x40);  /* +0x40: position */
    from[0] = (pos[0] + up[0]) + offset[0];
    from[1] = (pos[1] + up[1]) + offset[1];
    from[2] = (pos[2] + up[2]) + offset[2];
    from[3] = (pos[3] + up[3]) + offset[3];
    to[0] = from[0] + down[0] * 2.0f;
    to[1] = from[1] + down[1] * 2.0f;
    to[2] = from[2] + down[2] * 2.0f;
    to[3] = from[3] + down[3] * 2.0f;
    ((DebugLineFn)FUN_00f95fa0)(from, to, color, 0);
    return rayCastSingleHit()(hitPos, 0, hitFlag, 0, from, to, mask, "narrow");
}

// After a probe hit: face along `offset` (yaw into +0x94), push +0x50 by offset * scale and take
// the hit height as +0x54.
inline void snapToHit(Pl0000 *player, float *offset, float scale, const float *hitPos)
{
    float angles[4];
    FUN_00b81be0((undefined4 *)angles, &at<float>(player, 0x40), offset,
                 (int)&at<float>(player, 0xF0));  /* +0x40 position, +0xF0 matrix */
    at<float>(player, 0x94) = angles[1];          /* +0x94: yaw */
    float *vec50 = &at<float>(player, 0x50);      /* +0x50: float[4] */
    vec50[0] = vec50[0] + offset[0] * scale;
    vec50[1] = offset[1] * scale + vec50[1];
    vec50[2] = offset[2] * scale + vec50[2];
    vec50[3] = offset[3] * scale + vec50[3];
    vec50[1] = hitPos[1];
}

}  // namespace NarrowScaffoldIdleStatePl0010_p1

// 00B81BE0  FUN_00b81be0  size=195  [callgraph]
// Yaw of `dir` placed at `pos` in the space of `matrix`: out = (0, atan2(dx, dz), 0) where d is
// the difference of the two transformed points (pos + dir) and pos.  Returns out in EAX and pops
// its four arguments (ret 0x10).
void FUN_00b81be0(undefined4 *out, float *pos, float *dir, int matrix)
{
    float *m = (float *)matrix;
    float *angles = (float *)out;
    float tip[4];
    float base[4];

    tip[0] = pos[0] + dir[0];
    tip[1] = dir[1] + pos[1];
    tip[2] = dir[2] + pos[2];
    tip[3] = dir[3] + pos[3];
    base[0] = pos[0];
    base[1] = pos[1];
    base[2] = pos[2];
    base[3] = pos[3];
    D3DXVec3TransformNormal(tip, tip, m);
    tip[0] = m[12] + tip[0];
    tip[1] = m[13] + tip[1];
    tip[2] = tip[2] + m[14];
    D3DXVec3TransformNormal(base, base, m);
    angles[0] = 0.0f;
    angles[1] = (float)atan2((double)tip[0] - ((double)m[12] + (double)base[0]),
                             (double)tip[2] - ((double)base[2] + (double)m[14]));
    angles[2] = 0.0f;
}

// 00B81CB0  NarrowScaffoldIdleStatePl0010::vf08  size=19  [class]
bool NarrowScaffoldIdleStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B81CD0  NarrowScaffoldIdleStatePl0010::vf14  size=5  [class]
void NarrowScaffoldIdleStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);  // jmp 0x00D822A0
}

// 00B81CE0  NarrowScaffoldIdleStatePl0010::vf18  size=5  [class]
undefined4 NarrowScaffoldIdleStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);  // jmp 0x00D822E0
}

// 00B81CF0  NarrowScaffoldIdleStatePl0010::vf24  size=19  [class]
bool NarrowScaffoldIdleStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B81D30  NarrowScaffoldIdleStatePl0010::vf00  size=6  [class]
undefined *NarrowScaffoldIdleStatePl0010::vf00()
{
    return DAT_01be9e40;
}

// 00B910E0  NarrowScaffoldIdleStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *NarrowScaffoldIdleStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAD050  NarrowScaffoldIdleStatePl0010::SafeCheck  size=170  [class]
void NarrowScaffoldIdleStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace NarrowScaffoldIdleStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        Pl0000 *player = ownerPlayer(context);
        FUN_00aa3f60((int)player, 0xD6);
        FUN_00a95fb0((int)player, 0);  // 0.0f
        char *controller = at<char *>(player, 0x764);  /* Pl0000+0x764: motion controller ? */
        if (at<int>(controller, 0x104) != 1) {
            at<int>(controller, 0x104) = 1;
            at<float>(at<char *>(controller, 0xD0), 4) = 0.0f;
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00BAD100  NarrowScaffoldIdleStatePl0010::qteSafeCheck  size=4521  [class]
// Keeps the player on the scaffold: casts downward "narrow" rays at the four sides that face the
// stick direction (first at the wide offset, then at 0.05) and snaps onto the first surface hit.
void NarrowScaffoldIdleStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace NarrowScaffoldIdleStatePl0010_p1;
    float stick[4];
    float dir[4];
    float camRot[16];
    float axis[4];
    float from[4];
    float to[4];
    float hitPos[4];
    float sideP[4], sideN[4], frontP[4], frontN[4], upP[4], upN[4];
    int hitFlag;
    int hitFlag2;
    bool hitAny;
    float width;
    unsigned int mask;

    Pl0000 *player = ownerPlayer(context);
    FUN_008e0b70(at<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(at<int>(player, 0x764), 0);
    float speed = at<float>(at<char *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: ? (+0x14C) */
    if (!(speed * speed < at<float>(player, 0xD28))) {           /* Pl0000+0xD28: ? */
        FUN_00aa9280((int)player, 0xD6);
        StateMachineNode::qteSafeCheck(context);
        return;
    }

    // Stick direction in world space (camera rotation), normalised.
    FUN_00b8ae90((int)player, (undefined4)dir);
    FUN_00da0640((int)DAT_01bea1d0, (int)camRot);
    stick[0] = DAT_01b7b920;
    stick[1] = 0.0f;
    stick[2] = DAT_01b7b924;
    D3DXVec3TransformNormal(dir, stick, camRot);
    if (dir[0] != 0.0f || dir[1] != 0.0f || dir[2] != 0.0f) {
        float lengthSq = dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2];
        // (the self-comparisons reject NaN components)
        if (0.0f < lengthSq && dir[0] == dir[0] && dir[1] == dir[1] && dir[2] == dir[2]) {
            FUN_00ddf460(dir, dir);
        }
        else {
            ((VecNormalizeWarningFn)FUN_00dd5650)(DAT_0163d0ac);
            dir[0] = 0.0f;
            dir[1] = 1.0f;
            dir[2] = 0.0f;
        }
    }

    // First pass: probes at +-width sideways / forwards.
    if ((DAT_01b7b910 & 0x4000) == 0) {
        width = 0.15f;
    }
    else {
        width = 0.25f;
    }
    FUN_00a8b8a0((int)player, sideP, width);
    FUN_00a8b8a0((int)player, sideN, -width);
    FUN_00a8b9b0((int)player, frontP, width);
    FUN_00a8b9b0((int)player, frontN, -width);
    FUN_00a8bac0((int)player, upP, 0.2f);
    FUN_00a8bac0((int)player, upN, -0.2f);
    mask = (unsigned int)*(int *)FUN_009f8b60((int)player) << 0x10 | 0x1A;
    hitAny = false;
    hitFlag = 0;

    float *a = FUN_00a925a0((int)player, axis);
    if (0.5f < a[1] * dir[1] + a[0] * dir[0] + a[2] * dir[2]) {
        if (castProbe(player, upP, sideP, upN, from, to, 0xFFFFFFFF, mask, &hitFlag, hitPos) != 0) {
            hitAny = true;
            snapToHit(player, sideP, width, hitPos);
        }
    }
    a = FUN_00a925a0((int)player, axis);
    if (0.5f < a[0] * -1.0f * dir[0] + a[1] * -1.0f * dir[1] + a[2] * -1.0f * dir[2]) {
        if (castProbe(player, upP, sideN, upN, from, to, 0xFFFF0000, mask, &hitFlag, hitPos) != 0) {
            hitAny = true;
            snapToHit(player, sideN, width, hitPos);
        }
    }
    a = FUN_00a92640((int)player, axis);
    if (0.5f < a[1] * dir[1] + dir[0] * a[0] + a[2] * dir[2]) {
        if (castProbe(player, upP, frontP, upN, from, to, 0xFF00FF00, mask, &hitFlag, hitPos) != 0) {
            hitAny = true;
            snapToHit(player, frontP, width, hitPos);
        }
    }
    a = FUN_00a92640((int)player, axis);
    if (0.5f < a[0] * -1.0f * dir[0] + a[1] * -1.0f * dir[1] + a[2] * -1.0f * dir[2]) {
        if (castProbe(player, upP, frontN, upN, from, to, 0xFF0000FF, mask, &hitFlag, hitPos) != 0) {
            snapToHit(player, frontN, width, hitPos);
            goto finish;
        }
    }

    if (!hitAny) {
        // Second pass: probes at +-0.05 (their hit flag is not consulted afterwards).
        FUN_00a8b8a0((int)player, sideP, 0.05f);
        FUN_00a8b8a0((int)player, sideN, -0.05f);
        FUN_00a8b9b0((int)player, frontP, 0.05f);
        FUN_00a8b9b0((int)player, frontN, -0.05f);
        FUN_00a8bac0((int)player, upP, 0.2f);
        FUN_00a8bac0((int)player, upN, -0.2f);
        mask = (unsigned int)*(int *)FUN_009f8b60((int)player) << 0x10 | 0x1A;
        hitFlag2 = 0;

        a = FUN_00a925a0((int)player, axis);
        if (0.5f < a[1] * dir[1] + a[0] * dir[0] + a[2] * dir[2]) {
            if (castProbe(player, upP, sideP, upN, from, to, 0xFFFFFFFF, mask, &hitFlag2, hitPos) != 0) {
                hitAny = true;
                snapToHit(player, sideP, 0.05f, hitPos);
            }
        }
        a = FUN_00a925a0((int)player, axis);
        if (0.5f < a[0] * -1.0f * dir[0] + a[1] * -1.0f * dir[1] + a[2] * -1.0f * dir[2]) {
            if (castProbe(player, upP, sideN, upN, from, to, 0xFFFF0000, mask, &hitFlag2, hitPos) != 0) {
                hitAny = true;
                snapToHit(player, sideN, 0.05f, hitPos);
            }
        }
        a = FUN_00a92640((int)player, axis);
        if (0.5f < a[1] * dir[1] + dir[0] * a[0] + a[2] * dir[2]) {
            if (castProbe(player, upP, frontP, upN, from, to, 0xFF00FF00, mask, &hitFlag2, hitPos) != 0) {
                hitAny = true;
                snapToHit(player, frontP, 0.05f, hitPos);
            }
        }
        a = FUN_00a92640((int)player, axis);
        if (0.5f < a[0] * -1.0f * dir[0] + a[1] * -1.0f * dir[1] + a[2] * -1.0f * dir[2]) {
            if (castProbe(player, upP, frontN, upN, from, to, 0xFF0000FF, mask, &hitFlag2, hitPos) != 0) {
                snapToHit(player, frontN, 0.05f, hitPos);
                goto finish;
            }
        }
        if (!hitAny) {
            FUN_00aa9280((int)player, 0xD6);
            StateMachineNode::qteSafeCheck(context);
            return;
        }
    }

finish:
    if (hitFlag != 0) {
        FUN_00aa9280((int)player, (DAT_01b7b910 & 0x4000) == 0 ? 0xD4 : 0xD5);
    }
    FUN_00a95fb0((int)player, 0);  // 0.0f
    StateMachineNode::qteSafeCheck(context);
}

// 00BAE2B0  NarrowScaffoldIdleStatePl0010::vf20  size=125  [class]
undefined4 NarrowScaffoldIdleStatePl0010::vf20(undefined4 *context)
{
    using namespace NarrowScaffoldIdleStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = ownerPlayer(context);
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    return 1;
}
