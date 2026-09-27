// src/player/pl0010/state/DashStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DashStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e00[];  // DashStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// global object passed in ECX to FUN_00c272e0
extern unsigned char DAT_01bebd80[];
// debug-print string (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] a zero vector cannot be normalized."
// plain globals
extern unsigned int DAT_018b9174;  // current phase / area id (0x740, 0x750 tested)
extern unsigned int DAT_01bea090;  // global flags
extern unsigned int DAT_01bea094;  // global flags

// CRT (the compiler emitted fsqrt inline)
extern "C" double __cdecl sqrt(double x);

namespace DashStatePl0010_p1 {

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

// Function at 0x00A17A40 (named switchD_0080dbae::default in FILEMAP; called with ECX = player)
static void *const kPlayerFn_00A17A40 = (void *)0x00A17A40;

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

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Pl0000+0x53E0: float passed to FUN_00a96030 / FUN_00a95fb0 (blend time)
inline float blend53E0(Pl0000 *player)
{
    return fld<float>(player, 0x53E0);
}

// Motion request built by FUN_004039a0 (ECX = buffer, returns the buffer); 0x150 bytes on the
// stack of every caller, with a float[4] at +0x120 that some callers overwrite.
struct MotionRequest {
    unsigned char head[0x120];
    float vec[4];                  // +0x120
    unsigned char tail[0x150 - 0x130];
};

// Current time of the player's animation unit (-1.0 when none is playing); kept unrounded
// (the x87 value) until the caller stores it.
inline double animTime(Pl0000 *player)
{
    int unit = FUN_00a92f90((int)player);
    if (thiscall<int>(FUN_00e26e90, (void *)unit) == 0) {
        return -1.0f;
    }
    return (double)FUN_00e36970(unit + 0xF4, 0);
}

// FUN_00aa4080: start motion `motionId` on slot `slot` (7 stack arguments, ret 0x1C)
inline void playMotion(Pl0000 *player, int motionId, int slot, float blend, float speed,
                       unsigned int flags, float startFrame, float rate)
{
    thiscall<void>(FUN_00aa4080, player, motionId, slot, blend, speed, flags, startFrame, rate);
}

// FUN_00a96030(slot, blend) / FUN_00a95fb0(blend): the float travels in a stack slot
inline void applySlot(Pl0000 *player, int slot, float blend)
{
    thiscall<void>(FUN_00a96030, player, slot, blend);
}

inline void applyBlend(Pl0000 *player, float blend)
{
    thiscall<void>(FUN_00a95fb0, player, blend);
}

// FUN_00a94bc0(slot, blend)
inline void stopSlot(Pl0000 *player, int slot, float blend)
{
    thiscall<void>(FUN_00a94bc0, player, slot, blend);
}

// Actions that force the gear motion in SafeCheck (tested with FUN_00a95ce0 in this order).
static const int kForceGearActions[] = {
    0x68, 0x69, 100, 0x65, 0x66, 0x67, 0x6B, 0x6A, 0x6C, 0x6F, 0x48, 0x49, 0xA5, 0xA4,
    0xA6, 0x32, 0x2E, 0xAF, 0x9A, 0x84, 0x85, 0x82, 0x83, 0x89, 0x8A, 0x87, 0x88,
};

// SafeCheck: action 0x36 motion when the context says the dash was not already running.
inline void startIdleMotion(DashStatePl0010 *self, Pl0000 *player)
{
    self->motionHandle() = FUN_00aa9280((int)player, 0x36);
    thiscall<void>(FUN_00a95f70, player, 0.0f);
    MotionRequest request;
    int built = FUN_004039a0((int)&request, 9, (int)player, 0);
    FUN_00a8c930((int)player, 0, built);
    applySlot(player, 0, blend53E0(player));
    applyBlend(player, blend53E0(player));
}

// Inlined Hw::VecNormalize of a 3-vector into out (w untouched): a vector with a non-positive
// squared length or a NaN component prints a debug message and gives (0,1,0).
inline void normalizeInto(float *out, float *v, float lengthSq)
{
    if (lengthSq < 0.0f || lengthSq == 0.0f || NAN_CHECK(v[0]) || NAN_CHECK(v[1]) || NAN_CHECK(v[2])) {
        cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
        out[0] = 0.0f;
        out[1] = 1.0f;
        out[2] = 0.0f;
    }
    else {
        FUN_00ddf460(out, v);
    }
}

// FUN_004039a0 + FUN_00a963e0 (slot request of the given kind)
inline void requestSlotMotion(Pl0000 *player, int kind)
{
    MotionRequest request;
    int built = FUN_004039a0((int)&request, kind, (int)player, 0);
    FUN_00a963e0((int)player, built);
}

// Kind 10 request with its float[4] replaced by player+srcOffset, then sent with FUN_00a8c930.
inline void requestWithVector(Pl0000 *player, int srcOffset)
{
    if (fld<int>(player, 0x594) == 2) {  /* Pl0000+0x594: ? */
        requestSlotMotion(player, 0xB);
    }
    if (fld<int>(player, 0x598) == 2) {  /* Pl0000+0x598: ? */
        requestSlotMotion(player, 10);
    }
    MotionRequest request;
    FUN_004039a0((int)&request, 10, (int)player, 0);
    request.vec[0] = fld<float>(player, srcOffset);
    request.vec[1] = fld<float>(player, srcOffset + 4);
    request.vec[2] = fld<float>(player, srcOffset + 8);
    request.vec[3] = fld<float>(player, srcOffset + 0xC);
    FUN_00a8c930((int)player, 0, (int)&request);
}

}  // namespace DashStatePl0010_p1

