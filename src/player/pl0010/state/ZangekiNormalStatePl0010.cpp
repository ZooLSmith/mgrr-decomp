// src/player/pl0010/state/ZangekiNormalStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiNormalStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9edc[];  // ZangekiNormalStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace ZangekiNormalStatePl0010_p1 {

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

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}

// obj when it is a Pl0000 (type record from vftable slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

}  // namespace ZangekiNormalStatePl0010_p1

// 00B836D0  ZangekiNormalStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiNormalStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B836E0  ZangekiNormalStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiNormalStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B836F0  ZangekiNormalStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiNormalStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B83700  ZangekiNormalStatePl0010::vf24  size=19  [class]
bool ZangekiNormalStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B83740  ZangekiNormalStatePl0010::vf00  size=6  [class]
undefined *ZangekiNormalStatePl0010::vf00()
{
    return DAT_01be9edc;
}

// 00B91890  ZangekiNormalStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiNormalStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB7550  ZangekiNormalStatePl0010::vf08  size=159  [class]
// Enter: sets the player's zangeki mode to 1, initialises the fields and attaches child state 0x43.
bool ZangekiNormalStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiNormalStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(player, 0x40C8) = 1;  /* Pl0000+0x40C8: zangeki mode (1 here, 0 on leave) */
    value30() = 0xB4;
    frameCount() = 0;
    value38() = 0;
    value3C() = 1;
    // StateMachineContext+0x4: state factory; vftable slot 0 creates the node of a state id
    // (it pops only the id: the context pushed before it is the last argument of FUN_00d82bf0)
    void *factory = fld<void *>((void *)contextArg, 4);
    int *node = vcall<int *>(factory, 0x0, 0x43);
    thiscall<void>(FUN_00d82bf0, this, node, contextArg);
    return true;
}

// 00BCFEC0  ZangekiNormalStatePl0010::vf20  size=127  [class]
// Leave: resets the player's zangeki mode to 0.
undefined4 ZangekiNormalStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace ZangekiNormalStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(player, 0x40C8) = 0;  /* Pl0000+0x40C8: zangeki mode */
    FUN_00bbc7f0(contextArg, (int)this);
    return 1;
}

// 00BF1190  ZangekiNormalStatePl0010::qteSafeCheck  size=120  [class]
// Per frame: counts frames and runs the shared blade-mode updates.
void ZangekiNormalStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiNormalStatePl0010_p1;

    frameCount() = frameCount() + 1;
    FUN_00bd5f40(contextArg, 35.0f, -40.0f, 0, 0);
    char *ctx = asContextPl0010(contextArg);
    if (fld<int>(ctx, 0x2F4) == 0) {  /* StateMachineContextPl0010+0x2F4: field2F4 */
        FUN_00bbb050(contextArg);
    }
    FUN_00bbc000(contextArg);
    StateMachineNode::qteSafeCheck(contextArg);
}
