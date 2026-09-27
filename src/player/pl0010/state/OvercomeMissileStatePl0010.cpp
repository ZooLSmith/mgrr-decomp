// src/player/pl0010/state/OvercomeMissileStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OvercomeMissileStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e58[];  // OvercomeMissileStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// debug-print string (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] ..." zero-vector warning

// CRT (the compiler emitted fabs inline)
extern "C" double __cdecl fabs(double x);

namespace OvercomeMissileStatePl0010_p1 {

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

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// FUN_00b8b610 (declared bool) returns an int that is compared against 0x16 here
typedef int (__fastcall *IntFastcallFn)(int self);

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

// The entity referenced by an entity handle (FUN_00a81330 -> entry, FUN_00a7c8a0 -> object).
inline char *handleTarget(void *handle)
{
    return (char *)FUN_00a7c8a0(FUN_00a81330((uint *)handle));
}

// Player motion helper object at Pl0000+0x764: +0x104 mode, +0xD0 -> float at +4
inline void setMotionMode1(char *player)
{
    char *motion = at<char *>(player, 0x764);  /* Pl0000+0x764: motion helper */
    if (at<int>(motion, 0x104) != 1) {
        at<int>(motion, 0x104) = 1;
        at<float>(at<char *>(motion, 0xD0), 4) = 0.0f;
    }
}

}  // namespace OvercomeMissileStatePl0010_p1

// 00B82190  OvercomeMissileStatePl0010::vf08  size=49  [class]
bool OvercomeMissileStatePl0010::vf08(undefined4 param_1)
{
    if (StateMachineNode::vf08(param_1) == 0) {
        return 0;
    }
    finished() = 0;
    field48() = 0.0f;
    field50() = 0;
    field54() = 0;
    landed() = 0;
    return 1;
}

// 00B821D0  OvercomeMissileStatePl0010::vf18  size=5  [class]
undefined4 OvercomeMissileStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B821E0  OvercomeMissileStatePl0010::vf24  size=19  [class]
bool OvercomeMissileStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B82200  OvercomeMissileStatePl0010::OvercomeMissileStatePl0010  size=33  [class]
OvercomeMissileStatePl0010::OvercomeMissileStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = OvercomeMissileStatePl0010::vftable (0x016A19A4)
    FUN_00a7c930((undefined4 *)missileHandle());
}

// 00B82230  OvercomeMissileStatePl0010::vf00  size=6  [class]
undefined *OvercomeMissileStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e58;  // type record
}

// 00B911B0  OvercomeMissileStatePl0010::vf04  size=31  [class]
undefined4 *OvercomeMissileStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB0460  OvercomeMissileStatePl0010::SafeCheck  size=708  [class]
// Entry: picks up the missile, plays motion 0xB7 / 0xB8 depending on its side and prepares the jump.
void OvercomeMissileStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace OvercomeMissileStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(param_2);
        char *player = playerOf(context);
        setMotionMode1(player);
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x418C = +0x4180 (saved) */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);  /* Pl0000+0x4188 = +0x417C */
        at<float>(player, 0x4190) = at<float>(player, 0x4184);  /* Pl0000+0x4190 = +0x4184 */

        int handle;  // temporary entity handle
        // StateMachineContextPl0010+0xC0 -> +4: the missile (+0xB50 inside it)
        thiscall<void>(FUN_00a7c940, &handle, at<int>(at<char *>(context, 0xC0), 4) + 0xB50);
        float jumpHeight = at<float>(at<char *>(player, 0x764), 0xFC) + 3.0f;  /* Pl0000+0x764: motion helper */
        char *missile = handleTarget(&handle);

        float direction[4];
        targetPos()[0] = at<float>(missile, 0x40);
        targetPos()[1] = at<float>(missile, 0x44) + 0.5f;
        targetPos()[2] = at<float>(missile, 0x48);
        targetPos()[3] = at<float>(missile, 0x4C) + direction[3];  // ? reads the not yet written stack slot

        float delta[4];
        delta[0] = targetPos()[0] - at<float>(player, 0x40);  /* Pl0000+0x40: position */
        delta[1] = targetPos()[1] - at<float>(player, 0x44);
        delta[2] = targetPos()[2] - at<float>(player, 0x48);
        delta[3] = targetPos()[3] - at<float>(player, 0x4C);
        float axisBuffer[4];
        float *axis = thiscall<float *>(FUN_00a92640, player, axisBuffer);
        float side = axis[1] * delta[1] + axis[0] * delta[0] + axis[2] * delta[2];
        thiscall<int>(FUN_00aa3f60, player, (0.0f < side) ? 0xB8 : 0xB7);

        direction[0] = delta[0];
        direction[1] = delta[1];
        direction[2] = delta[2];
        direction[3] = delta[3];
        if (direction[0] != 0.0f || direction[1] != 0.0f || direction[2] != 0.0f) {
            float lengthSq = direction[1] * direction[1] + direction[0] * direction[0] + direction[2] * direction[2];
            // inlined Hw::VecNormalize (the NaN self-comparisons are in the machine code)
            if (!(lengthSq <= 0.0f) && direction[0] == direction[0] && direction[1] == direction[1] &&
                direction[2] == direction[2]) {
                FUN_00ddf460(direction, direction);
            }
            else {
                cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
                direction[0] = 0.0f;
                direction[1] = 1.0f;
                direction[2] = 0.0f;
            }
        }
        thiscall<void>(FUN_00a95fb0, player, 0.0f);
        FUN_00d83250(&curve30(), &curve34(), 6.0f, jumpHeight,
                     (float)fabs(at<float>(at<char *>(player, 0x764), 0xF4)));
        thiscall<void>(FUN_00a7c960, missileHandle(), &handle);
        FUN_00a937e0((int)player);
        field38() = 0.0f;
        field3C() = 0.0f;
        startY() = at<float>(player, 0x44);
        field4C() = 0.0f;
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BB0730  OvercomeMissileStatePl0010::vf20  size=179  [class]
undefined4 OvercomeMissileStatePl0010::vf20(undefined4 *param_1)
{
    using namespace OvercomeMissileStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(param_1));
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion helper */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<float>(player, 0x4180) = at<float>(player, 0x418C);  /* restore values saved by SafeCheck */
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    if (at<int>(this, 0x24) != 0x20) {  /* StateMachineNode+0x24: next state id? */
        FUN_00a93820((int)player);
    }
    return 1;
}

