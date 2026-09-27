// src/player/pl0010/state/ZangekiTateStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiTateStatePl0010.h"

// CRT (x87 fabs)
extern "C" double __cdecl fabs(double x);

// StaticArray.cpp: not present in the generated functions.h
void FUN_00bd3af0(undefined4 *param_1, float *param_2, undefined4 *param_3, undefined4 *param_4, int param_5);

extern int          DAT_01d61ac4;   // raised by EntryCutTargetSlot
extern unsigned int DAT_01bea090;
extern int          DAT_01b7c168;   // allocation tag passed to FUN_00dd3500

namespace ZangekiTateStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Virtual function at byte offset `slot` of obj's vftable (thiscall: `this` is passed first).
template <class Fn> inline Fn vfunc(const void *obj, int slot) { return *(Fn *)(*(char *const *)obj + slot); }

// Type descriptors returned by the type-info virtuals.
undefined4 *const kStateMachineContextPl0010Type = (undefined4 *)0x01BE9EF4;  // DAT_01be9ef4 (vftable slot 0x0)
undefined4 *const kPl0000Type                    = (undefined4 *)0x01BE9DB8;  // DAT_01be9db8 (vftable slot 0x4)
undefined4 *const kKogekkoBallType               = (undefined4 *)0x01DC53D8;  // DAT_01dc53d8 (vftable slot 0x0)
undefined4 *const kSlashTargetType               = (undefined4 *)0x01B35260;  // DAT_01b35260 (vftable slot 0x4)

// Global objects used as `this` of thiscall callees.
const int kFrameTimer = 0x01BE9448;   // FUN_00e049b0: frame delta
const int kCamera     = 0x01BEB908;   // FUN_00c58e90

// Slot vftables stored by the inlined slot constructors in vf08.
const undefined4 kSlashFirstHitSlotVftable     = 0x016A2054;
const undefined4 kDatsuTargetCreateSlotVftable = 0x016A2074;
const undefined4 kSlashKogekkoBallSlotVftable  = 0x016A2094;
const undefined4 kEntryCutTargetSlotVftable    = 0x016A20B4;

// obj->typeVirtual()->isKindOf(type): FUN_00dd6d80 on the descriptor returned by the vftable slot.
inline undefined4 isKindOf(const void *obj, int typeSlot, undefined4 *type)
{
    typedef undefined4 *(*GetTypeFn)(const void *self);
    return FUN_00dd6d80(vfunc<GetTypeFn>(obj, typeSlot)(obj), type);
}

// Checked downcasts (0 when the object is null or of another type).
inline StateMachineContextPl0010 *asContext(const void *obj)
{
    if (obj == 0) return 0;
    return isKindOf(obj, 0x0, kStateMachineContextPl0010Type) != 0 ? (StateMachineContextPl0010 *)obj : 0;
}
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) return 0;
    return isKindOf(obj, 0x4, kPl0000Type) != 0 ? (Pl0000 *)obj : 0;
}

// The player owning a StateMachineContextPl0010 (context+0xC), checked against Pl0000.
inline Pl0000 *ownerOf(StateMachineContextPl0010 *ctx)
{
    return asPl0000(at<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
}

// Callees whose generated prototypes do not match the machine-code call sites.
typedef int (*GetObjectFn)(void *self, int index);                                    // manager vftable +0x28
typedef void (*DeleteFn)(void *self, int flags);                                      // vftable +0x0
typedef float *(*GetVec84Fn)(void *self);                                             // Pl0000 vftable +0x84
typedef void (*PlayerVf214Fn)(void *self, int a, float b, int c);                     // Pl0000 vftable +0x214
typedef void (*BlendOutFn)(int self, int motionSet, int motionId, float blendTime);   // FUN_00e35de0
typedef void (*ListRemoveFn)(int listId, void *object);                               // FUN_00d8a1d0
typedef void (*ListAddFn)(int listId, void *object);                                  // FUN_00d89ec0
typedef void *(*AllocFn)(int size, int *tag);                                         // FUN_00dd3500
typedef void (*ResetFn)(int self, int a, int b, int c, int d);                        // FUN_00a8caf0
typedef void (*CameraFn)(int self, void *target, int value, float y, float angle, float distance);  // FUN_00c58e90
typedef undefined4 (*FrameReachedFn)(int self, int motion, float frame);              // FUN_00a952e0
typedef int (*CurrentFrameFn)(int self, int motion);                                  // FUN_00a959f0
typedef void (*PlayerFn)(int self);                                                   // FUN_0085c270
typedef void (*CutAtFn)(undefined4 *context, float *target, int mode);                // FUN_00bd43f0
typedef void (*FollowUpFn)(undefined4 *context, void *node, int priority, int flag);  // FUN_00bd6eb0
typedef void (*CameraShakeFn)(undefined4 *context, float a, float b, float c, float d);  // FUN_00bbc0e0

}  // namespace ZangekiTateStatePl0010_p1

