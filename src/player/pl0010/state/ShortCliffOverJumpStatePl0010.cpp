// src/player/pl0010/state/ShortCliffOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ShortCliffOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e6c[];  // ShortCliffOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace ShortCliffOverJumpStatePl0010_p1 {

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

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
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

// The player of a state-machine context (StateMachineContextPl0010+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Pl0000+0x764: controller object (ECX of FUN_008e0b70 / FUN_008e0ba0 / FUN_008e2740)
inline int controllerOf(Pl0000 *player)
{
    return fld<int>(player, 0x764);
}

// Pl0000+0x40D4: parameter block of the player (read-only floats)
inline float param(Pl0000 *player, int offset)
{
    return fld<float>((void *)fld<int>(player, 0x40D4), offset);
}

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// Entry `index` of the free-run activity table (StateMachineContextPl0010+0xC0: the
// AllocatedArray<FreeRunActivity::Info>, data pointer at +4, entries 0x70 bytes).
// Entry +0x4: detected, +0x8: distance, +0xC: height, +0x10: ?
inline char *activityInfo(const char *ctx, int index)
{
    return (char *)(fld<int>((void *)fld<int>(ctx, 0xC0), 4) + index * 0x70);
}

// Pl0000+0x764 -> +0x104 / +0xD0: switch the controller's +0x104 mode on (clearing +0xD0 -> +4)
// Returns false when it already was on.
inline bool enableControllerMode(Pl0000 *player)
{
    int controller = controllerOf(player);
    if (fld<int>((void *)controller, 0x104) != 1) {
        fld<int>((void *)controller, 0x104) = 1;
        fld<float>((void *)fld<int>((void *)controller, 0xD0), 4) = 0.0f;
        return true;
    }
    return false;
}

// Playback rate 1 / duration, limited to [0.85, 1.15] (duration kept unrounded, as on the x87)
inline float clampedRate(double duration)
{
    double rate = 1.0 / duration;
    float result = (float)rate;
    if (!((double)1.15f <= rate)) {
        if (rate <= (double)0.85f) {
            result = 0.85f;
        }
    }
    else {
        result = 1.15f;
    }
    return result;
}

}  // namespace ShortCliffOverJumpStatePl0010_p1

// 00B824B0  FUN_00b824b0  size=127  [callgraph]
// Non-zero when cliff-over motion `next` may directly follow `current`: the same motion, or
// one of the matching pairs 0x87/0x88 <-> 0x82/0x83 and 0x89/0x8A <-> 0x84/0x85.  (__stdcall)
undefined4 FUN_00b824b0(int next, int current)
{
    if (next != current) {
        bool matches;
        switch (next) {
        case 0x87:
            if (current == 0x88) {
                return 1;
            }
            if (current == 0x83) {
                return 1;
            }
            matches = current == 0x82;
            break;
        case 0x88:
            if (current == 0x87) {
                return 1;
            }
            if (current == 0x82) {
                return 1;
            }
            matches = current == 0x83;
            break;
        case 0x89:
            if (current == 0x8A) {
                return 1;
            }
            if (current == 0x85) {
                return 1;
            }
            matches = current == 0x84;
            break;
        case 0x8A:
            if (current == 0x89) {
                return 1;
            }
            if (current == 0x84) {
                return 1;
            }
            matches = current == 0x85;
            break;
        default:
            return 0;
        }
        if (!matches) {
            return 0;
        }
    }
    return 1;
}

// 00B82540  ShortCliffOverJumpStatePl0010::vf08  size=37  [class]
// Enter.
bool ShortCliffOverJumpStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    blendMotion() = -1;
    return true;
}

// 00B82570  ShortCliffOverJumpStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ShortCliffOverJumpStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82580  ShortCliffOverJumpStatePl0010::vf24  size=19  [class]
bool ShortCliffOverJumpStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B825C0  ShortCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined *ShortCliffOverJumpStatePl0010::vf00()
{
    return DAT_01be9e6c;
}

// 00B91250  ShortCliffOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ShortCliffOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB1050  FUN_00bb1050  size=155  [callgraph]
// `value` divided by the player's speed parameter for cliff-over motion `motionId`
// (+0x48 for 0x82..0x8A, +0x44 for 0x8C / 0x8D, +0x50 otherwise).  (__stdcall)
float10 FUN_00bb1050(undefined4 *context, undefined4 motionId, float value)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    switch (motionId) {
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8A:
        return (float10)value / (float10)param(player, 0x48);
    default:
        return (float10)value / (float10)param(player, 0x50);
    case 0x8C:
    case 0x8D:
        return (float10)value / (float10)param(player, 0x44);
    }
}

