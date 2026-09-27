// src/player/pl0010/state/CatLeapStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "CatLeapStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9dfc[];  // CatLeapStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

// CRT (the compiler emitted fabs / fcos / fsin inline) and D3DX
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl cos(double x);
extern "C" double __cdecl sin(double x);
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

namespace CatLeapStatePl0010_p1 {

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

// __thiscall call (ECX = self) of a function whose functions.h prototype lost arguments
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
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

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

}  // namespace CatLeapStatePl0010_p1

// 00B810A0  CatLeapStatePl0010::vf08  size=43  [class]
// Enter.
bool CatLeapStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    landing() = 0;
    airTime() = 0.0f;
    airborne() = 0;
    return true;
}

// 00B810D0  CatLeapStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 CatLeapStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B810E0  CatLeapStatePl0010::vf24  size=19  [class]
bool CatLeapStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81120  CatLeapStatePl0010::vf00  size=6  [class]
undefined *CatLeapStatePl0010::vf00()
{
    return DAT_01be9dfc;
}

// 00B90CC0  CatLeapStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *CatLeapStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA9690  CatLeapStatePl0010::SafeCheck  size=291  [class]
// First update: saves the camera angles, starts action 0xCA and sets up the jump arc.
void CatLeapStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace CatLeapStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa9280((int)player, 0xCA);
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: movement controller (+0xF4 / +0xFC floats) */
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
        char *target = fld<char *>(fld<char *>(ctx, 0xC0), 4);  /* StateMachineContextPl0010+0xC0: object whose +4 has floats at +0x5BC */
        FUN_00d83250(&jumpAngle(), &jumpSpeed(),
                     fld<float>(controller, 0xFC) + fld<float>(controller, 0xFC) +
                         fld<float>(fld<char *>(player, 0x40D4), 0x114),  /* Pl0000+0x40D4: parameter table */
                     fld<float>(target, 0x5BC) + fld<float>(controller, 0xFC),
                     (float)fabs(fld<float>(controller, 0xF4)));
        jumpAngle() = 0.8726646f;
        jumpSpeed() = 17.0f;
        prevForward() = 0.0f;
        prevUp() = 0.0f;
        startHeight() = fld<float>(player, 0x44);  /* Pl0000+0x44: position y */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BA97C0  CatLeapStatePl0010::vf14  size=294  [class]
void CatLeapStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace CatLeapStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94db0((int)player, 0xCA) != 0) {
        FUN_00aa3f60((int)player, 0xCB);
    }
    else if (FUN_00a94db0((int)player, 0xCB) != 0 && airborne() == 0) {
        airborne() = 1;
        int motion = FUN_00aa3f60((int)player, 0xCC);
        thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);
    }
    if (landing() != 0) {
        char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
        float pitchDegrees = fld<float>(params, 0x16C);
        fld<float>(player, 0x4180) = fld<float>(params, 0x168);  /* Pl0000+0x417C..0x4184: camera angles */
        fld<float>(player, 0x417C) = pitchDegrees * 0.017453292f;
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
        bool nearGround = fld<int>(player, 0x41E0) != 0 &&  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
                          0.36f >= fld<float>(player, 0x41E4);  // NaN -> falls through to FUN_008e2740
        if (nearGround || FUN_008e2740(fld<int>(player, 0x764))) {
            FUN_00d82510((int)this, 0x13, 100);
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BA98F0  CatLeapStatePl0010::vf20  size=146  [class]
// Leave: restores the camera angles.
undefined4 CatLeapStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace CatLeapStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: camera angles overridden by the state */
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BDD2F0  CatLeapStatePl0010::qteSafeCheck  size=491  [class]
// Per-frame update: while airborne (and no other state is requested) moves the player along the
// arc, rotated into the player's frame; action 0x5E below the start height requests state 0xE.
void CatLeapStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace CatLeapStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    FUN_00bd3620(contextArg, (int)this, 100);
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    if (*(int *)((char *)this + 0x24) < 0 && airborne() != 0) {  /* StateMachineNode+0x24: requested state */
        char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
        float rollDegrees = fld<float>(params, 0x154);
        float pitchDegrees = fld<float>(params, 0x16C);
        fld<float>(player, 0x4180) = fld<float>(params, 0x168);  /* Pl0000+0x417C..0x4184: camera angles */
        fld<float>(player, 0x417C) = pitchDegrees * 0.017453292f;
        fld<float>(player, 0x4184) = rollDegrees * 0.017453292f;
        FUN_00b8af00((int)player);
        double forward = cos((double)jumpAngle()) * jumpSpeed() * airTime();
        double up = sin((double)jumpAngle()) * jumpSpeed() * airTime();
        float oldForward = prevForward();
        float oldUp = prevUp();
        prevForward() = (float)forward;
        prevUp() = (float)up;
        float step[4];  // step[3] is never written
        step[0] = 0.0f;
        step[1] = (float)(up - oldUp);
        step[2] = (float)(forward - oldForward);
        float rotation[16];
        FUN_00ddc1d0((undefined4 *)rotation, (float *)((char *)player + 0x90), 5);  /* Pl0000+0x90: rotation */
        D3DXVec3TransformNormal(step, step, rotation);
        if (fld<float>(player, 0x44) < startHeight()) {  /* Pl0000+0x44: position y */
            if (FUN_00a94db0((int)player, 0x5E) != 0) {
                FUN_00d82510((int)this, 0xE, 100);
            }
        }
        if (0.033333335f < airTime()) {
            float delta[4];
            FUN_008e0ce0(fld<int>(player, 0x764), delta);  // controller +0x1B0 - +0x1A0 (returns delta)
            if (delta[1] < 0.0f) {
                landing() = 1;
            }
        }
        // Pl0000 vftable slot 0x70 (moves by a float[4]); Ghidra showed a wrong stack slot here,
        // the machine code passes step
        vcall<void>(player, 0x70, step);
        airTime() = fld<float>(ctx, 8) + airTime();  /* StateMachineContext+0x8: frame time */
    }
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
