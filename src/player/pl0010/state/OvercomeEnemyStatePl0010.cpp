// src/player/pl0010/state/OvercomeEnemyStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "OvercomeEnemyStatePl0010.h"

// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e54[];  // OvercomeEnemyStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
// debug-print string (Shift-JIS)
extern const char DAT_0163d0ac[];  // "[Hw::VecNormalize] ..." zero-vector warning
// plain globals
extern unsigned int DAT_01b7b914;  // input bits (0x40, 0x80 tested)

// CRT (the compiler emitted fcos inline)
extern "C" double __cdecl cos(double x);

namespace OvercomeEnemyStatePl0010_p1 {

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

// Function at 0x00A17A40 (named switchD_0080dbae::default in FILEMAP; called with ECX = player)
static void *const kPlayerFn_00A17A40 = (void *)0x00A17A40;

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
inline char *handleTarget(char *handle)
{
    return (char *)FUN_00a7c8a0(FUN_00a81330((uint *)handle));
}

// Id at +0x4B4 of the entity referenced by the handle (0x20010 vault / 0x20030 grab).
inline int targetKind(char *handle)
{
    return at<int>(handleTarget(handle), 0x4B4);
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

// Links the player to the entity of `entry` when the entity accepts it (vf14C / vf150 with 0x24).
inline void attachToEntry(char *player, int entry)
{
    char *object = (char *)FUN_00a7c8a0(entry);
    if (vcall<int>(object, 0x14C, 0x24, at<int>(player, 0x4F0)) != 0) {  /* Pl0000+0x4F0 */
        object = (char *)FUN_00a7c8a0(entry);
        vcall<void>(object, 0x150, 0x24, at<int>(player, 0x4F0));
        int self = (int)FUN_00a7c8a0(at<int>(player, 0x4F0));
        thiscall<void>(FUN_00b7b380, player, entry, self + 0x40, 1);
    }
}

}  // namespace OvercomeEnemyStatePl0010_p1

// 00B820E0  OvercomeEnemyStatePl0010::vf08  size=49  [class]
bool OvercomeEnemyStatePl0010::vf08(undefined4 param_1)
{
    if (StateMachineNode::vf08(param_1) == 0) {
        return 0;
    }
    useAltLanding() = 0;
    altLandingTime() = 0.0f;
    field38() = 0;
    vaultDone() = 0;
    landingDone() = 0;
    return 1;
}

// 00B82120  OvercomeEnemyStatePl0010::vf24  size=19  [class]
bool OvercomeEnemyStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B82140  OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010  size=33  [class]
OvercomeEnemyStatePl0010::OvercomeEnemyStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = OvercomeEnemyStatePl0010::vftable (0x016A1978)
    FUN_00a7c930((undefined4 *)targetHandle());
}

// 00B82170  OvercomeEnemyStatePl0010::vf00  size=6  [class]
undefined *OvercomeEnemyStatePl0010::vf00()
{
    return (undefined *)DAT_01be9e54;  // type record
}

// 00B91190  OvercomeEnemyStatePl0010::vf04  size=31  [class]
undefined4 *OvercomeEnemyStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BAFDA0  FUN_00bafda0  size=177  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): starts the vault (motion 0xA8).
void FUN_00bafda0(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    state->speedX() = 1.0f;
    state->speedY() = 1.6f / at<float>(at<char *>(player, 0x40D4), 0xD4);  /* Pl0000+0x40D4: parameters */
    thiscall<int>(FUN_00aa3f60, player, 0xA8);
    state->landingMotion() = 0xAB;
    state->buttonPressed() = 0;
    setMotionMode1(player);
}

// 00BAFE60  FUN_00bafe60  size=157  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): vault vf18 -- leaves for state 0x13 once landed.
void FUN_00bafe60(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    if (state->landingDone() != 0 && at<int>(state, 0x24) < 0) {  /* StateMachineNode+0x24: ? */
        if ((at<int>(player, 0x41E0) != 0 && at<float>(player, 0x41E4) <= 0.36f) ||  /* Pl0000+0x41E0 / +0x41E4 */
            FUN_008e2740(at<int>(player, 0x764)) != 0) {
            thiscall<void>(FUN_00d82510, state, 0x13, 100);
        }
    }
}

