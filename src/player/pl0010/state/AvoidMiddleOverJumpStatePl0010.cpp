// src/player/pl0010/state/AvoidMiddleOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AvoidMiddleOverJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9df0[];  // AvoidMiddleOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace AvoidMiddleOverJumpStatePl0010_p1 {

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

}  // namespace AvoidMiddleOverJumpStatePl0010_p1

// 00B80EC0  AvoidMiddleOverJumpStatePl0010::vf08  size=38  [class]
// Enter.
bool AvoidMiddleOverJumpStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    landingStarted() = 0;
    landed() = 0;
    return true;
}

// 00B80EF0  AvoidMiddleOverJumpStatePl0010::vf24  size=19  [class]
bool AvoidMiddleOverJumpStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B80F30  AvoidMiddleOverJumpStatePl0010::vf00  size=6  [class]
undefined *AvoidMiddleOverJumpStatePl0010::vf00()
{
    return DAT_01be9df0;
}

// 00B90C60  AvoidMiddleOverJumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *AvoidMiddleOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA9180  AvoidMiddleOverJumpStatePl0010::SafeCheck  size=259  [class]
// First update: saves the camera angles, starts action 0xA8 and copies the handle of the
// context's target object (+0x90) into the player (+0x4178).
void AvoidMiddleOverJumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace AvoidMiddleOverJumpStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa3f60((int)player, 0xA8);
        landingAction() = 0xAB;
        int target = FUN_00a81330((unsigned int *)(ctx + 0x90));  /* StateMachineContextPl0010+0x90: object handle */
        if (target == 0) {
            FUN_00a7c950((undefined4 *)((char *)player + 0x4178));  /* Pl0000+0x4178: object handle */
        }
        else {
            int targetHandle = FUN_00a7c7f0(target);
            FUN_00a7c960((undefined4 *)((char *)player + 0x4178), (undefined4 *)targetHandle);
        }
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: movement controller */
        if (fld<int>(controller, 0x104) != 1) {
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
        }
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BA9290  AvoidMiddleOverJumpStatePl0010::vf18  size=167  [class]
// After landing, and when no other state is requested, goes to state 0x13 on the ground.
undefined4 AvoidMiddleOverJumpStatePl0010::vf18(undefined4 contextArg)
{
    using namespace AvoidMiddleOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    if (landed() != 0 && *(int *)((char *)this + 0x24) < 0) {  /* StateMachineNode+0x24: requested state */
        bool nearGround = fld<int>(player, 0x41E0) != 0 &&  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
                          0.36f >= fld<float>(player, 0x41E4);  // NaN -> falls through to FUN_008e2740
        if (nearGround || FUN_008e2740(fld<int>(player, 0x764))) {
            FUN_00d82510((int)this, 0x13, 100);
        }
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BA9340  AvoidMiddleOverJumpStatePl0010::vf20  size=182  [class]
// Leave: restores the controller and the camera angles and clears the player's handle +0x4178.
undefined4 AvoidMiddleOverJumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace AvoidMiddleOverJumpStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: movement controller */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<int>(player, 0x4170) = 0;
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    FUN_00a7c950((undefined4 *)((char *)player + 0x4178));  /* Pl0000+0x4178: object handle */
    return 1;
}

// 00BC97C0  AvoidMiddleOverJumpStatePl0010::vf14  size=160  [class]
void AvoidMiddleOverJumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace AvoidMiddleOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (landingStarted() != 0 && FUN_00a94db0((int)player, landingAction()) != 0) {
        landed() = 1;
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, (int)this) == 0) {
            FUN_008e0c00(fld<int>(player, 0x764), (undefined4 *)((char *)player + 0x560));  /* Pl0000+0x560: float[4] */
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDD120  AvoidMiddleOverJumpStatePl0010::qteSafeCheck  size=451  [class]
// Per-frame update of the vault actions 0xA8 -> 0xAA -> landingAction.
void AvoidMiddleOverJumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace AvoidMiddleOverJumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    if (FUN_00a94db0((int)player, 0xA8) != 0) {
        FUN_00aa3f60((int)player, 0xAA);
        float scale[3];
        scale[0] = 1.0f;
        scale[1] = 2.0f;
        scale[2] = 1.0f;
        FUN_00a95ff0((int)player, (undefined4 *)scale);
        int target = FUN_00a81330((unsigned int *)(ctx + 0x90));  /* StateMachineContextPl0010+0x90: object handle */
        if (target != 0) {
            void *targetModel = (void *)FUN_00a7c8a0(target);
            if (vcall<int>(targetModel, 0x14C, 0x24, fld<undefined4>(player, 0x4F0)) != 0) {  /* Pl0000+0x4F0: model object */
                targetModel = (void *)FUN_00a7c8a0(target);
                vcall<void>(targetModel, 0x150, 0x24, fld<undefined4>(player, 0x4F0));
                // ECX of this FUN_00a7c8a0 is the player's +0x4F0 (not target), as in the machine code
                int ownModel = FUN_00a7c8a0(fld<int>(player, 0x4F0));
                FUN_00b7b380((int)player, target, ownModel + 0x40, 1);
            }
        }
    }
    if (FUN_00a94db0((int)player, 0xAA) != 0) {
        landingStarted() = 1;
        FUN_00aa3f60((int)player, landingAction());
    }
    if (FUN_00a9f760((int)player, 0xAB) != 0 || FUN_00a9f760((int)player, 0xAC) != 0) {
        char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
        float pitchDegrees = fld<float>(params, 0x174);
        fld<float>(player, 0x4180) = fld<float>(params, 0x170);  /* Pl0000+0x417C..0x4184: camera angles */
        fld<float>(player, 0x417C) = pitchDegrees * 0.017453292f;
        fld<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
