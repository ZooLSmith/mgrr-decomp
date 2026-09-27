// src/player/pl0010/state/JumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "JumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e20[];  // JumpStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace JumpStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
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

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Pl0000+0x764: movement controller (+0xF4: gravity); Pl0000+0x40D4: parameter table
inline char *controllerOf(Pl0000 *player)
{
    return fld<char *>(player, 0x764);
}

inline char *paramsOf(Pl0000 *player)
{
    return fld<char *>(player, 0x40D4);
}

// StateMachineNode fields (base class, header not owned here)
inline int &nodeEntered(void *node)   { return fld<int>(node, 0x20); }  /* StateMachineNode+0x20: ? (skip when set) */
inline int &nodeRequested(void *node) { return fld<int>(node, 0x24); }  /* StateMachineNode+0x24: requested state (-1: none) */

// StateMachineNode::FUN_00d82510(state, priority): request a change to `state`
inline void requestState(void *node, int state, int priority)
{
    thiscall<void>(FUN_00d82510, node, state, priority);
}

// Stick pushed past the parameter threshold while the jump input (maskE48) is held.
inline bool movingInput(Pl0000 *player)
{
    float threshold = fld<float>(paramsOf(player), 0x14C);  /* params+0x14C: stick threshold */
    return !(threshold * threshold >= fld<float>(player, 0xD28)) &&  /* Pl0000+0xD28: stick magnitude squared; true when unordered */
           (fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0;  /* Pl0000 inputHold & maskE48 */
}

// Landing probe (Pl0000+0x41E0 / +0x41E4) within 0.36, or controller contact (FUN_008e2740).
inline bool groundReached(Pl0000 *player)
{
    if (fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.36f) {  /* Pl0000+0x41E0: ground probe hit, +0x41E4: its distance */
        return true;
    }
    return FUN_008e2740((int)controllerOf(player));
}

// motions of this state
const int kMotionTakeOffMove = 0x5B;
const int kMotionTakeOffStand = 0x5C;
const int kMotionAirMove = 0x5E;
const int kMotionAirStand = 0x5F;

}  // namespace JumpStatePl0010_p1

// 00B81760  JumpStatePl0010::vf24  size=19  [class]
bool JumpStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B817A0  JumpStatePl0010::vf00  size=6  [class]
undefined *JumpStatePl0010::vf00()
{
    return DAT_01be9e20;
}

// 00B90FE0  JumpStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *JumpStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAB8B0  JumpStatePl0010::vf08  size=168  [class]
// Enter.
bool JumpStatePl0010::vf08(undefined4 contextArg)
{
    using namespace JumpStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    float height = fld<float>(player, 0x44);  /* Pl0000+0x44: position y */
    inAir() = 0;
    startY() = height;
    falling() = 0;
    riseStarted() = 0;
    airTime() = 0.0f;
    rising() = 0;
    prevRise() = 0.0f;
    field44() = 0.0f;
    moveVec()[0] = 0.0f;
    moveVec()[1] = 0.0f;
    moveVec()[2] = 0.0f;
    moveVec()[3] = 0.0f;
    phase() = 0;
    field8C() = 0.0f;
    return true;
}