// 00BAFF00  FUN_00baff00  size=302  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): starts the grab (motion 0xB5).
void FUN_00baff00(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    setMotionMode1(player);
    thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 0);
    at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x418C = +0x4180 (saved) */
    at<float>(player, 0x4188) = at<float>(player, 0x417C);  /* Pl0000+0x4188 = +0x417C */
    at<float>(player, 0x4190) = at<float>(player, 0x4184);  /* Pl0000+0x4190 = +0x4184 */
    state->grabbing() = 0;
    char *target = (char *)thiscall<int>(FUN_00a12210, handleTarget(state->targetHandle()), 7);
    float targetHeight = at<float>(target, 0x44);
    thiscall<int>(FUN_00aa3f60, player, 0xB5);
    thiscall<void>(FUN_00a96030, player, 0, 0.25f);
    thiscall<void>(FUN_00a95fb0, player, 0.0f);
    if (at<float>(player, 0x44) < targetHeight) {
        state->heightDelta() = targetHeight - at<float>(player, 0x44);
    }
}

// 00BB0030  FUN_00bb0030  size=481  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): grab vf14 -- faces the target, chains 0x56..0x59.
void FUN_00bb0030(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    char *target = (char *)thiscall<int>(FUN_00a12210, handleTarget(state->targetHandle()), 7);
    float targetPos[4];
    targetPos[0] = at<float>(target, 0x40);
    targetPos[1] = at<float>(target, 0x44);
    targetPos[2] = at<float>(target, 0x48);
    targetPos[3] = at<float>(target, 0x4C);
    float yaw = (float)thiscall<float10>(FUN_00a8ed10, player, targetPos, (float *)(player + 0x40));  /* Pl0000+0x40: position */
    thiscall<void>(FUN_00a8e960, player, yaw);
    if (state->grabbing() != 0) {
        vcall<void>(player, 0x6C, targetPos);
        target = (char *)thiscall<int>(FUN_00a12210, handleTarget(state->targetHandle()), 7);
        vcall<void>(player, 0x88, target + 0x90);
        thiscall<void>(kPlayerFn_00A17A40, player);
    }
    if (thiscall<int>(FUN_00a94db0, player, 0xB5) != 0) {
        state->grabbing() = 1;
        thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 1);
        thiscall<int>(FUN_00aa3f60, player, 0x56);
        int entry = (int)FUN_00a81330((uint *)state->targetHandle());
        if (entry != 0) {
            attachToEntry(player, entry);
        }
    }
    if ((DAT_01b7b914 & 0x40) != 0) {
        int nextMotion = 0;
        if (thiscall<int>(FUN_00a9f760, player, 0x56) != 0) {
            nextMotion = 0x57;
        }
        else if (thiscall<int>(FUN_00a9f760, player, 0x57) != 0) {
            nextMotion = 0x58;
        }
        else if (thiscall<int>(FUN_00a9f760, player, 0x58) != 0) {
            nextMotion = 0x59;
        }
        if (nextMotion != 0) {
            thiscall<int>(FUN_00aa3f60, player, nextMotion);
        }
    }
    if (thiscall<int>(FUN_00a94db0, player, 0x59) != 0) {
        thiscall<void>(FUN_00d82510, state, 0x11, 100);
    }
}

// 00BB0220  OvercomeEnemyStatePl0010::SafeCheck  size=282  [class]
void OvercomeEnemyStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *context = asContext(param_2);
        char *player = playerOf(context);
        at<float>(player, 0x418C) = at<float>(player, 0x4180);  /* Pl0000+0x418C = +0x4180 (saved) */
        at<int>(player, 0x5088) = 1;                            /* Pl0000+0x5088 */
        at<int>(player, 0x4170) = 1;                            /* Pl0000+0x4170 */
        at<float>(player, 0x4188) = at<float>(player, 0x417C);  /* Pl0000+0x4188 = +0x417C */
        at<int>(player, 0x508C) = 0;                            /* Pl0000+0x508C */
        at<float>(player, 0x4190) = at<float>(player, 0x4184);  /* Pl0000+0x4190 = +0x4184 */
        // StateMachineContextPl0010+0xC0 -> +4: the entity to overcome (+0xC30 inside it)
        thiscall<void>(FUN_00a7c960, targetHandle(), at<int>(at<char *>(context, 0xC0), 4) + 0xC30);
        if (targetKind(targetHandle()) == 0x20010) {
            FUN_00bafda0((int)this, param_2);
            StateMachineNode::SafeCheck(param_2);
            return;
        }
        if (targetKind(targetHandle()) == 0x20030) {
            FUN_00baff00((int)this, param_2);
        }
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00BB0340  OvercomeEnemyStatePl0010::vf18  size=87  [class]
undefined4 OvercomeEnemyStatePl0010::vf18(undefined4 param_2)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    if (targetKind(targetHandle()) == 0x20010) {
        FUN_00bafe60((int)this, (undefined4 *)param_2);
        return StateMachineNode::vf18(param_2);
    }
    handleTarget(targetHandle());  // result unused (the 0x20030 branch is empty)
    return StateMachineNode::vf18(param_2);
}

