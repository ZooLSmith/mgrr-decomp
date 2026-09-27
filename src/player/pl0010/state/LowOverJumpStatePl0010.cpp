// src/player/pl0010/state/LowOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "LowOverJumpStatePl0010.h"

// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e2c[];  // LowOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace LowOverJumpStatePl0010_p1 {

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

inline void restoreSteering(char *player)
{
    at<float>(player, 0x4180) = at<float>(player, 0x418C);
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
}

// Steering reset from the parameters at Pl0000+0x40D4 (+0x170, +0x174 in degrees).
inline void resetSteering(char *player)
{
    char *params = at<char *>(player, 0x40D4);
    float degrees = at<float>(params, 0x174);
    at<float>(player, 0x4180) = at<float>(params, 0x170);
    at<float>(player, 0x417C) = degrees * 0.017453292f;  // degrees -> radians
    at<float>(player, 0x4184) = 0.0f;
}

}  // namespace LowOverJumpStatePl0010_p1

// 00B818E0  LowOverJumpStatePl0010::vf08  size=19  [class]
bool LowOverJumpStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B81900  LowOverJumpStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 LowOverJumpStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81910  LowOverJumpStatePl0010::vf24  size=19  [class]
bool LowOverJumpStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81950  LowOverJumpStatePl0010::vf00  size=6  [class]
undefined *LowOverJumpStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e2c;  // type record
}

// 00B91040  LowOverJumpStatePl0010::vf04  size=31  [class]
undefined4 *LowOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BAC520  LowOverJumpStatePl0010::SafeCheck  size=323  [class]
// Entry: starts the vault motion 0xA6 with its speed scaled to the obstacle.
void LowOverJumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace LowOverJumpStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(contextArg);
        char *player = playerOf(context);
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* save the steering values */
        at<int>(player, 0x4170) = 1;                             /* Pl0000+0x4170 */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);
        at<float>(player, 0x4190) = at<float>(player, 0x4184);
        float vaultParam = at<float>(paramsOf(context), 0x23C);              /* parameter +0x23C */
        float speedParam = at<float>(at<char *>(player, 0x40D4), 0xBC);      /* Pl0000+0x40D4 -> +0xBC */
        motionId() = 0xA6;
        FUN_00aa3f60((int)player, 0xA6);
        float rate[3];
        rate[0] = 1.0f;
        rate[2] = 1.0f;
        rate[1] = vaultParam / speedParam;
        FUN_00a95ff0((int)player, (undefined4 *)rate);
        FUN_00a96090((int)player, motionId(), 0x4000, 1);
        thiscall<void>(FUN_00a95f70, player, 0.033333335f);  // 1/30
        setMotionMode1(player);
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAC670  LowOverJumpStatePl0010::vf20  size=171  [class]
// Leave: restores the player.
undefined4 LowOverJumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace LowOverJumpStatePl0010_p1;
    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(contextArg));
    clearMotionMode(player);
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170 */
    restoreSteering(player);
    return 1;
}

// 00BCADE0  LowOverJumpStatePl0010::vf14  size=246  [class]
void LowOverJumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace LowOverJumpStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    if (FUN_00a94db0((int)player, motionId()) != 0) {
        if (fastcallInt(FUN_008e2740, motionHelper(player)) == 0 &&
            (at<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0 / +0x41E4: ground distance? */
             at<float>(at<char *>(player, 0x40D4), 0x160) <= at<float>(player, 0x41E4))) {
            FUN_00d82510((int)this, 0xE, 100);
        }
        FUN_00bb8d00(contextArg, (int)this, 0x32, 0, 1);
    }
    int motion = motionId();
    if (motion == 0xA4 || motion == 0xA5) {
        if (FUN_00a95270((int)player, motion, 3) != 0 && at<int>(motionHelper(player), 0x104) != 0) {
            at<int>(motionHelper(player), 0x104) = 0;
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDF470  LowOverJumpStatePl0010::qteSafeCheck  size=276  [class]
void LowOverJumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace LowOverJumpStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    resetSteering(player);
    FUN_00b8af00((int)player);
    FUN_008e0b70((int)motionHelper(player), 0);
    FUN_008e0ba0((int)motionHelper(player), 0);
    if (FUN_00a95270((int)player, 0xA6, 10) != 0) {
        clearMotionMode(player);
    }
    if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) != 0) {  /* input flags */
        FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
        FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
        FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
        FUN_00bd39d0(contextArg, (undefined4)this, 10);
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