// 00BAB960  JumpStatePl0010::SafeCheck  size=246  [class]
// First frame: saves the camera angles and starts the take-off motion.
void JumpStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace JumpStatePl0010_p1;

    if (nodeEntered(this) == 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<float>(ctx, 0x70) = 0.0f;  /* StateMachineContextPl0010+0x70: ? */
        fld<int>(player, 0x5074) = 0;  /* Pl0000+0x5074: ? */
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        motion() = kMotionTakeOffStand;
        if (movingInput(player)) {
            motion() = kMotionTakeOffMove;
        }
        thiscall<int>(FUN_00aa9280, player, motion());
        phase() = 1;
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BABA60  JumpStatePl0010::vf14  size=344  [class]
// Take-off finished -> capture the move vector and start the air motion; track the air motion.
void JumpStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace JumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (phase() == 1) {
        int current = motion();
        if (current == kMotionTakeOffMove || current == kMotionTakeOffStand) {
            if (thiscall<int>(FUN_00a94db0, player, current) != 0) {
                thiscall<void>(FUN_00b8ae90, player, moveVec());
                thiscall<void>(FUN_008e0c00, controllerOf(player), moveVec());
                motion() = kMotionAirStand;
                if (movingInput(player)) {
                    motion() = kMotionAirMove;
                }
                int handle = thiscall<int>(FUN_00aa9280, player, motion());
                thiscall<void>(FUN_00a96070, player, handle, 0x80, 1);
                phase() = 2;
            }
        }
    }
    int current = motion();
    if (current == kMotionAirMove || current == kMotionAirStand) {
        if (thiscall<int>(FUN_00a94db0, player, current) != 0) {
            inAir() = 1;
        }
    }
    current = motion();
    if (current == kMotionAirMove || current == kMotionAirStand) {
        if (thiscall<int>(FUN_00a95270, player, current, 0xF) != 0) {
            phase() = 3;
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BABBC0  JumpStatePl0010::vf18  size=220  [class]
// Detects the fall below the current height and, once in the air, requests landing (0x13)
// near the ground or falling (0xE) below the take-off height.
undefined4 JumpStatePl0010::vf18(undefined4 contextArg)
{
    using namespace JumpStatePl0010_p1;

    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    if (0.001f < (double)currentY() - fld<float>(player, 0x44)) {  /* Pl0000+0x44: position y */
        falling() = 1;
    }
    if (inAir() != 0) {
        if (groundReached(player)) {
            requestState(this, 0x13, 100);
        }
        if (fld<float>(player, 0x44) < startY()) {
            requestState(this, 0xE, 100);
        }
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BABCA0  JumpStatePl0010::vf20  size=136  [class]
// Leave: restores the camera angles.
undefined4 JumpStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace JumpStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    return 1;
}

// 00BDEE30  JumpStatePl0010::qteSafeCheck  size=867  [class]
// Per-frame movement: in the air (phase >= 2) the stick vector (or the decaying last one) plus
// the accumulated gravity and the upward push (riseSpeed * airTime) is applied through vf70.
void JumpStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace JumpStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    currentY() = fld<float>(player, 0x44);  /* Pl0000+0x44: position y */
    char *params = paramsOf(player);
    float yawDeg = fld<float>(params, 0x16C);
    fld<float>(player, 0x4180) = fld<float>(params, 0x168);  /* Pl0000+0x417C..0x4184: camera angles */
    fld<float>(player, 0x417C) = yawDeg * 0.017453292f;      // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
    thiscall<void>(FUN_008e0b70, controllerOf(player), 0);
    thiscall<void>(FUN_008e0ba0, controllerOf(player), 0);
    if (thiscall<int>(FUN_00a9f760, player, kMotionAirMove) == 0) {
        thiscall<int>(FUN_00a9f760, player, kMotionAirStand);
    }
    if (falling() != 0) {
        FUN_00bd3620(contextArg, (int)this, 100);
    }
    if (phase() > 1 && nodeRequested(this) < 0) {
        float dt = fld<float>(ctx, 0x8);  /* StateMachineContextPl0010+0x8: frame time */
        airTime() = airTime() + dt;
        float move[4];
        thiscall<void>(FUN_00b8ae90, player, move);
        if (move[0] == 0.0f && move[1] == 0.0f && move[2] == 0.0f) {
            // no input: reuse the last vector and let it decay
            move[0] = moveVec()[0];
            move[1] = moveVec()[1];
            move[2] = moveVec()[2];
            move[3] = moveVec()[3];
            moveVec()[0] = moveVec()[0] * 0.8f;
            moveVec()[1] = moveVec()[1] * 0.8f;
            moveVec()[2] = moveVec()[2] * 0.8f;
            moveVec()[3] = moveVec()[3] * 0.8f;
        }
        else {
            moveVec()[0] = move[0];
            moveVec()[1] = move[1];
            moveVec()[2] = move[2];
            moveVec()[3] = move[3];
        }
        if (riseStarted() == 0) {
            prevRise() = 0.0f;
            FUN_008e0be0((int)controllerOf(player));
            riseStarted() = 1;
            gravityAcc()[0] = 0.0f;
            gravityAcc()[1] = 0.0f;
            gravityAcc()[2] = 0.0f;
            gravityAcc()[3] = 0.0f;
            pushTime() = 0.36666667f - airTime();
            if (pushTime() <= 0.0f) {
                pushTime() = 0.0f;
            }
            if (pushTime() >= 0.16666667f) {
                pushTime() = 0.16666667f;
            }
            if (falling() == 0) {
                rising() = 1;
            }
        }
        float remaining = pushTime() - fld<float>(ctx, 0x8);
        pushTime() = remaining;
        float buffer[7];  // 28-byte output of FUN_00a8bac0
        if (0.0f <= remaining && falling() == 0) {
            float dtNow = fld<float>(ctx, 0x8);
            float *step = thiscall<float *>(FUN_00a8bac0, player, buffer,
                                            (float)-((double)dtNow * fld<float>(controllerOf(player), 0xF4) * dtNow));  /* controller+0xF4: gravity */
            gravityAcc()[0] = gravityAcc()[0] + step[0];
            gravityAcc()[1] = step[1] + gravityAcc()[1];
            gravityAcc()[2] = step[2] + gravityAcc()[2];
            gravityAcc()[3] = step[3] + gravityAcc()[3];
        }
        double rise = (double)riseSpeed() * airTime();
        if (rising() != 0) {
            float *step = thiscall<float *>(FUN_00a8bac0, player, buffer, (float)(rise - prevRise()));
            move[0] = (float)((double)gravityAcc()[0] + step[0] + move[0]);
            move[1] = (float)((double)gravityAcc()[1] + step[1] + move[1]);
            move[2] = (float)((double)gravityAcc()[2] + step[2] + move[2]);
            move[3] = (float)((double)gravityAcc()[3] + step[3] + move[3]);
        }
        prevRise() = (float)rise;
        vcall<void>(player, 0x70, move);  // Behavior::vf70 (slot 0x70): move by a vector
    }
    if (falling() != 0) {
        if (groundReached(player)) {
            requestState(this, 0x13, 100);
        }
        if (fld<float>(player, 0x44) < startY()) {
            requestState(this, 0xE, 100);
        }
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
