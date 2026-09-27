// src/player/pl0010/state/UnevenCliffOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "UnevenCliffOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e84[];  // UnevenCliffOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace UnevenCliffOverJumpStatePl0010_p1 {

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

// __thiscall call of a function whose functions.h prototype does not fit the call site
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __cdecl call of a function whose functions.h prototype lost arguments
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// ctx when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *ctx)
{
    if (ctx == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(ctx, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (char *)ctx : 0;
}

// obj when it is a Pl0000 (type record from vftable slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContext+0xC: owner; ctx is not null-checked).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// State ids of the Pl0010 state machine (see StateMachineFactoryPl0010::vf00)
const int kStateLanding = 0x13;  // LandingStatePl0010

// Pl0000+0x764: motion controller ?; sets its mode (+0x104) to 1 and clears the float at
// (+0xD0)->+4 when it was not 1 already.
inline void enableController(Pl0000 *player)
{
    char *controller = fld<char *>(player, 0x764);
    if (fld<int>(controller, 0x104) != 1) {
        fld<int>(controller, 0x104) = 1;
        fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
    }
}

// Take-off action 0x9F played at motionSpeed and scaled by (1, motionScaleY, motionScaleZ).
inline void startScaledTakeOff(UnevenCliffOverJumpStatePl0010 *self, Pl0000 *player)
{
    int handle = FUN_00aa3f60((int)player, 0x9F);
    thiscall<void>(FUN_00a96030, player, handle, self->motionSpeed());
    float scale[3];
    scale[0] = 1.0f;
    scale[1] = self->motionScaleY();
    scale[2] = self->motionScaleZ();
    FUN_00a95ff0((int)player, (undefined4 *)scale);
    enableController(player);
}

// motionScaleZ = distance / Pl0000 parameter +0x90 and motionSpeed = 1 / motionScaleZ (at least
// 0.8).  The x87 code keeps the unrounded quotient for the reciprocal and its comparison.
inline void setScaleZ(UnevenCliffOverJumpStatePl0010 *self, double distance, char *params)
{
    double ratio = distance / fld<float>(params, 0x90);
    self->motionScaleZ() = (float)ratio;
    double speed = 1.0 / ratio;
    self->motionSpeed() = (float)speed;
    if (speed < 0.8f) {
        self->motionSpeed() = 0.8f;
    }
}

}  // namespace UnevenCliffOverJumpStatePl0010_p1

// 00B82900  UnevenCliffOverJumpStatePl0010::vf08  size=43  [class]
// Enter.
bool UnevenCliffOverJumpStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    keepRunning() = 0;
    runStartFrame() = 0.0f;
    keepRunLatched() = 0;
    return true;
}

// 00B82930  UnevenCliffOverJumpStatePl0010::thunk_vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base one).
void UnevenCliffOverJumpStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B82940  UnevenCliffOverJumpStatePl0010::vf24  size=19  [class]
bool UnevenCliffOverJumpStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82980  UnevenCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined *UnevenCliffOverJumpStatePl0010::vf00()
{
    return DAT_01be9e84;
}