// 00BCC260  OvercomeMissileStatePl0010::vf14  size=309  [class]
void OvercomeMissileStatePl0010::vf14(undefined4 *param_2)
{
    using namespace OvercomeMissileStatePl0010_p1;
    char *context = asContext(param_2);
    char *player = playerOf(context);
    if (thiscall<int>(FUN_00a94db0, player, 0xB7) != 0 || thiscall<int>(FUN_00a94db0, player, 0xB8) != 0) {
        landed() = 1;
    }
    if (finished() != 0) {
        at<int>(context, 0x30) = 1;  /* StateMachineContextPl0010+0x30: ? */
        if ((at<int>(player, 0x41E0) != 0 && at<float>(player, 0x41E4) <= 0.36f) ||  /* Pl0000+0x41E0 / +0x41E4 */
            FUN_008e2740(at<int>(player, 0x764)) != 0) {
            thiscall<void>(FUN_00d82510, this, 0x13, 100);
            if (((IntFastcallFn)FUN_00b8b610)((int)player) == 0x16) {
                thiscall<void>(FUN_00d82510, this, 0x20, 0x96);
            }
        }
    }
    if (landed() != 0) {
        if (cdeclcall<int>(FUN_00bb90c0, param_2, this) != 0) {
            thiscall<void>(FUN_008e0c00, at<void *>(player, 0x764), player + 0x560);  /* Pl0000+0x560 */
            if (((IntFastcallFn)FUN_00b8b610)((int)player) == 0x16) {
                thiscall<void>(FUN_00d82510, this, 0x20, 0x96);
            }
        }
    }
    StateMachineNode::vf14(param_2);
}

// 00BE03C0  OvercomeMissileStatePl0010::qteSafeCheck  size=673  [class]
// Steers the player towards the missile until the motion ends.
void OvercomeMissileStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace OvercomeMissileStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    float yaw = (float)thiscall<float10>(FUN_00a8ed10, player, targetPos(), (float *)(player + 0x40));  /* Pl0000+0x40: position */
    thiscall<void>(FUN_00a8e960, player, yaw);
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);
    if (FUN_00a81330((uint *)missileHandle()) == 0 ||
        (int)FUN_00a8cab0((int)handleTarget(missileHandle())) >= 3) {
        finished() = 1;
    }
    if (FUN_00a81330((uint *)missileHandle()) == 0) {
        landed() = 1;
    }
    else {
        char *missile = handleTarget(missileHandle());
        float move[4];
        float delta[4];      // missile (+0.5 on y) - player position
        float direction[4];  // normalised copy (the result is not used afterwards)
        delta[0] = at<float>(missile, 0x40) - at<float>(player, 0x40);
        delta[1] = (at<float>(missile, 0x44) + 0.5f) - at<float>(player, 0x44);
        delta[2] = at<float>(missile, 0x48) - at<float>(player, 0x48);
        delta[3] = (at<float>(missile, 0x4C) + move[3]) - at<float>(player, 0x4C);  // ? reads the not yet written stack slot
        direction[0] = delta[0];
        direction[1] = delta[1];
        direction[2] = delta[2];
        direction[3] = delta[3];
        if (direction[0] != 0.0f || direction[1] != 0.0f || direction[2] != 0.0f) {
            float lengthSq = direction[1] * direction[1] + direction[0] * direction[0] + direction[2] * direction[2];
            // inlined Hw::VecNormalize (the NaN self-comparisons are in the machine code)
            if (!(lengthSq <= 0.0f) && direction[0] == direction[0] && direction[1] == direction[1] &&
                direction[2] == direction[2]) {
                FUN_00ddf460(direction, direction);
            }
            else {
                cdeclcall<void>(FUN_00dd5650, DAT_0163d0ac);
                direction[0] = 0.0f;
                direction[1] = 1.0f;
                direction[2] = 0.0f;
            }
        }
        float endFrame = (float)thiscall<float10>(FUN_00a95680, player, 0);
        double remaining = (double)endFrame - (double)thiscall<float10>(FUN_00a958c0, player, 0);
        if (0.0 < remaining) {
            double frames = remaining * 60.0f;
            move[0] = (float)(delta[0] / frames);
            move[1] = (float)(delta[1] / frames);
            move[2] = (float)(delta[2] / frames);
            move[3] = (float)(delta[3] / frames);
            vcall<void>(player, 0x70, move);
        }
        float *result = thiscall<float *>(FUN_008e0ce0, at<void *>(player, 0x764), move);
        if (result[1] < 0.0f) {
            finished() = 1;
        }
    }
    FUN_00bd3730(param_2, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(param_2, (undefined4)this, 0xD);
    FUN_00bd3910(param_2, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(param_2, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(param_2);
}
