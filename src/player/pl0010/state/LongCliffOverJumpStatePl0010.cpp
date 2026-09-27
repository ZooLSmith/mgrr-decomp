// src/player/pl0010/state/LongCliffOverJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "LongCliffOverJumpStatePl0010.h"

// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e28[];  // LongCliffOverJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// current phase / area id
extern int DAT_018b9174;

namespace LongCliffOverJumpStatePl0010_p1 {

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

}  // namespace LongCliffOverJumpStatePl0010_p1

// 00B81850  LongCliffOverJumpStatePl0010::vf08  size=19  [class]
bool LongCliffOverJumpStatePl0010::vf08(undefined4 contextArg)
{
    return StateMachineNode::vf08(contextArg) != 0;
}

// 00B81870  LongCliffOverJumpStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 LongCliffOverJumpStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81880  LongCliffOverJumpStatePl0010::vf24  size=19  [class]
bool LongCliffOverJumpStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B818C0  LongCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined *LongCliffOverJumpStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e28;  // type record
}

// 00B91020  LongCliffOverJumpStatePl0010::vf04  size=31  [class]
undefined4 *LongCliffOverJumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BAC320  LongCliffOverJumpStatePl0010::SafeCheck  size=305  [class]
// Entry: starts the take-off motion and derives the flight scale from the jump length.
void LongCliffOverJumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace LongCliffOverJumpStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(contextArg);
        char *player = playerOf(context);
        at<int>(player, 0x4170) = 1;  /* Pl0000+0x4170 */
        saveSteering(player);
        if (at<int>(context, 0x110) == 0) {  /* StateMachineContextPl0010+0x110: alternate side */
            takeOffMotion() = 0x99;
            flightMotion() = 0x9A;
        }
        else {
            takeOffMotion() = 0x9B;
            flightMotion() = 0x9C;
        }
        int handle = FUN_00aa3f60((int)player, takeOffMotion());
        if (at<float>(player, 0x4250) <= 0.0f) {  /* Pl0000+0x4250 */
            thiscall<void>(FUN_00a96070, player, handle, 0x80, 1);
        }
        float scale = at<float>(paramsOf(context), 8) * 0.25f;  /* parameter +0x8: jump length? */
        flightScale() = scale;
        float blend = 1.0f / scale;
        flightBlend() = blend;
        if (blend <= 1.0f) {
            flightBlend() = 1.0f;
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAC460  LongCliffOverJumpStatePl0010::vf20  size=181  [class]
// Leave: restores the player and flips the side used by the next jump.
undefined4 LongCliffOverJumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace LongCliffOverJumpStatePl0010_p1;
    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *context = asContext(contextArg);
    char *player = playerOf(context);
    clearMotionMode(player);
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170 */
    restoreSteering(player);
    at<unsigned int>(context, 0x110) = at<unsigned int>(context, 0x110) ^ 1;  /* StateMachineContextPl0010+0x110 */
    return 1;
}

// 00BCAC70  LongCliffOverJumpStatePl0010::vf14  size=358  [class]
// Per frame: take-off -> flight motion, then hands over when the flight motion ends.
void LongCliffOverJumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace LongCliffOverJumpStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    if (FUN_00a9f760((int)player, takeOffMotion()) != 0 && at<float>(player, 0x4250) <= 0.0f) {
        FUN_00a96090((int)player, takeOffMotion(), 0x80, 1);
    }
    if (FUN_00a94db0((int)player, takeOffMotion()) != 0) {
        int handle = FUN_00aa3f60((int)player, flightMotion());
        thiscall<void>(FUN_00a96030, player, handle, flightBlend());
        float rate[3];
        rate[0] = flightScale();
        rate[1] = 1.0f;
        rate[2] = flightScale();
        FUN_00a95ff0((int)player, (undefined4 *)rate);
        setMotionMode1(player);
    }
    if (FUN_00a94db0((int)player, flightMotion()) != 0) {
        if (DAT_018b9174 == 0x448 && at<float>(player, 0x41E4) <= 0.6f) {  /* Pl0000+0x41E4 */
            FUN_00d82510((int)this, 0x13, 100);
        }
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, (undefined4)this) == 0) {
            FUN_008e0c00((int)motionHelper(player), (undefined4 *)(player + 0x560));  /* Pl0000+0x560 */
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BDF390  LongCliffOverJumpStatePl0010::qteSafeCheck  size=220  [class]
void LongCliffOverJumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace LongCliffOverJumpStatePl0010_p1;
    char *player = playerOf(asContext(contextArg));
    resetSteering(player);
    FUN_00b8af00((int)player);
    FUN_008e0b70((int)motionHelper(player), 0);
    FUN_008e0ba0((int)motionHelper(player), 0);
    FUN_00bd3730(contextArg, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(contextArg, (undefined4)this, 0xD);
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
