// src/player/pl0010/state/OvercomeContainerStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OvercomeContainerStatePl0010.h"

// CRT (the compiler emitted fcos inline)
extern "C" double __cdecl cos(double x);

// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e50[];  // OvercomeContainerStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// debug-print strings (Shift-JIS)
extern const char DAT_0163d0ac[];     // "[Hw::VecNormalize] a zero vector cannot be normalized."

namespace OvercomeContainerStatePl0010_p1 {

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
inline char *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<undefined *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<undefined *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player that owns the state machine (context +0xC, checked against Pl0000).  The context
// is not null-checked before the load (as in the original).
inline Pl0000 *ownerOf(const char *ctx)
{
    return asPl0000(at<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
}

// Callees whose generated prototype does not match the machine-code call site.
typedef void (*VecNormalizeWarningFn)(const char *message);  // FUN_00dd5650 (cdecl)
// FUN_00bb91f0 (ZangekiYokoStatePl0010.cpp) takes the state node as a second cdecl argument.
typedef undefined4 (__cdecl *LeaveToIdleFn)(undefined4 *context, undefined4 node);

// Hw::VecNormalize, inlined in the original: normalises v[0..2] in place, or warns and sets
// (0, 1, 0) when the length is zero (the self-comparisons reject NaN components).
inline void normalizeInPlace(float *v)
{
    if (v[0] != 0.0f || v[1] != 0.0f || v[2] != 0.0f) {
        float lengthSq = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];  // machine order
        if (0.0f < lengthSq && v[0] == v[0] && v[1] == v[1] && v[2] == v[2]) {
            FUN_00ddf460(v, v);
        }
        else {
            ((VecNormalizeWarningFn)FUN_00dd5650)(DAT_0163d0ac);
            v[0] = 0.0f;
            v[1] = 1.0f;
            v[2] = 0.0f;
        }
    }
}

}  // namespace OvercomeContainerStatePl0010_p1

// 00B82030  OvercomeContainerStatePl0010::vf08  size=37  [class]
bool OvercomeContainerStatePl0010::vf08(undefined4 context)
{
    if (!StateMachineNode::vf08(context)) {
        return false;
    }
    climbPending() = 0;
    return true;
}

// 00B82060  OvercomeContainerStatePl0010::vf18  size=5  [class]
undefined4 OvercomeContainerStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);  // jmp 0x00D822E0
}

// 00B82070  OvercomeContainerStatePl0010::vf24  size=19  [class]
bool OvercomeContainerStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B820B0  OvercomeContainerStatePl0010::vf00  size=6  [class]
undefined *OvercomeContainerStatePl0010::vf00()
{
    return DAT_01be9e50;
}

// 00B91170  OvercomeContainerStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *OvercomeContainerStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAF9C0  FUN_00baf9c0  size=561  [callgraph]
// __thiscall on the OvercomeContainerStatePl0010 node.  Starts the climb towards the target
// stored in the context (+0xC4): motion 0xB8 when the target lies on the positive side of the
// player's FUN_00a92640 axis, else 0xB7, and climbHeight = 2 * (target y - player y), at least 4.
void FUN_00baf9c0(int self, undefined4 *context)
{
    using namespace OvercomeContainerStatePl0010_p1;
    OvercomeContainerStatePl0010 *node = (OvercomeContainerStatePl0010 *)self;
    float axisBuf[4];
    float dir[4];

    char *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    node->climbPending() = 0;
    char *target = at<char *>(ctx, 0xC4);  /* StateMachineContext+0xC4: climb target object */
    float targetY = at<float>(target, 0x54);
    float *pos = &at<float>(player, 0x40);  /* Pl0000+0x40: position */
    float dx = at<float>(target, 0x50) - pos[0];  /* target +0x50: position */
    float dy = targetY - pos[1];
    float dz = at<float>(target, 0x58) - pos[2];
    float dw = at<float>(target, 0x5C) - pos[3];
    float *axis = FUN_00a92640((int)player, axisBuf);
    FUN_00aa3f60((int)player, 0.0f < (axis[1] * dy + dx * axis[0]) + axis[2] * dz ? 0xB8 : 0xB7);
    dir[0] = dx;
    dir[1] = dy;
    dir[2] = dz;
    dir[3] = dw;
    normalizeInPlace(dir);  // (the result is not used)
    thiscall<void>(FUN_00a96030, player, 0, 0.5f);
    thiscall<void>(FUN_00a95fb0, player, 0.0f);
    if (pos[1] < targetY) {
        float rise = targetY - pos[1];
        node->climbHeight() = rise + rise;
    }
    if (node->climbHeight() <= 4.0f) {
        node->climbHeight() = 4.0f;
        FUN_00a937e0((int)player);
        return;
    }
    FUN_00a937e0((int)player);
}

