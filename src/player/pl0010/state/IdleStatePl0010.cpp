// src/player/pl0010/state/IdleStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "IdleStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e1c[];  // IdleStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned int DAT_01bea090;     // global flags (bit 31 tested)

namespace IdleStatePl0010_p1 {

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

// Pl0000+0x764: movement controller; Pl0000+0x40D4: parameter table
inline char *controllerOf(Pl0000 *player)
{
    return fld<char *>(player, 0x764);
}

inline char *paramsOf(Pl0000 *player)
{
    return fld<char *>(player, 0x40D4);
}

// StateMachineContextPl0010+0xC0 -> +0x4: obstacle / environment info
inline char *envInfoOf(const char *ctx)
{
    return fld<char *>(fld<char *>(ctx, 0xC0), 4);  /* StateMachineContextPl0010+0xC0: ? (+0x4: environment info) */
}

// StateMachineNode fields (base class, header not owned here)
inline float &nodeTime(void *node)      { return fld<float>(node, 0x8); }  /* StateMachineNode+0x8: time in the state */
inline int   &nodeEntered(void *node)   { return fld<int>(node, 0x20); }   /* StateMachineNode+0x20: ? (skip when set) */
inline int   &nodeRequested(void *node) { return fld<int>(node, 0x24); }   /* StateMachineNode+0x24: requested state (-1: none) */
inline int   &nodePrevious(void *node)  { return fld<int>(node, 0x2C); }   /* StateMachineNode+0x2C: previous state */

// StateMachineNode::FUN_00d82510(state, priority): request a change to `state`
inline void requestState(void *node, int state, int priority)
{
    thiscall<void>(FUN_00d82510, node, state, priority);
}

// FUN_00a94bc0(slot, blend): stop the motion of a slot
inline void stopSlot(Pl0000 *player, int slot, float blend)
{
    thiscall<void>(FUN_00a94bc0, player, slot, blend);
}

// hkBaseObject::ctor_008E28A0 in FILEMAP (called with ECX = controller); returns a float in ST0
static void *const kControllerFn_008E28A0 = (void *)0x008E28A0;

// Walk / run motions 8..11 (the stick moves) as tested by FUN_00a94db0 / FUN_00a9f760 / FUN_00a9f7d0
inline bool anyMove(void *fn, Pl0000 *player)
{
    return thiscall<int>(fn, player, 8) != 0 || thiscall<int>(fn, player, 9) != 0 ||
           thiscall<int>(fn, player, 10) != 0 || thiscall<int>(fn, player, 0xB) != 0;
}

// Drops the dash upper-body motions (context +0x78) -- shared by vf14 and vf20.
inline void stopUpperBody(char *ctx, Pl0000 *player)
{
    fld<int>(ctx, 0x78) = 0;       /* StateMachineContextPl0010+0x78: upper-body motions started */
    fld<int>(player, 0xB74) = 1;   /* Pl0000+0xB74: ? (upper-body idle) */
    stopSlot(player, 5, 0.0f);
    stopSlot(player, 4, 0.0f);
    stopSlot(player, 3, 0.0f);
    stopSlot(player, 2, 0.0f);
    if ((DAT_01bea090 & 0x80000000) != 0) {
        thiscall<void>(FUN_00a9e120, player, 3, 0x711, 0);
    }
}

}  // namespace IdleStatePl0010_p1

// 00B816D0  IdleStatePl0010::vf08  size=37  [class]
// Enter.
bool IdleStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    motionHandle() = -1;
    return true;
}

// 00B81700  IdleStatePl0010::vf24  size=19  [class]
bool IdleStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B81740  IdleStatePl0010::vf00  size=6  [class]
undefined *IdleStatePl0010::vf00()
{
    return DAT_01be9e1c;
}

