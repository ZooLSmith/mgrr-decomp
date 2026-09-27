// src/player/pl0010/state/RunStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "RunStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e68[];  // RunStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace RunStatePl0010_p1 {

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

// Entry `index` of the free-run activity table (StateMachineContextPl0010+0xC0: the
// AllocatedArray<FreeRunActivity::Info>, data pointer at +4, entries 0x70 bytes).
inline char *activityInfo(const char *ctx, int index)
{
    return (char *)(fld<int>((void *)fld<int>(ctx, 0xC0), 4) + index * 0x70);
}

// hkBaseObject::hkBaseObject_209 at 0x008E28A0 (__thiscall on the controller, result on the x87
// stack; kept unrounded)
inline double controllerExtent(int controller)
{
    return ((double (__thiscall *)(void *))0x008E28A0)((void *)controller);
}

// Stick pushed beyond the run threshold: (param +0x14C)^2 < Pl0000+0xD28 (stick magnitude squared)
inline bool stickBeyondRun(Pl0000 *player)
{
    float threshold = param(player, 0x14C);
    return threshold * threshold < fld<float>(player, 0xD28);
}

}  // namespace RunStatePl0010_p1

// 00B82410  RunStatePl0010::vf08  size=45  [class]
// Enter.
bool RunStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    runFromDashMotion() = -1;
    activity8Timer() = 0.0f;
    activity5Timer() = 0.0f;
    return true;
}

// 00B82440  RunStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 RunStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82450  RunStatePl0010::vf24  size=19  [class]
bool RunStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82490  RunStatePl0010::vf00  size=6  [class]
undefined *RunStatePl0010::vf00()
{
    return DAT_01be9e68;
}

// 00B91230  RunStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *RunStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB0D60  RunStatePl0010::SafeCheck  size=448  [class]
// First frame: resets the dash gear kept in the context, saves the camera angles and starts
// the run motion (RunFromDash when coming from the dash).
void RunStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace RunStatePl0010_p1;

    if (fld<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        int savedGear = fld<int>(ctx, 0x40);  /* StateMachineContextPl0010+0x40: savedGearLevel */
        fld<float>(ctx, 0x38) = 0.0f;         /* StateMachineContextPl0010+0x38: savedGearCharge */
        fld<float>(ctx, 0x3C) = 0.0f;         /* StateMachineContextPl0010+0x3C: savedGearCooldown */
        fld<float>(ctx, 0x70) = 0.0f;         /* StateMachineContextPl0010+0x70 */
        fld<int>(ctx, 0x40) = 2;
        // Ghidra dropped ECX (the player): FUN_00a8c9b0(0, 8, 0.5f, 0.0f)
        thiscall<void>(FUN_00a8c9b0, player, 0, 8, 0.5f, 0.0f);
        /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);
        fld<int>(player, 0x5074) = 0;  /* Pl0000+0x5074: ? */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        if (fld<int>(this, 0x2C) != 10 && FUN_00a95ce0((int)player, 100) == 0) {  /* StateMachineNode+0x2C: previous state id */
            if (FUN_00a95ce0((int)player, 0x6E) == 0 && FUN_00a95ce0((int)player, 0x66) == 0 &&
                fld<int>(this, 0x2C) != 0x15 && fld<int>(this, 0x2C) != 0x16) {
                FUN_00aa9280((int)player, 0x11);
            }
            else {
                FUN_00aa9280((int)player, 0x13);
            }
        }
        else {
            float result[4];  // output of FUN_00b8afd0 (16 bytes on the stack)
            int isKind3 = (FUN_00b8afd0((int)player, (undefined4 *)result) == 3);
            int motionId = 0x41 - isKind3;
            if (savedGear == 2) {
                motionId = 0x3C - isKind3;
            }
            runFromDashMotion() = FUN_00a9f4c0((int)player, (char *)"RunFromDash", 0.083333336f, 0, 0);
            FUN_00a9f600((int)player, -1, 0, 0, 0, 0, motionId, 0.083333336f, 0);
            FUN_00a9f600((int)player, -1, 0, 0, 0, 1, 0x13, 0.083333336f, 0);
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB0F20  RunStatePl0010::vf14  size=149  [class]
void RunStatePl0010::vf14(undefined4 *context)
{
    using namespace RunStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94db0((int)player, 0x11) != 0 || FUN_00a94db0((int)player, 0x12) != 0) {
        int slot = FUN_00aa9280((int)player, 0x15);
        thiscall<void>(FUN_00a96070, player, slot, 0x4000, 1);
    }
    StateMachineNode::vf14(context);
}