// 00BB1110  FUN_00bb1110  size=330  [callgraph]
// Chooses the cliff-over motion from free-run activity 1 (firstJump != 0) or 2: high ledge
// (+0x10 <= -0.3) -> 0x84/0x85 (0x89/0x8A chained), far (+0xC >= param +0x84) -> 0x82/0x83
// (0x87/0x88 chained), else 0x8C; the second of each pair when FUN_00b8afd0 gives 3.
// (__stdcall)
int FUN_00bb1110(undefined4 *context, int firstJump)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    char *activity;
    if (firstJump == 0) {
        activity = activityInfo(ctx, 2);
    }
    else {
        activity = activityInfo(ctx, 1);
    }
    float farDistance = param(player, 0x84);
    bool isFar = (farDistance < fld<float>(activity, 0xC)) != (farDistance == fld<float>(activity, 0xC));
    bool isHigh = fld<float>(activity, 0x10) <= -0.3f;
    float result[4];  // output of FUN_00b8afd0 (16 bytes on the stack)
    int side = FUN_00b8afd0((int)player, (undefined4 *)result);
    unsigned int firstOffset = (unsigned int)-(int)(firstJump != 0) & 0xFFFFFFFB;  // -5 for the first jump
    if (side != 3) {
        if (isHigh) {
            return firstOffset + 0x89;
        }
        if (isFar) {
            return firstOffset + 0x87;
        }
        return 0x8C;
    }
    if (isHigh) {
        return firstOffset + 0x8A;
    }
    if (isFar) {
        return firstOffset + 0x88;
    }
    return 0x8D;
}

// 00BB1260  FUN_00bb1260  size=616  [callgraph]
// __thiscall (ECX = ShortCliffOverJumpStatePl0010): starts the "CliffOverShort" blend of
// motion 0x8C (0x8C, 0x8E, 0x90, 0x92, 0x94, 0x96) or 0x8D (0x8D, 0x8F, ..., 0x97) on slots
// 1..6, then sets its weight to 6 * speedScale.
void FUN_00bb1260(int self, undefined4 *context, int motionId, float speedScale, float blend)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    ShortCliffOverJumpStatePl0010 *state = (ShortCliffOverJumpStatePl0010 *)self;
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    state->blendMotion() = FUN_00a9f4c0((int)player, (char *)"CliffOverShort", blend, 0x8030000, 0);
    int lastMotion;
    if (motionId == 0x8C) {
        FUN_00a9f600((int)player, -1, 0, 0, 0, 1, 0x8C, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 2, 0x8E, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 3, 0x90, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 4, 0x92, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 5, 0x94, blend, 0x8030000);
        lastMotion = 0x96;
    }
    else {
        if (motionId != 0x8D) {
            goto applyWeight;
        }
        FUN_00a9f600((int)player, -1, 0, 0, 0, 1, 0x8D, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 2, 0x8F, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 3, 0x91, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 4, 0x93, blend, 0x8030000);
        FUN_00a9f600((int)player, -1, 0, 0, 0, 5, 0x95, blend, 0x8030000);
        lastMotion = 0x97;
    }
    FUN_00a9f600((int)player, -1, 0, 0, 0, 6, lastMotion, blend, 0x8030000);
applyWeight:
    thiscall<void>(FUN_00a947e0, player, state->blendMotion(), 0.0f, 0.0f, speedScale * 6.0f);
    FUN_00a95e60((int)player, state->blendMotion(), 0x3C888889);  // 0.016666668f
    FUN_00a95fb0((int)player, 0x3F800000);                        // 1.0f
}

// 00BB14D0  ShortCliffOverJumpStatePl0010::SafeCheck  size=540  [class]
// First frame: saves the camera angles and starts the jump chosen from free-run activity 1.
void ShortCliffOverJumpStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    if (fld<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        char *activity = activityInfo(ctx, 1);
        float farDistance = param(player, 0x84);
        float height = fld<float>(activity, 0xC);
        float edge = fld<float>(activity, 0x10);
        int motionId = FUN_00bb1110(context, 1);
        jumpMotion() = motionId;
        double duration = FUN_00bb1050(context, motionId, fld<float>(activity, 8));
        float scaleY = fld<float>(activity, 0xC) / param(player, 0x64);
        if (!(farDistance <= height) && -0.3f < edge) {
            scaleY = 1.0f;
        }
        float rate = clampedRate(duration);
        motionId = jumpMotion();
        if (motionId == 0x8C || motionId == 0x8D) {
            FUN_00bb1260((int)this, context, motionId, (float)duration, 0.05f);
        }
        else {
            int slot = FUN_00aa3f60((int)player, motionId);
            thiscall<void>(FUN_00a96030, player, slot, rate);
            float scale[3];
            scale[1] = scaleY;
            scale[0] = (float)duration;
            scale[2] = (float)duration;
            FUN_00a95ff0((int)player, (undefined4 *)scale);
            FUN_00a95f70((int)player, 0x3D088889);  // 0.033333335f
        }
        enableControllerMode(player);
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB16F0  ShortCliffOverJumpStatePl0010::vf20  size=198  [class]
// Leave: restores the camera angles and stops the blend.
undefined4 ShortCliffOverJumpStatePl0010::vf20(undefined4 *context)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>((void *)controllerOf(player), 0x104) != 0) {
        fld<int>((void *)controllerOf(player), 0x104) = 0;
    }
    fld<int>(player, 0x4170) = 0;
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    if (blendMotion() != -1) {
        thiscall<void>(FUN_00a94bc0, player, blendMotion(), 0.0f);
    }
    return 1;
}