// 00B90FC0  IdleStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *IdleStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAB310  FUN_00bab310  size=296  [callgraph]
// __thiscall (ECX = IdleStatePl0010): chooses the entry motion from the previous state.  After a
// dash (0x0A with gear >= 3, 0x23) or actions 0x68 / 0x69 / 100 it plays the stop motion 0x20 /
// 0x21 and returns 8 / 9; after states 0x25 / 0x0A it returns 10 / 11; otherwise -1.  The pair
// is chosen by FUN_00b8afd0 (3 = one side).
int FUN_00bab310(int self, undefined4 *contextArg)
{
    using namespace IdleStatePl0010_p1;

    IdleStatePl0010 *state = (IdleStatePl0010 *)self;
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    float footOut[7];  // 28-byte output of FUN_00b8afd0
    int previous = nodePrevious(state);
    bool allowed = previous != 10;
    if (fld<int>(ctx, 0x40) >= 3) {  /* StateMachineContextPl0010+0x40: saved gearLevel */
        allowed = true;
    }
    if ((previous == 10 || previous == 0x23 || thiscall<int>(FUN_00a95ce0, player, 0x68) != 0 ||
         thiscall<int>(FUN_00a95ce0, player, 0x69) != 0 || thiscall<int>(FUN_00a95ce0, player, 100) != 0) &&
        allowed) {
        if (thiscall<int>(FUN_00b8afd0, player, footOut) == 3) {
            thiscall<void>(FUN_00aa92c0, player, 0x20);
            return 8;
        }
        thiscall<void>(FUN_00aa92c0, player, 0x21);
        return 9;
    }
    if (nodePrevious(state) != 0x25 && nodePrevious(state) != 10) {
        return -1;
    }
    return (thiscall<int>(FUN_00b8afd0, player, footOut) != 3) + 10;
}

