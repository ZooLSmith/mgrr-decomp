// src/player/pl0010/state/NarrowScaffoldRunStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "NarrowScaffoldRunStatePl0010.h"

// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e44[];  // NarrowScaffoldRunStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// global objects passed in ECX
extern char DAT_01bea1d0[];           // camera / view (ECX of FUN_00da0640)
extern unsigned char DAT_01b35df8[];  // collision world (ECX of RayCastSingleHitWork_4)
// debug-print strings (Shift-JIS)
extern const char DAT_0163d0ac[];     // "[Hw::VecNormalize] a zero vector cannot be normalized."
// plain globals
extern float DAT_01b7b920;            // ? left stick X
extern float DAT_01b7b924;            // ? left stick Y (used as Z)

namespace NarrowScaffoldRunStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Virtual call through the vftable slot at byte offset `slot`.
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// __thiscall call of a function (symbol or address) with ECX = self.
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// Checked downcasts (0 when the object is null or of another type).
inline void *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<undefined *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (void *)obj : 0;
}
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<undefined *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
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
// 0090B490 RayCastSingleHitWork::RayCastSingleHitWork_4 (ret 0x20, ECX = DAT_01b35df8).
static void *const kRayCastSingleHit4 = (void *)0x0090B490;

// Dot products in the machine code's evaluation order.
inline float facing(const float *axis, const float *dir)
{
    return axis[1] * dir[1] + dir[0] * axis[0] + axis[2] * dir[2];
}
inline float facingAway(const float *axis, const float *dir)
{
    return axis[1] * -1.0f * dir[1] + axis[0] * -1.0f * dir[0] + axis[2] * -1.0f * dir[2];
}

// One downward probe: from = (up + pos) + offset, to = from + down * 2, then a "narrow" ray cast.
inline int castProbe(Pl0000 *player, const float *up, const float *offset, const float *down,
                     float *from, float *to, unsigned int color, unsigned int mask)
{
    float *pos = &at<float>(player, 0x40);  /* +0x40: position */
    from[0] = (up[0] + pos[0]) + offset[0];
    from[1] = (pos[1] + up[1]) + offset[1];
    from[2] = (pos[2] + up[2]) + offset[2];
    from[3] = (pos[3] + up[3]) + offset[3];
    to[0] = from[0] + down[0] * 2.0f;
    to[1] = from[1] + down[1] * 2.0f;
    to[2] = from[2] + down[2] * 2.0f;
    to[3] = from[3] + down[3] * 2.0f;
    ((DebugLineFn)FUN_00f95fa0)(from, to, color, 0);
    return thiscall<int>(kRayCastSingleHit4, DAT_01b35df8, 0, 0, 0, 0, from, to, mask, "narrow");
}

// After a probe hit: push the player by axis * scale (Behavior vf70, slot 0x70: move by vector).
inline void pushAlong(Pl0000 *player, const float *axis, float scale)
{
    float step[4];
    step[0] = axis[0] * scale;
    step[1] = axis[1] * scale;
    step[2] = axis[2] * scale;
    step[3] = scale * axis[3];
    vcall<void>(player, 0x70, step);
}

}  // namespace NarrowScaffoldRunStatePl0010_p1

// 00B81D50  NarrowScaffoldRunStatePl0010::vf08  size=19  [class]
bool NarrowScaffoldRunStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B81D70  NarrowScaffoldRunStatePl0010::thunk_vf14  size=5  [class]
void NarrowScaffoldRunStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);  // jmp 0x00D822A0
}

// 00B81D80  NarrowScaffoldRunStatePl0010::vf18  size=5  [class]
undefined4 NarrowScaffoldRunStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);  // jmp 0x00D822E0
}

// 00B81D90  NarrowScaffoldRunStatePl0010::vf24  size=19  [class]
bool NarrowScaffoldRunStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B81DD0  NarrowScaffoldRunStatePl0010::vf00  size=6  [class]
undefined *NarrowScaffoldRunStatePl0010::vf00()
{
    return DAT_01be9e44;
}

