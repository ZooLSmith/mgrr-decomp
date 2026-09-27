// src/player/pl0010/state/FreeFallStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "FreeFallStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e10[];  // FreeFallStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

// CRT (the compiler emitted fsqrt inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl fabs(double x);

namespace FreeFallStatePl0010_p1 {

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

// __cdecl call of a function (symbol or address)
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
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

// StateMachineNode fields (base class, header not owned here)
inline int &nodeEntered(void *node)   { return fld<int>(node, 0x20); }  /* StateMachineNode+0x20: ? (skip when set) */
inline int &nodeRequested(void *node) { return fld<int>(node, 0x24); }  /* StateMachineNode+0x24: requested state (-1: none) */

// StateMachineNode::FUN_00d82510(state, priority): request a change to `state`
inline void requestState(void *node, int state, int priority)
{
    thiscall<void>(FUN_00d82510, node, state, priority);
}

// The "near the ground" test shared by vf14 / vf18: the landing probe (Pl0000+0x41E0 / +0x41E4)
// reports ground within 0.36, or the controller reports contact (FUN_008e2740).
inline bool groundReached(Pl0000 *player)
{
    if (fld<int>(player, 0x41E0) != 0 && fld<float>(player, 0x41E4) <= 0.36f) {  /* Pl0000+0x41E0: ground probe hit, +0x41E4: its distance */
        return true;
    }
    return FUN_008e2740((int)controllerOf(player));
}

// inlined strcmp(a, b) == 0
inline bool sameName(const char *a, const char *b)
{
    for (;;) {
        if (a[0] != b[0]) {
            return false;
        }
        if (a[0] == 0) {
            return true;
        }
        if (a[1] != b[1]) {
            return false;
        }
        if (a[1] == 0) {
            return true;
        }
        a += 2;
        b += 2;
    }
}

}  // namespace FreeFallStatePl0010_p1

// 00B81490  FreeFallStatePl0010::vf08  size=42  [class]
// Enter.
bool FreeFallStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    motionPending() = 0;
    fallScale() = 1.0f;
    return true;
}

// 00B814C0  FreeFallStatePl0010::vf24  size=19  [class]
bool FreeFallStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B81500  FreeFallStatePl0010::vf00  size=6  [class]
undefined *FreeFallStatePl0010::vf00()
{
    return DAT_01be9e10;
}

