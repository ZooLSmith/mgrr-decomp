// src/player/pl0010/state/WallPopStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WallPopStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e94[];  // WallPopStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace WallPopStatePl0010_p1 {

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

}  // namespace WallPopStatePl0010_p1

// 00B82B70  WallPopStatePl0010::vf08  size=19  [class]
// Enter.
bool WallPopStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B82B90  WallPopStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 WallPopStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B82BA0  WallPopStatePl0010::vf24  size=19  [class]
bool WallPopStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B82BE0  WallPopStatePl0010::vf00  size=6  [class]
undefined *WallPopStatePl0010::vf00()
{
    return DAT_01be9e94;
}

// 00B91390  WallPopStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *WallPopStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB29C0  WallPopStatePl0010::SafeCheck  size=239  [class]
// First update: starts the pop-up motion (0xC0, or 0xC1 when fast enough).
void WallPopStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace WallPopStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        motion() = 0xC0;
        /* StateMachineContextPl0010+0xC0: object whose +4 points at a block with a float at +0x54C (speed ?) */
        float speed = fld<float>(fld<char *>(fld<char *>(ctx, 0xC0), 4), 0x54C);
        if (speed >= 2.0f) {
            motion() = 0xC1;
        }
        thiscall<int>(FUN_00aa3f60, player, motion());
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: motion controller */
        if (fld<int>(controller, 0x104) != 1) {  /* controller+0x104: mode, +0xD0: sub-object (+4 float) */
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
        }
        fld<int>(player, 0x507C) = 1;  /* Pl0000+0x507C: ? */
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
        /* Pl0000+0xCF8: pad buttons held, +0xE48: action mask */
        if ((fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {
            thiscall<void>(FUN_00aa92c0, player, 0x22);
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BB2AB0  WallPopStatePl0010::vf20  size=135  [class]
// Leave: restores the controller mode and the camera.
undefined4 WallPopStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace WallPopStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: motion controller */
    if (fld<int>(controller, 0x104) != 0) {
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: camera angles overridden by the state */
    return 1;
}

// 00BCD000  WallPopStatePl0010::vf14  size=281  [class]
// Leaves the state when the motion ends; requests the fall/landing states from frame 0x23.
void WallPopStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace WallPopStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (thiscall<int>(FUN_00a94db0, player, motion()) != 0) {
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, this) == 0) {
            /* Pl0000+0x764: motion controller, +0x560: float[4] */
            thiscall<void>(FUN_008e0c00, fld<void *>(player, 0x764), (char *)player + 0x560);
        }
        else {
            thiscall<void>(FUN_00d82510, this, 0xE, 0x46);
        }
    }
    if (thiscall<int>(FUN_00a95270, player, 0xC0, 0x23) != 0 ||
        thiscall<int>(FUN_00a95270, player, 0xC1, 0x23) != 0) {
        /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
        /* x87 test is !(0.36f < d), so a NaN distance counts as close */
        if ((fld<int>(player, 0x41E0) != 0 && !(0.36f < fld<float>(player, 0x41E4))) ||
            FUN_008e2740(fld<int>(player, 0x764)) ||
            (fld<int>(player, 0x41E0) != 0 && !(0.36f < fld<float>(player, 0x41E4)))) {
            thiscall<void>(FUN_00d82510, this, 0x13, 100);
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BE1450  WallPopStatePl0010::qteSafeCheck  size=176  [class]
// Per-frame update: common input checks.
void WallPopStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace WallPopStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_008e0b70, fld<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion controller */
    thiscall<void>(FUN_008e0ba0, fld<void *>(player, 0x764), 0);
    FUN_00b8af00((int)player);
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
