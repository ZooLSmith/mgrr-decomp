// src/player/pl0010/state/WallEdgeGrabFromBelowStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "WallEdgeGrabFromBelowStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e8c[];  // WallEdgeGrabFromBelowStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace WallEdgeGrabFromBelowStatePl0010_p1 {

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

}  // namespace WallEdgeGrabFromBelowStatePl0010_p1

// 00B82A30  WallEdgeGrabFromBelowStatePl0010::vf08  size=41  [class]
// Enter.
bool WallEdgeGrabFromBelowStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    keepMoving() = 0;
    field38() = 0;
    movingLatched() = 0;
    return true;
}

// 00B82A60  WallEdgeGrabFromBelowStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base one).
undefined4 WallEdgeGrabFromBelowStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82A70  WallEdgeGrabFromBelowStatePl0010::vf24  size=19  [class]
bool WallEdgeGrabFromBelowStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82AB0  WallEdgeGrabFromBelowStatePl0010::vf00  size=6  [class]
undefined *WallEdgeGrabFromBelowStatePl0010::vf00()
{
    return DAT_01be9e8c;
}

// 00B91350  WallEdgeGrabFromBelowStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *WallEdgeGrabFromBelowStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB2720  WallEdgeGrabFromBelowStatePl0010::SafeCheck  size=178  [class]
// First update: starts action 0xC5.
void WallEdgeGrabFromBelowStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace WallEdgeGrabFromBelowStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        Pl0000 *player = playerOf(asContextPl0010(context));
        field38() = 0;
        motionId() = 0xC5;
        FUN_00aa3f60((int)player, 0xC5);
        enableController(player);
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: ? (1 while this state runs) */
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB27E0  WallEdgeGrabFromBelowStatePl0010::vf20  size=135  [class]
// Leave.
undefined4 WallEdgeGrabFromBelowStatePl0010::vf20(undefined4 *context)
{
    using namespace WallEdgeGrabFromBelowStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = playerOf(asContextPl0010(context));
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<int>(player, 0x4170) = 0;
    return 1;
}

// 00BCCDC0  WallEdgeGrabFromBelowStatePl0010::vf14  size=275  [class]
// Update: after 0xC5 play 0xC6 or 0xC7; then the transitions out of the climb.
void WallEdgeGrabFromBelowStatePl0010::vf14(undefined4 *context)
{
    using namespace WallEdgeGrabFromBelowStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    if (FUN_00a94db0((int)player, 0xC5) != 0) {
        if (keepMoving() == 0 && field38() != 0) {
            motionId() = 0xC6;
        }
        else {
            motionId() = 0xC7;
        }
        FUN_00aa9280((int)player, motionId());
    }
    if (FUN_00a9f760((int)player, 0xC6) != 0 && keepMoving() != 0 && field38() != 0) {
        if (FUN_00a95270((int)player, 0xC6, 0x15) != 0) {
            cdeclcall<int>(FUN_00bb90c0, context, this);
        }
    }
    if (FUN_00a94db0((int)player, motionId()) != 0 && (motionId() == 0xC6 || motionId() == 0xC7)) {
        if (cdeclcall<int>(FUN_00bb90c0, context, this) == 0) {
            FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));  /* Pl0000+0x560: ? */
        }
    }
    StateMachineNode::vf14(context);
}

// 00BE11B0  WallEdgeGrabFromBelowStatePl0010::qteSafeCheck  size=331  [class]
void WallEdgeGrabFromBelowStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace WallEdgeGrabFromBelowStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    if (fld<int>(fld<char *>(player, 0x4268), 0x94) != 0) {  /* Pl0000+0x4268: ? (object with flags at +0x94 / +0x24) */
        movingLatched() = 1;
    }
    if (fld<int>(fld<char *>(player, 0x4268), 0x24) != 0) {
        movingLatched() = 1;
    }
    if (FUN_00a9f760((int)player, 0xC5) != 0 || FUN_00a95030((int)player, 0xC6, 0, 0x15) != 0) {
        double speed = fld<float>(fld<char *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: parameters ? */
        // (unordered counts as "not slower")
        if (!(speed * speed < fld<float>(player, 0xD28)) || movingLatched() != 0) {  /* Pl0000+0xD28: ? squared speed threshold */
            keepMoving() = 1;
        }
        else {
            keepMoving() = 0;
        }
    }
    if (FUN_00a94db0((int)player, 0xC6) != 0 || FUN_00a94db0((int)player, 0xC7) != 0) {
        FUN_00bd3620(context, (int)this, 100);
    }
    FUN_00bd3730(context, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(context, (undefined4)this, 0xD);
    FUN_00bd3910(context, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
