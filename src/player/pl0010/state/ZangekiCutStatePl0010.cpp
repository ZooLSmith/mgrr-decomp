// src/player/pl0010/state/ZangekiCutStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiCutStatePl0010.h"

// CRT (x87 fabs)
extern "C" double __cdecl fabs(double x);

// StaticArray.cpp: not present in the generated functions.h
void FUN_00bd3af0(undefined4 *param_1, float *param_2, undefined4 *param_3, undefined4 *param_4, int param_5);

// Blade-mode cut globals (part of the object at 0x01D616D0).
extern int      DAT_01d61850;
extern float    DAT_01d61860;
extern float    DAT_01d61864;
extern float    DAT_01d61868;
extern float    DAT_01d6186c;
extern float    DAT_01d61870;
extern float    DAT_01d61874;
extern float    DAT_01d61878;
extern float    DAT_01d6187c;
extern float    DAT_01d61880;
extern float    DAT_01d61884;
extern float    DAT_01d61888;
extern float    DAT_01d6188c;
extern float    DAT_01d61890;
extern float    DAT_01d61894;
extern float    DAT_01d61898;
extern float    DAT_01d6189c;
extern float    DAT_01d618a0;
extern float    DAT_01d618a4;
extern int      DAT_01d618a8;
extern int      DAT_01d618ac;
extern int      DAT_01d618b0;
extern int      DAT_01d618d4;
extern int      DAT_01d61924;
extern float    DAT_01d61928;
extern int      DAT_01d6192c;
extern int      DAT_01d61ac4;   // raised by EntryCutTargetSlot
extern unsigned int DAT_01bea090;
extern int      DAT_01b7c168;   // allocation tag passed to FUN_00dd3500

namespace ZangekiCutStatePl0010_p1 {

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
const int kCutGlobals = 0x01D616D0;   // owns DAT_01d61860 / DAT_01d61ac4 ...
const int kFrameTimer = 0x01BE9448;   // FUN_00e049b0: frame delta
const int kCamera     = 0x01BEB908;   // FUN_00c58e90

// Slot vftables stored by the inlined slot constructors in vf08.
const undefined4 kSlashFirstHitSlotVftable     = 0x016A1C90;
const undefined4 kDatsuTargetCreateSlotVftable = 0x016A1CB0;
const undefined4 kSlashKogekkoBallSlotVftable  = 0x016A1CD0;
const undefined4 kEntryCutTargetSlotVftable    = 0x016A1CF0;

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
typedef void (*CameraFn)(int self, void *target, int value, float y, float angle, float distance);  // FUN_00c58e90
typedef undefined4 (*FrameReachedFn)(int self, int motion, float frame);              // FUN_00a952e0
typedef int (*CurrentFrameFn)(int self, int motion);                                  // FUN_00a959f0
typedef void (*PlayerFn)(int self);                                                   // FUN_0085c270
typedef void (*CutAtFn)(undefined4 *context, float *target, int mode);                // FUN_00bd43f0
typedef void (*FollowUpFn)(undefined4 *context, void *node, int priority, int flag);  // FUN_00bd6eb0
typedef void (*SetBlendFn)(int self, float a, float b);                               // FUN_00b7ab80
typedef void (*CameraShakeFn)(undefined4 *context, float a, float b, float c, float d);  // FUN_00bbc0e0

}  // namespace ZangekiCutStatePl0010_p1

// 00B82C90  ZangekiCutStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf10()
{
}

// 00B82CA0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf14()
{
}

// 00B82CC0  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf10()
{
}

// 00B82CD0  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf14()
{
}

// 00B82CF0  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf10()
{
}

// 00B82D00  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf14()
{
}

// 00B82D20  ZangekiCutStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf10()
{
}

// 00B82D30  ZangekiCutStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf14()
{
}

// 00B82D40  ZangekiCutStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiCutStatePl0010::EntryCutTargetSlot::vf18(undefined4 arg, undefined4 *sender)
{
    DAT_01d61ac4 = 1;
}

// 00B82D90  ZangekiCutStatePl0010::SafeCheck  size=40  [class]
void ZangekiCutStatePl0010::SafeCheck(undefined4 *param_2)
{
    using namespace ZangekiCutStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        FUN_00c5fd80(kCutGlobals, &DAT_01d61860);
    }
    StateMachineNode::SafeCheck(param_2);
}

// 00B82DC0  ZangekiCutStatePl0010::vf18  size=5  [class]
undefined4 ZangekiCutStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B82DD0  ZangekiCutStatePl0010::vf24  size=19  [class]
bool ZangekiCutStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B913D0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiCutStatePl0010::SlashFirstHitSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiCutStatePl0010_p1;
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

