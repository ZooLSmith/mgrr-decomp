// src/player/pl0010/state/QuickTurnStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "QuickTurnStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e64[];  // QuickTurnStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace QuickTurnStatePl0010_p1 {

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

}  // namespace QuickTurnStatePl0010_p1

// 00B82380  QuickTurnStatePl0010::vf08  size=19  [class]
bool QuickTurnStatePl0010::vf08(undefined4 param_1)
{
    return StateMachineNode::vf08(param_1) != 0;
}

// 00B823A0  QuickTurnStatePl0010::vf18  size=5  [class]
undefined4 QuickTurnStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B823B0  QuickTurnStatePl0010::vf24  size=19  [class]
bool QuickTurnStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B823F0  QuickTurnStatePl0010::vf00  size=6  [class]
undefined *QuickTurnStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e64;  // type record
}

// 00B91210  QuickTurnStatePl0010::vf04  size=31  [class]
undefined4 *QuickTurnStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB0C10  QuickTurnStatePl0010::SafeCheck  size=208  [class]
// Entry: picks turn motion 0x48 / 0x49 and starts it.
void QuickTurnStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace QuickTurnStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *player = playerOf(asContext(param_2));
        unsigned char scratch[28];  // out-buffer of FUN_00b8afd0
        if (thiscall<int>(FUN_00b8afd0, player, scratch) == 3) {
            turnMotion() = 0x48;
        }
        else {
            turnMotion() = 0x49;
        }
        thiscall<int>(FUN_00aa3f60, player, turnMotion());
        at<int>(player, 0x416C) = 1;  /* Pl0000+0x416C */
        at<int>(player, 0x5078) = 1;  /* Pl0000+0x5078 */
        if (turnMotion() == 0x48) {
            thiscall<void>(FUN_00aa92c0, player, 0x11);
        }
        else if (turnMotion() == 0x49) {
            thiscall<void>(FUN_00aa92c0, player, 0x12);
        }
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BB0CE0  QuickTurnStatePl0010::vf20  size=120  [class]
undefined4 QuickTurnStatePl0010::vf20(undefined4 *param_1)
{
    using namespace QuickTurnStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(param_1));
    at<int>(player, 0x416C) = 0;  /* Pl0000+0x416C */
    at<int>(player, 0x5078) = 0;  /* Pl0000+0x5078 */
    return 1;
}

// 00BCC570  QuickTurnStatePl0010::vf14  size=126  [class]
void QuickTurnStatePl0010::vf14(undefined4 *param_2)
{
    using namespace QuickTurnStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    if (thiscall<int>(FUN_00a94db0, player, turnMotion()) != 0) {
        FUN_00bb8d00(param_2, (int)this, 100, 0, 1);
    }
    StateMachineNode::vf14(param_2);
}

// 00BE08F0  QuickTurnStatePl0010::qteSafeCheck  size=169  [class]
void QuickTurnStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace QuickTurnStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);
    FUN_00bd3730(param_2, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(param_2, (undefined4)this, 0xD);
    FUN_00bd3910(param_2, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(param_2, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(param_2);
}