// 00B81210  DashStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 DashStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B81220  DashStatePl0010::vf24  size=19  [class]
bool DashStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B81260  DashStatePl0010::vf00  size=6  [class]
undefined *DashStatePl0010::vf00()
{
    return DAT_01be9e00;
}

// 00B90D00  DashStatePl0010::vf08  size=236  [class]
// Enter: resets the state and restores the gear from the context.
bool DashStatePl0010::vf08(undefined4 contextArg)
{
    using namespace DashStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    field30() = 0.0f;
    field34() = 0.0f;
    motionHandle() = -1;
    gearUpAllowed() = 0;
    upperTimer() = -1.0f;
    startFlag94() = 0;
    char *ctx = asContextPl0010((void *)contextArg);
    gearCharge() = fld<float>(ctx, 0x38);    /* StateMachineContextPl0010+0x38: saved gearCharge */
    gearCooldown() = fld<float>(ctx, 0x3C);  /* StateMachineContextPl0010+0x3C: saved gearCooldown */
    int savedGear = fld<int>(ctx, 0x40);     /* StateMachineContextPl0010+0x40: saved gearLevel */
    gearLevel() = savedGear;
    maxLean() = 60.0f;
    flickActive() = 0;
    lean() = 0.0f;
    flickTimer() = 0.0f;
    gearUpAllowed() = (savedGear != 2);
    prevStick()[0] = 0.0f;
    prevStick()[1] = 0.0f;
    prevStick()[2] = 0.0f;
    prevStick()[3] = 0.0f;
    flickStick()[0] = 0.0f;
    flickStick()[1] = 0.0f;
    flickStick()[2] = 0.0f;
    flickStick()[3] = 0.0f;
    field98() = 0;
    vecA0()[0] = 0.0f;
    vecA0()[1] = 0.0f;
    vecA0()[2] = 0.0f;
    vecA0()[3] = 0.0f;
    stopping() = 0;
    inputHeldTime() = 0.0f;
    return true;
}

// 00B90DF0  DashStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *DashStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA9990  FUN_00ba9990  size=176  [callgraph]
// Non-zero in phases 0x740 / 0x750 while the game mode (vf68 of FUN_00c13920()) is 5 and the
// player's +0x1400 is set.  (Machine code: __stdcall, callers also load ECX = the state.)
undefined4 FUN_00ba9990(undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (DAT_018b9174 == 0x740) {
        void *game = (void *)FUN_00c13920();
        if (vcall<int>(game, 0x68) == 5 && fld<int>(player, 0x1400) != 0) {  /* Pl0000+0x1400: ? */
            return 1;
        }
    }
    if (DAT_018b9174 == 0x750) {
        void *game = (void *)FUN_00c13920();
        if (vcall<int>(game, 0x68) == 5 && fld<int>(player, 0x1400) != 0) {
            return 1;
        }
    }
    return 0;
}

// 00BA9A40  FUN_00ba9a40  size=423  [callgraph]
// __thiscall (ECX = DashStatePl0010): plays the slot-5 motion 0x4D / 0x4E / 0x4F one frame
// after the current animation time.
void FUN_00ba9a40(int self, undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    DashStatePl0010 *state = (DashStatePl0010 *)self;
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    float startFrame;
    int motionId;
    if (FUN_00a9f760((int)player, 0x3D) == 0 && FUN_00a9f760((int)player, 0x3E) == 0) {
        if (state->gearLevel() < 3) {
            startFrame = (float)(animTime(player) + 0.016666668f);
            motionId = 0x4D;
        }
        else {
            startFrame = (float)(animTime(player) + 0.016666668f);
            motionId = 0x4E;
        }
    }
    else {
        startFrame = (float)(animTime(player) + 0.016666668f);
        motionId = 0x4F;
    }
    playMotion(player, motionId, 5, 0.0f, 1.0f, 0x40200, startFrame, 1.0f);
    applySlot(player, 5, blend53E0(player));
    applyBlend(player, blend53E0(player));
}

