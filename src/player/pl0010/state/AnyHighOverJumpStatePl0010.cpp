// src/player/pl0010/state/AnyHighOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AnyHighOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll import (called through the thunk at 0x01436F2C)
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
// CRT (the compiler emitted fabs / fcos / fsin inline)
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl cos(double x);
extern "C" double __cdecl sin(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9de0[];  // AnyHighOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace AnyHighOverJumpStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

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

// virtual call through the vftable slot at byte offset `slot`
template <class R, class... A> inline R vcall(const void *obj, unsigned int slot, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return (*(Fn *)(*(char *const *)obj + slot))(obj, args...);
}

// Type-record virtual (no arguments besides `this`) at byte offset `slot` of obj's vftable.
typedef undefined *(__thiscall *TypeRecordFn)(const void *self);
inline undefined *typeRecord(const void *obj, int slot) { return (*(TypeRecordFn **)obj)[slot / 4](obj); }

// Checked downcasts (0 when the object is null or of another type).
inline char *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, typeRecord(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}
inline char *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, typeRecord(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (char *)obj : 0;
}

// The player that owns the state machine: context (StateMachineContextPl0010) +0xC, checked
// against Pl0000.  The context is not null-checked before the load (as in the original).
inline char *ownerOf(const char *checkedContext)
{
    return asPl0000(at<void *>(checkedContext, 0xC));  /* StateMachineContext+0xC: owner */
}

}  // namespace AnyHighOverJumpStatePl0010_p1

// 00B80C30  AnyHighOverJumpStatePl0010::vf08  size=55  [class]
bool AnyHighOverJumpStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    time() = 0.0f;
    canLand() = 0;
    field50() = 0;
    interrupted() = 0;
    speedScale() = 0.8f;
    return true;
}

// 00B80C70  AnyHighOverJumpStatePl0010::vf18  size=5  [class]
// (jmp 0x00D822E0; Ghidra showed the inlined body of StateMachineNode::vf18)
undefined4 AnyHighOverJumpStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B80C80  AnyHighOverJumpStatePl0010::vf24  size=19  [class]
bool AnyHighOverJumpStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B80CC0  AnyHighOverJumpStatePl0010::vf00  size=6  [class]
undefined *AnyHighOverJumpStatePl0010::vf00()
{
    return DAT_01be9de0;
}

// 00B90BE0  AnyHighOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *AnyHighOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA88B0  AnyHighOverJumpStatePl0010::SafeCheck  size=372  [class]
// Enter: motion 0xB3, motion controller mode 1, saves +0x417C..+0x4184 and the controller values
// +0x1C0 / +0x1CC, then computes the launch for a 3.0 high arc.
void AnyHighOverJumpStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace AnyHighOverJumpStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *checkedContext = asContext(context);
        char *player = ownerOf(checkedContext);
        thiscall<int>(FUN_00aa3f60, player, 0xb3);
        char *controller = at<char *>(player, 0x764);  /* Pl0000+0x764: motion controller ? */
        if (at<int>(controller, 0x104) != 1) {
            at<int>(controller, 0x104) = 1;
            at<float>(at<char *>(controller, 0xD0), 4) = 0.0f;
        }
        /* Pl0000+0x417C..+0x4184: ?, saved into +0x4188..+0x4190 */
        at<float>(player, 0x418C) = at<float>(player, 0x4180);
        at<float>(player, 0x4188) = at<float>(player, 0x417C);
        at<float>(player, 0x4190) = at<float>(player, 0x4184);
        savedController1C0() = at<unsigned int>(at<char *>(player, 0x764), 0x1C0);
        savedController1CC() = at<unsigned int>(at<char *>(player, 0x764), 0x1CC);
        thiscall<void>(FUN_008e0b70, at<char *>(player, 0x764), 0);
        thiscall<void>(FUN_008e0ba0, at<char *>(player, 0x764), 0);
        float height = at<float>(at<char *>(player, 0x764), 0xFC) + 3.0f;
        /* StateMachineContext+0xC0: ? (+0x4 -> +0x548) */
        if (at<float>(at<char *>(at<char *>(checkedContext, 0xC0), 4), 0x548) < 1.0f) {
            speedScale() = 0.5f;
        }
        FUN_00d83250(&launchAngle(), &launchSpeed(), 3.0f, height,
                     (float)fabs(at<float>(at<char *>(player, 0x764), 0xF4)));
        lastForward() = 0.0f;
        lastUp() = 0.0f;
        startY() = at<float>(player, 0x44);  /* Pl0000+0x44: position y */
        gravityDrop() = 0.0f;
    }
    StateMachineNode::SafeCheck(context);
}

// 00BA8A30  AnyHighOverJumpStatePl0010::vf20  size=200  [class]
// Leave: motion controller mode 0, restores +0x417C..+0x4184 and the controller values.
undefined4 AnyHighOverJumpStatePl0010::vf20(undefined4 *context)
{
    using namespace AnyHighOverJumpStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    char *player = ownerOf(asContext(context));
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<float>(player, 0x4180) = at<float>(player, 0x418C);
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    thiscall<void>(FUN_008e0b70, at<char *>(player, 0x764), savedController1C0());
    thiscall<void>(FUN_008e0ba0, at<char *>(player, 0x764), savedController1CC());
    return 1;
}

