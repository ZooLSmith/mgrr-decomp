// src/player/pl0010/state/OvercomeTrainToTrainStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OvercomeTrainToTrainStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e5c[];  // OvercomeTrainToTrainStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// debug-print string (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] ..." zero-vector warning

// CRT (the compiler emitted fcos inline)
extern "C" double __cdecl cos(double x);

namespace OvercomeTrainToTrainStatePl0010_p1 {

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

// Player motion helper object at Pl0000+0x764: +0x104 mode, +0xD0 -> float at +4
inline void setMotionMode1(char *player)
{
    char *motion = at<char *>(player, 0x764);  /* Pl0000+0x764: motion helper */
    if (at<int>(motion, 0x104) != 1) {
        at<int>(motion, 0x104) = 1;
        at<float>(at<char *>(motion, 0xD0), 4) = 0.0f;
    }
}

}  // namespace OvercomeTrainToTrainStatePl0010_p1

// 00B82250  OvercomeTrainToTrainStatePl0010::vf08  size=42  [class]
bool OvercomeTrainToTrainStatePl0010::vf08(undefined4 param_1)
{
    if (StateMachineNode::vf08(param_1) == 0) {
        return 0;
    }
    jumpDone() = 0;
    heightDelta() = 0.0f;
    return 1;
}

// 00B82280  OvercomeTrainToTrainStatePl0010::thunk_vf18  size=5  [class]
undefined4 OvercomeTrainToTrainStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B82290  OvercomeTrainToTrainStatePl0010::vf24  size=19  [class]
bool OvercomeTrainToTrainStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B822D0  OvercomeTrainToTrainStatePl0010::vf00  size=6  [class]
undefined *OvercomeTrainToTrainStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e5c;  // type record
}

// 00B911D0  OvercomeTrainToTrainStatePl0010::vf04  size=31  [class]
undefined4 *OvercomeTrainToTrainStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB07F0  OvercomeTrainToTrainStatePl0010::SafeCheck  size=333  [class]
// Entry: starts motion 0xB5 and records the height difference to the landing frame.
void OvercomeTrainToTrainStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace OvercomeTrainToTrainStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(param_2);
        char *player = playerOf(context);
        setMotionMode1(player);
        thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 0);
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x418C = +0x4180 (saved) */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);  /* Pl0000+0x4188 = +0x417C */
        at<float>(player, 0x4190) = at<float>(player, 0x4184);  /* Pl0000+0x4190 = +0x4184 */
        jumpDone() = 0;
        float framePos[3];
        framePos[1] = at<float>(context, 0xC8);  // dead stores kept from the machine code
        framePos[2] = at<float>(context, 0xCC);
        framePos[1] = at<float>(at<char *>(context, 0xC4), 0x54);  /* StateMachineContextPl0010+0xC4: landing frame */
        thiscall<int>(FUN_00aa3f60, player, 0xB5);
        thiscall<void>(FUN_00a96030, player, 0, 0.25f);
        thiscall<void>(FUN_00a95fb0, player, 0.0f);
        if (at<float>(player, 0x44) < framePos[1]) {
            heightDelta() = framePos[1] - at<float>(player, 0x44);
        }
        FUN_00a937e0((int)player);
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BB0940  OvercomeTrainToTrainStatePl0010::vf14  size=185  [class]
void OvercomeTrainToTrainStatePl0010::vf14(undefined4 *param_2)
{
    using namespace OvercomeTrainToTrainStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    if (thiscall<int>(FUN_00a94db0, player, 0xB7) != 0 || thiscall<int>(FUN_00a94db0, player, 0xB8) != 0 ||
        thiscall<int>(FUN_00a94db0, player, 0xB5) != 0) {
        jumpDone() = 1;
        thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 1);  /* Pl0000+0x764: motion helper */
    }
    if (jumpDone() != 0) {
        thiscall<void>(FUN_00d82510, this, 10, 100);
    }
    StateMachineNode::vf14(param_2);
}

// 00BB0A00  OvercomeTrainToTrainStatePl0010::vf20  size=196  [class]
undefined4 OvercomeTrainToTrainStatePl0010::vf20(undefined4 *param_1)
{
    using namespace OvercomeTrainToTrainStatePl0010_p1;
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
    thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 1);
    if (at<int>(this, 0x24) != 0x1E) {  /* StateMachineNode+0x24: next state id? */
        FUN_00a93820((int)player);
    }
    return 1;
}

// 00BE0670  OvercomeTrainToTrainStatePl0010::qteSafeCheck  size=636  [class]
// Faces the landing frame and moves the player towards it.
void OvercomeTrainToTrainStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace OvercomeTrainToTrainStatePl0010_p1;
    char *context = asContext(param_2);
    char *player = playerOf(context);
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);

    float delta[4];      // frame - player position
    float direction[4];  // normalised copy (the result is not used afterwards)
    char *frame = at<char *>(context, 0xC4);  /* StateMachineContextPl0010+0xC4: landing frame */
    float framePos[4];
    framePos[0] = at<float>(frame, 0x50);
    delta[1] = at<float>(context, 0xC8);  // dead stores kept from the machine code
    framePos[1] = at<float>(frame, 0x54);
    delta[2] = at<float>(context, 0xCC);
    framePos[2] = at<float>(frame, 0x58);
    framePos[3] = at<float>(frame, 0x5C);
    float yaw = (float)thiscall<float10>(FUN_00a8ed10, player, framePos, (float *)(player + 0x40));  /* Pl0000+0x40: position */
    thiscall<void>(FUN_00a8e960, player, yaw);

    delta[0] = framePos[0] - at<float>(player, 0x40);
    delta[1] = framePos[1] - at<float>(player, 0x44);
    delta[2] = framePos[2] - at<float>(player, 0x48);
    delta[3] = framePos[3] - at<float>(player, 0x4C);
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

    float current = (float)thiscall<float10>(FUN_00a958c0, player, 0);
    double quotient = (double)current / (double)thiscall<float10>(FUN_00a95680, player, 0);
    float progress = (float)quotient;
    vcall<void>(player, 0x74, (float)(cos(quotient) * heightDelta() * 0.1f));
    float move[4];
    move[0] = delta[0] * progress;
    move[1] = delta[1] * progress;
    move[2] = delta[2] * progress;
    move[3] = progress * delta[3];
    vcall<void>(player, 0x70, move);
    FUN_00bd3730(param_2, (undefined4)this, 0xD, 0xC);
    FUN_00bd37f0(param_2, (undefined4)this, 0xD);
    FUN_00bd3910(param_2, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(param_2, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(param_2);
}