// 00BA9BF0  FUN_00ba9bf0  size=535  [callgraph]
// __thiscall (ECX = DashStatePl0010): starts the upper-body dash motions once (context +0x78).
void FUN_00ba9bf0(int self, undefined4 *contextArg, int fromSafeCheck)
{
    using namespace DashStatePl0010_p1;

    DashStatePl0010 *state = (DashStatePl0010 *)self;
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>(ctx, 0x78) == 0) {  /* StateMachineContextPl0010+0x78: upper-body motions started */
        float frame = 0.0f;
        fld<int>(ctx, 0x78) = 1;
        state->startFlag94() = fromSafeCheck;
        if (fromSafeCheck == 0) {
            frame = (float)animTime(player);
        }
        if ((DAT_01bea090 & 0x80000000) == 0) {
            playMotion(player, 0x487, 4, 0.0f, 1.0f, 0x8040200, 0.0f, 1.0f);
            playMotion(player, 0x482, 3, 0.0f, 1.0f, 0x8000010, 0.0f, 1.0f);
        }
        else {
            playMotion(player, 0x483, 3, 0.083333336f, 1.0f, 0x8040200, 0.0f, 1.0f);
            float step;
            if (fromSafeCheck == 0) {
                step = 0.016666668f;
            }
            else {
                step = 0.0f;
            }
            playMotion(player, 0x4D, 5, 0.0f, 1.0f, 0x40200, step + frame, 1.0f);
            FUN_00a9e120((int)player, 3, 0x701, 0);
        }
        playMotion(player, 0x146, 2, 0.0f, 1.0f, 0x8040200, 0.0f, 1.0f);
        applyBlend(player, blend53E0(player));
        applySlot(player, 2, blend53E0(player));
        applySlot(player, 3, blend53E0(player));
        applySlot(player, 4, blend53E0(player));
        applySlot(player, 5, blend53E0(player));
    }
}

// 00BA9E10  FUN_00ba9e10  size=186  [callgraph]
// __thiscall (ECX = DashStatePl0010), ret 8: the gear-change motion for the current gear level
// (0x3B / 0x40 when FUN_00b8afd0 gives 3, else 0x3C / 0x41; 0 for other levels).  The second
// stack argument (callers pass gearLevel) is not read.
undefined4 FUN_00ba9e10(int self, undefined4 *contextArg, int unusedGearLevel)
{
    using namespace DashStatePl0010_p1;

    DashStatePl0010 *state = (DashStatePl0010 *)self;
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    undefined4 result[7];
    int side = FUN_00b8afd0((int)player, result);
    int gear = state->gearLevel();
    if (side == 3) {
        if (gear == 2) {
            return 0x3B;
        }
        if (gear == 3) {
            return 0x40;
        }
    }
    else {
        if (gear == 2) {
            return 0x3C;
        }
        if (gear == 3) {
            return 0x41;
        }
    }
    return 0;
}

// 00BA9ED0  FUN_00ba9ed0  size=544  [callgraph]
// __thiscall (ECX = DashStatePl0010): plays the "GearMax" (motion 0x40 / 0x41) or "GearMin"
// animation with its left/right lean variants; returns the motion handle.
undefined4 FUN_00ba9ed0(int self, undefined4 *contextArg, int motionId, float frames)
{
    using namespace DashStatePl0010_p1;

    DashStatePl0010 *state = (DashStatePl0010 *)self;
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (motionId == 0x40 || motionId == 0x41) {
        state->motionHandle() = FUN_00a9f560((int)player, (char *)"GearMax", frames * 0.016666668f, 0, 0);
        int leanAngle = (int)state->maxLean();  // FUN_00fdbc60: CRT float -> integer conversion
        FUN_00a9f600((int)player, -1, 0, 0, 0, 0, motionId, 0.083333336f, 0);
        FUN_00a9f600((int)player, -1, 0, 0, -leanAngle, 0, 0x45, 0.083333336f, 0);
        FUN_00a9f600((int)player, -1, 0, 0, leanAngle, 0, 0x46, 0.083333336f, 0);
        applySlot(player, state->motionHandle(), blend53E0(player));
        applyBlend(player, blend53E0(player));
    }
    else {
        state->motionHandle() = FUN_00a9f560((int)player, (char *)"GearMin", frames * 0.016666668f, 0, 0);
        int leanAngle = (int)state->maxLean();  // FUN_00fdbc60: CRT float -> integer conversion
        FUN_00a9f600((int)player, -1, 0, 0, 0, 0, motionId, 0.083333336f, 0);
        FUN_00a9f600((int)player, -1, 0, 0, -leanAngle, 0, 0x43, 0.083333336f, 0);
        FUN_00a9f600((int)player, -1, 0, 0, leanAngle, 0, 0x44, 0.083333336f, 0);
        applySlot(player, state->motionHandle(), blend53E0(player));
        applyBlend(player, blend53E0(player));
        if (state->startFlag94() != 0) {
            playMotion(player, 0x4D, 5, frames * 0.016666668f, 1.0f, 0x40200, 0.0f, 1.0f);
            applySlot(player, 5, blend53E0(player));
            applyBlend(player, blend53E0(player));
        }
    }
    return state->motionHandle();
}