// 00BB03A0  OvercomeEnemyStatePl0010::vf20  size=191  [class]
undefined4 OvercomeEnemyStatePl0010::vf20(undefined4 *param_1)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    char *player = playerOf(asContext(param_1));
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: motion helper */
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<float>(player, 0x4180) = at<float>(player, 0x418C);  /* restore values saved by SafeCheck */
    at<int>(player, 0x5088) = 0;
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<int>(player, 0x508C) = 0;
    at<int>(player, 0x4170) = 0;
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    thiscall<void>(FUN_008e6c60, at<void *>(player, 0x764), 1);
    return 1;
}

// 00BCC150  FUN_00bcc150  size=152  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): vault vf14 -- marks the landing as finished.
void FUN_00bcc150(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    if (state->vaultDone() != 0 && thiscall<int>(FUN_00a94db0, player, state->landingMotion()) != 0) {
        state->landingDone() = 1;
        if (cdeclcall<int>(FUN_00bb90c0, contextArg, state) == 0) {
            thiscall<void>(FUN_008e0c00, at<void *>(player, 0x764), player + 0x560);  /* Pl0000+0x560 */
        }
    }
}

// 00BCC1F0  OvercomeEnemyStatePl0010::vf14  size=107  [class]
void OvercomeEnemyStatePl0010::vf14(undefined4 *param_2)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    if (targetKind(targetHandle()) == 0x20010) {
        FUN_00bcc150((int)this, param_2);
        StateMachineNode::vf14(param_2);
        return;
    }
    if (targetKind(targetHandle()) == 0x20030) {
        FUN_00bb0030((int)this, param_2);
    }
    StateMachineNode::vf14(param_2);
}

// 00BDFDF0  FUN_00bdfdf0  size=669  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): vault qteSafeCheck -- motion 0xA8 -> 0xAA -> landing.
void FUN_00bdfdf0(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    if (thiscall<int>(FUN_00a94db0, player, 0xA8) != 0) {
        thiscall<int>(FUN_00aa3f60, player, 0xAA);
        float speed[3];
        speed[0] = 1.0f;
        speed[1] = state->speedY();
        speed[2] = 1.0f;
        thiscall<void>(FUN_00a95ff0, player, speed);
    }
    if (thiscall<int>(FUN_00a94db0, player, 0xAA) != 0) {
        state->vaultDone() = 1;
        if (state->useAltLanding() != 0) {
            state->landingMotion() = 0x4C;
        }
        int entry = (int)FUN_00a81330((uint *)state->targetHandle());
        if (entry != 0) {
            attachToEntry(player, entry);
        }
        thiscall<int>(FUN_00aa3f60, player, state->landingMotion());
        at<float>(player, 0xBB4) = 25.0f;  /* Pl0000+0xBB4 */
        if (!(0.0f < at<float>(player, 0x3454))) {  /* Pl0000+0x3454 */
            at<float>(player, 0x343C) = 25.0f;  /* Pl0000+0x343C */
            at<float>(player, 0x3440) = 0.2f;   /* Pl0000+0x3440 */
        }
    }
    if (thiscall<int>(FUN_00a9f760, player, 0xAB) != 0) {
        char *params = at<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameters */
        float yawDegrees = at<float>(params, 0x174);
        at<float>(player, 0x4180) = at<float>(params, 0x170);
        at<float>(player, 0x417C) = yawDegrees * 0.017453292f;  // degrees -> radians
        at<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
        if (state->useAltLanding() != 0) {
            state->landingMotion() = 0x4C;
            thiscall<int>(FUN_00aa42d0, player, 0x4C, state->altLandingTime());
            at<float>(player, 0xBB4) = 25.0f - state->altLandingTime() * 60.0f;
            if (!(0.0f < at<float>(player, 0x3454))) {
                at<float>(player, 0x343C) = 25.0f - 60.0f * state->altLandingTime();
                at<float>(player, 0x3440) = 0.2f;
            }
        }
    }
    if (thiscall<int>(FUN_00a95270, player, 0xAB, 0x14) != 0) {
        FUN_00bd3620(contextArg, self, 100);
    }
    if (state->buttonPressed() != 0 && thiscall<int>(FUN_00a95270, player, 0xAB, 0xF) != 0) {
        at<int>(player, 0x508C) = 1;  /* Pl0000+0x508C */
    }
    if (thiscall<int>(FUN_00a9f760, player, 0xAB) != 0 && (DAT_01b7b914 & 0x80) != 0) {
        state->buttonPressed() = 1;
    }
    if (at<int>(state, 0x24) < 0) {  /* StateMachineNode+0x24: ? */
        FUN_00bd3620(contextArg, self, 100);
    }
    FUN_00bd3910(contextArg, self, 0xB, 10);
    FUN_00bd39d0(contextArg, self, 10);
}

