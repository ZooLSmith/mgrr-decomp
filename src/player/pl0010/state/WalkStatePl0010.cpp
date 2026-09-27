// src/player/pl0010/state/WalkStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WalkStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e88[];  // WalkStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace WalkStatePl0010_p1 {

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
const int kStateDash     = 10;    // DashStatePl0010
const int kStateFreeFall = 0xE;   // FreeFallStatePl0010
const int kStateIdle     = 0x11;  // IdleStatePl0010

}  // namespace WalkStatePl0010_p1

// 00B829A0  WalkStatePl0010::vf08  size=19  [class]
bool WalkStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B829C0  WalkStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base one).
undefined4 WalkStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B829D0  WalkStatePl0010::vf24  size=19  [class]
bool WalkStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82A10  WalkStatePl0010::vf00  size=6  [class]
undefined *WalkStatePl0010::vf00()
{
    return DAT_01be9e88;
}

// 00B91330  WalkStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *WalkStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB2550  WalkStatePl0010::SafeCheck  size=169  [class]
// First update: saves the camera angles and starts action 0x1C.
void WalkStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace WalkStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        fld<float>(ctx, 0x70) = 0.0f;                              /* StateMachineContextPl0010+0x70: ? */
        fld<int>(player, 0x5074) = 0;                              /* Pl0000+0x5074: ? */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa9280((int)player, 0x1C);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB2600  WalkStatePl0010::vf14  size=134  [class]
// Update: after 0x1C or 0x1D, action 0x1E.
void WalkStatePl0010::vf14(undefined4 *context)
{
    using namespace WalkStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    if (FUN_00a94db0((int)player, 0x1C) != 0 || FUN_00a94db0((int)player, 0x1D) != 0) {
        FUN_00aa9280((int)player, 0x1E);
    }
    StateMachineNode::vf14(context);
}

// 00BB2690  WalkStatePl0010::vf20  size=136  [class]
// Leave: restores the camera angles.
undefined4 WalkStatePl0010::vf20(undefined4 *context)
{
    using namespace WalkStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = playerOf(asContextPl0010(context));
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BCCC40  WalkStatePl0010::qteSafeCheck  size=382  [class]
// Sets the walking camera angles, falls when the ground is lost, and switches to the dash state
// (slow stick with the walk input bits) or the idle state.
void WalkStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace WalkStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    FUN_008e0b70(fld<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    fld<float>(player, 0x4180) = 0.3f;         /* Pl0000+0x417C..0x4184: camera angles */
    fld<float>(player, 0x417C) = 0.5235988f;   // 30 degrees in radians (0x3F060A92)
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
    if (!FUN_008e2740(fld<int>(player, 0x764)) &&
        (fld<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground ? */
         !(fld<float>(fld<char *>(player, 0x40D4), 0x160) > fld<float>(player, 0x41E4)))) {  /* Pl0000+0x40D4: parameters ? */
        FUN_00d82510((int)this, kStateFreeFall, 100);
    }

    player = playerOf(asContextPl0010(context));
    double speed = fld<float>(fld<char *>(player, 0x40D4), 0x14C);
    bool walkInput;
    // (unordered counts as "slower")
    if (!(speed * speed >= fld<float>(player, 0xD28))) {  /* Pl0000+0xD28: ? squared speed threshold */
        walkInput = (fld<unsigned int>(player, 0xE48) & fld<unsigned int>(player, 0xCF8)) != 0;  /* Pl0000+0xE48 / +0xCF8: input bits ? */
    }
    else {
        walkInput = false;
    }
    int next = walkInput ? kStateDash : kStateIdle;
    if (next != *(int *)((char *)this + 4)) {  /* StateMachineNode+4: state id */
        FUN_00d82510((int)this, next, 0x19);
    }
    StateMachineNode::qteSafeCheck(context);
}