// 00B91100  NarrowScaffoldRunStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *NarrowScaffoldRunStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAE330  NarrowScaffoldRunStatePl0010::SafeCheck  size=163  [class]
void NarrowScaffoldRunStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace NarrowScaffoldRunStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        Pl0000 *player = ownerPlayer(context);
        FUN_00aa3f60((int)player, 0xD4);
        char *controller = at<char *>(player, 0x764);  /* Pl0000+0x764: motion controller ? */
        if (at<int>(controller, 0x104) != 1) {
            at<int>(controller, 0x104) = 1;
            at<float>(at<char *>(controller, 0xD0), 4) = 0.0f;
        }
        at<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: ? flag */
    }
    StateMachineNode::SafeCheck(context);
}

// 00BAE3E0  NarrowScaffoldRunStatePl0010::qteSafeCheck  size=2034  [class]
// Keeps the player on the scaffold: casts downward "narrow" rays at the four sides that face the
// stick direction and pushes the player 0.05 along the side axis for every edge hit.
// Falls back to state 0x1A when the player is too slow for running.
void NarrowScaffoldRunStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace NarrowScaffoldRunStatePl0010_p1;
    float stick[4];
    float dir[4];
    float camRot[16];
    float axisBuf[4];
    float from[4];
    float to[4];
    float sideP[4], sideN[4], frontP[4], frontN[4], up[4], down[4];
    unsigned int mask;
    float *axis;

    Pl0000 *player = ownerPlayer(context);
    FUN_008e0b70(at<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(at<int>(player, 0x764), 0);
    float speed = at<float>(at<char *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: ? (+0x14C) */
    if (!(speed * speed < at<float>(player, 0xD28))) {           /* Pl0000+0xD28: ? */
        FUN_00d82510((int)this, 0x1A, 100);
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
        float lengthSq = dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2];  // machine order
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

    FUN_00a8b8a0((int)player, sideP, 0.15f);
    FUN_00a8b8a0((int)player, sideN, -0.15f);
    FUN_00a8b9b0((int)player, frontP, 0.15f);
    FUN_00a8b9b0((int)player, frontN, -0.15f);
    FUN_00a8bac0((int)player, up, 0.15f);
    FUN_00a8bac0((int)player, down, -0.15f);
    mask = (unsigned int)*(int *)FUN_009f8b60((int)player) << 0x10 | 0x1A;

    axis = FUN_00a925a0((int)player, axisBuf);
    if (0.5f < facing(axis, dir)) {
        if (castProbe(player, up, sideP, down, from, to, 0xFFFFFFFF, mask) != 0) {
            pushAlong(player, FUN_00a925a0((int)player, axisBuf), 0.05f);
        }
    }
    axis = FUN_00a925a0((int)player, axisBuf);
    if (0.5f < facingAway(axis, dir)) {
        if (castProbe(player, up, sideN, down, from, to, 0xFFFF0000, mask) != 0) {
            pushAlong(player, FUN_00a925a0((int)player, axisBuf), -0.05f);
        }
    }
    axis = FUN_00a92640((int)player, axisBuf);
    if (0.5f < facing(axis, dir)) {
        if (castProbe(player, up, frontP, down, from, to, 0xFF00FF00, mask) != 0) {
            pushAlong(player, FUN_00a92640((int)player, axisBuf), 0.05f);
        }
    }
    axis = FUN_00a92640((int)player, axisBuf);
    if (0.5f < facingAway(axis, dir)) {
        if (castProbe(player, up, frontN, down, from, to, 0xFF0000FF, mask) != 0) {
            pushAlong(player, FUN_00a92640((int)player, axisBuf), -0.05f);
        }
    }
    StateMachineNode::qteSafeCheck(context);
}

// 00BAEBE0  NarrowScaffoldRunStatePl0010::vf20  size=135  [class]
undefined4 NarrowScaffoldRunStatePl0010::vf20(undefined4 *context)
{
    using namespace NarrowScaffoldRunStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = ownerPlayer(context);
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: ? flag */
    return 1;
}
