// src/player/pl0010/state/ZangekiLandingStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiLandingStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ed4[];  // ZangekiLandingStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace ZangekiLandingStatePl0010_p1 {

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

// __thiscall call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, typeSlot), (undefined4 *)type);
    return isKind != 0 ? (char *)obj : 0;
}

inline StateMachineContextPl0010 *asContext(const void *obj)
{
    return (StateMachineContextPl0010 *)downcast(obj, 0x0, DAT_01be9ef4);
}

inline Pl0000 *asPl0000(const void *obj)
{
    return (Pl0000 *)downcast(obj, 0x4, DAT_01be9db8);
}

// 00AA4080 (ECX = player): starts a motion (functions.h has no parameters)
typedef void (__thiscall *StartMotionFn)(void *player, int motion, int arg2, float rate, float blend,
                                         int flags, float arg6, float speed);

// 00E35DE0 (ECX = animation + 0xF4): blend a motion out
typedef void (__thiscall *BlendOutFn)(int self, int motionSet, unsigned int motionId, float blendTime);

}  // namespace ZangekiLandingStatePl0010_p1

// 00B835A0  ZangekiLandingStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiLandingStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B835B0  ZangekiLandingStatePl0010::qteSafeCheck  size=5  [class]
// A tail jump to StateMachineNode::qteSafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiLandingStatePl0010::qteSafeCheck(undefined4 *context)
{
    StateMachineNode::qteSafeCheck(context);
}

// 00B835C0  ZangekiLandingStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiLandingStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B835D0  ZangekiLandingStatePl0010::vf24  size=19  [class]
bool ZangekiLandingStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83610  ZangekiLandingStatePl0010::vf00  size=6  [class]
undefined *ZangekiLandingStatePl0010::vf00()
{
    return DAT_01be9ed4;
}

// 00B91850  ZangekiLandingStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiLandingStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6C40  ZangekiLandingStatePl0010::vf08  size=222  [class]
// Enter: starts motion 0x13F, resets Pl0000+0x890 to (0, 0, 0, 1), calls the player's slot 0x314
// and FUN_008e0af0(1) on its motion helper.
bool ZangekiLandingStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiLandingStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    motionId() = 0;
    ((StartMotionFn)FUN_00aa4080)(player, 0x13F, 0, 0.016666668f, 1.0f, 0x8000000, -1.0f, 1.0f);
    fld<float>(player, 0x890) = 0.0f;  /* Pl0000+0x890: float[4] (0, 0, 0, 1) */
    fld<float>(player, 0x894) = 0.0f;
    fld<float>(player, 0x898) = 0.0f;
    fld<float>(player, 0x89C) = 1.0f;
    vcall<void>(player, 0x314);
    FUN_008e0af0(fld<int>(player, 0x764), 1);  /* Pl0000+0x764: motion helper */
    return true;
}

// 00BB6D20  ZangekiLandingStatePl0010::vf14  size=126  [class]
// Requests state 0x3D (priority 0x19) once the tracked motion has ended (FUN_00a94ce0).
void ZangekiLandingStatePl0010::vf14(undefined4 *context)
{
    using namespace ZangekiLandingStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (motionId() != -1 && FUN_00a94ce0((int)player, motionId())) {
        FUN_00d82510((int)this, 0x3D, 0x19);
    }
    StateMachineNode::vf14(context);
}

// 00BB6DA0  ZangekiLandingStatePl0010::vf20  size=206  [class]
// Leave: sets the tracked motion's rate to 1.0 and blends it out immediately.
undefined4 ZangekiLandingStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiLandingStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (FUN_00a92f90((int)player) != 0) {
        thiscall<void>(FUN_00a96030, player, motionId(), 1.0f);
        unsigned int motion = motionId();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.0f);
    }
    motionId() = -1;
    fld<int>(ctx, 0x188) = 0;  /* StateMachineContextPl0010+0x188: ? */
    fld<int>(ctx, 0x3EC) = 0;  /* StateMachineContextPl0010+0x3EC: ? */
    return 1;
}