// 00B83910  ZangekiTateStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf10()
{
}

// 00B83920  ZangekiTateStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf14()
{
}

// 00B83940  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf10()
{
}

// 00B83950  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf14()
{
}

// 00B83970  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf10()
{
}

// 00B83980  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf14()
{
}

// 00B839A0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf10()
{
}

// 00B839B0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf14()
{
}

// 00B839C0  ZangekiTateStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiTateStatePl0010::EntryCutTargetSlot::vf18(undefined4 arg, undefined4 *sender)
{
    DAT_01d61ac4 = 1;
}

// 00B83A10  ZangekiTateStatePl0010::SafeCheck  size=5  [class]
void ZangekiTateStatePl0010::SafeCheck(undefined4 *param_2)
{
    StateMachineNode::SafeCheck(param_2);  // jmp 0x00D82220 (Ghidra inlined the target body)
}

// 00B83A20  ZangekiTateStatePl0010::vf18  size=5  [class]
undefined4 ZangekiTateStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0 (Ghidra inlined the target body)
}

// 00B83A30  ZangekiTateStatePl0010::vf24  size=19  [class]
bool ZangekiTateStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B83A50  ZangekiTateStatePl0010::ZangekiTateStatePl0010  size=53  [class]
ZangekiTateStatePl0010::ZangekiTateStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = ZangekiTateStatePl0010::vftable (0x016A20D4)
    undefined4 *handle = &handle8C();
    int remaining = 1;
    do {
        FUN_00a7c930(handle);  // handle8C, handle90
        handle++;
        remaining--;
    } while (-1 < remaining);
}

// 00B83A90  ZangekiTateStatePl0010::vf00  size=6  [class]
undefined *ZangekiTateStatePl0010::vf00()
{
    return (undefined *)0x01BE9EEC;  // &DAT_01be9eec: type descriptor
}

// 00B91920  ZangekiTateStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiTateStatePl0010::SlashFirstHitSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiTateStatePl0010_p1;
    int *manager = (int *)FUN_00c13920();
    int entity = vfunc<GetObjectFn>(manager, 0x28)(manager, 0);
    int player = FUN_00a7c8a0(entity);
    if (player != 0) {
        undefined4 *context = at<undefined4 *>((void *)player, 0x7D0);  /* Pl0000+0x7D0: state machine context */
        if (context != 0 && isKindOf(context, 0x0, kStateMachineContextPl0010Type) != 0) {
            context[0xF8] = 1;  /* StateMachineContextPl0010+0x3E0: first slash hit */
        }
    }
}

// 00B91970  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiTateStatePl0010_p1;
    int *manager = (int *)FUN_00c13920();
    int entity = vfunc<GetObjectFn>(manager, 0x28)(manager, 0);
    int player = FUN_00a7c8a0(entity);
    if (player != 0) {
        undefined4 *context = at<undefined4 *>((void *)player, 0x7D0);  /* Pl0000+0x7D0: state machine context */
        if (context != 0 && isKindOf(context, 0x0, kStateMachineContextPl0010Type) != 0) {
            context[0xF9] = 1;  /* StateMachineContextPl0010+0x3E4: datsu target created */
        }
    }
}

