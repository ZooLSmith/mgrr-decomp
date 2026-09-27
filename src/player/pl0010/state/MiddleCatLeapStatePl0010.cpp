// src/player/pl0010/state/MiddleCatLeapStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "MiddleCatLeapStatePl0010.h"

// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e30[];  // MiddleCatLeapStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace MiddleCatLeapStatePl0010_p1 {

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

// __cdecl call of a function (used where functions.h has the wrong prototype)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
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

// Pl0000+0x4180/+0x417C/+0x4184 saved into +0x418C/+0x4188/+0x4190 on entry
inline void saveSteering(char *player)
{
    at<float>(player, 0x418C) = at<float>(player, 0x4180);
    at<float>(player, 0x4188) = at<float>(player, 0x417C);
    at<float>(player, 0x4190) = at<float>(player, 0x4184);
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

// True unless (Pl0000+0x41E0 is clear or +0x41E4 > 0.36) and the motion helper is idle
// (FUN_008e2740); the raw nests these tests the same way.
inline bool nearGroundOrBusy(char *player)
{
    return (at<int>(player, 0x41E0) != 0 && !(0.36f < at<float>(player, 0x41E4))) ||
           fastcallInt(FUN_008e2740, motionHelper(player)) != 0;
}

}  // namespace MiddleCatLeapStatePl0010_p1

// 00B81970  MiddleCatLeapStatePl0010::vf08  size=58  [class]
// Enter.
bool MiddleCatLeapStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return 0;
    }
    field48() = 0.0f;
    field40() = 0;
    field44() = 0;
    field5C() = 0.0f;
    field54() = 0;
    field58() = 0;
    leapStarted() = 0;
    leapEnded() = 0;
    return 1;
}

// 00B819B0  MiddleCatLeapStatePl0010::vf24  size=19  [class]
bool MiddleCatLeapStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B819F0  MiddleCatLeapStatePl0010::vf00  size=6  [class]
undefined *MiddleCatLeapStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e30;  // type record
}

// 00B91060  MiddleCatLeapStatePl0010::vf04  size=31  [class]
undefined4 *MiddleCatLeapStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BAC720  MiddleCatLeapStatePl0010::SafeCheck  size=333  [class]
// Entry: starts the approach (0xAD) or directly the leap (0xB1).
void MiddleCatLeapStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace MiddleCatLeapStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(contextArg);
        char *player = playerOf(context);
        at<int>(player, 0x4170) = 1;  /* Pl0000+0x4170 */
        saveSteering(player);
        char *params = paramsOf(context);
        param394() = at<float>(params, 0x394);
        rateY() = at<float>(params, 0x38C);
        rateXZ() = at<float>(params, 0x388);
        if (at<int>(params, 0x3A8) == 0) {  /* parameter +0x3A8: skip the approach */
            FUN_00aa3f60((int)player, 0xAD);
            leapMotion() = 0xAF;
        }
        else {
            leapMotion() = 0xB1;
            FUN_00aa3f60((int)player, 0xB1);
            float rate[3];
            rate[0] = rateXZ();
            rate[1] = rateY();
            rate[2] = rateXZ();
            leapStarted() = 1;
            FUN_00a95ff0((int)player, (undefined4 *)rate);
        }
        setMotionMode1(player);
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAC870  MiddleCatLeapStatePl0010::vf20  size=171  [class]
// Leave: restores the player.
undefined4 MiddleCatLeapStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace MiddleCatLeapStatePl0010_p1;
    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(contextArg));
    clearMotionMode(player);
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170 */
    restoreSteering(player);
    return 1;
}

// 00BCAEE0  MiddleCatLeapStatePl0010::vf14  size=335  [class]
// Per frame: once the leap motion ends (or is cancelled) hands over to the next state.
void MiddleCatLeapStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace MiddleCatLeapStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    if (leapStarted() != 0) {
        if (FUN_00a94db0((int)player, leapMotion()) != 0) {
            leapEnded() = 1;
            if (nearGroundOrBusy(player)) {
                FUN_00bb8ae0(contextArg, (undefined4)this, 100);
                FUN_00bb8d00(contextArg, (int)this, 100, 0, 1);
            }
            else if (cdeclcall<int>(FUN_00bb90c0, contextArg, (undefined4)this) == 0) {
                FUN_008e0c00((int)motionHelper(player), (undefined4 *)(player + 0x560));  /* Pl0000+0x560 */
            }
        }
        if (leapStarted() != 0 && FUN_00a9f7d0((int)player, leapMotion()) != 0) {
            resetSteering(player);
            FUN_00b8af00((int)player);
            FUN_00bb8ae0(contextArg, (undefined4)this, 100);
            FUN_00bb8d00(contextArg, (int)this, 100, 1, 1);
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BCB030  MiddleCatLeapStatePl0010::vf18  size=181  [class]
undefined4 MiddleCatLeapStatePl0010::vf18(undefined4 contextArg)
{
    using namespace MiddleCatLeapStatePl0010_p1;
    char *player = playerOf(asContext((void *)contextArg));
    if (leapEnded() != 0 && at<int>(this, 0x24) < 0) {  /* StateMachineNode+0x24: requested state */
        if (nearGroundOrBusy(player)) {
            FUN_00bb8ae0((undefined4 *)contextArg, (undefined4)this, 100);
            FUN_00bb8d00((undefined4 *)contextArg, (int)this, 100, 0, 1);
        }
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BDF590  MiddleCatLeapStatePl0010::qteSafeCheck  size=326  [class]
// Approach 0xAD -> 0xAE -> leap motion.
void MiddleCatLeapStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace MiddleCatLeapStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    FUN_008e0b70((int)motionHelper(player), 0);
    FUN_008e0ba0((int)motionHelper(player), 0);
    if (FUN_00a94db0((int)player, 0xAD) != 0) {
        FUN_00aa3f60((int)player, 0xAE);
        float rate[3];
        rate[0] = rateXZ();
        rate[1] = rateY();
        rate[2] = rateXZ();
        FUN_00a95ff0((int)player, (undefined4 *)rate);
    }
    if (FUN_00a94db0((int)player, 0xAE) != 0) {
        leapStarted() = 1;
        FUN_00aa3f60((int)player, leapMotion());
    }
    if (at<int>(this, 0x24) < 0) {  /* StateMachineNode+0x24: requested state */
        if (FUN_00a9f760((int)player, 0xAE) == 0) {
            FUN_00bd3620(contextArg, (int)this, 100);
        }
    }
    if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) != 0) {  /* input flags */
        FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
        FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
        FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
        FUN_00bd39d0(contextArg, (undefined4)this, 10);
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
