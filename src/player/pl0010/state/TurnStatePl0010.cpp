// src/player/pl0010/state/TurnStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "TurnStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e7c[];  // TurnStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace TurnStatePl0010_p1 {

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

// Pl0000+0x416C: turn flag (1 while this state runs)
inline int &turnFlag(Pl0000 *player) { return fld<int>(player, 0x416C); }

// 0x00A17A40 (named switchD_0080dbae::default in FILEMAP; ECX = player, no arguments)
inline void refreshPlayer(Pl0000 *player) { thiscall<void>((void *)0x00A17A40, player); }

}  // namespace TurnStatePl0010_p1

// 00B827D0  TurnStatePl0010::vf08  size=37  [class]
// Enter.
bool TurnStatePl0010::vf08(undefined4 context)
{
    if (StateMachineNode::vf08(context) == 0) {
        return false;
    }
    updatedOnce() = 0;
    return true;
}

// 00B82800  TurnStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 TurnStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B82810  TurnStatePl0010::vf24  size=19  [class]
bool TurnStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82850  TurnStatePl0010::vf00  size=6  [class]
undefined *TurnStatePl0010::vf00()
{
    return DAT_01be9e7c;
}

// 00B912D0  TurnStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *TurnStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB1EB0  TurnStatePl0010::SafeCheck  size=118  [class]
void TurnStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace TurnStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        Pl0000 *player = playerOf(asContextPl0010(context));
        field30() = 0;
        turnFlag(player) = 1;
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB1F30  TurnStatePl0010::qteSafeCheck  size=125  [class]
void TurnStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace TurnStatePl0010_p1;

    Pl0000 *player = playerOf(asContextPl0010(context));
    FUN_008e0b70(fld<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    StateMachineNode::qteSafeCheck(context);
}

// 00BB1FB0  TurnStatePl0010::vf20  size=121  [class]
// Leave: clears the turn flag.
undefined4 TurnStatePl0010::vf20(undefined4 *context)
{
    using namespace TurnStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    // (a context without an owner writes through the null player, as in the original)
    Pl0000 *player = playerOf(asContextPl0010(context));
    turnFlag(player) = 0;
    return 1;
}

// 00BCCAD0  TurnStatePl0010::vf14  size=160  [class]
// Update: from the second update on, try the generic transitions (priority 0x32, then 0x19);
// then take the context's yaw and refresh the player.
void TurnStatePl0010::vf14(undefined4 *context)
{
    using namespace TurnStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (updatedOnce() != 0) {
        FUN_00bb8ae0(context, (undefined4)this, 0x32);
        FUN_00bb8d00(context, (int)this, 0x19, 0, 1);
    }
    fld<float>(player, 0x94) = fld<float>(ctx, 0x74);  /* Pl0000+0x94: yaw; StateMachineContextPl0010+0x74: ? target yaw */
    refreshPlayer(player);
    updatedOnce() = 1;
    StateMachineNode::vf14(context);
}