// 00B91310  UnevenCliffOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *UnevenCliffOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB21F0  UnevenCliffOverJumpStatePl0010::SafeCheck  size=491  [class]
// First update: saves the camera angles, derives the take-off scale / speed from the context's
// jump data and starts take-off 0x9F (or 0x9E), then picks the landing action.
void UnevenCliffOverJumpStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace UnevenCliffOverJumpStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        fld<int>(player, 0x4170) = 1;                              /* Pl0000+0x4170: ? (1 while this state runs) */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        char *jump = fld<char *>(fld<char *>(ctx, 0xC0), 4);  /* StateMachineContextPl0010+0xC0 -> +4: ? jump data */
        cliffHeight() = fld<float>(jump, 0x1D4);
        motionScaleY() = fld<float>(jump, 0x1CC) / fld<float>(fld<char *>(player, 0x40D4), 0x9C);  /* Pl0000+0x40D4: parameters ? */
        setScaleZ(this, fld<float>(jump, 0x1C8), fld<char *>(player, 0x40D4));
        if (!(fld<float>(player, 0x4250) >= 0.5f)) {  /* Pl0000+0x4250: ? (NaN takes this branch too) */
            startScaledTakeOff(this, player);
        }
        else {
            FUN_00aa3f60((int)player, 0x9E);
            setScaleZ(this, (double)fld<float>(jump, 0x1C8) - 0.5f, fld<char *>(player, 0x40D4));
        }
        int flag = fld<int>(jump, 0x1D8);
        cliffFlag() = flag;
        landingMotion() = 0xA0;
        if (flag != 0 && cliffHeight() >= 2.0f) {
            landingMotion() = 0xA1;
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB23E0  UnevenCliffOverJumpStatePl0010::vf18  size=181  [class]
// While landing action 0xA0 plays (past frame 0x14) with no state requested: request the landing
// state when FUN_00b7e530 says so or the ground is near (Pl0000+0x41E4 <= 0.25).
undefined4 UnevenCliffOverJumpStatePl0010::vf18(undefined4 context)
{
    using namespace UnevenCliffOverJumpStatePl0010_p1;

    undefined4 *contextArg = (undefined4 *)context;
    Pl0000 *player = playerOf(asContextPl0010(contextArg));
    if (landingMotion() == 0xA0) {
        if (FUN_00a95270((int)player, 0xA0, 0x14) != 0 &&
            *(int *)((char *)this + 0x24) < 0) {  /* StateMachineNode+0x24: requested state (-1: none) */
            if (FUN_00b7e530((int)player) ||
                (fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.25f)) {  /* Pl0000+0x41E0: ground hit, +0x41E4: ground distance ? */
                FUN_00d82510((int)this, kStateLanding, 0x32);
            }
        }
    }
    return StateMachineNode::vf18(context);
}

// 00BB24A0  UnevenCliffOverJumpStatePl0010::vf20  size=171  [class]
// Leave: restores the camera angles.
undefined4 UnevenCliffOverJumpStatePl0010::vf20(undefined4 *context)
{
    using namespace UnevenCliffOverJumpStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = playerOf(asContextPl0010(context));
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<int>(player, 0x4170) = 0;
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BE0E30  UnevenCliffOverJumpStatePl0010::qteSafeCheck  size=888  [class]
void UnevenCliffOverJumpStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace UnevenCliffOverJumpStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);

    // 0x9E ended: continue with the scaled take-off 0x9F.
    if (FUN_00a94db0((int)player, 0x9E) != 0) {
        startScaledTakeOff(this, player);
    }
    if (FUN_00a94db0((int)player, 0x9F) == 0) {
        if (FUN_00a94db0((int)player, landingMotion()) != 0 &&
            cdeclcall<int>(FUN_00bb90c0, context, this) == 0) {
            FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));  /* Pl0000+0x560: ? */
        }
    }
    else {
        // 0x9F ended: start the landing action.
        if (keepRunning() != 0) {
            landingMotion() = 0xA2;
        }
        FUN_00aa3f60((int)player, landingMotion());
    }

    if (landingMotion() == 0xA0 && FUN_00a95270((int)player, 0xA0, 0x14) != 0 &&
        ((fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.36f) ||  /* Pl0000+0x41E0 / +0x41E4: ground ? */
         FUN_008e2740(fld<int>(player, 0x764)) ||
         (fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.25f))) {
        FUN_00d82510((int)this, kStateLanding, 0x32);
    }

    if (FUN_00a95030((int)player, 0xA0, 0, 5) != 0 && cliffHeight() >= 0.35f) {
        int result = ((int (__fastcall *)(int))FUN_00b8b610)((int)player);
        if (result != 0 && result != 0xC) {
            runStartFrame() = (float)FUN_00a95980((int)player, 0xA0);
            keepRunning() = 1;
            keepRunLatched() = 1;
        }
    }

    if (FUN_00a9f760((int)player, 0xA0) != 0 || FUN_00a9f760((int)player, 0xA1) != 0) {
        char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameters ? */
        float pitchDeg = fld<float>(params, 0x174);
        fld<float>(player, 0x4180) = fld<float>(params, 0x170);
        fld<float>(player, 0x417C) = pitchDeg * 0.017453292f;  // degrees -> radians
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
        if (keepRunning() != 0) {
            landingMotion() = 0xA2;
            thiscall<int>(FUN_00aa42d0, player, 0xA2, runStartFrame());
        }
    }

    if (FUN_00a9f760((int)player, 0x9E) != 0 || FUN_00a9f760((int)player, 0x9F) != 0 ||
        FUN_00a95030((int)player, 0xA0, 0, 5) != 0 || FUN_00a95030((int)player, 0xA1, 0, 5) != 0) {
        double speed = fld<float>(fld<char *>(player, 0x40D4), 0x14C);
        // (unordered counts as "not slower")
        if (!(speed * speed < fld<float>(player, 0xD28)) || keepRunLatched() != 0) {  /* Pl0000+0xD28: ? squared speed threshold */
            keepRunning() = 1;
        }
        else {
            keepRunning() = 0;
        }
    }

    if (*(int *)((char *)this + 0x24) < 0 &&  /* StateMachineNode+0x24: requested state (-1: none) */
        ((FUN_00a95ce0((int)player, 0x9F) == 0 && FUN_00a95ce0((int)player, 0x9E) == 0) ||
         thiscall<int>(FUN_00a95120, player, 0, 5) != 0)) {
        FUN_00bd3620(context, (int)this, 100);
    }
    FUN_00bd3730(context, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(context, (undefined4)this, 0xD);
    FUN_00bd3910(context, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
