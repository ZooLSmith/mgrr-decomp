// src/player/pl0010/state/ZangekiHugeCutLeftKesaStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiHugeCutLeftKesaStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9eb8[];  // ZangekiHugeCutLeftKesaStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b351a0[];  // Em0600 (returned by Em0600::vf04)
// global objects passed in ECX
extern unsigned char DAT_01be9a98[];  // object table: FUN_00a7f600 (find by id)

namespace ZangekiHugeCutLeftKesaStatePl0010_p1 {

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

const int kCutAction = 0xF4;  // action started on enter
const float kCutAngle = 315.0f;  // stored in StateMachineContextPl0010+0x3F8 (degrees)

// Body of vf08 after the base call (also entered directly at 0x00BB6273).
// Starts the cut motion; the play rate comes from the Em0600 registered as object 0x20600
// (1.0 when there is none).
inline void startHugeCut(undefined4 *context)
{
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    int found = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0x20600);
    if (found != 0) {
        float rate = 1.0f;
        void *enemy = (void *)FUN_00a7c8a0(found);
        if (enemy != 0 &&
            FUN_00dd6d80((undefined4 *)vcall<void *>(enemy, 0x4), (undefined4 *)DAT_01b351a0) != 0) {
            rate = thiscall<float>(FUN_0059fa90, enemy);
        }
        // FUN_00aa4520: start a motion (8 stack arguments)
        thiscall<void>(FUN_00aa4520, player, kCutAction, found, 0, 0.016666668f, 1.0f, 0x8000000, -1.0f, rate);
    }
    fld<float>(ctx, 0x3F8) = kCutAngle;  /* StateMachineContextPl0010+0x3F8: cut angle (degrees) */
    fld<int>(ctx, 0x2F8) = 1;            /* StateMachineContextPl0010+0x2F8: ? */
}

}  // namespace ZangekiHugeCutLeftKesaStatePl0010_p1

// 00B831B0  ZangekiHugeCutLeftKesaStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiHugeCutLeftKesaStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B831C0  ZangekiHugeCutLeftKesaStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiHugeCutLeftKesaStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B831D0  ZangekiHugeCutLeftKesaStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiHugeCutLeftKesaStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B831E0  ZangekiHugeCutLeftKesaStatePl0010::vf24  size=19  [class]
bool ZangekiHugeCutLeftKesaStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B83220  ZangekiHugeCutLeftKesaStatePl0010::vf00  size=6  [class]
undefined *ZangekiHugeCutLeftKesaStatePl0010::vf00()
{
    return DAT_01be9eb8;
}

// 00B916E0  ZangekiHugeCutLeftKesaStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiHugeCutLeftKesaStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6260  ZangekiHugeCutLeftKesaStatePl0010::vf08  size=19  [class]
// Enter: starts the cut motion.  (Ghidra's size covers only up to 0x00BB6273; the rest of
// the body is listed separately as FUN_00bb6273 below.)
bool ZangekiHugeCutLeftKesaStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiHugeCutLeftKesaStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    startHugeCut((undefined4 *)contextArg);
    return true;
}

// 00BB6273  FUN_00bb6273  size=241  [between]
// Not a real function: the rest of vf08 after the base call, split off by the analysis.
// EDI holds the context on entry.
void FUN_00bb6273(void)
{
    using namespace ZangekiHugeCutLeftKesaStatePl0010_p1;

    undefined4 *context;  // ? unaff_EDI: register value on entry (the context of vf08)
    startHugeCut(context);
}

// 00BB6370  ZangekiHugeCutLeftKesaStatePl0010::vf20  size=171  [class]
// Leave: clears the context flag and resets the blend of the player's animation unit.
undefined4 ZangekiHugeCutLeftKesaStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace ZangekiHugeCutLeftKesaStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) != 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
        if (FUN_00a92f90((int)player) != 0) {
            int animation = FUN_00a92f90((int)player);  // animation unit of the player
            FUN_00e26e90(animation);
            thiscall<void>(FUN_00e35de0, (char *)animation + 0xF4, animation + 0x98, 0, 0.0f);
        }
        return 1;
    }
    return 0;
}

// 00BE34F0  ZangekiHugeCutLeftKesaStatePl0010::qteSafeCheck  size=395  [class]
// Per-frame update: blade inputs, then aims the cut and plays the blade motion of the selected
// side (an inlined switch; Ghidra could not recover its jump table at 0x00BE3724).
void ZangekiHugeCutLeftKesaStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiHugeCutLeftKesaStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<float>(ctx, 0x3F8) = kCutAngle;  /* StateMachineContextPl0010+0x3F8: cut angle (degrees) */
    if (thiscall<int>(FUN_00a94ce0, player, 0) != 0) {
        thiscall<void>(FUN_00d82510, this, 0x3C, 100);
    }
    if (thiscall<int>(FUN_00a8c760, player, 2) != 0) {
        FUN_00bd61b0(contextArg);
    }
    if (thiscall<int>(FUN_00a8c760, player, 1) != 0) {
        cdeclcall<void>(FUN_00bd6f70, contextArg, this, 100);
    }
    /* StateMachineContextPl0010+0x3F4 / +0x2F8: ? */
    fld<int>(ctx, 0x3F4) = thiscall<int>(FUN_00a8c760, player, 2);
    fld<int>(ctx, 0x2F8) = thiscall<int>(FUN_00a8c760, player, 1) == 0;
    if (thiscall<int>(FUN_00a8c760, player, 0xB) == 0) {
        StateMachineNode::qteSafeCheck(contextArg);
        return;
    }
    float cutTarget[4];  // 16-byte aligned stack vector filled by FUN_00b92a30
    FUN_00b92a30((int *)cutTarget, contextArg, fld<float>(ctx, 0x3F8) + 180.0f);
    FUN_00bb9f50(contextArg, cutTarget);

    char *current = asContextPl0010(contextArg);
    /* StateMachineContextPl0010+0x38C / +0x390: the two blade objects (+0x984: ?), +0x330: ? */
    int side = 0;
    if (fld<int>(fld<char *>(current, 0x38C), 0x984) == 0 && fld<int>(fld<char *>(current, 0x390), 0x984) != 0) {
        side = 1;
    }
    int kind = 2;
    if (fld<int>(current, 0x330) == 0x20) {
        kind = 5;
    }
    int blade = fld<int>(current, 0x38C + side * 4);
    switch (kind) {  // jump table at 0x00BE3724 (only 2 and 5 are reachable here)
    case 0:
        FUN_005ee210(blade);
        break;
    case 1:
        FUN_005ee240(blade);
        break;
    case 2:
        FUN_005ee270(blade);
        break;
    case 3:
        FUN_005ee2a0(blade);
        break;
    case 4:
        FUN_005ee2d0(blade);
        break;
    case 5:
        FUN_005ee300(blade);
        break;
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