// 00BCC5F0  ShortCliffOverJumpStatePl0010::vf14  size=773  [class]
// When the jump motion ends: chain into the next cliff jump (free-run activity 2) or land.
void ShortCliffOverJumpStatePl0010::vf14(undefined4 *context)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a8c760((int)player, 0x1C)) {
        fld<int>(player, 0x4170) = 0;
    }
    int motionSlot = thiscall<int>(FUN_00a8c6b0, player, jumpMotion());
    if (FUN_00a94d60((int)player, motionSlot) != 0) {
        char *activity = activityInfo(ctx, 2);
        if (fld<int>(activity, 4) == 0 || fld<int>(ctx, 0x7C) != 0) {  /* StateMachineContextPl0010+0x7C */
            if (fld<int>((void *)controllerOf(player), 0x104) != 0) {
                fld<int>((void *)controllerOf(player), 0x104) = 0;
            }
            if (!FUN_008e2740(controllerOf(player)) &&
                (fld<int>(player, 0x41E0) == 0 ||                        /* Pl0010: groundHit */
                 param(player, 0x160) <= fld<float>(player, 0x41E4))) {  /* Pl0010: groundHitDistance */
                FUN_00d82510((int)this, 0xE, 100);
            }
            FUN_00bb8d00(context, (int)this, 0x32, 0, 1);
            FUN_00bb8ae0(context, (undefined4)this, 100);
        }
        else {
            float distance = fld<float>(activity, 8);
            float height = fld<float>(activity, 0xC);
            float edge = fld<float>(activity, 0x10);
            float farDistance = param(player, 0x84);
            int previousMotion = jumpMotion();
            int motionId = FUN_00bb1110(context, 0);
            float settle = 0.0f;
            jumpMotion() = motionId;
            if (FUN_00b824b0(motionId, previousMotion) == 0) {
                settle = 0.033333335f;
            }
            // Ghidra shows the high half of FUN_00b824b0's result here; the machine code passes
            // EDX, which still holds the new motion id.
            double duration = FUN_00bb1050(context, motionId, distance);
            float scaleY = height / param(player, 0x64);
            if (!(farDistance <= height) && !(edge <= -0.3f)) {
                scaleY = 1.0f;
            }
            float rate = clampedRate(duration);
            motionId = jumpMotion();
            if (motionId == 0x8C || motionId == 0x8D) {
                FUN_00bb1260((int)this, context, motionId, (float)duration, 0.0f);
            }
            else {
                if (blendMotion() != -1) {
                    thiscall<void>(FUN_00a94bc0, player, blendMotion(), 0.0f);
                }
                int slot = FUN_00aa3f60((int)player, jumpMotion());
                thiscall<void>(FUN_00a96030, player, slot, rate);
                thiscall<void>(FUN_00a96070, player, slot, 0x4000, 1);
                float scale[3];
                scale[1] = scaleY;
                scale[0] = (float)duration;
                scale[2] = (float)duration;
                FUN_00a95ff0((int)player, (undefined4 *)scale);
                thiscall<void>(FUN_00a95f70, player, settle);
            }
            enableControllerMode(player);
        }
    }
    StateMachineNode::vf14(context);
}

// 00BE0C60  ShortCliffOverJumpStatePl0010::qteSafeCheck  size=227  [class]
void ShortCliffOverJumpStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ShortCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    float angle = param(player, 0x174);
    fld<float>(player, 0x4180) = param(player, 0x170);
    fld<float>(player, 0x417C) = angle * 0.017453292f;  // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
    FUN_008e0b70(controllerOf(player), 0);
    FUN_008e0ba0(controllerOf(player), 0);
    cdeclcall<undefined4>(FUN_00bb9020, context, (int)this);  // two arguments pushed (cdecl)
    FUN_00bd3730(context, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(context, (undefined4)this, 0xD);
    FUN_00bd3910(context, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
