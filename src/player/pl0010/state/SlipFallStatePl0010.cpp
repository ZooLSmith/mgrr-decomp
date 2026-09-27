// src/player/pl0010/state/SlipFallStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SlipFallStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e74[];  // SlipFallStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace SlipFallStatePl0010_p1 {

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
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContextPl0010+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

// Pl0000+0x764: controller object (ECX of FUN_008e0b70 / FUN_008e0ba0 / FUN_008e2740)
inline int controllerOf(Pl0000 *player)
{
    return fld<int>(player, 0x764);
}

// Pl0000+0x40D4: parameter block of the player (read-only floats)
inline float param(Pl0000 *player, int offset)
{
    return fld<float>((void *)fld<int>(player, 0x40D4), offset);
}

// Function at 0x00A17A40 (named switchD_0080dbae::default in FILEMAP; called with ECX = player)
static void *const kPlayerFn_00A17A40 = (void *)0x00A17A40;

// v * k with the x87 product kept unrounded (both operands are floats, so the double is exact)
inline double scaled(float v, float k)
{
    return (double)v * (double)k;
}

}  // namespace SlipFallStatePl0010_p1

// 00B82680  SlipFallStatePl0010::vf08  size=19  [class]
// Enter.
bool SlipFallStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B826A0  SlipFallStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void SlipFallStatePl0010::SafeCheck(undefined4 *context)
{
    StateMachineNode::SafeCheck(context);
}

// 00B826B0  SlipFallStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 SlipFallStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B826C0  SlipFallStatePl0010::vf20  size=19  [class]
// Leave.
undefined4 SlipFallStatePl0010::vf20(undefined4 *context)
{
    return StateMachineNode::vf20(context) != 0;
}

// 00B826E0  SlipFallStatePl0010::vf24  size=19  [class]
bool SlipFallStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B82720  SlipFallStatePl0010::vf00  size=6  [class]
undefined *SlipFallStatePl0010::vf00()
{
    return DAT_01be9e74;
}

// 00B91290  SlipFallStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *SlipFallStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB19A0  SlipFallStatePl0010::qteSafeCheck  size=343  [class]
// Pushes the player's position (Pl0000+0x50, float[4]) along the slip vectors: before 1/12 s
// (or NaN) by 0.1 * FUN_00a925a0, from 1/12 s on by 0.1 * FUN_00a92640 + 0.05 * FUN_00a925a0.
void SlipFallStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace SlipFallStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    float *position = &fld<float>(player, 0x50);  /* Pl0000+0x50: position */
    float vector[4];  // output buffer of FUN_00a925a0 / FUN_00a92640
    FUN_008e0b70(controllerOf(player), 0);
    FUN_008e0ba0(controllerOf(player), 0);
    float elapsed = fld<float>(this, 8);  /* StateMachineNode+0x8: time in the state */
    double x;
    double y;
    double z;
    double w;
    if (NAN_CHECK(elapsed) || (0.083333336f < elapsed) == (elapsed == 0.083333336f)) {
        float *slip = FUN_00a925a0((int)player, vector);
        y = scaled(slip[1], 0.1f);
        z = scaled(slip[2], 0.1f);
        w = scaled(slip[3], 0.1f);
        x = scaled(slip[0], 0.1f) + (double)position[0];
    }
    else {
        float *push = FUN_00a92640((int)player, vector);
        float pushY = push[1];
        float pushZ = push[2];
        float pushW = push[3];
        position[0] = (float)((double)position[0] + scaled(push[0], 0.1f));
        position[1] = (float)(scaled(pushY, 0.1f) + (double)position[1]);
        position[2] = (float)((double)position[2] + scaled(pushZ, 0.1f));
        position[3] = (float)(scaled(pushW, 0.1f) + (double)position[3]);
        float *slip = FUN_00a925a0((int)player, vector);
        y = scaled(slip[1], 0.05f);
        z = scaled(slip[2], 0.05f);
        w = scaled(slip[3], 0.05f);
        x = (double)position[0] + scaled(slip[0], 0.05f);
    }
    position[0] = (float)x;
    position[1] = (float)(y + (double)position[1]);
    position[2] = (float)((double)position[2] + z);
    position[3] = (float)(w + (double)position[3]);
    thiscall<void>(kPlayerFn_00A17A40, player);
    StateMachineNode::qteSafeCheck(context);
}

// 00BB1B00  SlipFallStatePl0010::vf14  size=216  [class]
void SlipFallStatePl0010::vf14(undefined4 *context)
{
    using namespace SlipFallStatePl0010_p1;

    char *ctx = asContextPl0010(context);
    Pl0000 *player = playerOf(ctx);
    if (!FUN_008e2740(controllerOf(player)) &&
        (fld<int>(player, 0x41E0) == 0 ||                        /* Pl0010: groundHit */
         param(player, 0x160) <= fld<float>(player, 0x41E4))) {  /* Pl0010: groundHitDistance */
        FUN_00d82510((int)this, 0xE, 100);
    }
    bool groundFar = fld<int>(player, 0x41E0) == 0 || 0.36f < fld<float>(player, 0x41E4);
    if (!groundFar || FUN_008e2740(controllerOf(player))) {
        FUN_00d82510((int)this, 0x13, 100);
    }
    StateMachineNode::vf14(context);
}
