// src/player/pl0010/state/TwoStageJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TwoStageJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e80[];  // TwoStageJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace TwoStageJumpStatePl0010_p1 {

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

}  // namespace TwoStageJumpStatePl0010_p1

// 00B82870  TwoStageJumpStatePl0010::vf08  size=19  [class]
bool TwoStageJumpStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B82890  TwoStageJumpStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base one).
undefined4 TwoStageJumpStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B828A0  TwoStageJumpStatePl0010::vf24  size=19  [class]
bool TwoStageJumpStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B828E0  TwoStageJumpStatePl0010::vf00  size=6  [class]
undefined *TwoStageJumpStatePl0010::vf00()
{
    return DAT_01be9e80;
}

// 00B912F0  TwoStageJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *TwoStageJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB2030  TwoStageJumpStatePl0010::SafeCheck  size=258  [class]
// First update: action 0xBA, save the camera angles, scale (half, 1, half).
void TwoStageJumpStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace TwoStageJumpStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(context);
        Pl0000 *player = playerOf(ctx);
        FUN_00aa3f60((int)player, 0xBA);
        enableController(player);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        float scale[3];
        /* StateMachineContextPl0010+0xC0 -> +4: ? jump data (+0x4D8: ?) */
        scale[0] = fld<float>(fld<char *>(fld<char *>(ctx, 0xC0), 4), 0x4D8) * 0.5f;
        scale[1] = 1.0f;
        scale[2] = scale[0];
        FUN_00a95ff0((int)player, (undefined4 *)scale);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB2140  TwoStageJumpStatePl0010::vf20  size=161  [class]
// Leave: restores the camera angles.
undefined4 TwoStageJumpStatePl0010::vf20(undefined4 *context)
{
    using namespace TwoStageJumpStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = playerOf(asContextPl0010(context));
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion controller ? */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BCCB70  TwoStageJumpStatePl0010::vf14  size=200  [class]
// Update: 0xBA -> 0xBB; during 0xBB try the generic transitions (priority 100).
void TwoStageJumpStatePl0010::vf14(undefined4 *context)
{
    using namespace TwoStageJumpStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    if (FUN_00a94db0((int)player, 0xBA) != 0) {
        FUN_00aa3f60((int)player, 0xBB);
        StateMachineNode::vf14(context);
        return;
    }
    if (FUN_00a94db0((int)player, 0xBB) != 0) {
        FUN_00bb8ae0(context, (undefined4)this, 100);
        if (*(int *)((char *)this + 0x24) < 0) {  /* StateMachineNode+0x24: requested state (-1: none) */
            if (cdeclcall<int>(FUN_00bb90c0, context, this) != 0) {
                FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));  /* Pl0000+0x560: ? */
            }
        }
    }
    StateMachineNode::vf14(context);
}

// 00BE0D50  TwoStageJumpStatePl0010::qteSafeCheck  size=220  [class]
void TwoStageJumpStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace TwoStageJumpStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameters ? */
    float pitchDeg = fld<float>(params, 0x174);
    fld<float>(player, 0x4180) = fld<float>(params, 0x170);
    fld<float>(player, 0x417C) = pitchDeg * 0.017453292f;  // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
    FUN_00bd3730(context, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(context, (undefined4)this, 0xD);
    FUN_00bd3910(context, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
