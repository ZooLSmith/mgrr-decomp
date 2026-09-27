// src/player/pl0010/state/AvoidSlidingStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AvoidSlidingStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9df4[];  // AvoidSlidingStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace AvoidSlidingStatePl0010_p1 {

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

}  // namespace AvoidSlidingStatePl0010_p1

// 00B80F50  AvoidSlidingStatePl0010::vf08  size=19  [class]
// Enter.
bool AvoidSlidingStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B80F70  AvoidSlidingStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 AvoidSlidingStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B80F80  AvoidSlidingStatePl0010::vf24  size=19  [class]
bool AvoidSlidingStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B80FC0  AvoidSlidingStatePl0010::vf00  size=6  [class]
undefined *AvoidSlidingStatePl0010::vf00()
{
    return DAT_01be9df4;
}

// 00B90C80  AvoidSlidingStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *AvoidSlidingStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA9400  AvoidSlidingStatePl0010::SafeCheck  size=173  [class]
// First update: starts the slide (action 0x2C) and saves the camera angles.
void AvoidSlidingStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace AvoidSlidingStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        FUN_00aa3f60((int)player, 0x2C);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        FUN_00aa92c0((undefined4)player, 4);
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden by the state */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BA94B0  AvoidSlidingStatePl0010::qteSafeCheck  size=144  [class]
// Per-frame update: aims the camera with the slide angles of the parameter table.
void AvoidSlidingStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace AvoidSlidingStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    FUN_00b8af00((int)player);
    char *params = fld<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter table */
    float pitchDegrees = fld<float>(params, 0x20);
    fld<float>(player, 0x4180) = fld<float>(params, 0x24);  /* Pl0000+0x417C..0x4184: camera angles */
    fld<float>(player, 0x417C) = pitchDegrees * 0.017453292f;
    fld<float>(player, 0x4184) = 0.0f;
    StateMachineNode::qteSafeCheck(contextArg);
}

// 00BA9540  AvoidSlidingStatePl0010::vf20  size=146  [class]
// Leave: restores the camera angles.
undefined4 AvoidSlidingStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace AvoidSlidingStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: camera angles overridden by the state */
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BC9860  AvoidSlidingStatePl0010::vf14  size=196  [class]
void AvoidSlidingStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace AvoidSlidingStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94ce0((int)player, 0)) {
        FUN_00bb8d00(contextArg, (int)this, 0x19, 0, 1);
    }
    if (!FUN_008e2740(fld<int>(player, 0x764)) &&
        (fld<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
         !(fld<float>(fld<char *>(player, 0x40D4), 0x160) > fld<float>(player, 0x41E4))) &&  // NaN passes, as in the machine code  /* Pl0000+0x40D4: parameter table */
        fld<int>(player, 0x4260) != 0) {  /* Pl0000+0x4260: ? */
        FUN_00d82510((int)this, 0xE, 100);
    }
    StateMachineNode::vf14(contextArg);
}
