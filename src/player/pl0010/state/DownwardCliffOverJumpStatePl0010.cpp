// src/player/pl0010/state/DownwardCliffOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DownwardCliffOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e0c[];  // DownwardCliffOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

// CRT (the compiler emitted fabs / fcos / fsin inline) and D3DX
extern "C" double __cdecl fabs(double x);
extern "C" double __cdecl cos(double x);
extern "C" double __cdecl sin(double x);
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

namespace DownwardCliffOverJumpStatePl0010_p1 {

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

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Close enough to land: ground probe hit within 0.36, or the controller reports the fall ended.
inline bool readyToLand(Pl0000 *player)
{
    bool nearGround = fld<int>(player, 0x41E0) != 0 &&  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
                      0.36f >= fld<float>(player, 0x41E4);  // NaN -> falls through to FUN_008e2740
    return nearGround || FUN_008e2740(fld<int>(player, 0x764));  /* Pl0000+0x764: movement controller */
}

// Camera angles from the parameter table (+0x168 yaw, +0x16C pitch in degrees), then FUN_00b8af00.
inline void aimCamera(Pl0000 *player)
{
    char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
    float pitchDegrees = fld<float>(params, 0x16C);
    fld<float>(player, 0x4180) = fld<float>(params, 0x168);  /* Pl0000+0x417C..0x4184: camera angles */
    fld<float>(player, 0x417C) = pitchDegrees * 0.017453292f;
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
}

}  // namespace DownwardCliffOverJumpStatePl0010_p1

// 00B813F0  DownwardCliffOverJumpStatePl0010::vf08  size=52  [class]
// Enter.
bool DownwardCliffOverJumpStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    airTime() = 0.0f;
    landing() = 0;
    prevForward() = 0.0f;
    airborne() = 0;
    shortDrop() = 0;
    prevUp() = 0.0f;
    return true;
}

// 00B81430  DownwardCliffOverJumpStatePl0010::vf24  size=19  [class]
bool DownwardCliffOverJumpStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81470  DownwardCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined *DownwardCliffOverJumpStatePl0010::vf00()
{
    return DAT_01be9e0c;
}

// 00B90F40  DownwardCliffOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *DownwardCliffOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAA570  DownwardCliffOverJumpStatePl0010::vf18  size=161  [class]
undefined4 DownwardCliffOverJumpStatePl0010::vf18(undefined4 contextArg)
{
    using namespace DownwardCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    if (landing() != 0 && readyToLand(player)) {
        FUN_00d82510((int)this, 0x13, 0x4B);
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BAA620  DownwardCliffOverJumpStatePl0010::vf20  size=146  [class]
// Leave: restores the camera angles.
undefined4 DownwardCliffOverJumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace DownwardCliffOverJumpStatePl0010_p1;

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

// 00BCA480  DownwardCliffOverJumpStatePl0010::vf14  size=405  [class]
void DownwardCliffOverJumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace DownwardCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (shortDrop() == 0) {
        if (FUN_00a94db0((int)player, 0xCF) != 0) {
            action() = 0xD0;
            int motion = FUN_00aa3f60((int)player, 0xD0);
            thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);
        }
        if (FUN_00a94db0((int)player, 0xD0) != 0 && airborne() == 0) {
            airborne() = 1;
            int motion = FUN_00aa3f60((int)player, 0xD1);
            thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);
        }
        if (landing() != 0) {
            aimCamera(player);
            if (readyToLand(player)) {
                FUN_00d82510((int)this, 0x13, 0x4B);
            }
        }
    }
    else if (FUN_00a94db0((int)player, 0x33) != 0 || FUN_00a94db0((int)player, 0x34) != 0) {
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, (int)this) == 0) {
            FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));  /* Pl0000+0x560: float[4] */
            StateMachineNode::vf14(contextArg);
            return;
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDE5D0  DownwardCliffOverJumpStatePl0010::SafeCheck  size=442  [class]
// First update: picks the long drop (0xCF, arc from FUN_00d83290) or the short one (0x33 / 0x34)
// from the drop height and the distance to the context's target.
void DownwardCliffOverJumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace DownwardCliffOverJumpStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        /* StateMachineContextPl0010+0xC0: object whose +4 has floats at +0x158 / +0x160 */
        float distance = fld<float>(fld<char *>(fld<char *>(ctx, 0xC0), 4), 0x158);
        // (written so that a NaN height or distance takes the long drop, as in the machine code)
        if (!(3.1f >= fld<float>(player, 0x4258)) || !(distance > 6.0f)) {  /* Pl0000+0x4258: drop height */
            action() = 0xCF;
            FUN_00aa3f60((int)player, 0xCF);
            float targetValue = fld<float>(fld<char *>(fld<char *>(ctx, 0xC0), 4), 0x160);
            float verticalSpeed = fld<float>(fld<char *>(player, 0x764), 0xF4);  /* Pl0000+0x764: movement controller */
            jumpSpeed() = 14.0f;
            FUN_00d83290(&jumpAngle(), distance, targetValue, (float)fabs(verticalSpeed), 14.0f);
        }
        else {
            if (1.5f < fld<float>(player, 0x4258)) {
                action() = 0x34;
            }
            else {
                action() = 0x33;
            }
            FUN_00aa3f60((int)player, action());
            char *controller = fld<char *>(player, 0x764);
            if (fld<int>(controller, 0x104) != 1) {
                fld<int>(controller, 0x104) = 1;
                fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
            }
            shortDrop() = 1;
        }
        startHeight() = fld<float>(player, 0x44);  /* Pl0000+0x44: position y */
    }
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::SafeCheck(contextArg);
}

// 00BDE790  DownwardCliffOverJumpStatePl0010::qteSafeCheck  size=517  [class]
// Per-frame update (while no other state is requested): the short drop only aims the camera;
// the long drop moves the player along the arc, rotated into the player's frame.
void DownwardCliffOverJumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace DownwardCliffOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    FUN_00bd3620(contextArg, (int)this, 100);
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    if (*(int *)((char *)this + 0x24) < 0) {  /* StateMachineNode+0x24: requested state */
        if (action() == 0x33 || (action() == 0x34 && FUN_00a95270((int)player, 0x34, 0x11) != 0)) {
            aimCamera(player);
            StateMachineNode::qteSafeCheck(contextArg);
            return;
        }
        if (action() != 0x34 && airborne() != 0) {
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
                if (FUN_00a94db0((int)player, 0xD1) != 0) {
                    int motion = FUN_00aa9280((int)player, 0xD2);
                    thiscall<void>(FUN_00a96070, player, motion, 0x80, 1);
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
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
