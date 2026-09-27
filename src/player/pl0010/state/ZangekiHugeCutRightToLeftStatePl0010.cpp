// src/player/pl0010/state/ZangekiHugeCutRightToLeftStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiHugeCutRightToLeftStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ec4[];  // ZangekiHugeCutRightToLeftStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b351a0[];  // type of the object whose FUN_0059fa90 gives the effect scale
// object table: FUN_00a7f600 (find by id)
extern unsigned char DAT_01be9a98[];

namespace ZangekiHugeCutRightToLeftStatePl0010_p1 {

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

// 00E35DE0 (ECX = animation + 0xF4): blend a motion out
typedef void (__thiscall *BlendOutFn)(int self, int motionSet, unsigned int motionId, float blendTime);

// 00BD6F70 (__cdecl): functions.h lists only the first parameter
typedef void (__cdecl *ZangekiInputFn)(undefined4 *context, void *state, int priority);

// Effect 0xF5 on object 0x20600, scaled by that object's FUN_0059fa90 when it is a DAT_01b351a0.
inline void playEnterEffect(Pl0000 *player)
{
    int target = FUN_00a7f600((int)DAT_01be9a98, 0x20600);
    if (target == 0) {
        return;
    }
    float scale = 1.0f;
    void *obj = (void *)FUN_00a7c8a0(target);
    if (obj != 0 && FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01b351a0) != 0) {
        scale = ((ScaleFn)FUN_0059fa90)(obj);
    }
    ((PlayEffectFn)FUN_00aa4520)(player, 0xF5, target, 0, 0.016666668f, 1.0f, 0x8000000, -1.0f, scale);
}

}  // namespace ZangekiHugeCutRightToLeftStatePl0010_p1

// 00B83360  ZangekiHugeCutRightToLeftStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void ZangekiHugeCutRightToLeftStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B83370  ZangekiHugeCutRightToLeftStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiHugeCutRightToLeftStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83380  ZangekiHugeCutRightToLeftStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiHugeCutRightToLeftStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83390  ZangekiHugeCutRightToLeftStatePl0010::vf24  size=19  [class]
bool ZangekiHugeCutRightToLeftStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B833D0  ZangekiHugeCutRightToLeftStatePl0010::vf00  size=6  [class]
undefined *ZangekiHugeCutRightToLeftStatePl0010::vf00()
{
    return DAT_01be9ec4;
}

// 00B91740  ZangekiHugeCutRightToLeftStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiHugeCutRightToLeftStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB67A0  ZangekiHugeCutRightToLeftStatePl0010::vf08  size=19  [class]
// Enter.  The machine code of this function is 19 bytes and falls through into FUN_00bb67b3
// (context in EDI); the whole body is written here.
bool ZangekiHugeCutRightToLeftStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiHugeCutRightToLeftStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    playEnterEffect(player);
    fld<float>(ctx, 0x3F8) = 90.0f;  /* StateMachineContextPl0010+0x3F8: heading (degrees) */
    fld<int>(ctx, 0x2F8) = 1;        /* StateMachineContextPl0010+0x2F8: ? */
    return true;
}

// 00BB67B3  FUN_00bb67b3  size=241  [between]
// The tail of vf08 after the StateMachineNode::vf08 check (entered with the context in EDI;
// returns 1 in EAX and pops the saved EDI of vf08).
void FUN_00bb67b3(void)
{
    using namespace ZangekiHugeCutRightToLeftStatePl0010_p1;

    undefined4 *context;  // ? unaff_EDI: context set up by vf08 before this entry point
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    playEnterEffect(player);
    fld<float>(ctx, 0x3F8) = 90.0f;  /* StateMachineContextPl0010+0x3F8: heading (degrees) */
    fld<int>(ctx, 0x2F8) = 1;        /* StateMachineContextPl0010+0x2F8: ? */
}

// 00BB68B0  ZangekiHugeCutRightToLeftStatePl0010::vf20  size=171  [class]
// Leave: clears context +0x2F8 and blends motion 0 out immediately.
undefined4 ZangekiHugeCutRightToLeftStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiHugeCutRightToLeftStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    fld<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
    if (FUN_00a92f90((int)player) != 0) {
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, 0, 0.0f);
    }
    return 1;
}

// 00BE3BE0  ZangekiHugeCutRightToLeftStatePl0010::qteSafeCheck  size=395  [class]
// Per-frame update.  Rebuilt from the machine code: Ghidra stopped at the jump table of the
// inlined weapon switch (0x00BE3E14); its cases 0..5 are the six FUN_005ee210.. calls.
void ZangekiHugeCutRightToLeftStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiHugeCutRightToLeftStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    fld<float>(ctx, 0x3F8) = 90.0f;  /* StateMachineContextPl0010+0x3F8: heading (degrees) */
    if (FUN_00a94ce0((int)player, 0)) {
        FUN_00d82510((int)this, 0x3C, 100);  // request state 0x3C, priority 100
    }
    if (FUN_00a8c760((int)player, 2)) {
        FUN_00bd61b0(context);
    }
    if (FUN_00a8c760((int)player, 1)) {
        ((ZangekiInputFn)FUN_00bd6f70)(context, this, 100);
    }
    fld<int>(ctx, 0x3F4) = FUN_00a8c760((int)player, 2);          /* StateMachineContextPl0010+0x3F4: ? */
    fld<unsigned int>(ctx, 0x2F8) = FUN_00a8c760((int)player, 1) == 0;  /* StateMachineContextPl0010+0x2F8: ? */
    if (FUN_00a8c760((int)player, 0xB)) {
        float dir[4];
        FUN_00b92a30((int *)dir, context, fld<float>(ctx, 0x3F8) + 180.0f);
        FUN_00bb9f50(context, dir);

        int kind = 2;
        StateMachineContextPl0010 *ctx2 = asContext(context);
        // weapon slot: the second (+0x390) when the first's +0x984 is 0 and the second's is not
        int slot = 0;
        if (fld<int>(fld<char *>(ctx2, 0x38C), 0x984) == 0 &&  /* StateMachineContextPl0010+0x38C: weapon 0 */
            fld<int>(fld<char *>(ctx2, 0x390), 0x984) != 0) {  /* StateMachineContextPl0010+0x390: weapon 1 */
            slot = 1;
        }
        if (fld<int>(ctx2, 0x330) == 0x20) {  /* StateMachineContextPl0010+0x330: ? */
            kind = 5;
        }
        int weapon = fld<int>(ctx2, 0x38C + slot * 4);
        switch (kind) {
        case 0:
            FUN_005ee210(weapon);
            break;
        case 1:
            FUN_005ee240(weapon);
            break;
        case 2:
            FUN_005ee270(weapon);
            break;
        case 3:
            FUN_005ee2a0(weapon);
            break;
        case 4:
            FUN_005ee2d0(weapon);
            break;
        case 5:
            FUN_005ee300(weapon);
            break;
        }
    }
    StateMachineNode::qteSafeCheck(context);
}