// 00BB0FC0  RunStatePl0010::vf20  size=136  [class]
// Leave: restores the camera angles saved by SafeCheck.
undefined4 RunStatePl0010::vf20(undefined4 *context)
{
    using namespace RunStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BE09A0  RunStatePl0010::qteSafeCheck  size=693  [class]
// Per frame: land check, camera override while running with the stick, free-run activities
// 8 (state 0x16 after 1/6 s) and 5 (state 0x15), and run (10) / walk (0x11) selection.
void RunStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace RunStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    FUN_008e0b70(controllerOf(player), 0);
    FUN_008e0ba0(controllerOf(player), 0);
    if (!FUN_008e2740(controllerOf(player)) &&
        (fld<int>(player, 0x41E0) == 0 ||                        /* Pl0010: groundHit */
         param(player, 0x160) <= fld<float>(player, 0x41E4))) {  /* Pl0010: groundHitDistance */
        FUN_00d82510((int)this, 0xE, 100);
    }
    if (stickBeyondRun(player) &&
        (fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {  /* Pl0000: inputHold & maskE48 */
        fld<float>(player, 0x4180) = 0.3f;
        fld<float>(player, 0x417C) = 0.5235988f;  // 30 degrees
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    if (runFromDashMotion() != -1) {
        float blend = fld<float>(this, 8);  /* StateMachineNode+0x8: time in the state */
        if (!NAN_CHECK(blend) && (1.0 < blend) != (blend == 1.0)) {
            blend = 1.0f;
        }
        thiscall<void>(FUN_00a947e0, player, 0, 0.0f, 0.0f, blend);
    }
    float runThreshold = param(player, 0x14C);
    if (fld<float>(player, 0xD28) <= runThreshold * runThreshold) {
        activity8Timer() = 0.0f;
        activity5Timer() = 0.0f;
    }
    else {
        float radius = fld<float>((void *)controllerOf(player), 0xFC);
        double reach = controllerExtent(controllerOf(player));
        char *activity8 = activityInfo(ctx, 8);
        reach = reach + reach + (double)radius;
        if (fld<int>(activity8, 4) != 0 && (double)fld<float>(activity8, 8) <= reach) {
            float elapsed = fld<float>(ctx, 8) + activity8Timer();  /* StateMachineContext+0x8: frame time */
            activity8Timer() = elapsed;
            if (0.16666667f <= elapsed) {
                FUN_00d82510((int)this, 0x16, 100);
                reach = (double)(float)reach;
            }
        }
        char *activity5 = activityInfo(ctx, 5);
        if (fld<int>(activity5, 4) != 0 && (double)fld<float>(activity5, 8) <= reach) {
            activity5Timer() = fld<float>(ctx, 8) + activity5Timer();
            FUN_00d82510((int)this, 0x15, 100);
        }
    }
    ctx = asContextPl0010(context);
    player = playerOf(ctx);
    bool moving;
    if (stickBeyondRun(player)) {
        moving = (fld<unsigned int>(player, 0xE48) & fld<unsigned int>(player, 0xCF8)) != 0;
    }
    else {
        moving = false;
    }
    int nextState = moving ? 10 : 0x11;
    if (nextState != fld<int>(this, 4)) {  /* StateMachineNode+0x4: current state id */
        FUN_00d82510((int)this, nextState, 0x19);
    }
    FUN_00bd39d0(context, (undefined4)this, 0xC);
    StateMachineNode::qteSafeCheck(context);
}