// 00B91420  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiCutStatePl0010_p1;
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

// 00B91470  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiCutStatePl0010_p1;
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

// 00B914E0  ZangekiCutStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 *ZangekiCutStatePl0010::SlashFirstHitSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91500  ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 *ZangekiCutStatePl0010::DatsuTargetCreateSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91520  ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 *ZangekiCutStatePl0010::SlashKogekkoBallSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91540  ZangekiCutStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 *ZangekiCutStatePl0010::EntryCutTargetSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91560  ZangekiCutStatePl0010::ZangekiCutStatePl0010  size=36  [class]
ZangekiCutStatePl0010::ZangekiCutStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = ZangekiCutStatePl0010::vftable (0x016A22F0)
    FUN_00410710(object90());
}

// 00B91590  ZangekiCutStatePl0010::vf00  size=6  [class]
undefined *ZangekiCutStatePl0010::vf00()
{
    return (undefined *)0x01BE9E9C;  // &DAT_01be9e9c: type descriptor
}

// 00B915B0  ZangekiCutStatePl0010::vf04  size=31  [class]
undefined4 *ZangekiCutStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB2B40  ZangekiCutStatePl0010::vf14  size=121  [class]
void ZangekiCutStatePl0010::vf14(undefined4 *param_2)
{
    using namespace ZangekiCutStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    if (FUN_00a94ce0((int)player, motionId())) {
        FUN_00d82510((int)this, 0x3D, 100);
    }
    StateMachineNode::vf14(param_2);
}

// 00BB2BC0  ZangekiCutStatePl0010::vf20  size=620  [class]
undefined4 ZangekiCutStatePl0010::vf20(undefined4 *param_1)
{
    using namespace ZangekiCutStatePl0010_p1;
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
    if (flag7C() != 0 && at<int>(ctx, 0x3C8) != 0) {  /* StateMachineContextPl0010+0x3C8: ? */
        FUN_00b8bd70((int)player);
    }
    at<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
    at<int>(ctx, 0x3E4) = 0;  /* StateMachineContextPl0010+0x3E4: datsu target created */
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
    DAT_01d61928 = 10.0f;
    DAT_01d61850 = 0;
    DAT_01d618a8 = 0;
    DAT_01d61898 = 0.0f;
    DAT_01d618ac = 0;
    DAT_01d61894 = 0.0f;
    DAT_01d618b0 = 0;
    DAT_01d61890 = 0.0f;
    DAT_01d618d4 = 0;
    DAT_01d6188c = 0.0f;
    DAT_01d61884 = 0.0f;
    DAT_01d61924 = 1;
    DAT_01d61880 = 0.0f;
    DAT_01d6192c = 1;
    DAT_01d6187c = 0.0f;
    DAT_01d61878 = 0.0f;
    DAT_01d61870 = 0.0f;
    DAT_01d6186c = 0.0f;
    DAT_01d61868 = 0.0f;
    DAT_01d61864 = 0.0f;
    DAT_01d6189c = 1.0f;
    DAT_01d61888 = 1.0f;
    DAT_01d61874 = 1.0f;
    DAT_01d61860 = 1.0f;
    DAT_01d618a0 = 0.0f;
    DAT_01d618a4 = 0.0f;
    return 1;
}