// 00BAFC00  OvercomeContainerStatePl0010::SafeCheck  size=198  [class]
void OvercomeContainerStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace OvercomeContainerStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        Pl0000 *player = ownerOf(asContext(context));
        char *controller = at<char *>(player, 0x764);  /* Pl0000+0x764: motion controller ? */
        if (at<int>(controller, 0x104) != 1) {
            at<int>(controller, 0x104) = 1;
            at<float>(at<char *>(controller, 0xD0), 4) = 0.0f;
        }
        // save +0x417C..0x4184 into +0x4188..0x4190 (restored by vf20)
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: ? */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);
        at<float>(player, 0x4190) = at<float>(player, 0x4184);
        FUN_008e6c60(at<int>(player, 0x764), 0);
        FUN_00baf9c0((int)this, context);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BAFCD0  OvercomeContainerStatePl0010::vf20  size=196  [class]
undefined4 OvercomeContainerStatePl0010::vf20(undefined4 *context)
{
    using namespace OvercomeContainerStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = ownerOf(asContext(context));
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<float>(player, 0x4180) = at<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: ? */
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    FUN_008e6c60(at<int>(player, 0x764), 1);
    if (at<int>(this, 0x24) != 0x1E) {  /* StateMachineNode+0x24: ? (next state id) */
        FUN_00a93820((int)player);
    }
    return 1;
}

// 00BCC000  OvercomeContainerStatePl0010::vf14  size=321  [class]
void OvercomeContainerStatePl0010::vf14(undefined4 *context)
{
    using namespace OvercomeContainerStatePl0010_p1;
    int found[3];

    char *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (FUN_00a94db0((int)player, 0xB7) != 0 || FUN_00a94db0((int)player, 0xB8) != 0 ||
        FUN_00a94db0((int)player, 0xB5) != 0) {
        climbPending() = 1;
    }
    if (climbPending() != 0) {
        void *finder = (void *)FUN_00c1bd10();
        int *hit = vcall<int *>(finder, 0x4, found, player, 0.0f, 30.0f, 0.0f);
        at<int>(ctx, 0xC4) = hit[0];  /* StateMachineContext+0xC4..0xCC: climb target */
        at<int>(ctx, 0xC8) = hit[1];
        at<int>(ctx, 0xCC) = hit[2];
        if (hit[1] != 0 && (hit[0] != 0 || hit[2] != 0)) {
            FUN_00baf9c0((int)this, context);
        }
        if (at<int>(ctx, 0xC8) == 0 || (at<int>(ctx, 0xC4) == 0 && at<int>(ctx, 0xCC) == 0)) {
            ((LeaveToIdleFn)FUN_00bb91f0)(context, (undefined4)this);
        }
    }
    StateMachineNode::vf14(context);
}

// 00BDFB70  OvercomeContainerStatePl0010::qteSafeCheck  size=636  [class]
// Turns the player towards the climb target and moves him along (target - position) scaled by
// the motion progress, lifting him by cos(progress) * climbHeight * 0.1.
void OvercomeContainerStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace OvercomeContainerStatePl0010_p1;
    float targetPos[4];
    float delta[4];
    float dir[4];
    float step[4];

    char *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    FUN_008e0b70(at<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(at<int>(player, 0x764), 0);
    char *target = at<char *>(ctx, 0xC4);  /* StateMachineContext+0xC4: climb target object */
    targetPos[0] = at<float>(target, 0x50);  /* target +0x50: position */
    targetPos[1] = at<float>(target, 0x54);
    targetPos[2] = at<float>(target, 0x58);
    targetPos[3] = at<float>(target, 0x5C);
    float *pos = &at<float>(player, 0x40);  /* Pl0000+0x40: position */
    float yaw = (float)FUN_00a8ed10((int)player, targetPos, (undefined4 *)pos);
    thiscall<void>(FUN_00a8e960, player, yaw);
    delta[0] = targetPos[0] - pos[0];
    delta[1] = targetPos[1] - pos[1];
    delta[2] = targetPos[2] - pos[2];
    delta[3] = targetPos[3] - pos[3];
    dir[0] = delta[0];
    dir[1] = delta[1];
    dir[2] = delta[2];
    dir[3] = delta[3];
    normalizeInPlace(dir);  // (the result is not used)
    float frame = (float)FUN_00a958c0((int)player, 0);
    double progress = (double)frame / (double)FUN_00a95680((int)player, 0);
    float ratio = (float)progress;
    // Behavior vf74 (slot 0x74): vertical move
    vcall<void>(player, 0x74, (float)(cos(progress) * climbHeight() * 0.1f));
    step[0] = delta[0] * ratio;
    step[1] = delta[1] * ratio;
    step[2] = delta[2] * ratio;
    step[3] = delta[3] * ratio;
    // Behavior vf70 (slot 0x70): move by vector
    vcall<void>(player, 0x70, step);
    FUN_00bd3730(context, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(context, (undefined4)this, 0xD);
    FUN_00bd3910(context, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
