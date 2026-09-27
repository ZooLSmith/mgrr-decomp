// src/player/pl0010/state/ZangekiHugeHoldStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiHugeHoldStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ec8[];  // ZangekiHugeHoldStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b351a0[];  // type of the object whose FUN_0059fa90 gives the effect scale
// object table: FUN_00a7f600 (find by id)
extern unsigned char DAT_01be9a98[];

namespace ZangekiHugeHoldStatePl0010_p1 {

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

// 00AA4520 (ECX = player): plays effect `effectId` on `target` (functions.h has no parameters)
typedef void (__thiscall *PlayEffectFn)(void *player, int effectId, int target, int arg3, float rate,
                                        float scale0, int flags, float arg7, float scale);

// 0059FA90 (ECX = obj): effect scale, returned on the x87 stack
typedef float (__thiscall *ScaleFn)(void *obj);

// 00BD6F70 (__cdecl): functions.h lists only the first parameter
typedef void (__cdecl *ZangekiInputFn)(undefined4 *context, void *state, int priority);

}  // namespace ZangekiHugeHoldStatePl0010_p1

// 00B833F0  ZangekiHugeHoldStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiHugeHoldStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B83400  ZangekiHugeHoldStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiHugeHoldStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83410  ZangekiHugeHoldStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiHugeHoldStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83420  ZangekiHugeHoldStatePl0010::vf20  size=19  [class]
undefined4 ZangekiHugeHoldStatePl0010::vf20(undefined4 *context)
{
    return StateMachineNode::vf20(context) != 0;
}

// 00B83440  ZangekiHugeHoldStatePl0010::vf24  size=19  [class]
bool ZangekiHugeHoldStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83480  ZangekiHugeHoldStatePl0010::vf00  size=6  [class]
undefined *ZangekiHugeHoldStatePl0010::vf00()
{
    return DAT_01be9ec8;
}

// 00B91760  ZangekiHugeHoldStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiHugeHoldStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6960  ZangekiHugeHoldStatePl0010::vf08  size=261  [class]
// Enter: effect 0xEE on object 0x20600 (scaled by its FUN_0059fa90 when it is a DAT_01b351a0).
bool ZangekiHugeHoldStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiHugeHoldStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    value34() = 10.0f;
    value30() = 10.0f;
    int target = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
    if (target != 0) {
        float scale = 1.0f;
        void *obj = (void *)FUN_00a7c8a0(target);
        if (obj != 0 && FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01b351a0) != 0) {
            scale = ((ScaleFn)FUN_0059fa90)(obj);
        }
        ((PlayEffectFn)FUN_00aa4520)(player, 0xEE, target, 0, 0.016666668f, 1.0f, 0, -1.0f, scale);
    }
    fld<int>(ctx, 0x3F4) = 1;  /* StateMachineContextPl0010+0x3F4: ? */
    return true;
}

// 00BE3E30  ZangekiHugeHoldStatePl0010::qteSafeCheck  size=39  [class]
void ZangekiHugeHoldStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiHugeHoldStatePl0010_p1;

    FUN_00bd61b0(context);
    ((ZangekiInputFn)FUN_00bd6f70)(context, this, 100);
    StateMachineNode::qteSafeCheck(context);
}