// 00B90F60  FreeFallStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *FreeFallStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAA6C0  FreeFallStatePl0010::SafeCheck  size=467  [class]
// First frame: saves the camera angles, chooses the fall motion and starts it (unless the
// player's motion list says otherwise), and resets the context's fall bookkeeping.
void FreeFallStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace FreeFallStatePl0010_p1;

    if (nodeEntered(this) == 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        char *controller = controllerOf(player);
        if (fld<int>(controller, 0x104) != 0) {  /* controller+0x104: ? */
            fld<int>(controller, 0x104) = 0;
        }
        fld<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: camera angles overridden */
        fallMotion() = 0x75;
        float threshold = fld<float>(paramsOf(player), 0x14C);  /* params+0x14C: stick threshold */
        if (!(threshold * threshold >= fld<float>(player, 0xD28)) &&  /* Pl0000+0xD28: stick magnitude squared; true when unordered */
            (fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {  /* Pl0000 inputHold & maskE48 */
            fallMotion() = 0x73;
        }
        if (thiscall<int>(FUN_00a95ce0, player, 0xC6) != 0) {
            fallMotion() = 0x74;
        }
        int **motionList = fld<int **>(player, 0x75C);  /* Pl0000+0x75C: motion list (holder of {?, entries, count}) */
        if (motionList != 0) {
            int key = thiscall<int>(FUN_00a95ca0, player, 0);
            int count = fld<int>(*motionList, 8);
            int *entry = fld<int *>(*motionList, 4);  // entries of 0x3C bytes, key first
            int *end = entry + count * 0xF;
            bool found = false;
            if (entry != end) {
                do {
                    if (*entry == key) {
                        found = true;
                        break;
                    }
                    entry = entry + 0xF;
                } while (entry != end);
            }
            if (found) {
                int currentKey = thiscall<int>(FUN_00a95ca0, player, 0);
                if (thiscall<int>(FUN_008d7f50, motionList, currentKey) == 0) {
                    motionPending() = 1;
                }
                else {
                    thiscall<int>(FUN_00aa41c0, player, fallMotion(), 0.11666667f);
                }
            }
            else {
                thiscall<int>(FUN_00aa41c0, player, fallMotion(), 0.11666667f);
            }
        }
        prevPos()[0] = fld<float>(player, 0x40);  /* Pl0000+0x40: position */
        prevPos()[1] = fld<float>(player, 0x44);
        prevPos()[2] = fld<float>(player, 0x48);
        prevPos()[3] = fld<float>(player, 0x4C);
        fld<int>(ctx, 0x30) = 0;       /* StateMachineContextPl0010+0x30: ? */
        fld<float>(ctx, 0x10) = 0.0f;  /* StateMachineContextPl0010+0x10: fall distance */
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BAA8A0  FreeFallStatePl0010::vf14  size=250  [class]
// Requests state 0x13 near the ground; starts the pending fall motion unless the current
// motion is "GearMin".
void FreeFallStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace FreeFallStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (groundReached(player)) {
        requestState(this, 0x13, 100);
    }
    if (motionPending() != 0) {
        if (thiscall<int>(FUN_00a94ce0, player, 0) != 0 ||
            sameName(thiscall<const char *>(FUN_00a95df0, player, 0), "GearMin")) {
            thiscall<int>(FUN_00aa9280, player, fallMotion());
            motionPending() = 0;
        }
    }
    StateMachineNode::vf14(contextArg);
}

// 00BAA9A0  FreeFallStatePl0010::vf18  size=155  [class]
undefined4 FreeFallStatePl0010::vf18(undefined4 contextArg)
{
    using namespace FreeFallStatePl0010_p1;

    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    if (groundReached(player)) {
        requestState(this, 0x13, 100);
    }
    return StateMachineNode::vf18(contextArg);
}

// 00BAAA40  FreeFallStatePl0010::vf20  size=135  [class]
// Leave: clears the context's air-movement data and releases the camera angles.
undefined4 FreeFallStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace FreeFallStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(ctx, 0x14) = 0;       /* StateMachineContextPl0010+0x14: air vector valid */
    fld<float>(ctx, 0x20) = 0.0f;  /* StateMachineContextPl0010+0x20: float[4] air vector */
    fld<float>(ctx, 0x24) = 0.0f;
    fld<float>(ctx, 0x28) = 0.0f;
    fld<float>(ctx, 0x2C) = 0.0f;
    fld<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: camera angles overridden */
    return 1;
}

// 00BDE9A0  FreeFallStatePl0010::qteSafeCheck  size=411  [class]
// Per-frame update: camera angles from the parameters, air movement (scaled by fallScale when
// the context carries an air vector), fall distance accumulation.
void FreeFallStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace FreeFallStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    char *params = paramsOf(player);
    float yawDeg = fld<float>(params, 0x16C);
    fld<float>(player, 0x4180) = fld<float>(params, 0x168);
    fld<float>(player, 0x417C) = yawDeg * 0.017453292f;  // degrees -> radians
    fld<float>(player, 0x4184) = 0.0f;
    FUN_00b8af00((int)player);
    fld<int>(player, 0x13F8) = 0;  /* Pl0000+0x13F8: ? */
    thiscall<void>(FUN_008e0b70, controllerOf(player), 0);
    thiscall<void>(FUN_008e0ba0, controllerOf(player), 0);
    if ((fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0 &&  /* Pl0000 inputHold & maskE48 */
        nodeRequested(this) < 0) {
        cdeclcall<undefined4>(FUN_00bd3620, contextArg, this, 100);
    }
    if (nodeRequested(this) < 0) {
        float move[4];
        if (fld<int>(ctx, 0x14) == 0) {  /* StateMachineContextPl0010+0x14: air vector valid */
            thiscall<void>(FUN_00b8ae90, player, move);
        }
        else {
            float airX = fld<float>(ctx, 0x20);  /* StateMachineContextPl0010+0x20: float[4] air vector */
            float airZ = fld<float>(ctx, 0x28);
            thiscall<void>(FUN_00b8ad30, player, move, (float)sqrt((double)airZ * airZ + (double)airX * airX));
            float scale = fld<float>(params, 0x164) * fallScale();
            fallScale() = scale;
            move[0] = move[0] * scale;
            move[1] = move[1] * scale;
            move[2] = move[2] * scale;
            move[3] = scale * move[3];
        }
        thiscall<void>(FUN_008e0c30, controllerOf(player), move);
    }
    fld<float>(ctx, 0x10) = (float)(fabs((double)prevPos()[1] - fld<float>(player, 0x44)) + fld<float>(ctx, 0x10));  /* StateMachineContextPl0010+0x10: fall distance */
    prevPos()[0] = fld<float>(player, 0x40);
    prevPos()[1] = fld<float>(player, 0x44);
    prevPos()[2] = fld<float>(player, 0x48);
    prevPos()[3] = fld<float>(player, 0x4C);
    StateMachineNode::qteSafeCheck(contextArg);
}