// 00BC94A0  AnyHighOverJumpStatePl0010::vf14  size=288  [class]
void AnyHighOverJumpStatePl0010::vf14(undefined4 *context)
{
    using namespace AnyHighOverJumpStatePl0010_p1;
    char *checkedContext = asContext(context);
    char *player = ownerOf(checkedContext);
    if (thiscall<undefined4>(FUN_00a94db0, player, 0xb3) != 0 ||
        thiscall<undefined4>(FUN_00a94db0, player, 0xb4) != 0) {
        int motion = thiscall<int>(FUN_00aa3f60, player, 0xb5);
        thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);  // (ret 0xc: three stack arguments)
    }
    if (canLand() != 0) {
        at<int>(checkedContext, 0x30) = 1;  /* StateMachineContext+0x30: ? */
        /* Pl0000+0x41E0: ground hit, +0x41E4: distance to it (Pl0010::GroundTest) */
        if ((at<int>(player, 0x41E0) != 0 && at<float>(player, 0x41E4) <= 0.36f) ||
            FUN_008e2740(at<int>(player, 0x764))) {
            thiscall<void>(FUN_00d82510, this, 0x13, 100);
        }
    }
    if (thiscall<undefined4>(FUN_00a94db0, player, 0xb5) != 0 &&
        cdeclcall<undefined4>(FUN_00bb90c0, context, this) != 0) {
        /* Pl0000+0x560: float[4] */
        thiscall<void>(FUN_008e0c00, at<char *>(player, 0x764), (char *)player + 0x560);
    }
    StateMachineNode::vf14(context);
}

// 00BDC9E0  AnyHighOverJumpStatePl0010::qteSafeCheck  size=604  [class]
// Per frame while the jump motion (0xB5) plays: advances time by the context's frame time,
// computes the new forward / upward offsets of the arc (minus gravity), transforms the step by
// the player's matrix (FUN_00ddc1d0 of +0x90) and moves the player through its vf70.
void AnyHighOverJumpStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace AnyHighOverJumpStatePl0010_p1;
    float step[4];
    float rotation[16];

    char *checkedContext = asContext(context);
    char *player = ownerOf(checkedContext);
    thiscall<void>(FUN_008e0b70, at<char *>(player, 0x764), 0);
    thiscall<void>(FUN_008e0ba0, at<char *>(player, 0x764), 0);
    if (thiscall<undefined4>(FUN_00a9f760, player, 0xb5) != 0) {
        char *params = at<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter block */
        float degrees = at<float>(params, 0x174);
        at<float>(player, 0x4180) = at<float>(params, 0x170);
        at<float>(player, 0x417C) = degrees * 0.017453292f;  // degrees -> radians
        at<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    float scale = at<float>(at<char *>(player, 0x40D4), 0xF8) * speedScale();
    /* StateMachineContext+0x8: frame time */
    if (thiscall<undefined4>(FUN_00a9f760, player, 0xb5) != 0) {
        time() = at<float>(checkedContext, 8) + time();
    }
    /* Pl0000+0x4268: ? (+0x94 / +0x24 interrupt flags) */
    if (at<int>(at<char *>(player, 0x4268), 0x94) != 0) {
        interrupted() = 1;
    }
    if (at<int>(at<char *>(player, 0x4268), 0x24) != 0) {
        interrupted() = 1;
    }
    if (thiscall<undefined4>(FUN_00a9f760, player, 0xb5) != 0 &&
        thiscall<undefined4>(FUN_00a95270, player, 0xb5, 8) != 0) {
        FUN_00bd3620(context, (int)this, 100);
    }
    if (at<int>(this, 0x24) < 0 &&  /* StateMachineNode+0x24: ? */
        thiscall<undefined4>(FUN_00a9f760, player, 0xb5) != 0) {
        // (x87: the intermediates stay in extended precision; double is the closest C++ form)
        double forward = cos(launchAngle()) * launchSpeed() * time() * scale;
        double up = sin(launchAngle()) * launchSpeed() * time() * scale;
        double forwardStep = forward - lastForward();
        float frameTime = at<float>(checkedContext, 8);
        /* motion controller +0xF4: gravity ? */
        double drop = (double)at<float>(at<char *>(player, 0x764), 0xF4) * frameTime * frameTime * scale * scale +
                      gravityDrop();
        gravityDrop() = (float)drop;
        double upStep = (up - lastUp()) + drop;
        if (time() >= 0.33333334f) {
            canLand() = 1;
        }
        lastForward() = (float)forward;
        lastUp() = (float)up;
        step[0] = 0.0f;
        step[1] = (float)upStep;
        step[2] = (float)forwardStep;
        FUN_00ddc1d0((undefined4 *)rotation, (float *)(player + 0x90), 5);  /* Pl0000+0x90: rotation */
        D3DXVec3TransformNormal(step, step, rotation);
        vcall<void>(player, 0x70, step);  // Pl0000 vf70: move by `step`
    }
    FUN_00bd3730(context, (undefined4)this, 0xd, 0xc);
    FUN_00bd37f0(context, (undefined4)this, 0xd);
    FUN_00bd3910(context, (undefined4)this, 0xb, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