// 00BE1500  ZangekiCutStatePl0010::vf08  size=979  [class]
bool ZangekiCutStatePl0010::vf08(undefined4 param_1)
{
    using namespace ZangekiCutStatePl0010_p1;
    undefined4 *context = (undefined4 *)param_1;
    if (!StateMachineNode::vf08(param_1)) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    void *targets = at<void *>(ctx, 0x178);  /* StateMachineContextPl0010+0x178: target list {+4 data, +8 count} */
    if (at<unsigned int>(targets, 0x8) == 0) {
        FUN_00d82510((int)this, 0x3D, 100);
        return false;
    }
    frameAReached() = 0;
    frameA() = 11.0f;
    frameBReached() = 0;
    frameCReached() = 0;
    frameB() = 35.0f;
    delayDone() = 1;
    frameC() = 45.0f;
    delayTimer() = 0.0f;
    rangeStart() = 1.0f;
    rangeEnd() = 100.0f;
    if (at<int>(ctx, 0x568) == 0) {  /* StateMachineContextPl0010+0x568: ? */
        rangeStart() = 30.0f;
    }
    rangeStart() = 5.0f;
    followUp() = -1;
    firstHit() = 0;
    rangeEnd() = 30.0f;
    float *target = cutTarget();
    targets = at<void *>(ctx, 0x178);
    if (at<unsigned int>(targets, 0x8) == 0) {
        target[0] = -1000.0f;
        target[1] = 0.0f;
        target[2] = 1000.0f;
        target[3] = 0.0f;
    }
    else {
        float *first = at<float *>(targets, 0x4);
        target[0] = first[0];
        target[1] = first[1];
        target[2] = first[2];
        target[3] = first[3];
    }
    cutFrame() = 5.0f;
    flag1D8() = 0;
    counter1D4() = -1;
    field78() = 0;
    flag7C() = 0;
    flag80() = 0;
    cutMode() = 1;
    int motion = (int)FUN_00bbc710(context);
    motionId() = motion;
    motionId2() = motion + 1;
    int useAlternate = 0;
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
    FUN_00bd3af0(context, target, (undefined4 *)&motionId(), (undefined4 *)&motionId2(), useAlternate);
    at<int>(ctx, 0x5C4) = 0;  /* StateMachineContextPl0010+0x5C4: ? */
    int value4F0 = at<int>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
    float *vec84 = vfunc<GetVec84Fn>(player, 0x84)(player);
    // The two float arguments are stored on the stack before the vf84 call (Ghidra attributed them to it).
    ((CameraFn)FUN_00c58e90)(kCamera, (char *)ctx + 0x5B8, value4F0, vec84[1], 0.7853982f, 100.0f);
    FUN_00bb9f50(context, target);
    FUN_00b92f30(context, 0);
    if (at<unsigned int>(at<void *>(ctx, 0x178), 0x8) != 0) {
        FUN_00bb9840(context);
    }
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
    DAT_01d618d4 = 1;
    vf214Pending() = 0;
    vf214Count() = 0;
    flag210() = 0;
    return true;
}

