// src/player/pl0010/state/SlipLandingStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SlipLandingStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e78[];  // SlipLandingStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace SlipLandingStatePl0010_p1 {

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

}  // namespace SlipLandingStatePl0010_p1

// 00B82740  SlipLandingStatePl0010::vf08  size=19  [class]
// Enter.
bool SlipLandingStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B82760  SlipLandingStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 SlipLandingStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82770  SlipLandingStatePl0010::vf24  size=19  [class]
bool SlipLandingStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B827B0  SlipLandingStatePl0010::vf00  size=6  [class]
undefined *SlipLandingStatePl0010::vf00()
{
    return DAT_01be9e78;
}

// 00B912B0  SlipLandingStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *SlipLandingStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB1BE0  SlipLandingStatePl0010::SafeCheck  size=163  [class]
// First frame: starts motion 0x2C, saves the camera angles.
void SlipLandingStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace SlipLandingStatePl0010_p1;

    if (fld<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        FUN_00aa3f60((int)player, 0x2C);
        /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa92c0((undefined4)player, 4);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB1C90  SlipLandingStatePl0010::qteSafeCheck  size=170  [class]
// Camera angles from the parameter block (+0x24, +0x20 in degrees).
void SlipLandingStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace SlipLandingStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    FUN_00b8af00((int)player);
    float angle = param(player, 0x20);
    fld<float>(player, 0x4180) = param(player, 0x24);
    fld<float>(player, 0x417C) = angle * 0.017453292f;  // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    FUN_008e0b70(controllerOf(player), 0);
    FUN_008e0ba0(controllerOf(player), 0);
    StateMachineNode::qteSafeCheck(context);
}

// 00BB1D40  SlipLandingStatePl0010::vf14  size=216  [class]
void SlipLandingStatePl0010::vf14(undefined4 *context)
{
    using namespace SlipLandingStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (!FUN_008e2740(controllerOf(player)) &&
        (fld<int>(player, 0x41E0) == 0 ||                        /* Pl0010: groundHit */
         param(player, 0x160) <= fld<float>(player, 0x41E4))) {  /* Pl0010: groundHitDistance */
        FUN_00d82510((int)this, 0xE, 100);
    }
    bool groundFar = fld<int>(player, 0x41E0) == 0 || 0.36f < fld<float>(player, 0x41E4);
    if (!groundFar || FUN_008e2740(controllerOf(player))) {
        FUN_00d82510((int)this, 0x13, 100);
    }
    StateMachineNode::vf14(context);
}

// 00BB1E20  SlipLandingStatePl0010::vf20  size=136  [class]
// Leave: restores the camera angles saved by SafeCheck.
undefined4 SlipLandingStatePl0010::vf20(undefined4 *context)
{
    using namespace SlipLandingStatePl0010_p1;

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
