// src/player/pl0010/state/DiveRollStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DiveRollStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e08[];  // DiveRollStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

// CRT (the compiler emitted fsqrt inline)
extern "C" double __cdecl sqrt(double x);

namespace DiveRollStatePl0010_p1 {

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

// __thiscall call (ECX = self) of a function whose functions.h prototype has the wrong
// argument types
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

// FUN_00b8b610 (__fastcall, ECX = player) returns a small command code (1..0x10); functions.h
// declares it as bool.
inline int pendingCommand(Pl0000 *player)
{
    return ((int (__fastcall *)(int))FUN_00b8b610)((int)player);
}

// On the ground (no fall detected by the controller and the ground probe within the parameter
// +0x160).
inline bool onGround(Pl0000 *player)
{
    return !FUN_008e2740(fld<int>(player, 0x764)) &&
           (fld<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
            !(fld<float>(fld<char *>(player, 0x40D4), 0x160) > fld<float>(player, 0x41E4)));  /* Pl0000+0x40D4: parameter table; NaN passes, as in the machine code */
}

}  // namespace DiveRollStatePl0010_p1

// 00B81350  DiveRollStatePl0010::vf08  size=35  [class]
// Enter.
bool DiveRollStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    rollSpeedScale() = 1.0f;
    return true;
}

// 00B81380  DiveRollStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 DiveRollStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81390  DiveRollStatePl0010::vf24  size=19  [class]
bool DiveRollStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B813D0  DiveRollStatePl0010::vf00  size=6  [class]
undefined *DiveRollStatePl0010::vf00()
{
    return DAT_01be9e08;
}

// 00B90F20  DiveRollStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *DiveRollStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAA3F0  DiveRollStatePl0010::SafeCheck  size=205  [class]
// First update: starts the dive (action 0x30) and saves the camera angles.
void DiveRollStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace DiveRollStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        FUN_00aa3f60((int)player, 0x30);
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: movement controller */
        if (fld<int>(controller, 0x104) != 1) {
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
        }
        FUN_00aa92c0((undefined4)player, 3);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<int>(player, 0x4170) = 1;                             /* Pl0000+0x4170: camera angles overridden by the state */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAA4C0  DiveRollStatePl0010::vf20  size=171  [class]
// Leave: restores the controller and the camera angles.
undefined4 DiveRollStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace DiveRollStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: movement controller */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: camera angles overridden by the state */
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BCA190  DiveRollStatePl0010::vf14  size=680  [class]
// When the dive ends: roll on (0x31, saving the velocity into the context) or keep falling (0x32);
// pending commands switch to other states; during 0x31 the saved velocity is applied, damped.
void DiveRollStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace DiveRollStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    bool diveEnded = false;
    if (FUN_00a94db0((int)player, 0x30) != 0) {
        if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: movement controller */
            fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
        }
        int nextAction;
        if (FUN_008e2740(fld<int>(player, 0x764)) ||
            (fld<int>(player, 0x41E0) != 0 &&
             fld<float>(player, 0x41E4) < fld<float>(fld<char *>(player, 0x40D4), 0x160))) {
            nextAction = 0x32;
        }
        else {
            fld<int>(ctx, 0x14) = 1;  /* StateMachineContextPl0010+0x14: ? (saved velocity valid) */
            fld<float>(ctx, 0x20) = fld<float>(player, 0x560);  /* StateMachineContextPl0010+0x20: float[4] saved velocity */
            fld<float>(ctx, 0x24) = fld<float>(player, 0x564);  /* Pl0000+0x560: float[4] velocity */
            fld<float>(ctx, 0x28) = fld<float>(player, 0x568);
            fld<float>(ctx, 0x2C) = fld<float>(player, 0x56C);
            FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));
            nextAction = 0x31;
        }
        FUN_00aa3f60((int)player, nextAction);
        diveEnded = true;
    }
    if (FUN_00a94db0((int)player, 0x32) != 0) {
        FUN_00bb8d00(contextArg, (int)this, 0x19, 0, 1);
        if (onGround(player)) {
            FUN_00d82510((int)this, 0xE, 100);
        }
    }
    else if (!diveEnded) {
        goto checkRoll;
    }
    {
        int nextState;
        switch (pendingCommand(player)) {
        case 1:
            nextState = 0x15;
            break;
        case 2:
            nextState = 0x17;
            break;
        case 3:
            nextState = 0x18;
            break;
        case 4:
            nextState = 0x16;
            break;
        case 5:
            nextState = 0x10;
            break;
        default:
            goto checkRoll;
        case 8:
            nextState = 0x14;
            break;
        case 9:
            nextState = 0x25;
            break;
        case 0xB:
            nextState = 0x2B;
            break;
        case 0xC:
            nextState = 0xD;
            break;
        case 0xD:
            nextState = 9;
            break;
        case 0x10:
            nextState = 0x26;
            break;
        }
        FUN_00d82510((int)this, nextState, 100);
    }
checkRoll:
    if (FUN_00a9f760((int)player, 0x31) != 0) {
        if (onGround(player)) {
            float savedX = fld<float>(ctx, 0x20);
            float savedZ = fld<float>(ctx, 0x28);
            float velocity[4];
            thiscall<void>(FUN_00b8ad30, player, velocity,
                           (float)sqrt((double)savedX * savedX + (double)savedZ * savedZ));
            float scale = fld<float>(fld<char *>(player, 0x40D4), 0x164) * rollSpeedScale();  /* Pl0000+0x40D4: parameter table */
            rollSpeedScale() = scale;
            velocity[0] = velocity[0] * scale;
            velocity[1] = velocity[1] * scale;
            velocity[2] = velocity[2] * scale;
            velocity[3] = scale * velocity[3];
            FUN_008e0c30(fld<int>(player, 0x764), (undefined4 *)velocity);
            StateMachineNode::vf14(contextArg);
            return;
        }
        FUN_00aa3f60((int)player, 0x32);
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDE500  DiveRollStatePl0010::qteSafeCheck  size=197  [class]
void DiveRollStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace DiveRollStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a95270((int)player, 0x30, 6) != 0) {
        char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
        float pitch = fld<float>(params, 0x2C);
        fld<float>(player, 0x4180) = fld<float>(params, 0x30);  /* Pl0000+0x417C..0x4184: camera angles */
        fld<float>(player, 0x417C) = pitch;
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