// 00B919C0  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiTateStatePl0010_p1;
    undefined4 *ball;
    if (sender == 0) {
        ball = 0;
    }
    else {
        ball = isKindOf(sender, 0x0, kKogekkoBallType) != 0 ? sender : 0;
    }
    int ballTarget = 0;
    if (ball != 0) {
        ballTarget = (int)ball[2];  /* kogekko ball +0x8 */
    }
    int *manager = (int *)FUN_00c13920();
    int entity = vfunc<GetObjectFn>(manager, 0x28)(manager, 0);
    int player = FUN_00a7c8a0(entity);
    if (player != 0 && ball != 0) {
        FUN_00b8be50(player, FUN_00a7c8b0(ballTarget));
    }
}

// 00B91A30  ZangekiTateStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 *ZangekiTateStatePl0010::SlashFirstHitSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91A50  ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 *ZangekiTateStatePl0010::DatsuTargetCreateSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91A70  ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 *ZangekiTateStatePl0010::SlashKogekkoBallSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91A90  ZangekiTateStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 *ZangekiTateStatePl0010::EntryCutTargetSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91AB0  ZangekiTateStatePl0010::vf04  size=31  [class]
undefined4 *ZangekiTateStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB85C0  ZangekiTateStatePl0010::vf14  size=126  [class]
void ZangekiTateStatePl0010::vf14(undefined4 *param_2)
{
    using namespace ZangekiTateStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    if (motionId() == -1 || FUN_00a94ce0((int)player, motionId())) {
        FUN_00d82510((int)this, 0x3D, 0x19);  // request state 0x3D, priority 0x19
    }
    StateMachineNode::vf14(param_2);
}

// 00BB8640  ZangekiTateStatePl0010::vf20  size=526  [class]
undefined4 ZangekiTateStatePl0010::vf20(undefined4 *param_1)
{
    using namespace ZangekiTateStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (FUN_00a92f90((int)player) != 0) {
        int motion = motionId();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.05f);
        motion = motionId2();
        animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.05f);
    }
    at<float>(ctx, 0x3C0) = 0.0f;  /* StateMachineContextPl0010+0x3C0: ? (radians, see vf08) */
    at<int>(ctx, 0x314) = 1;       /* StateMachineContextPl0010+0x314: ? */
    at<int>(ctx, 0x2F8) = 0;       /* StateMachineContextPl0010+0x2F8: ? */
    if (flag78() != 0 && at<int>(ctx, 0x3C8) != 0) {  /* StateMachineContextPl0010+0x3C8: ? */
        FUN_00b8bd70((int)player);
    }
    at<int>(ctx, 0x3E4) = 0;       /* StateMachineContextPl0010+0x3E4: datsu target created */
    if (slotFirstHit() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x13, slotFirstHit());
        if (slotFirstHit() != 0) {
            vfunc<DeleteFn>(slotFirstHit(), 0x0)(slotFirstHit(), 1);
            slotFirstHit() = 0;
        }
    }
    if (slotDatsu() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x14, slotDatsu());
        if (slotDatsu() != 0) {
            vfunc<DeleteFn>(slotDatsu(), 0x0)(slotDatsu(), 1);
            slotDatsu() = 0;
        }
    }
    if (slotKogekko() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x1D, slotKogekko());
        if (slotKogekko() != 0) {
            vfunc<DeleteFn>(slotKogekko(), 0x0)(slotKogekko(), 1);
            slotKogekko() = 0;
        }
    }
    if (slotEntryCut() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x12, slotEntryCut());
        if (slotEntryCut() != 0) {
            vfunc<DeleteFn>(slotEntryCut(), 0x0)(slotEntryCut(), 1);
            slotEntryCut() = 0;
        }
    }
    if (FUN_00a81330((unsigned int *)&handle8C()) != 0) {
        ((ResetFn)FUN_00a8caf0)(at<int>(ctx, 0x38C), 0, 0, 0, 0);  /* StateMachineContextPl0010+0x38C: ? */
    }
    if (FUN_00a81330((unsigned int *)&handle90()) != 0) {
        ((ResetFn)FUN_00a8caf0)(at<int>(ctx, 0x390), 0, 0, 0, 0);  /* StateMachineContextPl0010+0x390: ? */
    }
    return 1;
}

