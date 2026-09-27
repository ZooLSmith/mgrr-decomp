// src/player/pl0010/state/ZangekiChanceStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiChanceStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e98[];  // ZangekiChanceStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b351c0[];  // Em0700 (returned by Em0700::vf04)
// global objects passed in ECX
extern unsigned char DAT_01bebd80[];  // FUN_00c27610
extern unsigned char DAT_01d616d0[];  // FUN_00c5bbb0
extern unsigned char DAT_01be9a98[];  // object table: FUN_00a7f600 (find by id)
// plain globals
extern unsigned int DAT_01bea090;  // global flags

namespace ZangekiChanceStatePl0010_p1 {

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

}  // namespace ZangekiChanceStatePl0010_p1

// 00B82C00  ZangekiChanceStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiChanceStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B82C10  ZangekiChanceStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiChanceStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B82C20  ZangekiChanceStatePl0010::vf24  size=19  [class]
bool ZangekiChanceStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B82C60  ZangekiChanceStatePl0010::vf00  size=6  [class]
undefined *ZangekiChanceStatePl0010::vf00()
{
    return DAT_01be9e98;
}

// 00B913B0  ZangekiChanceStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiChanceStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BCD120  ZangekiChanceStatePl0010::vf08  size=322  [class]
// Enter: switches the BGM cue (normal / special) and pushes state 0x43.
bool ZangekiChanceStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiChanceStatePl0010_p1;

    undefined4 *context = (undefined4 *)contextArg;
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    inputTimer() = 0.0f;
    fld<int>(player, 0x40C8) = 2;  /* Pl0000+0x40C8 / +0x4058: ? (blade-mode state) */
    fld<int>(player, 0x4058) = 0;
    /* StateMachineContextPl0010+0x52C / +0x530: special zangeki flags, +0x4C4: BGM cue kind (0 normal, 1 SP) */
    if (fld<int>(ctx, 0x52C) == 0 && fld<int>(ctx, 0x530) == 0) {
        char *current = asContextPl0010(context);
        if (fld<int>(current, 0x4C4) != 0) {
            FUN_00b92d70(context);
            fld<int>(current, 0x4C4) = 0;
            cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Zangeki_Enter");
        }
    }
    else {
        char *current = asContextPl0010(context);
        if (fld<int>(current, 0x4C4) != 1) {
            FUN_00b92d70(context);
            fld<int>(current, 0x4C4) = 1;
            cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Zangeki_SP_Enter");
        }
    }
    // StateMachineContext+0x4: state factory; vftable slot 0 creates the node of a state id
    // (it pops only the id: the context pushed before it is the last argument of FUN_00d82bf0)
    void *factory = fld<void *>(context, 4);
    int *node = vcall<int *>(factory, 0x0, 0x43);
    thiscall<void>(FUN_00d82bf0, this, node, context);
    return true;
}

// 00BCD270  ZangekiChanceStatePl0010::SafeCheck  size=74  [class]
// First update: camera shake and FUN_00bbc2a0.
void ZangekiChanceStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiChanceStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        cdeclcall<void>(FUN_00bbc0e0, contextArg, 0.1f, 180.0f, 1.0f, 0.1f);
        FUN_00bbc2a0(contextArg);
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BCD2C0  ZangekiChanceStatePl0010::vf20  size=202  [class]
// Leave: clears the blade-mode values of the player.
undefined4 ZangekiChanceStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace ZangekiChanceStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) != 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        float uninitialisedW;  // never written in the original (stale stack slot)

        fld<float>(player, 0x341C) = 0.0f;  /* Pl0000+0x341C: ? (blade-mode timer) */
        fld<int>(player, 0x40C8) = 0;
        fld<int>(player, 0x4058) = 0;
        if (fld<int>(ctx, 0x188) != 0) {  /* StateMachineContextPl0010+0x188: ? */
            fld<float>(player, 0x890) = 0.0f;  /* Pl0000+0x890: float[4] velocity */
            fld<float>(player, 0x894) = 0.0f;
            fld<float>(player, 0x898) = 0.0f;
            fld<float>(player, 0x89C) = uninitialisedW;
        }
        FUN_00bbc7f0(contextArg, (int)this);
        return 1;
    }
    return 0;
}

// 00BF89B0  ZangekiChanceStatePl0010::qteSafeCheck  size=541  [class]
// Per-frame update.
void ZangekiChanceStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiChanceStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if ((DAT_01bea090 & 0x80000000) == 0 && FUN_00bda020((int)player) == 0.0) {
        FUN_00b92be0(contextArg, (undefined4)this, 100, 1);
    }
    int found = thiscall<int>(FUN_00c27610, DAT_01bebd80, 20.0f, 1);
    if (found != 0) {
        FUN_00a7c8a0(found);
    }
    if (!(0.0f < fld<float>(player, 0x341C))) {  /* Pl0000+0x341C: ? (blade-mode timer) */
        FUN_00b92be0(contextArg, (undefined4)this, 100, 1);
    }
    thiscall<void>(FUN_00c5bbb0, DAT_01d616d0, 2);
    thiscall<void>(FUN_00c5bbb0, DAT_01d616d0, 0x10);
    cdeclcall<int>(FUN_00be6620, contextArg, this, 100, (int)(0.0f < inputTimer()), 0);
    if (fld<int>(asContextPl0010(contextArg), 0x2F4) == 0) {  /* StateMachineContextPl0010+0x2F4: ? */
        FUN_00bbb050(contextArg);
    }
    FUN_00bbc310(contextArg);
    FUN_00bbc000(contextArg);
    cdeclcall<void>(FUN_00bf24f0, contextArg, 1.0f);

    float lowerLimit = -40.0f;
    int handle = thiscall<int>(FUN_00a7f600, DAT_01be9a98, 0x2070A);
    if (handle != 0) {
        void *enemy = (void *)FUN_00a7c8a0(handle);
        if (enemy != 0 &&
            FUN_00dd6d80((undefined4 *)vcall<void *>(enemy, 0x4), (undefined4 *)DAT_01b351c0) != 0 &&
            thiscall<int>(FUN_00a8cbe0, enemy, 0x20016) != 0) {
            lowerLimit = -65.0f;
        }
    }
    FUN_00bd5f40(contextArg, 35.0f, lowerLimit, 0, 0);

    /* Pl0000+0xCFC: pad buttons pressed this frame, +0x910: frame time */
    if (inputTimer() == 0.0f && (fld<unsigned char>(player, 0xCFC) & 0x20) != 0) {
        inputTimer() = 20.0f;
    }
    float remaining = inputTimer() - fld<float>(player, 0x910);
    inputTimer() = remaining;
    if (remaining < 0.0f) {
        inputTimer() = 0.0f;
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