// 00BE0090  FUN_00be0090  size=590  [callgraph]
// __thiscall (ECX = OvercomeEnemyStatePl0010): grab qteSafeCheck -- faces the target and moves
// the player towards it.
void FUN_00be0090(int self, undefined4 *contextArg)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    OvercomeEnemyStatePl0010 *state = (OvercomeEnemyStatePl0010 *)self;
    char *player = playerOf(asContext(contextArg));
    char *target = (char *)thiscall<int>(FUN_00a12210, handleTarget(state->targetHandle()), 7);
    float targetPos[4];
    targetPos[0] = at<float>(target, 0x40);
    targetPos[1] = at<float>(target, 0x44);
    targetPos[2] = at<float>(target, 0x48);
    targetPos[3] = at<float>(target, 0x4C);
    float yaw = (float)thiscall<float10>(FUN_00a8ed10, player, targetPos, (float *)(player + 0x40));  /* Pl0000+0x40: position */
    thiscall<void>(FUN_00a8e960, player, yaw);

    float delta[4];      // target - player position
    float direction[4];  // normalised copy (the result is not used afterwards)
    delta[0] = targetPos[0] - at<float>(player, 0x40);
    delta[1] = targetPos[1] - at<float>(player, 0x44);
    delta[2] = targetPos[2] - at<float>(player, 0x48);
    delta[3] = targetPos[3] - at<float>(player, 0x4C);
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
    vcall<void>(player, 0x74, (float)(cos(quotient) * state->heightDelta() * 0.1f));
    float move[4];
    move[0] = delta[0] * progress;
    move[1] = delta[1] * progress;
    move[2] = delta[2] * progress;
    move[3] = progress * delta[3];
    vcall<void>(player, 0x70, move);
    FUN_00bd3730(contextArg, self, 0xD, 0xC);
    FUN_00bd37f0(contextArg, self, 0xD);
    FUN_00bd3910(contextArg, self, 0xB, 10);
    FUN_00bd39d0(contextArg, self, 10);
}

// 00BE02E0  OvercomeEnemyStatePl0010::qteSafeCheck  size=210  [class]
void OvercomeEnemyStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace OvercomeEnemyStatePl0010_p1;
    char *player = playerOf(asContext(param_2));
    thiscall<void>(FUN_008e0b70, at<void *>(player, 0x764), 0);  /* Pl0000+0x764: motion helper */
    thiscall<void>(FUN_008e0ba0, at<void *>(player, 0x764), 0);
    if (targetKind(targetHandle()) != 0x20010) {
        if (targetKind(targetHandle()) == 0x20030) {
            FUN_00be0090((int)this, param_2);
        }
        StateMachineNode::qteSafeCheck(param_2);
        return;
    }
    FUN_00bdfdf0((int)this, param_2);
    StateMachineNode::qteSafeCheck(param_2);
}