// 00BE5280  ZangekiTateStatePl0010::vf08  size=946  [class]
bool ZangekiTateStatePl0010::vf08(undefined4 param_1)
{
    using namespace ZangekiTateStatePl0010_p1;
    undefined4 *context = (undefined4 *)param_1;
    if (!StateMachineNode::vf08(param_1)) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int motion = (int)FUN_00bbc710(context);
    frameA() = 11.0f;
    motionId() = motion;
    delayTimer() = 11.0f;
    frameB() = 45.0f;
    frameAReached() = 0;
    delayDone() = 1;
    frameBReached() = 0;
    firstHit() = 0;
    field58() = 0;
    /* StateMachineContextPl0010+0x310: cut-target table index, +0x314: ? (1 = keep index) */
    if (100 < at<unsigned int>(ctx, 0x310)) {
        at<unsigned int>(ctx, 0x310) = 0;
    }
    if (at<int>(ctx, 0x314) == 0) {
        at<unsigned int>(ctx, 0x310) = 0;
    }
    /* StateMachineContextPl0010+0x31C: table {+4 float data, +8 count} */
    void *table = at<void *>(ctx, 0x31C);
    float target[4];
    FUN_00b92a30((int *)target, context,
                 at<float *>(table, 0x4)[at<unsigned int>(ctx, 0x310) % at<unsigned int>(table, 0x8)]);
    at<unsigned int>(ctx, 0x310) = at<unsigned int>(ctx, 0x310) + 1;
    cutTarget()[0] = target[0];
    cutTarget()[1] = target[1];
    int useAlternate = 0;
    cutTarget()[2] = target[2];
    cutTarget()[3] = target[3];
    flagA8() = 0;
    counterA4() = -1;
    cutFrame() = 5.0f;
    cutMode() = 1;
    flag78() = 0;
    flag7C() = 0;
    StateMachineContextPl0010 *ctx2 = asContext(context);
    if (at<int>(ctx2, 0xE4) != 0) {  /* StateMachineContextPl0010+0xE4: ? */
        useAlternate = 1;
    }
    else if (FUN_00bbc850(context) != 0) {
        useAlternate = 0;
    }
    else if (FUN_00bbb570(context) || at<int>(ctx, 0x188) == 0) {  /* StateMachineContextPl0010+0x188: ? */
        useAlternate = 1;
    }
    motionId2() = motionId() + 1;
    FUN_00bd3af0(context, target, (undefined4 *)&motionId(), (undefined4 *)&motionId2(), useAlternate);
    at<int>(ctx, 0x5C4) = 0;  /* StateMachineContextPl0010+0x5C4: ? */
    int value4F0 = at<int>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
    float *vec84 = vfunc<GetVec84Fn>(player, 0x84)(player);
    // The two float arguments are stored on the stack before the vf84 call (Ghidra attributed them to it).
    ((CameraFn)FUN_00c58e90)(kCamera, (char *)ctx + 0x5B8, value4F0, vec84[1], 0.7853982f, 10.0f);
    FUN_00bb9f50(context, cutTarget());
    FUN_00b92f30(context, 0);
    latch80() = 0;
    latch40() = 0;
    latch20() = 0;
    at<int>(ctx, 0x2F8) = 1;  /* StateMachineContextPl0010+0x2F8: ? */
    void *slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kSlashFirstHitSlotVftable;  // inlined SlashFirstHitSlot constructor
    }
    slotFirstHit() = slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kDatsuTargetCreateSlotVftable;  // inlined DatsuTargetCreateSlot constructor
    }
    slotDatsu() = slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kSlashKogekkoBallSlotVftable;  // inlined SlashKogekkoBallSlot constructor
    }
    slotKogekko() = slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kEntryCutTargetSlotVftable;  // inlined EntryCutTargetSlot constructor
    }
    slotEntryCut() = slot;
    if (slotFirstHit() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x13, slotFirstHit());
    }
    if (slotDatsu() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x14, slotDatsu());
    }
    if (slotKogekko() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x1D, slotKogekko());
    }
    if (slotEntryCut() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x12, slotEntryCut());
    }
    /* StateMachineContextPl0010+0x3F8 / +0x3C0: angle in degrees from radians */
    at<float>(ctx, 0x3F8) = at<float>(ctx, 0x3C0) * 57.29578f - 90.0f;
    at<float>(player, 0x2C04) = 10.0f;  /* Pl0000+0x2C04: ? */
    vf214Count() = 0;
    vf214Pending() = 0;
    flagB8() = 0;
    /* StateMachineContextPl0010+0x38C / +0x390: objects whose +0x4F0 handle is copied */
    FUN_00a7c960(&handle8C(), (undefined4 *)FUN_00a7c7f0(at<int>(at<void *>(ctx, 0x38C), 0x4F0)));
    FUN_00a7c960(&handle90(), (undefined4 *)FUN_00a7c7f0(at<int>(at<void *>(ctx, 0x390), 0x4F0)));
    return true;
}

