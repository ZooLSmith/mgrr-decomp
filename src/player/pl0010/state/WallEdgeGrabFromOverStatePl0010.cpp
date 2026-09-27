// src/player/pl0010/state/WallEdgeGrabFromOverStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WallEdgeGrabFromOverStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e90[];  // WallEdgeGrabFromOverStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace WallEdgeGrabFromOverStatePl0010_p1 {

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

}  // namespace WallEdgeGrabFromOverStatePl0010_p1

// 00B82AD0  WallEdgeGrabFromOverStatePl0010::vf08  size=41  [class]
// Enter: clears the climb flags.
bool WallEdgeGrabFromOverStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    climbReady() = 0;
    field38() = 0;
    inputLatched() = 0;
    return true;
}

// 00B82B00  WallEdgeGrabFromOverStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 WallEdgeGrabFromOverStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B82B10  WallEdgeGrabFromOverStatePl0010::vf24  size=19  [class]
bool WallEdgeGrabFromOverStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B82B50  WallEdgeGrabFromOverStatePl0010::vf00  size=6  [class]
undefined *WallEdgeGrabFromOverStatePl0010::vf00()
{
    return DAT_01be9e90;
}

// 00B91370  WallEdgeGrabFromOverStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *WallEdgeGrabFromOverStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB2870  WallEdgeGrabFromOverStatePl0010::SafeCheck  size=178  [class]
// First update: starts the grab (action 0xC4) and locks the camera angles.
void WallEdgeGrabFromOverStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace WallEdgeGrabFromOverStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        field38() = 0;
        motion() = 0xC4;
        thiscall<int>(FUN_00aa3f60, player, 0xC4);
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: motion controller */
        if (fld<int>(controller, 0x104) != 1) {  /* controller+0x104: mode, +0xD0: sub-object (+4 float) */
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
        }
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BB2930  WallEdgeGrabFromOverStatePl0010::vf20  size=135  [class]
// Leave: restores the controller mode and the camera.
undefined4 WallEdgeGrabFromOverStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace WallEdgeGrabFromOverStatePl0010_p1;

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

// 00BCCEE0  WallEdgeGrabFromOverStatePl0010::vf14  size=275  [class]
// Chooses the follow-up motion (0xC6 climb up / 0xC7 drop) and leaves the state when it ends.
void WallEdgeGrabFromOverStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace WallEdgeGrabFromOverStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (thiscall<int>(FUN_00a94db0, player, 0xC4) != 0) {
        if (climbReady() == 0 && field38() != 0) {
            motion() = 0xC6;
        }
        else {
            motion() = 0xC7;
        }
        thiscall<undefined4>(FUN_00aa9280, player, motion());
    }
    if (thiscall<int>(FUN_00a9f760, player, 0xC6) != 0 && climbReady() != 0 && field38() != 0 &&
        thiscall<int>(FUN_00a95270, player, 0xC6, 0x15) != 0) {
        cdeclcall<int>(FUN_00bb90c0, contextArg, this);
    }
    if (thiscall<int>(FUN_00a94db0, player, motion()) != 0 && (motion() == 0xC6 || motion() == 0xC7)) {
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, this) == 0) {
            /* Pl0000+0x764: motion controller, +0x560: float[4] */
            thiscall<void>(FUN_008e0c00, fld<void *>(player, 0x764), (char *)player + 0x560);
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BE1300  WallEdgeGrabFromOverStatePl0010::qteSafeCheck  size=331  [class]
// Per-frame update: decides whether the player may climb and runs the common input checks.
void WallEdgeGrabFromOverStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace WallEdgeGrabFromOverStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_008e0b70, fld<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion controller */
    thiscall<void>(FUN_008e0ba0, fld<void *>(player, 0x764), 0);
    /* Pl0000+0x4268: input block (+0x94 / +0x24: ?) */
    if (fld<int>(fld<char *>(player, 0x4268), 0x94) != 0) {
        inputLatched() = 1;
    }
    if (fld<int>(fld<char *>(player, 0x4268), 0x24) != 0) {
        inputLatched() = 1;
    }
    if (thiscall<int>(FUN_00a9f760, player, 0xC4) != 0 ||
        thiscall<int>(FUN_00a95030, player, 0xC6, 0, 0x15) != 0) {
        /* Pl0000+0x40D4: parameter table (+0x14C: distance), Pl0000+0xD28: squared value compared */
        float limit = fld<float>(fld<char *>(player, 0x40D4), 0x14C);
        if (!(limit * limit < fld<float>(player, 0xD28)) || inputLatched() != 0) {
            climbReady() = 1;
        }
        else {
            climbReady() = 0;
        }
    }
    if (thiscall<int>(FUN_00a94db0, player, 0xC6) != 0 || thiscall<int>(FUN_00a94db0, player, 0xC7) != 0) {
        cdeclcall<undefined4>(FUN_00bd3620, contextArg, this, 100);
    }
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
