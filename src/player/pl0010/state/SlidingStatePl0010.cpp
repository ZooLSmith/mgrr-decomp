// src/player/pl0010/state/SlidingStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SlidingStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e70[];  // SlidingStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace SlidingStatePl0010_p1 {

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

}  // namespace SlidingStatePl0010_p1

// 00B825E0  SlidingStatePl0010::vf08  size=42  [class]
// Enter.
bool SlidingStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    slideLooping() = 0;
    field30() = 1.0f;
    return true;
}

// 00B82610  SlidingStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 SlidingStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82620  SlidingStatePl0010::vf24  size=19  [class]
bool SlidingStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82660  SlidingStatePl0010::vf00  size=6  [class]
undefined *SlidingStatePl0010::vf00()
{
    return DAT_01be9e70;
}

// 00B91270  SlidingStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *SlidingStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB17C0  SlidingStatePl0010::SafeCheck  size=173  [class]
// First frame: starts motion 0x2C, saves the camera angles.
void SlidingStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace SlidingStatePl0010_p1;

    if (fld<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        FUN_00aa3f60((int)player, 0x2C);
        /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa92c0((undefined4)player, 4);
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB1870  SlidingStatePl0010::qteSafeCheck  size=144  [class]
// Camera angles from the parameter block (+0x24, +0x20 in degrees).
void SlidingStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace SlidingStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    FUN_00b8af00((int)player);
    float angle = param(player, 0x20);
    fld<float>(player, 0x4180) = param(player, 0x24);
    fld<float>(player, 0x417C) = angle * 0.017453292f;  // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    StateMachineNode::qteSafeCheck(context);
}

// 00BB1900  SlidingStatePl0010::vf20  size=146  [class]
// Leave: restores the camera angles saved by SafeCheck.
undefined4 SlidingStatePl0010::vf20(undefined4 *context)
{
    using namespace SlidingStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    fld<int>(player, 0x4170) = 0;
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BCC900  SlidingStatePl0010::vf14  size=381  [class]
void SlidingStatePl0010::vf14(undefined4 *context)
{
    using namespace SlidingStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94db0((int)player, 0x2C) != 0) {
        FUN_00aa3f60((int)player, 0x2D);
        slideLooping() = 1;
    }
    if (FUN_00a94db0((int)player, 0x2F) != 0 || FUN_00a94db0((int)player, 0x2E) != 0) {
        if (FUN_008e2740(controllerOf(player)) ||
            (fld<int>(player, 0x41E0) != 0 &&                              /* Pl0010: groundHit */
             fld<float>(player, 0x41E4) < param(player, 0x160))) {         /* Pl0010: groundHitDistance */
            FUN_00bb8d00(context, (int)this, 0x19, 0, 1);
        }
        else {
            FUN_00d82510((int)this, 0xE, 100);
        }
    }
    if (slideLooping() != 0) {
        if (fld<int>(player, 0x4260) != 0) {  /* Pl0000+0x4260: ? */
            int motionId;
            if (FUN_00b7e4f0((int)player) == 0) {
                motionId = 0x2E;
            }
            else {
                motionId = 0x2F;
            }
            FUN_00aa9280((int)player, motionId);
        }
        if (slideLooping() != 0 && fld<int>(player, 0x4260) != 0) {
            switch (thiscall<int>(FUN_00b8b610, player)) {
            case 1:
                FUN_00d82510((int)this, 0x15, 100);
                break;
            case 2:
                FUN_00d82510((int)this, 0x17, 100);
                break;
            case 3:
                FUN_00d82510((int)this, 0x18, 100);
                break;
            case 4:
                FUN_00d82510((int)this, 0x16, 100);
                break;
            case 5:
                FUN_00d82510((int)this, 0x10, 100);
                break;
            case 8:
                FUN_00d82510((int)this, 0x14, 100);
                break;
            case 9:
                FUN_00d82510((int)this, 0x25, 100);
                break;
            case 0xB:
                FUN_00d82510((int)this, 0x2B, 100);
                break;
            case 0xC:
                FUN_00d82510((int)this, 0xD, 100);
                break;
            case 0xD:
                FUN_00d82510((int)this, 9, 100);
                break;
            case 0x11:
                FUN_00d82510((int)this, 0xC, 100);
                break;
            default:
                break;
            }
        }
    }
    StateMachineNode::vf14(context);
}