// 00BAA0F0  DashStatePl0010::vf14  size=352  [class]
void DashStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94db0((int)player, 0x36) != 0) {
        undefined4 motionId = FUN_00ba9e10((int)this, contextArg, gearLevel());
        FUN_00ba9ed0((int)this, contextArg, motionId, 5.0f);
        gearUpAllowed() = 1;
    }
    if (FUN_00a94db0((int)player, 0x3D) != 0 || FUN_00a94db0((int)player, 0x3E) != 0) {
        undefined4 motionId = FUN_00ba9e10((int)this, contextArg, gearLevel());
        FUN_00ba9ed0((int)this, contextArg, motionId, 5.0f);
        gearUpAllowed() = 1;
    }
    if ((DAT_01bea090 & 0x400000) != 0) {
        int unit = fld<int>(player, 0x4268);  /* Pl0000+0x4268: object with floats at +0x548 / +0x550 */
        float value = fld<float>((void *)unit, 0x550);
        if (value != 0.0f && value <= 1.0f && fld<float>((void *)unit, 0x548) <= 1.0f) {
            float vec[4];  // vec[3] is never written (uninitialised in the original too)
            vec[0] = 0.0f;
            vec[2] = 0.0f;
            vec[1] = value;
            vcall<void>(player, 0x70, vec);  // Behavior::vf70 (takes one pointer argument)
            thiscall<void>(kPlayerFn_00A17A40, player);
        }
        if (*(int *)((char *)this + 0x24) == 0x25) {  /* StateMachineNode+0x24: requested state */
            *(int *)((char *)this + 0x24) = -1;
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BAA250  DashStatePl0010::vf20  size=404  [class]
// Leave: saves the gear into the context and stops the upper-body motion slots.
undefined4 DashStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    float savedCooldown = gearCooldown();
    float savedCharge = gearCharge();
    fld<int>(ctx, 0x40) = gearLevel();     /* StateMachineContextPl0010+0x40: saved gearLevel */
    fld<float>(ctx, 0x38) = savedCharge;   /* StateMachineContextPl0010+0x38: saved gearCharge */
    fld<int>(ctx, 0x34) = 1;               /* StateMachineContextPl0010+0x34: dash was running */
    fld<float>(ctx, 0x3C) = savedCooldown; /* StateMachineContextPl0010+0x3C: saved gearCooldown */
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    stopSlot(player, 5, 0.0f);
    FUN_00d835f0((int)player + 0x4250, 0x1C, 0);  /* Pl0000+0x4250: embedded array object */
    fld<int>(fld<void *>(player, 0x764), 0x118) = 0;  /* Pl0000+0x764: controller */
    if ((DAT_01bea090 & 0x80000000) != 0) {
        FUN_00a9e120((int)player, 3, 0x711, 0);
    }
    stopSlot(player, 4, 0.0f);
    stopSlot(player, 3, 0.0f);
    stopSlot(player, 2, 0.0f);
    if (*(int *)((char *)this + 0x24) == 0x11) {  /* StateMachineNode+0x24: requested state */
        if (fld<int>(player, 0xB74) == 0) {  /* Pl0000+0xB74: ? */
            if (FUN_00ba9990(contextArg) == 0) {
                FUN_00ba9bf0((int)this, contextArg, 0);
            }
        }
    }
    else if (fld<int>(ctx, 0x78) != 0) {  /* StateMachineContextPl0010+0x78: upper-body motions started */
        fld<int>(ctx, 0x78) = 0;
        fld<int>(player, 0xB74) = 1;
        stopSlot(player, 4, 0.0f);
        stopSlot(player, 3, 0.0f);
        stopSlot(player, 2, 0.0f);
        return 1;
    }
    return 1;
}

// 00BC9C70  DashStatePl0010::SafeCheck  size=1306  [class]
void DashStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: ? (skip when set) */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        if (fld<int>(fld<void *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: controller */
            fld<int>(fld<void *>(player, 0x764), 0x104) = 0;
        }
        fld<int>(fld<void *>(player, 0x764), 0x118) = 1;
        fld<float>(ctx, 0x70) = 0.0f;  /* StateMachineContextPl0010+0x70: ? */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        if ((DAT_01bea090 & 0x80000000) != 0) {
            FUN_00a9e120((int)player, 3, 0x711, 0);
        }
        fld<int>(player, 0x5074) = 0;  /* Pl0000+0x5074: ? */

        bool forceGear = false;
        for (unsigned int i = 0; i < sizeof(kForceGearActions) / sizeof(kForceGearActions[0]); i++) {
            if (FUN_00a95ce0((int)player, kForceGearActions[i]) != 0) {
                forceGear = true;
                break;
            }
        }
        if (!forceGear && *(int *)((char *)this + 0x2C) == 0x25) {  /* StateMachineNode+0x2C: previous state */
            forceGear = true;
        }

        if (forceGear) {
            undefined4 motionId = FUN_00ba9e10((int)this, contextArg, gearLevel());
            FUN_00ba9ed0((int)this, contextArg, motionId, 5.0f);
            gearUpAllowed() = 1;
        }
        else if (FUN_00a95ce0((int)player, 0xA4) != 0) {
            if (fld<int>(ctx, 0x34) == 0) {  /* StateMachineContextPl0010+0x34: dash was running */
                startIdleMotion(this, player);
            }
            else {
                int motionId = 0;
                if (gearLevel() == 2) {
                    motionId = 0x3B;
                }
                else if (gearLevel() == 3) {
                    motionId = 0x40;
                }
                FUN_00ba9ed0((int)this, contextArg, motionId, 5.0f);
            }
        }
        else if (FUN_00a95ce0((int)player, 0xA5) != 0) {
            if (fld<int>(ctx, 0x34) == 0) {
                startIdleMotion(this, player);
            }
            else {
                int motionId = 0;
                if (gearLevel() == 2) {
                    motionId = 0x3C;
                }
                else if (gearLevel() == 3) {
                    motionId = 0x41;
                }
                FUN_00ba9ed0((int)this, contextArg, motionId, 5.0f);
            }
        }
        else if (fld<int>(ctx, 0x34) == 0) {
            startIdleMotion(this, player);
        }
        else {
            undefined4 motionId = FUN_00ba9e10((int)this, contextArg, gearLevel());
            FUN_00ba9ed0((int)this, contextArg, motionId, 0.0f);
        }

        thiscall<void>(FUN_00a96070, player, -1, 0x4000, 1);
        if (fld<int>(player, 0xB74) == 0) {  /* Pl0000+0xB74: ? */
            if (FUN_00ba9990(contextArg) == 0) {
                FUN_00ba9bf0((int)this, contextArg, 1);
            }
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BDD4E0  DashStatePl0010::qteSafeCheck  size=4115  [class]
void DashStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace DashStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    // StateMachineContext+0x8 (read below as fld<float>(ctx, 0x8)): frame time
    fld<int>(player, 0xBF0) = 1;  /* Pl0000+0xBF0: ? */
    float posBuffer[4];
    float *pos = FUN_00a925a0((int)player, posBuffer);
    fld<float>(player, 0x4210) = pos[0];  /* Pl0000+0x4210: float[4] position copy */
    fld<float>(player, 0x4214) = pos[1];
    fld<float>(player, 0x4218) = pos[2];
    fld<float>(player, 0x421C) = pos[3];
    FUN_008e0b70(fld<int>(player, 0x764), 0);  /* Pl0000+0x764: controller */
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    applyBlend(player, blend53E0(player));

    // Gear-up while the dash input (Pl0000+0xCF8 inputHold & +0xE48 maskE48) is held.
    if (**(int **)((char *)player + 0x5070) == 0 && gearUpAllowed() != 0 &&  /* Pl0000+0x5070: pointer to a flag */
        (fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {
        float stick = fld<float>(fld<void *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: pad object; +0x14C stick magnitude */
        if (stick * stick < fld<float>(player, 0xD28)) {  /* Pl0000+0xD28: ? squared threshold */
            if (!(0.0f < gearCooldown())) {  // unordered (NaN) also takes this branch (fcom / jp)
                if (gearLevel() < 3) {
                    float charge = fld<float>(ctx, 0x8) + gearCharge();
                    gearCharge() = charge;
                    if (1.6666666f <= charge) {
                        gearLevel() = gearLevel() + 1;
                        MotionRequest request9;
                        FUN_00a8c930((int)player, 0, FUN_004039a0((int)&request9, 9, (int)player, 0));
                        MotionRequest request8;
                        FUN_00a8c930((int)player, 0, FUN_004039a0((int)&request8, 8, (int)player, 0));
                        undefined4 sideBuffer[4];
                        int motionId;
                        if (FUN_00b8afd0((int)player, sideBuffer) == 3) {
                            motionId = 0x3D;
                        }
                        else {
                            motionId = 0x3E;
                        }
                        FUN_00aa3f60((int)player, motionId);
                        gearCooldown() = 1.0f;
                        gearUpAllowed() = 0;
                        gearCharge() = 0.0f;
                        applySlot(player, 0, blend53E0(player));
                        applyBlend(player, blend53E0(player));
                    }
                }
            }
            else {
                float cooldown = gearCooldown() - fld<float>(ctx, 0x8);
                gearCooldown() = cooldown;
                if (cooldown <= 0.0f) {
                    gearCooldown() = 0.0f;
                }
            }
        }
    }

    // Stick flick: a quick reverse of the stick direction requests state 0x23.
    float stickVec[4];  // stickVec[3] is never written (uninitialised in the original too)
    stickVec[2] = fld<float>(player, 0xD0C) * -0.001f;  /* Pl0000+0xD08 / +0xD0C: stick x / y */
    stickVec[0] = fld<float>(player, 0xD08) * 0.001f;
    stickVec[1] = 0.0f;
    if (FUN_00a9f760((int)player, 0x36) == 0 &&
        (stickVec[0] != 0.0f || stickVec[1] != 0.0f || stickVec[2] != 0.0f) &&
        (prevStick()[0] != 0.0f || prevStick()[1] != 0.0f || prevStick()[2] != 0.0f)) {
        if (flickActive() == 0 &&
            0.15f <= sqrt(prevStick()[1] * prevStick()[1] + prevStick()[0] * prevStick()[0] +
                           prevStick()[2] * prevStick()[2]) -
                     sqrt(stickVec[2] * stickVec[2] + stickVec[1] * stickVec[1] +
                           stickVec[0] * stickVec[0])) {
            flickStick()[0] = prevStick()[0];
            flickStick()[1] = prevStick()[1];
            flickStick()[2] = prevStick()[2];
            flickStick()[3] = prevStick()[3];
            flickActive() = 1;
            flickTimer() = 0.0f;
        }
        if (flickActive() != 0) {
            float elapsed = fld<float>(ctx, 0x8) + flickTimer();
            flickTimer() = elapsed;
            if (!(elapsed >= 0.083333336f)) {  // unordered (NaN) also takes this branch
                float lengthSq = stickVec[2] * stickVec[2] + stickVec[1] * stickVec[1] + stickVec[0] * stickVec[0];
                if (0.7f <= sqrt(lengthSq)) {
                    float dirNow[4];
                    normalizeInto(dirNow, stickVec, lengthSq);
                    float *start = flickStick();
                    float startSq = start[2] * start[2] + start[0] * start[0] + start[1] * start[1];
                    float dirStart[4];
                    normalizeInto(dirStart, start, startSq);
                    float dot = dirStart[2] * dirNow[2] + dirStart[1] * dirNow[1] + dirStart[0] * dirNow[0];
                    if (dot <= -0.5f) {
                        FUN_00d82510((int)this, 0x23, 100);
                    }
                }
            }
            else {
                flickActive() = 0;
            }
        }
    }
    prevStick()[0] = stickVec[0];
    prevStick()[1] = stickVec[1];
    prevStick()[2] = stickVec[2];
    prevStick()[3] = stickVec[3];

    // Camera angles (skipped when the flick state 0x23 is requested).
    if (*(int *)((char *)this + 0x24) != 0x23) {  /* StateMachineNode+0x24: requested state */
        if (FUN_00a9f760((int)player, 0x36) == 0 && FUN_00a9f760((int)player, 0x37) == 0) {
            int pad = fld<int>(player, 0x40D4);  /* Pl0000+0x40D4: pad / camera settings */
            float yaw = fld<float>((void *)pad, 0x154);
            float pitch = fld<float>((void *)pad, 0x16C);
            fld<float>(player, 0x4180) = fld<float>((void *)pad, 0x168);
            fld<float>(player, 0x417C) = pitch * 0.017453292f;
            fld<float>(player, 0x4184) = yaw * 0.017453292f;
        }
        else {
            int ownHandle = fld<int>(player, 0x4F0);  /* Pl0000+0x4F0: handle */
            fld<float>(player, 0x4180) = 0.3f;
            fld<float>(player, 0x417C) = 3.1415927f;
            fld<float>(player, 0x4184) = 0.0f;
            float searchPosBuffer[4];
            float *searchPos = FUN_00a925a0((int)player, searchPosBuffer);
            int found = thiscall<int>(FUN_00c272e0, DAT_01bebd80, ownHandle, searchPos, 0.2f, 3.0f, 1.0471976f);
            if (found != 0) {
                void *target = (void *)FUN_00a7c8a0(found);
                if (vcall<int>(target, 0x14C, 0x24, fld<int>(player, 0x4F0)) != 0) {
                    int handlePtr = FUN_00a7c7f0(found);
                    undefined4 targetHandle;
                    FUN_00a7c940(&targetHandle, (undefined4 *)handlePtr);
                    FUN_00a7c960((undefined4 *)(ctx + 0x90), &targetHandle);  /* StateMachineContextPl0010+0x90: target handle */
                    int modelId = fld<int>((void *)FUN_00a7c8a0(found), 0x4B4);  /* cObj+0x4B4: ? object id */
                    switch (modelId) {
                    case 0x20010:
                    case 0x20140:
                    case 0x20141:
                    case 0x20142:
                    case 0x20143:
                    case 0x20144:
                    case 0x20145:
                    case 0x20150:
                    case 0x20151:
                    case 0x20152:
                    case 0x20153:
                    case 0x20160:
                    case 0x20161:
                    case 0x20170:
                    case 0x20171:
                        FUN_00d82510((int)this, 6, 100);
                        break;
                    }
                }
            }
        }
        FUN_00b8af00((int)player);
    }

    // Stop timer while the dash input is released.
    bool timerExpired = false;
    bool inputHeld = false;
    if ((fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {
        float stick = fld<float>(fld<void *>(player, 0x40D4), 0x14C);
        if (stick * stick < fld<float>(player, 0xD28)) {
            inputHeld = true;
        }
    }
    if (!inputHeld) {
        if (stopTimer() <= 0.0f) {
            stopTimer() = 0.16666667f;
        }
        inputHeldTime() = 0.0f;
    }
    else {
        stopTimer() = 0.0f;
        inputHeldTime() = inputHeldTime() + 0.016666668f;
    }
    float held = inputHeldTime();
    if (held >= 1.0f) {
        field98() = 0;
        stopping() = 0;
    }
    if (0.0f < stopTimer() || field98() != 0 || stopping() != 0) {
        bool nearEnd = true;
        stopping() = 1;
        float remaining = stopTimer() - fld<float>(ctx, 0x8);
        stopTimer() = remaining;
        if (fld<int>(player, 0x4254) == 0 ||  /* Pl0000+0x4250 / +0x4254: ? */
            !(fld<float>(fld<void *>(player, 0x764), 0xFC) >= fld<float>(player, 0x4250))) {  // unordered counts as below
            nearEnd = false;
        }
        if (remaining <= 0.0f || nearEnd) {
            FUN_00bb8d00(contextArg, (int)this, 0x19, 0, 1);
        }
    }
    if (FUN_008e2740(fld<int>(player, 0x764)) == 0 &&
        (fld<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ? */
         !(fld<float>(fld<void *>(player, 0x40D4), 0x160) > fld<float>(player, 0x41E4)))) {  // unordered counts as <=
        FUN_00d82510((int)this, 0xE, 0x50);
    }

    // Body lean from the turn rate, clamped to +-maxLean and smoothed.
    int pad = fld<int>(player, 0x40D4);
    float angle = fld<float>(player, 0x9F0) * 57.29578f;  /* Pl0000+0x9F0: turn angle (radians) */
    if (!(angle >= fld<float>((void *)pad, 0x154))) {  // unordered also takes this branch
        if (angle <= -fld<float>((void *)pad, 0x154)) {
            angle = angle + fld<float>((void *)pad, 0x154);
        }
    }
    else {
        angle = angle - fld<float>((void *)pad, 0x154);
    }
    if (angle <= -maxLean()) {
        angle = -maxLean();
    }
    if (maxLean() <= angle) {
        angle = maxLean();
    }
    float newLean = (angle - lean()) * 0.2f * fld<float>(player, 0x910) + lean();  /* Pl0000+0x910: ? time scale */
    thiscall<void>(FUN_00a947e0, player, 0, 0.0f, newLean, 0.0f);
    lean() = newLean;

    if (fld<char>(player, 0x1078) != '\x05' && 0.0f < upperTimer()) {  /* Pl0000+0x1078: ? */
        float left = upperTimer() - fld<float>(ctx, 0x8);
        upperTimer() = left;
        if (left <= 0.0f) {
            upperTimer() = -1.0f;
            timerExpired = true;
        }
    }
    if (fld<int>(player, 0x2C00) != 0) {  /* Pl0000+0x2C00: ? */
        upperTimer() = -1.0f;
        timerExpired = true;
    }

    // Upper-body motion allowed: Pl0000+0xCFC inputTrigger bit 6, unless blocked.
    unsigned int upperInput = fld<unsigned int>(player, 0xCFC) >> 6 & 1;
    if (FUN_00a9f760((int)player, 0x36) != 0 || FUN_00a9f760((int)player, 0x37) != 0) {
        upperInput = 0;
    }
    void *game = (void *)FUN_00c13920();
    if ((vcall<int>(game, 0x68) == 5 && fld<int>(player, 0x1400) != 0) || ((unsigned char)DAT_01bea094 & 0x80) != 0) {  /* Pl0000+0x1400: ? */
        upperInput = 0;
    }
    int eventKey[3];
    int *key = FUN_00e678d0(eventKey, 2, 0x444, -1);
    if (FUN_00e7a6e0((undefined4)key) != 0) {
        upperInput = 0;
    }

    if (timerExpired) {
        if (FUN_00ba9990(contextArg) == 0) {
            FUN_00ba9bf0((int)this, contextArg, 0);
        }
        goto updateMotions;
    }
    if (FUN_00a94db0((int)player, 0x29A) == 0) {
        if (FUN_00a94db0((int)player, 0x29B) != 0) {
            if (upperInput == 0) {
                fld<int>(player, 0xB74) = 0;  /* Pl0000+0xB74: ? */
                fld<int>(ctx, 0x78) = 0;      /* StateMachineContextPl0010+0x78: upper-body motions started */
                goto upperReleased;
            }
            playMotion(player, 0x29A, 4, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
            playMotion(player, 0x4D, 5, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
            FUN_00ba9a40((int)this, contextArg);
            upperTimer() = -1.0f;
            fld<int>(player, 0xB74) = 0;
            fld<int>(ctx, 0x78) = 0;
            goto upperStarted;
        }
        if (upperInput == 0) {
upperEndCheck:
            if (FUN_00a94db0((int)player, 0x482) != 0 || FUN_00a94db0((int)player, 0x483) != 0) {
                fld<int>(ctx, 0x78) = 0;
                fld<int>(player, 0xB74) = 1;
                stopSlot(player, 2, 0.0f);
                stopSlot(player, 3, 0.1f);
                stopSlot(player, 4, 0.0f);
                stopSlot(player, 5, 0.1f);
                if ((DAT_01bea090 & 0x80000000) != 0) {
                    FUN_00a9e120((int)player, 3, 0x711, 0);
                }
            }
        }
        else if (FUN_00a9f760((int)player, 0x29A) == 0) {
            if (FUN_00a8c760((int)player, 1) || FUN_00a9f760((int)player, 0x29B) == 0) {
                playMotion(player, 0x29A, 4, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
                playMotion(player, 0x146, 3, 0.0f, 1.0f, 0x8040200, 0.0f, 1.0f);
                playMotion(player, 0x4D, 5, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
upperSwitched:
                FUN_00ba9a40((int)this, contextArg);
                upperTimer() = -1.0f;
                fld<int>(player, 0xB74) = 0;
                fld<int>(ctx, 0x78) = 0;
                if ((DAT_01bea090 & 0x80000000) != 0) {
                    FUN_00a9e120((int)player, 3, 0x711, 0);
                }
                applyBlend(player, blend53E0(player));
                applySlot(player, 3, blend53E0(player));
                applySlot(player, 4, blend53E0(player));
            }
        }
        else {
            if (FUN_00a9f760((int)player, 0x29B) != 0) goto upperEndCheck;
            if (FUN_00a8c760((int)player, 1) || FUN_00a9f760((int)player, 0x29A) == 0) {
                playMotion(player, 0x29B, 4, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
                playMotion(player, 0x146, 3, 0.0f, 1.0f, 0x8040200, 0.0f, 1.0f);
                playMotion(player, 0x4D, 5, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
                goto upperSwitched;
            }
        }
    }
    else {
        if (upperInput == 0) {
            fld<int>(player, 0xB74) = 0;
            fld<int>(ctx, 0x78) = 0;
upperReleased:
            if ((DAT_01bea090 & 0x80000000) != 0) {
                FUN_00a9e120((int)player, 3, 0x711, 0);
            }
            upperTimer() = 2.0f;
            stopSlot(player, 4, 0.083333336f);
            stopSlot(player, 5, 0.083333336f);
            goto updateMotions;
        }
        playMotion(player, 0x29B, 4, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
        playMotion(player, 0x4D, 5, 0.06666667f, 1.0f, 0x8040200, 0.0f, 1.0f);
        FUN_00ba9a40((int)this, contextArg);
        upperTimer() = -1.0f;
        fld<int>(player, 0xB74) = 0;
        fld<int>(ctx, 0x78) = 0;
upperStarted:
        if ((DAT_01bea090 & 0x80000000) != 0) {
            FUN_00a9e120((int)player, 3, 0x711, 0);
        }
        applySlot(player, 4, blend53E0(player));
        applyBlend(player, blend53E0(player));
    }

updateMotions:
    if (thiscall<int>(FUN_00a955e0, player, 0x36, 16.0f) != 0) {
        requestWithVector(player, 0x5B0);  /* Pl0000+0x5B0: float[4] */
    }
    else if (thiscall<int>(FUN_00a955e0, player, 0x37, 16.0f) != 0) {
        requestWithVector(player, 0x5C0);  /* Pl0000+0x5C0: float[4] */
    }
    if (FUN_00a9f760((int)player, 0x29A) == 0 && FUN_00a9f760((int)player, 0x29B) == 0) {
        FUN_00bb8ae0(contextArg, (undefined4)this, 100);
    }
    void *area = (void *)FUN_00c1bd10();
    int areaResult[3];
    int *hit = vcall<int *>(area, 0x8, areaResult, (char *)player + 0x40);  /* Pl0000+0x40: position */
    fld<int>(ctx, 0xC4) = hit[0];  /* StateMachineContextPl0010+0xC4..0xCC: ? */
    fld<int>(ctx, 0xC8) = hit[1];
    fld<int>(ctx, 0xCC) = hit[2];
    if (hit[1] != 0 && (hit[0] != 0 || hit[2] != 0) && hit[1] == 1) {
        FUN_00d82510((int)this, 0x1D, 100);
    }
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
