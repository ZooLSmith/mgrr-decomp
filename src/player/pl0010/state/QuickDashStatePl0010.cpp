// src/player/pl0010/state/QuickDashStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "QuickDashStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e60[];  // QuickDashStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace QuickDashStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &at(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot`
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

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, typeSlot), type);
    return isKind != 0 ? (char *)obj : 0;
}

inline char *asContext(const void *obj) { return downcast(obj, 0x0, DAT_01be9ef4); }  // StateMachineContextPl0010
inline char *asPl0000(const void *obj)  { return downcast(obj, 0x4, DAT_01be9db8); }  // Pl0000

// The player of a state-machine context (StateMachineContext+0xC: owner; no null check on ctx).
inline char *playerOf(const char *ctx)
{
    return asPl0000(at<void *>(ctx, 0xC));
}

}  // namespace QuickDashStatePl0010_p1

// 00B822F0  QuickDashStatePl0010::vf08  size=19  [class]
bool QuickDashStatePl0010::vf08(undefined4 param_1)
{
    return StateMachineNode::vf08(param_1) != 0;
}

// 00B82310  QuickDashStatePl0010::vf18  size=5  [class]
undefined4 QuickDashStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B82320  QuickDashStatePl0010::vf24  size=19  [class]
bool QuickDashStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B82360  QuickDashStatePl0010::vf00  size=6  [class]
undefined *QuickDashStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e60;  // type record
}

// 00B911F0  QuickDashStatePl0010::vf04  size=31  [class]
undefined4 *QuickDashStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB0AD0  QuickDashStatePl0010::SafeCheck  size=169  [class]
// Entry: saves the player's turn parameters and starts motion 0x39.
void QuickDashStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace QuickDashStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(param_2);
        char *player = playerOf(context);
        at<float>(context, 0x70) = 0.0f;                        /* StateMachineContextPl0010+0x70: ? */
        at<int>(player, 0x5074) = 0;                            /* Pl0000+0x5074 */
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x418C = +0x4180 (saved) */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);  /* Pl0000+0x4188 = +0x417C */
        at<float>(player, 0x4190) = at<float>(player, 0x4184);  /* Pl0000+0x4190 = +0x4184 */
        thiscall<int>(FUN_00aa9280, player, 0x39);
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BB0B80  QuickDashStatePl0010::vf20  size=136  [class]
undefined4 QuickDashStatePl0010::vf20(undefined4 *param_1)
{
    using namespace QuickDashStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(param_1));
    at<float>(player, 0x4180) = at<float>(player, 0x418C);  /* restore values saved by SafeCheck */
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    return 1;
}

// 00BCC3A0  QuickDashStatePl0010::qteSafeCheck  size=235  [class]
void QuickDashStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace QuickDashStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);
    at<float>(player, 0x4180) = 0.3f;                /* Pl0000+0x4180 */
    at<float>(player, 0x417C) = 0.5235988f;          /* Pl0000+0x417C: pi/6 */
    at<float>(player, 0x4184) = 0.0f;                /* Pl0000+0x4184 */
    FUN_00b8af00((int)player);
    if (FUN_008e2740(at<int>(player, 0x764)) == 0 &&
        (at<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4, Pl0000+0x40D4: parameters */
         !(at<float>(player, 0x41E4) < at<float>(at<char *>(player, 0x40D4), 0x160)))) {
        thiscall<void>(FUN_00d82510, this, 0xE, 100);
    }
    FUN_00bb8ae0(param_2, (undefined4)this, 100);
    StateMachineNode::qteSafeCheck(param_2);
}

// 00BCC490  QuickDashStatePl0010::vf14  size=221  [class]
void QuickDashStatePl0010::vf14(undefined4 *param_2)
{
    using namespace QuickDashStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    float threshold = at<float>(at<char *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: parameters */
    if (threshold * threshold < at<float>(player, 0xD28) &&           /* Pl0000+0xD28 */
        (at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) != 0) {  /* Pl0000+0xCF8 / +0xE48 */
        if (thiscall<int>(FUN_00a95630, player, 0x39, 0x14) != 0 || thiscall<int>(FUN_00a94db0, player, 0x39) != 0) {
            FUN_00bb8d00(param_2, (int)this, 100, 0, 1);
            StateMachineNode::vf14(param_2);
            return;
        }
    }
    else if (thiscall<int>(FUN_00a94db0, player, 0x39) != 0) {
        at<int>(player, 0x5080) = 1;  /* Pl0000+0x5080 */
    }
    StateMachineNode::vf14(param_2);
}
