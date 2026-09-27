// src/player/pl0010/state/MiddleWallPopStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "MiddleWallPopStatePl0010.h"

// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e38[];  // MiddleWallPopStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace MiddleWallPopStatePl0010_p1 {

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

// __thiscall call of a function with ECX = self (used where functions.h has the wrong prototype)
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// __fastcall call returning the full EAX (functions.h types these as bool)
template <class F> inline int fastcallInt(F fn, const void *self)
{
    typedef int (__fastcall *Fn)(const void *);
    return ((Fn)fn)(self);
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

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline char *playerOf(const char *context)
{
    return asPl0000(at<void *>(context, 0xC));
}

// StateMachineContextPl0010+0xC0 -> +4: player parameter block
inline char *paramsOf(const char *context)
{
    return at<char *>(at<char *>(context, 0xC0), 4);
}

// Pl0000+0x764: motion helper object (+0x104 mode, +0xD0 -> float at +4)
inline char *motionHelper(const char *player)
{
    return at<char *>(player, 0x764);
}

inline void setMotionMode1(char *player)
{
    char *helper = motionHelper(player);
    if (at<int>(helper, 0x104) != 1) {
        at<int>(helper, 0x104) = 1;
        at<float>(at<char *>(helper, 0xD0), 4) = 0.0f;
    }
}

inline void clearMotionMode(char *player)
{
    if (at<int>(motionHelper(player), 0x104) != 0) {
        at<int>(motionHelper(player), 0x104) = 0;
    }
}

// True unless (Pl0000+0x41E0 is clear or +0x41E4 > 0.36) and the motion helper is idle
// (FUN_008e2740); the raw nests these tests the same way.
inline bool nearGroundOrBusy(char *player)
{
    return (at<int>(player, 0x41E0) != 0 && !(0.36f < at<float>(player, 0x41E4))) ||
           fastcallInt(FUN_008e2740, motionHelper(player)) != 0;
}

// Animation unit of the player (FUN_00a92f90): sets its speed vector (+0xE4/+0xE8/+0xEC).
inline void setAnimSpeed(char *player, float speedY)
{
    int unit = FUN_00a92f90((int)player);
    FUN_00e26e90(unit);
    at<float>((void *)unit, 0xE4) = 1.0f;
    at<float>((void *)unit, 0xE8) = speedY;
    at<float>((void *)unit, 0xEC) = 1.0f;
}

}  // namespace MiddleWallPopStatePl0010_p1

// 00B81AB0  MiddleWallPopStatePl0010::vf08  size=19  [class]
bool MiddleWallPopStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B81AD0  MiddleWallPopStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 MiddleWallPopStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81AE0  MiddleWallPopStatePl0010::vf24  size=19  [class]
bool MiddleWallPopStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81B20  MiddleWallPopStatePl0010::vf00  size=6  [class]
undefined *MiddleWallPopStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e38;  // type record
}

// 00B910A0  MiddleWallPopStatePl0010::vf04  size=31  [class]
undefined4 *MiddleWallPopStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BACBB0  MiddleWallPopStatePl0010::SafeCheck  size=269  [class]
// Entry: starts the wall-pop motion 0xA9 with its speed from the player parameters.
void MiddleWallPopStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace MiddleWallPopStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(contextArg);
        char *player = playerOf(context);
        char *params = paramsOf(context);
        float rate = at<float>(params, 0x31C) / at<float>(at<char *>(player, 0x40D4), 0xD4);  /* Pl0000+0x40D4 -> +0xD4 */
        float lift = at<float>(params, 0x318);
        climbRate() = rate;
        FUN_00aa3f60((int)player, 0xA9);
        float scale[3];
        scale[0] = 1.0f;
        scale[1] = rate;
        scale[2] = 1.0f - (lift + lift);
        FUN_00a95ff0((int)player, (undefined4 *)scale);
        setMotionMode1(player);
        at<int>(player, 0x4170) = 1;  /* Pl0000+0x4170 */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BACCC0  MiddleWallPopStatePl0010::vf14  size=343  [class]
void MiddleWallPopStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace MiddleWallPopStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    if (thiscall<int>(FUN_00a94ce0, player, 0) != 0) {  // tests the full EAX (functions.h types it as bool)
        clearMotionMode(player);
        if (fastcallInt(FUN_008e2740, motionHelper(player)) == 0 &&
            (at<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground distance? */
             at<float>(at<char *>(player, 0x40D4), 0x160) <= at<float>(player, 0x41E4))) {
            FUN_00d82510((int)this, 0xE, 0x32);
        }
        if (nearGroundOrBusy(player)) {
            FUN_00d82510((int)this, 0x13, 0x32);
        }
    }
    if (thiscall<int>(FUN_00a95540, player, 0, 5) != 0) {
        if (FUN_00a92f90((int)player) != 0) {
            setAnimSpeed(player, climbRate());
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BACE20  MiddleWallPopStatePl0010::vf20  size=186  [class]
// Leave: restores the player and the animation speed.
undefined4 MiddleWallPopStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace MiddleWallPopStatePl0010_p1;
    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(contextArg));
    clearMotionMode(player);
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170 */
    if (FUN_00a92f90((int)player) != 0) {
        setAnimSpeed(player, 1.0f);
    }
    return 1;
}

// 00BDF960  MiddleWallPopStatePl0010::qteSafeCheck  size=169  [class]
void MiddleWallPopStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace MiddleWallPopStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    FUN_008e0b70((int)motionHelper(player), 0);
    FUN_008e0ba0((int)motionHelper(player), 0);
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