// 00BAB440  IdleStatePl0010::SafeCheck  size=303  [class]
// First frame: resets the dash gear, stops the upper slots and starts the entry motion.
void IdleStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace IdleStatePl0010_p1;

    if (nodeEntered(this) == 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        int entryMotion = FUN_00bab310((int)this, contextArg);
        fld<float>(ctx, 0x38) = 0.0f;  /* StateMachineContextPl0010+0x38: saved gearCharge */
        fld<float>(ctx, 0x3C) = 0.0f;  /* StateMachineContextPl0010+0x3C: saved gearCooldown */
        fld<int>(ctx, 0x40) = 2;       /* StateMachineContextPl0010+0x40: saved gearLevel */
        fld<float>(ctx, 0x70) = 0.0f;  /* StateMachineContextPl0010+0x70: ? */
        thiscall<void>(FUN_00a8c9b0, player, 0, 8, 0.2f, 0.0f);
        fld<float>(player, 0x894) = 0.0f;  /* Pl0000+0x894: ? */
        fld<int>(player, 0x5074) = 0;      /* Pl0000+0x5074: ? */
        if (nodePrevious(this) == 0x44) {
            thiscall<int>(FUN_00aa3f60, player, 6);
            fromState44() = 1;
        }
        else {
            if (entryMotion < 0) {
                fld<int>(player, 0x5080) = 1;  /* Pl0000+0x5080: ? */
                thiscall<int>(FUN_00aa3f60, player, fld<int>(player, 0xB74) != 0 ? 4 : 5);  /* Pl0000+0xB74: ? (upper-body idle) */
            }
            else {
                motionHandle() = thiscall<int>(FUN_00aa3f60, player, entryMotion);
            }
            fromState44() = 0;
        }
        if ((DAT_01bea090 & 0x80000000) != 0) {
            stopSlot(player, 5, 0.0f);
            stopSlot(player, 4, 0.0f);
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAB570  IdleStatePl0010::vf14  size=418  [class]
void IdleStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace IdleStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (thiscall<int>(FUN_00a94db0, player, 0x482) != 0 || thiscall<int>(FUN_00a94db0, player, 0x483) != 0) {
        stopUpperBody(ctx, player);
    }
    if (fromState44() == 0) {
        int upperIdle = fld<int>(player, 0xB74);  /* Pl0000+0xB74: ? (upper-body idle) */
        if (anyMove(FUN_00a94db0, player) &&
            ((DAT_01bea090 & 0x80000000) == 0 || upperIdle != 0 || thiscall<int>(FUN_00a94ce0, player, 3) != 0)) {
            fld<int>(player, 0x5080) = 1;  /* Pl0000+0x5080: ? */
            thiscall<int>(FUN_00aa9280, player, 5);
        }
    }
    else {
        if (thiscall<int>(FUN_00a94db0, player, 7) != 0) {
            fld<int>(player, 0x5080) = 1;
            thiscall<int>(FUN_00aa9280, player, 5);
            fromState44() = 0;
            StateMachineNode::vf14(contextArg);  // tail jump
            return;
        }
    }
    StateMachineNode::vf14(contextArg);  // tail jump
}

// 00BAB720  IdleStatePl0010::vf18  size=158  [class]
// Requests state 0xE (fall) when the controller has no ground contact and the landing probe
// reports no ground within the parameter distance (+0x160).
undefined4 IdleStatePl0010::vf18(undefined4 contextArg)
{
    using namespace IdleStatePl0010_p1;

    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    if (!FUN_008e2740((int)controllerOf(player)) &&
        (fld<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0: ground probe hit, +0x41E4: its distance */
         !(fld<float>(paramsOf(player), 0x160) > fld<float>(player, 0x41E4)))) {
        requestState(this, 0xE, 100);
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BAB7C0  IdleStatePl0010::vf20  size=234  [class]
// Leave.
undefined4 IdleStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace IdleStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_00d835f0, (char *)player + 0x4250, 0x1C, 0);  /* Pl0000+0x4250: embedded object (+0x0 float, +0x4 active) */
    if (fld<int>(ctx, 0x78) != 0) {  /* StateMachineContextPl0010+0x78: upper-body motions started */
        stopUpperBody(ctx, player);
    }
    return 1;
}

// 00BCA750  IdleStatePl0010::qteSafeCheck  size=693  [class]
// Per-frame: leaves idle when the stick moves (FUN_00bb8ae0 / FUN_00bb8d00 / FUN_00bb8dd0),
// plays the turn motion 0xD, requests the fall states 0x16 / 0x15 over a drop and ends the
// state-0x44 recovery after 1 s with motion 7.
void IdleStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace IdleStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_008e0b70, controllerOf(player), 0);
    thiscall<void>(FUN_008e0ba0, controllerOf(player), 0);
    bool upperIdleOnly = false;
    if (!anyMove(FUN_00a9f760, player) && fld<int>(player, 0xB74) != 0) {  /* Pl0000+0xB74: ? (upper-body idle) */
        upperIdleOnly = true;
    }
    bool leave;
    if (!anyMove(FUN_00a9f7d0, player)) {
        leave = upperIdleOnly;
    }
    else {
        float threshold = fld<float>(paramsOf(player), 0x14C);  /* params+0x14C: stick threshold */
        leave = upperIdleOnly || threshold * threshold < fld<float>(player, 0xD28);  /* Pl0000+0xD28: stick magnitude squared */
    }
    if (leave && nodeRequested(this) != 5) {
        FUN_00bb8ae0(contextArg, (undefined4)this, 0x32);
        FUN_00bb8d00(contextArg, (int)this, 0x19, 1, 1);
        FUN_00bb8dd0(contextArg, (undefined4)this, 0x4B);
        fld<int>(player, 0x5080) = 1;  /* Pl0000+0x5080: ? */
    }
    if (fld<int>(player, 0x4254) != 0 &&  /* Pl0000+0x4250: embedded object (+0x0 float, +0x4 active) */
        fld<float>(player, 0x4250) <= fld<float>(controllerOf(player), 0xFC) &&  /* controller+0xFC: ? */
        anyMove(FUN_00a9f760, player) && motionHandle() != -1) {
        if (thiscall<int>(FUN_00a95270, player, 8, 0x1E) != 0 || thiscall<int>(FUN_00a95270, player, 9, 0x1E) != 0) {
            motionHandle() = thiscall<int>(FUN_00aa9280, player, 0xD);
        }
        thiscall<void>(FUN_00a96070, player, motionHandle(), 0x80, 1);
    }
    if ((fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) == 0 &&  /* Pl0000 inputHold & maskE48 */
        160000.0f < fld<float>(player, 0xD28)) {
        float controllerFC = fld<float>(controllerOf(player), 0xFC);
        double half = thiscall<double>(kControllerFn_008E28A0, controllerOf(player));
        double reach = half + half + controllerFC;
        float reachStored = (float)reach;  // spilled to the stack; reloaded after the first request
        char *env = envInfoOf(ctx);
        if (fld<int>(env, 0x384) != 0 && fld<float>(env, 0x388) <= reach) {  /* env+0x384 / +0x388: drop 1 flag / depth */
            requestState(this, 0x16, 100);
            reach = reachStored;
        }
        env = envInfoOf(ctx);
        if (fld<int>(env, 0x234) != 0 && fld<float>(env, 0x238) <= reach) {  /* env+0x234 / +0x238: drop 2 flag / depth */
            requestState(this, 0x15, 100);
        }
    }
    if (fromState44() != 0 && nodeTime(this) >= 1.0f) {
        thiscall<int>(FUN_00aa9280, player, 7);
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
