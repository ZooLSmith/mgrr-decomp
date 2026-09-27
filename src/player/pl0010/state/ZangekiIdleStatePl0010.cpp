// src/player/pl0010/state/ZangekiIdleStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiIdleStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ecc[];  // ZangekiIdleStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // type of the lock-on target that has FUN_005ca1a0

namespace ZangekiIdleStatePl0010_p1 {

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

// __cdecl call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
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

// 00E35DE0 (ECX = animation + 0xF4): blend a motion out
typedef void (__thiscall *BlendOutFn)(int self, int motionSet, unsigned int motionId, float blendTime);

}  // namespace ZangekiIdleStatePl0010_p1

// 00B834A0  ZangekiIdleStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiIdleStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B834B0  ZangekiIdleStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiIdleStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B834C0  ZangekiIdleStatePl0010::vf24  size=19  [class]
bool ZangekiIdleStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83500  ZangekiIdleStatePl0010::vf00  size=6  [class]
undefined *ZangekiIdleStatePl0010::vf00()
{
    return DAT_01be9ecc;
}

// 00B91780  ZangekiIdleStatePl0010::SafeCheck  size=139  [class]
// First frame (StateMachineNode+0x20 still 0): tells the lock-on target (context +0x4BC handle)
// FUN_005ca1a0(context +0x528 == 0), then runs the base SafeCheck.
void ZangekiIdleStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiIdleStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started flag */
        StateMachineContextPl0010 *ctx = asContext(context);
        int handle = FUN_00a81330((uint *)((char *)ctx + 0x4BC));  /* StateMachineContextPl0010+0x4BC: target handle */
        if (handle != 0) {
            void *target = (void *)FUN_00a7c8a0(handle);
            if (target != 0 &&
                FUN_00dd6d80((undefined4 *)vcall<void *>(target, 0x4), (undefined4 *)DAT_01b35260) != 0) {
                FUN_005ca1a0((int)target, fld<int>(ctx, 0x528) == 0);  /* StateMachineContextPl0010+0x528: ? */
            }
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00B91810  ZangekiIdleStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiIdleStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6A70  ZangekiIdleStatePl0010::vf20  size=184  [class]
// Leave: in player mode 8 the layer motion is blended out over 10 frames and cleared.
undefined4 ZangekiIdleStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiIdleStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (FUN_00a92f90((int)player) != 0 && fld<int>(player, 0x40C8) == 8) {  /* Pl0000+0x40C8: mode */
        unsigned int motionId = layerMotion();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motionId, 10.0f);
        layerMotion() = 0xFFFFFFFF;
    }
    return 1;
}

// 00BE3E60  ZangekiIdleStatePl0010::vf08  size=172  [class]
// Enter: starts motion 0xEB with the layer motion from FUN_00bbc5f0.
bool ZangekiIdleStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiIdleStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    layerMotion() = FUN_00bbc5f0(context);
    motion() = 0xEB;
    fld<int>(ctx, 0x564) = 0;  /* StateMachineContextPl0010+0x564: ? */
    fld<int>(ctx, 0x570) = 0;  /* StateMachineContextPl0010+0x570: ? */
    FUN_00bd6370(context, (int)this, motion(), layerMotion());
    fld<int>(player, 0x40BC) = 1;  /* Pl0000+0x40BC: ? */
    return true;
}

// 00BE3F10  ZangekiIdleStatePl0010::qteSafeCheck  size=285  [class]
// Per-frame update: in context mode 1 the animation runs at rate 1.0; zangeki input checks.
void ZangekiIdleStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiIdleStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    if (fld<int>(ctx, 0x330) == 1) {  /* StateMachineContextPl0010+0x330: ? */
        int animation = FUN_00a92f90((int)player);
        if (thiscall<int>(FUN_00e26e90, (void *)animation) != 0) {
            thiscall<void>(FUN_00e36ac0, (void *)(animation + 0xF4), 0, 1.0f);
        }
    }
    if (fld<int>(asContext(context), 0x56C) != 0) {  /* StateMachineContextPl0010+0x56C: ? */
        FUN_00d82510((int)this, 0x35, 100);  // request state 0x35, priority 100
    }
    FUN_00bd61b0(context);
    FUN_00bd6ca0(context, (undefined4)this, 0x19);
    FUN_00bd6dd0(context, (undefined4)this, 0x19);
    cdeclcall<void>(FUN_00bd6eb0, context, this, 0x32, 0);
    cdeclcall<void>(FUN_00bbad20, context, this, 0x32);
    FUN_00bbb430(context, (undefined4)this, 100);
    int kind = *(int *)((char *)this + 0x24);  /* StateMachineNode+0x24: ? */
    if (kind == 0x31 || kind == 0x45 || kind == 0x46) {
        FUN_00b8c400((int)player);
    }
    StateMachineNode::qteSafeCheck(context);
}