// 00BE18E0  ZangekiCutStatePl0010::qteSafeCheck  size=1938  [class]
void ZangekiCutStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace ZangekiCutStatePl0010_p1;
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
    if (at<int>(ctx, 0x568) != 0 ||  /* StateMachineContextPl0010+0x568: ? */
        FUN_00a94e10((int)player, motionId(), rangeStart(), rangeEnd()) != 0) {
        FUN_00bd61b0(param_2);
    }
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
        }
        int mode = at<int>(player, 0x40C8);  /* Pl0000+0x40C8: ? */
        if ((mode == 2 || mode == 0xE || mode == 8) &&
            (DAT_01bea090 & 0x80000800) == 0 &&
            (at<int>(ctx, 0x3E4) != 0 || at<int>(ctx, 0x3E8) != 0) &&  /* StateMachineContextPl0010+0x3E4/+0x3E8 */
            flag1D8() == 0) {
            flag1D8() = 1;
            counter1D4() = 1;
        }
        counter1D4() = counter1D4() - 1;
        if (counter1D4() < 0) {
            counter1D4() = 0;
        }
        if (flag1D8() != 0 && flag7C() == 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motionId())) {
            flag7C() = 1;
            flag80() = 1;
            ((PlayerFn)FUN_0085c270)((int)player);
            at<int>(ctx, 0x3E4) = 0;
            at<int>(ctx, 0x2F4) = 1;  /* StateMachineContextPl0010+0x2F4: ? */
        }
        if (flag80() != 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motionId())) {
            flag80() = 0;
            FUN_00bbbef0(param_2, 0);
            flag210() = 1;
        }
        if (frameAReached() == 0 &&
            ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), frameA()) != 0) {
            if (at<int>(player, 0x40C8) != 9) {
                at<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
            }
            frameAReached() = 1;
        }
        if (frameBReached() == 0 &&
            ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), frameB()) != 0) {
            if (at<int>(player, 0x40C8) != 9) {
                at<int>(ctx, 0x2F8) = 0;
            }
            frameBReached() = 1;
        }
        if (frameCReached() == 0 &&
            ((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), frameC()) != 0) {
            frameCReached() = 1;
        }
        if (frameAReached() != 0 && delayDone() != 0) {
            switch (followUp()) {
            case 0:
                FUN_00d82510((int)this, 0x31, 0x3C);
                at<int>(ctx, 0x564) = at<int>(ctx, 0x564) + 1;  /* StateMachineContextPl0010+0x564: ? */
                at<int>(ctx, 0x570) = at<int>(ctx, 0x570) + 1;  /* StateMachineContextPl0010+0x570: ? */
                at<int>(ctx, 0x568) = 1;
                break;
            case 1:
                FUN_00d82510((int)this, 0x31, 0x3C);
                at<int>(ctx, 0x570) = at<int>(ctx, 0x570) + 1;
                at<int>(ctx, 0x568) = 0;
                break;
            case 2:
                FUN_00bbaed0(param_2, (undefined4)this, 0x50, 1, 1);
                break;
            case 3:
                FUN_00bbaf90(param_2, (undefined4)this, 0x50, 1, 1);
                break;
            default:
                ((FollowUpFn)FUN_00bd6eb0)(param_2, this, 0x32, 0);
                FUN_00bbaed0(param_2, (undefined4)this, 0x32, 0, 0);
                FUN_00bbaf90(param_2, (undefined4)this, 0x32, 0, 0);
            }
        }
        if (((at<int>(ctx, 0x3F4) == 0 && FUN_00a8c760((int)player, 0)) ||  /* StateMachineContextPl0010+0x3F4: ? */
             frameBReached() != 0) &&
            0.1f < fabs(stick[1]) + fabs(stick[1])) {
            FUN_00d82510((int)this, 0x36, 0x19);
        }
        if (at<int>(ctx, 0x500) == 0 &&  /* StateMachineContextPl0010+0x500: ? */
            FUN_00a94e10((int)player, motionId(), rangeStart(), rangeEnd()) != 0) {
            if (followUp() < 0) {
                followUp() = (FUN_00bbb5e0(param_2) != 0) - 1;
                if (followUp() < 0) {
                    followUp() = (FUN_00bbbc20(param_2) != 0 ? 2 : 0) - 1;
                }
            }
            /* Pl0000+0xCFC: pressed-button mask */
            bool chosen = -1 < followUp();
            if (!chosen) {
                followUp() = ((at<unsigned int>(player, 0xCFC) & 0x80) != 0 ? 3 : 0) - 1;
                chosen = -1 < followUp();
            }
            if (!chosen) {
                followUp() = (int)((at<unsigned char>(player, 0xCFC) & 0x40) != 0) * 4 - 1;
                chosen = -1 < followUp();
            }
            if (chosen && flag7C() != 0) {
                flag7C() = 0;
                flag80() = 0;
                FUN_00b8bd70((int)player);
                ((SetBlendFn)FUN_00b7ab80)((int)player, 0.0f, 1.0f);
                ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.1f, 180.0f, 1.0f, 0.1f);
            }
        }
        if (((FrameReachedFn)FUN_00a952e0)((int)player, motionId(), 60.0f) != 0 && firstHit() != 0) {
            firstHit() = 0;
            if (flag7C() == 0) {
                /* Pl0000+0x341C / +0x3420: ? */
                if (0.0f < at<float>(player, 0x341C) && at<float>(player, 0x3420) < 0.1f) {
                    ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.3f, at<float>(player, 0x341C) * 5.0000005f, 0.8f, 0.1f);
                }
            }
            if (flag7C() != 0 && at<int>(ctx, 0x3C8) != 0) {  /* StateMachineContextPl0010+0x3C8: ? */
                FUN_00b8bd70((int)player);
            }
        }
        int cutState = FUN_00c1c880(kCutGlobals);
        if (*(int *)(cutState + 0xC) == 0 && firstHit() != 0 && flag7C() != 0 && at<int>(ctx, 0x3C8) != 0) {
            firstHit() = 0;
            FUN_00b8bd70((int)player);
        }
    }
    if (at<int>(ctx, 0x2F4) != 0 && at<float>(player, 0x343C) < 0.0f) {  /* Pl0000+0x343C: ? */
        at<int>(ctx, 0x2F4) = 0;
    }
    if (flag210() != 0) {
        undefined4 *playerContext = at<undefined4 *>(player, 0x7D0);  /* Pl0000+0x7D0: state machine context */
        if (playerContext != 0 && isKindOf(playerContext, 0x0, kStateMachineContextPl0010Type) != 0) {
            at<float>(playerContext, 0x5D8) = 10.0f;  /* StateMachineContextPl0010+0x5D8: ? */
        }
    }
    if (flag210() != 0 && at<float>(ctx, 0x5CC) < 0.0f) {  /* StateMachineContextPl0010+0x5CC: ? */
        flag210() = 0;
        ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.1f, 180.0f, 1.0f, 0.1f);
    }
    FUN_00bbb430(param_2, (undefined4)this, 100);
    FUN_00bbc390(param_2);
    StateMachineNode::qteSafeCheck(param_2);
}