// 00BE5640  ZangekiTateStatePl0010::qteSafeCheck  size=1535  [class]
void ZangekiTateStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace ZangekiTateStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    StateMachineContextPl0010 *ctx2 = asContext(param_2);
    if (at<int>(ctx2, 0x56C) != 0) {  /* StateMachineContextPl0010+0x56C: ? */
        FUN_00d82510((int)this, 0x35, 100);
    }
    if (at<int>(ctx, 0x528) != 0 &&  /* StateMachineContextPl0010+0x528: ? */
        ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), 10.0f) != 0) {
        /* StateMachineContextPl0010+0x4BC: target handle */
        undefined4 handle = FUN_00a81330(&at<unsigned int>(ctx, 0x4BC));
        if (handle != 0) {
            int targetObject = (int)FUN_00a7c8a0((int)handle);
            if (targetObject != 0 && isKindOf((void *)targetObject, 0x4, kSlashTargetType) != 0) {
                FUN_005ca1a0(targetObject, 2);
            }
        }
    }
    if (DAT_01d61ac4 != 0) {
        delayDone() = 0;
        delayTimer() = 5.0f;
        DAT_01d61ac4 = 0;
        vf214Pending() = 1;
    }
    if (delayDone() == 0 && 0.0f < delayTimer()) {
        float10 remaining = (float10)delayTimer() - FUN_00e049b0((int *)kFrameTimer);
        delayTimer() = (float)remaining;
        if (remaining < (float10)0) {
            delayDone() = 1;
        }
    }
    if (at<int>(player, 0x408C) != 0 && vf214Pending() != 0 &&  /* Pl0000+0x408C: ? */
        vf214Count() < at<int>(player, 0x4090)) {                 /* Pl0000+0x4090: ? */
        int c = (int)at<float>(player, 0x409C);  // _ftol2 (FUN_00fdbc60)  /* Pl0000+0x409C: ? */
        float b = at<float>(player, 0x4098);                                /* Pl0000+0x4098: ? */
        int a = (int)at<float>(player, 0x4094);  // _ftol2 (FUN_00fdbc60)  /* Pl0000+0x4094: ? */
        vfunc<PlayerVf214Fn>(player, 0x214)(player, a, b, c);
        vf214Count() = vf214Count() + 1;
        vf214Pending() = 0;
    }
    float stick[2];
    FUN_00bbc9f0(stick, param_2);
    FUN_00bd61b0(param_2);
    if (motionId() != -1) {
        if (((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), cutFrame()) != 0) {
            ((CutAtFn)FUN_00bd43f0)(param_2, cutTarget(), cutMode());
            if (at<int>(ctx, 0x520) != 0) {  /* StateMachineContextPl0010+0x520: ? */
                FUN_00bd5700(param_2, cutTarget(), 1);
            }
        }
        if (at<int>(ctx, 0x3E0) != 0) {  /* StateMachineContextPl0010+0x3E0: first slash hit */
            firstHit() = 1;
            at<int>(ctx, 0x3E0) = 0;
            ((CutAtFn)FUN_00bd43f0)(param_2, cutTarget(), cutMode());
        }
        int mode = at<int>(player, 0x40C8);  /* Pl0000+0x40C8: ? */
        if ((mode == 2 || mode == 0xE || mode == 8) &&
            (DAT_01bea090 & 0x80000800) == 0 &&
            (at<int>(ctx, 0x3E4) != 0 || at<int>(ctx, 0x3E8) != 0) &&  /* StateMachineContextPl0010+0x3E4/+0x3E8 */
            flagA8() == 0) {
            flagA8() = 1;
            counterA4() = 1;
        }
        counterA4() = counterA4() - 1;
        if (counterA4() < 0) {
            counterA4() = 0;
        }
        if (flagA8() != 0 && flag78() == 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motionId())) {
            flag78() = 1;
            flag7C() = 1;
            ((PlayerFn)FUN_0085c270)((int)player);
            at<int>(ctx, 0x3E4) = 0;
            at<int>(ctx, 0x2F4) = 1;  /* StateMachineContextPl0010+0x2F4: ? */
        }
        if (flag7C() != 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motionId())) {
            flag7C() = 0;
            FUN_00bbbef0(param_2, 0);
            flagB8() = 1;
        }
    }
    if (frameAReached() == 0 &&
        ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), frameA()) != 0) {
        frameAReached() = 1;
    }
    if (frameBReached() == 0 &&
        ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), frameB()) != 0) {
        frameBReached() = 1;
    }
    /* Pl0000+0xCFC: pressed-button mask */
    if (frameAReached() == 0 || delayDone() == 0) {
        if ((at<unsigned char>(player, 0xCFC) & 0x40) != 0) {
            latch40() = 1;
        }
        if ((at<unsigned char>(player, 0xCFC) & 0x80) != 0) {
            latch80() = 1;
        }
        if ((at<unsigned char>(player, 0xCFC) & 0x20) != 0) {
            latch20() = 1;
        }
    }
    else {
        at<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
        if (at<int>(ctx, 0x500) == 0) {  /* StateMachineContextPl0010+0x500: ? */
            if ((at<unsigned char>(player, 0xCFC) & 0x40) != 0 || latch40() != 0) {
                FUN_00bbaf90(param_2, (undefined4)this, 0x50, 1, 0);
            }
            if ((at<unsigned char>(player, 0xCFC) & 0x80) != 0 || latch80() != 0) {
                FUN_00bbaed0(param_2, (undefined4)this, 0x50, 1, 0);
            }
        }
        ((FollowUpFn)FUN_00bd6eb0)(param_2, this, 0x32, 0);
    }
    if ((frameAReached() != 0 || FUN_00a8c760((int)player, 0)) && flagB8() == 0) {
        at<int>(ctx, 0x2F8) = 0;
        FUN_00bbc9f0(stick, param_2);
        if (200.0f < fabs(stick[0]) + fabs(stick[1])) {
            FUN_00d82510((int)this, 0x36, 0x19);
        }
    }
    if (((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), 60.0f) != 0 && firstHit() != 0) {
        firstHit() = 0;
        if (flag78() == 0) {
            /* Pl0000+0x341C / +0x3420: ? */
            if (0.0f < at<float>(player, 0x341C) && at<float>(player, 0x3420) < 0.1f) {
                ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.3f, at<float>(player, 0x341C) * 5.0000005f, 0.8f, 0.1f);
            }
        }
        if (flag78() != 0 && at<int>(ctx, 0x3C8) != 0) {  /* StateMachineContextPl0010+0x3C8: ? */
            FUN_00b8bd70((int)player);
        }
    }
    if (at<int>(ctx, 0x2F4) != 0 && at<float>(player, 0x343C) < 0.0f) {  /* Pl0000+0x343C: ? */
        at<int>(ctx, 0x2F4) = 0;
    }
    if (flagB8() != 0) {
        undefined4 *playerContext = at<undefined4 *>(player, 0x7D0);  /* Pl0000+0x7D0: state machine context */
        if (playerContext != 0 && isKindOf(playerContext, 0x0, kStateMachineContextPl0010Type) != 0) {
            at<float>(playerContext, 0x5D8) = 10.0f;  /* StateMachineContextPl0010+0x5D8: ? */
        }
        if (flagB8() != 0 && at<float>(ctx, 0x5CC) < 0.0f) {  /* StateMachineContextPl0010+0x5CC: ? */
            flagB8() = 0;
            ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.3f, 180.0f, 1.0f, 0.1f);
        }
    }
    FUN_00bbb430(param_2, (undefined4)this, 100);
    FUN_00bbc390(param_2);
    StateMachineNode::qteSafeCheck(param_2);
}
