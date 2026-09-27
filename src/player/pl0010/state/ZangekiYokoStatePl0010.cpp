// src/player/pl0010/state/ZangekiYokoStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiYokoStatePl0010.h"

// D3DX9_43.DLL imports
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationY(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixInverse(float *out, float *determinant, const float *m);
extern "C" float *__stdcall D3DXMatrixRotationAxis(float *out, const float *v, float angle);
// CRT (x87 fsqrt)
extern "C" double __cdecl sqrt(double x);
// CRT (x87 fpatan)
extern "C" double __cdecl atan2(double y, double x);

namespace ZangekiYokoStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Virtual function at byte offset `slot` of obj's vftable (thiscall: `this` is passed first).
template <class Fn> inline Fn vfunc(const void *obj, int slot) { return *(Fn *)(*(char *const *)obj + slot); }

// Type descriptors returned by the type-info virtuals.
undefined4 *const kStateMachineContextPl0010Type = (undefined4 *)0x01BE9EF4;  // DAT_01be9ef4 (vftable slot 0x0)
undefined4 *const kPl0000Type                    = (undefined4 *)0x01BE9DB8;  // DAT_01be9db8 (vftable slot 0x4)
undefined4 *const kKogekkoBallType               = (undefined4 *)0x01DC53D8;  // DAT_01dc53d8 (vftable slot 0x0)
undefined4 *const kSlashTargetType               = (undefined4 *)0x01B35260;  // DAT_01b35260 (vftable slot 0x4)

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

// Global blade-mode cut-plane description at 0x01D61850.
inline char *cutPlaneInfo() { return (char *)0x01D61850; }
// Flag at 0x01D61AC4 raised by EntryCutTargetSlot.
inline int &entryCutTargetFlag() { return *(int *)0x01D61AC4; }

// "[Hw::VecNormalize] zero vector" warning string (0x0163D0AC) printed by FUN_00dd5650.
inline void vecNormalizeWarning()
{
    typedef void (*PrintFn)(const char *format);
    ((PrintFn)FUN_00dd5650)((const char *)0x0163D0AC);
}

// Callees whose generated prototypes do not match the machine-code call sites.
typedef float (*WrapAngleFn)(float angle);                                             // FUN_00ddba30
typedef void (*BlendOutFn)(int self, int motionSet, int motionId, float blendTime);    // FUN_00e35de0
typedef void (*ListRemoveFn)(int listId, int *object);                                 // FUN_00d8a1d0
typedef void (*ResetFn)(int self, int a, int b, int c, int d);                         // FUN_00a8caf0
typedef void (*SetFlagsFn)(void *self, int a, int mask, int value);                    // FUN_00a96070
typedef void (*SetRotationFn)(void *self, int motion, float x, float y, float z);      // FUN_00a947e0
typedef int (__fastcall *GetBreakTypeFn)(int self);                                    // FUN_00b8b610
typedef bool (*CanStartFn)(undefined4 *context, undefined4 node);                      // FUN_00bbb3a0
typedef void (*CutPlaneFn)(undefined4 *context, float *matrix, float size, float extra,
                           float angle, int mode, float *scale);                        // FUN_00b93000
typedef void (*PlayerUpdateFn)(void *self);                                            // 0x00A17A40

}  // namespace ZangekiYokoStatePl0010_p1

// 00B83AC0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf10()
{
}

// 00B83AD0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf14()
{
}

// 00B83AF0  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf10()
{
}

// 00B83B00  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf14()
{
}

// 00B83B20  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf10()
{
}

// 00B83B30  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf14()
{
}

// 00B83B50  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf10  size=1  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf10()
{
}

// 00B83B60  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf14  size=1  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf14()
{
}

// 00B83B70  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf18  size=13  [class]
void ZangekiYokoStatePl0010::EntryCutTargetSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiYokoStatePl0010_p1;
    entryCutTargetFlag() = 1;  // DAT_01d61ac4
}

// 00B83BC0  ZangekiYokoStatePl0010::SafeCheck  size=5  [class]
void ZangekiYokoStatePl0010::SafeCheck(undefined4 *param_2)
{
    StateMachineNode::SafeCheck(param_2);  // jmp 0x00D82220
}

// 00B83BD0  ZangekiYokoStatePl0010::vf18  size=5  [class]
undefined4 ZangekiYokoStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B83BE0  ZangekiYokoStatePl0010::vf24  size=19  [class]
bool ZangekiYokoStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B83C00  ZangekiYokoStatePl0010::ZangekiYokoStatePl0010  size=53  [class]
ZangekiYokoStatePl0010::ZangekiYokoStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = ZangekiYokoStatePl0010::vftable (0x016A2180)
    undefined4 *handle = &handle94();
    int remaining = 1;
    do {
        FUN_00a7c930(handle);  // handle94, handle98
        handle++;
        remaining--;
    } while (-1 < remaining);
}

// 00B83C40  ZangekiYokoStatePl0010::vf00  size=6  [class]
undefined *ZangekiYokoStatePl0010::vf00()
{
    return (undefined *)0x01BE9EF0;  // &DAT_01be9ef0: type descriptor
}

// 00B91AD0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf18  size=76  [class]
void ZangekiYokoStatePl0010::SlashFirstHitSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef int (*GetObjectFn)(void *self, int index);
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

// 00B91B20  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf18  size=76  [class]
void ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef int (*GetObjectFn)(void *self, int index);
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

// 00B91B70  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf18  size=106  [class]
void ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf18(undefined4 arg, undefined4 *sender)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef int (*GetObjectFn)(void *self, int index);
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

// 00B91BE0  ZangekiYokoStatePl0010::SlashFirstHitSlot::vf00  size=31  [class]
undefined4 *ZangekiYokoStatePl0010::SlashFirstHitSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91C00  ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf00  size=31  [class]
undefined4 *ZangekiYokoStatePl0010::DatsuTargetCreateSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91C20  ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf00  size=31  [class]
undefined4 *ZangekiYokoStatePl0010::SlashKogekkoBallSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91C40  ZangekiYokoStatePl0010::EntryCutTargetSlot::vf00  size=31  [class]
undefined4 *ZangekiYokoStatePl0010::EntryCutTargetSlot::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00B91C60  ZangekiYokoStatePl0010::vf04  size=31  [class]
undefined4 *ZangekiYokoStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB8850  ZangekiYokoStatePl0010::vf14  size=126  [class]
void ZangekiYokoStatePl0010::vf14(undefined4 *param_2)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    if (motion30() == -1 || FUN_00a94ce0((int)player, motion30())) {
        FUN_00d82510((int)this, 0x3D, 0x19);  // request state 0x3D, priority 0x19
    }
    StateMachineNode::vf14(param_2);
}

// 00BB88D0  ZangekiYokoStatePl0010::vf20  size=526  [class]
undefined4 ZangekiYokoStatePl0010::vf20(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p1;
    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (FUN_00a92f90((int)player) != 0) {
        int motion = motion30();
        int animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.05f);
        motion = motion34();
        animation = FUN_00a92f90((int)player);
        FUN_00e26e90(animation);
        ((BlendOutFn)FUN_00e35de0)(animation + 0xF4, animation + 0x98, motion, 0.05f);
    }
    at<float>(ctx, 0x3C0) = 0.0f;  /* StateMachineContextPl0010+0x3C0: ? */
    at<int>(ctx, 0x30C) = 1;       /* StateMachineContextPl0010+0x30C: ? */
    at<int>(ctx, 0x2F8) = 0;       /* StateMachineContextPl0010+0x2F8: ? */
    if (flag78() != 0 && at<int>(ctx, 0x3C8) != 0) {  /* StateMachineContextPl0010+0x3C8: ? */
        FUN_00b8bd70((int)player);
    }
    at<int>(ctx, 0x3E4) = 0;       /* StateMachineContextPl0010+0x3E4: datsu target created */
    if (object9C() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x13, object9C());
        if (object9C() != 0) {
            typedef void (*DeleteFn)(void *self, int flags);
            vfunc<DeleteFn>(object9C(), 0x0)(object9C(), 1);
            object9C() = 0;
        }
    }
    if (objectA0() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x14, objectA0());
        if (objectA0() != 0) {
            typedef void (*DeleteFn)(void *self, int flags);
            vfunc<DeleteFn>(objectA0(), 0x0)(objectA0(), 1);
            objectA0() = 0;
        }
    }
    if (objectA4() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x1D, objectA4());
        if (objectA4() != 0) {
            typedef void (*DeleteFn)(void *self, int flags);
            vfunc<DeleteFn>(objectA4(), 0x0)(objectA4(), 1);
            objectA4() = 0;
        }
    }
    if (objectA8() != 0) {
        ((ListRemoveFn)FUN_00d8a1d0)(0x12, objectA8());
        if (objectA8() != 0) {
            typedef void (*DeleteFn)(void *self, int flags);
            vfunc<DeleteFn>(objectA8(), 0x0)(objectA8(), 1);
            objectA8() = 0;
        }
    }
    if (FUN_00a81330(&handle94()) != 0) {
        ((ResetFn)FUN_00a8caf0)(at<int>(ctx, 0x38C), 0, 0, 0, 0);  /* StateMachineContextPl0010+0x38C: ? */
    }
    if (FUN_00a81330(&handle98()) != 0) {
        ((ResetFn)FUN_00a8caf0)(at<int>(ctx, 0x390), 0, 0, 0, 0);  /* StateMachineContextPl0010+0x390: ? */
    }
    return 1;
}

// 00BB8AE0  FUN_00bb8ae0  size=473  [callgraph]
// Picks the follow-up state from the player's break type (FUN_00b8b610).
undefined4 FUN_00bb8ae0(undefined4 *context, undefined4 node, undefined4 priority)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int breakType = ((GetBreakTypeFn)FUN_00b8b610)((int)player);
    if (breakType != 0 && FUN_00d45a70(0x018B9140, (undefined4)"breakdown_test")) {
        FUN_00d82510(node, 2, priority);
        return 1;
    }
    switch (breakType) {
    case 1:
        FUN_00d82510(node, 0x15, priority);
        return 1;
    case 2:
        FUN_00d82510(node, 0x17, priority);
        return 1;
    case 3:
        FUN_00d82510(node, 0x18, priority);
        return 1;
    case 4:
        FUN_00d82510(node, 0x16, priority);
        return 1;
    case 5:
        FUN_00d82510(node, 0x10, priority);
        return 1;
    case 6:
        FUN_00d82510(node, 4, priority);
        return 1;
    case 7:
        FUN_00d82510(node, 0x2A, priority);
        return 1;
    case 8:
        FUN_00d82510(node, 0x14, priority);
        return 1;
    case 9:
        FUN_00d82510(node, 0x25, priority);
        return 1;
    case 0xB:
        FUN_00d82510(node, 0x2B, priority);
        return 1;
    case 0xC:
        FUN_00d82510(node, 0xD, priority);
        return 1;
    case 0xD:
        FUN_00d82510(node, 9, priority);
        break;
    case 0x10:
        FUN_00d82510(node, 0x26, priority);
        return 1;
    case 0x11:
        FUN_00d82510(node, 0xC, priority);
        return 1;
    }
    return 1;
}

// 00BB8D00  FUN_00bb8d00  size=198  [callgraph]
undefined4 FUN_00bb8d00(undefined4 *context, int node, undefined4 priority, int rejectIdle, int rejectSame)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    float speed = at<float>(at<void *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: ? */
    bool moving;
    if (speed * speed < at<float>(player, 0xD28)) {  /* Pl0000+0xD28: ? */
        moving = (at<unsigned int>(player, 0xE48) & at<unsigned int>(player, 0xCF8)) != 0;  /* Pl0000+0xE48/+0xCF8: input masks */
    }
    else {
        moving = false;
    }
    int nextState = -1;
    if (moving) {
        if (moving) {
            nextState = 10;
        }
    }
    else {
        nextState = 0x11;
    }
    if ((rejectIdle == 0 || nextState != 0x11) &&
        (rejectSame == 0 || nextState != *(int *)(node + 4))) {  /* StateMachineNode+0x4: ? */
        FUN_00d82510(node, nextState, priority);
        return 1;
    }
    return 0;
}

// 00BB8DD0  FUN_00bb8dd0  size=592  [callgraph]
undefined4 FUN_00bb8dd0(undefined4 *context, undefined4 node, undefined4 priority)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) != 0) {  /* Pl0000+0xCF8/+0xE48: input masks */
        float speed = at<float>(at<void *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: ? */
        if (speed * speed < at<float>(player, 0xD28)) {  /* Pl0000+0xD28: ? */
            float dir[4];  // dir[3] is never initialised
            dir[2] = -at<float>(player, 0xD0C);  /* Pl0000+0xD0C: ? */
            dir[0] = -at<float>(player, 0xD08);  /* Pl0000+0xD08: ? */
            dir[1] = 0.0f;
            float lenSq = dir[2] * dir[2] + dir[0] * dir[0];
            if (lenSq > 0.0f) {  // inlined Hw::VecNormalize guard
                FUN_00ddf460(dir, dir);
            }
            else {
                vecNormalizeWarning();
                dir[0] = 0.0f;
                dir[1] = 1.0f;
                dir[2] = 0.0f;
            }
            float axis[3];
            float rotation[16];
            float upWorld[3];    // computed but unused
            float sideWorld[3];  // computed but unused
            float lookMatrix[16];
            axis[0] = 0.0f;
            axis[1] = 0.0f;
            axis[2] = 1.0f;
            FUN_00ddc1d0((undefined4 *)rotation, &at<float>(player, 0x90), 5);  /* Pl0000+0x90: rotation */
            D3DXVec3TransformNormal(upWorld, axis, rotation);
            axis[0] = 1.0f;
            axis[1] = 0.0f;
            axis[2] = 0.0f;
            FUN_00ddc1d0((undefined4 *)rotation, &at<float>(player, 0x90), 5);
            D3DXVec3TransformNormal(sideWorld, axis, rotation);
            FUN_00db6410((undefined4 *)lookMatrix, (float *)0x01BEA380, (float *)0x01BEA390, (undefined4)0x01BEA3A0);
            D3DXVec3TransformNormal(dir, dir, lookMatrix);
            dir[0] = at<float>(player, 0x40) + dir[0];  /* Pl0000+0x40: position */
            dir[1] = at<float>(player, 0x44) + dir[1];
            dir[2] = at<float>(player, 0x48) + dir[2];
            dir[3] = at<float>(player, 0x4C) + dir[3];
            float yaw = (float)FUN_00a8ec30((int)player, dir);
            float diff = ((WrapAngleFn)FUN_00ddba30)(at<float>(player, 0x94) - yaw);  /* Pl0000+0x94: yaw */
            if (diff < -0.7853982f || diff > 0.7853982f) {
                at<int>(player, 0x416C) = 1;  /* Pl0000+0x416C: ? */
                at<float>(ctx, 0x74) = yaw;   /* StateMachineContextPl0010+0x74: turn yaw */
                FUN_00d82510(node, 0x29, priority);
                return 1;
            }
        }
    }
    return 0;
}

// 00BB9020  FUN_00bb9020  size=147  [callgraph]
undefined4 FUN_00bb9020(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE48)) != 0) {
        float speed = at<float>(at<void *>(player, 0x40D4), 0x14C);
        if (speed * speed < at<float>(player, 0xD28)) {
            at<int>(ctx, 0x7C) = 0;  /* StateMachineContextPl0010+0x7C: ? */
            return at<undefined4>(ctx, 0x7C);
        }
    }
    at<int>(ctx, 0x7C) = 1;
    return at<undefined4>(ctx, 0x7C);
}

// 00BB90C0  FUN_00bb90c0  size=303  [callgraph]
// Takes the state node as a second argument (the generated one-parameter prototype drops it).
undefined4 FUN_00bb90c0(undefined4 *context, undefined4 node)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int controller = at<int>(player, 0x764);  /* Behavior+0x764: controller */
    if (*(int *)(controller + 0x104) != 0) {
        *(int *)(controller + 0x104) = 0;
    }
    if (!FUN_008e2740(at<int>(player, 0x764)) &&
        (at<int>(player, 0x41E0) == 0 ||  /* Pl0000+0x41E0: ? */
         at<float>(at<void *>(player, 0x40D4), 0x160) <= at<float>(player, 0x41E4))) {  /* Pl0000+0x41E4: ? */
        at<int>(ctx, 0x14) = 1;  /* StateMachineContextPl0010+0x14: ? */
        at<float>(ctx, 0x20) = at<float>(player, 0x560);  /* Pl0000+0x560: vec4 */
        at<float>(ctx, 0x24) = at<float>(player, 0x564);
        at<float>(ctx, 0x28) = at<float>(player, 0x568);
        at<float>(ctx, 0x2C) = at<float>(player, 0x56C);
        FUN_008e0c00(at<int>(player, 0x764), &at<undefined4>(player, 0x560));
        FUN_00d82510(node, 0xE, 100);
        return 1;
    }
    if (at<int>(player, 0x41E0) == 0 || 0.36f < at<float>(player, 0x41E4)) {
        if (!FUN_008e2740(at<int>(player, 0x764))) {
            return 0;
        }
    }
    FUN_00d82510(node, 0x13, 100);
    return 1;
}

// 00BB91F0  FUN_00bb91f0  size=250  [callgraph]
// Takes the state node as a second argument (the generated one-parameter prototype drops it).
undefined4 FUN_00bb91f0(undefined4 *context, undefined4 node)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int controller = at<int>(player, 0x764);  /* Behavior+0x764: controller */
    if (*(int *)(controller + 0x104) != 0) {
        *(int *)(controller + 0x104) = 0;
    }
    if (at<int>(player, 0x41E0) == 0 || 0.36f < at<float>(player, 0x41E4)) {
        if (!FUN_008e2740(at<int>(player, 0x764))) {
            at<int>(ctx, 0x14) = 1;
            at<float>(ctx, 0x20) = at<float>(player, 0x560);
            at<float>(ctx, 0x24) = at<float>(player, 0x564);
            at<float>(ctx, 0x28) = at<float>(player, 0x568);
            at<float>(ctx, 0x2C) = at<float>(player, 0x56C);
            FUN_008e0c00(at<int>(player, 0x764), &at<undefined4>(player, 0x560));
            FUN_00d82510(node, 0xE, 100);
            return 1;
        }
    }
    FUN_00d82510(node, 0x13, 100);
    return 1;
}

// 00BB92F0  FUN_00bb92f0  size=231  [callgraph]
void FUN_00bb92f0(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef void (*SetOffsetFn)(void *self, float *offset);
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int controller = at<int>(player, 0x764);  /* Behavior+0x764: controller */
    if (*(int *)(controller + 0x104) != 1) {
        *(int *)(controller + 0x104) = 1;
        *(float *)(*(int *)(controller + 0xD0) + 4) = 0.0f;
    }
    FUN_008e0be0(at<int>(player, 0x764));
    float height = 0.75f;
    if (at<int>(player, 0x41E0) != 0) {
        height = 0.5f;
    }
    float offset[4];  // offset[3] is never initialised
    offset[2] = at<float>(at<void *>(player, 0x4268), 0x548) - height;  /* Pl0000+0x4268: ? */
    offset[0] = 0.0f;
    offset[1] = 0.0f;
    FUN_00a8bdd0((int)player, offset);
    vfunc<SetOffsetFn>(player, 0x70)(player, offset);  // Behavior::vf70
    ((SetFlagsFn)FUN_00a96070)(player, 0, 0x80, 1);
}

// 00BB93E0  FUN_00bb93e0  size=234  [callgraph]
void FUN_00bb93e0(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef void (*SetOffsetFn)(void *self, float *offset);
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int controller = at<int>(player, 0x764);  /* Behavior+0x764: controller */
    if (*(int *)(controller + 0x104) != 1) {
        *(int *)(controller + 0x104) = 1;
        *(float *)(*(int *)(controller + 0xD0) + 4) = 0.0f;
    }
    FUN_008e0be0(at<int>(player, 0x764));
    float offset[4];  // offset[3] is never initialised
    offset[1] = at<float>(at<void *>(player, 0x4268), 0x54C) - at<float>(at<void *>(player, 0x40D4), 0x128);
    offset[2] = at<float>(at<void *>(player, 0x4268), 0x548) - at<float>(at<void *>(player, 0x40D4), 0x124);
    offset[0] = 0.0f;
    FUN_00a8bdd0((int)player, offset);
    vfunc<SetOffsetFn>(player, 0x70)(player, offset);  // Behavior::vf70
    ((SetFlagsFn)FUN_00a96070)(player, 0, 0x80, 1);
}

// 00BB94D0  FUN_00bb94d0  size=234  [callgraph]
void FUN_00bb94d0(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef void (*SetOffsetFn)(void *self, float *offset);
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int controller = at<int>(player, 0x764);  /* Behavior+0x764: controller */
    if (*(int *)(controller + 0x104) != 1) {
        *(int *)(controller + 0x104) = 1;
        *(float *)(*(int *)(controller + 0xD0) + 4) = 0.0f;
    }
    FUN_008e0be0(at<int>(player, 0x764));
    float offset[4];  // offset[3] is never initialised
    offset[1] = at<float>(at<void *>(player, 0x4268), 0x54C) - at<float>(at<void *>(player, 0x40D4), 0x13C);
    offset[2] = at<float>(at<void *>(player, 0x4268), 0x548) - at<float>(at<void *>(player, 0x40D4), 0x138);
    offset[0] = 0.0f;
    FUN_00a8bdd0((int)player, offset);
    vfunc<SetOffsetFn>(player, 0x70)(player, offset);  // Behavior::vf70
    ((SetFlagsFn)FUN_00a96070)(player, 0, 0x80, 1);
}

// 00BB95C0  FUN_00bb95c0  size=638  [callgraph]
// Orients the player (+0xB0 matrix and its inverse at +0xF0) onto the cut-plane normal.
void FUN_00bb95c0(undefined4 *context, undefined4 param_2, undefined4 param_3, float *normal, int refresh)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = 0;
    void *owner = at<void *>(ctx, 0xC);
    if (owner != 0) {
        player = asPl0000(owner);
    }
    float uninitialised;  // stack slot never written before this read
    float *matrix = &at<float>(player, 0xB0);  /* Pl0000+0xB0: orientation matrix */
    at<float>(player, 0x90) = 0.0f;  /* Pl0000+0x90: rotation */
    at<float>(player, 0x94) = 0.0f;
    at<float>(player, 0x98) = 0.0f;
    at<float>(player, 0x9C) = uninitialised;
    matrix[14] = 0.0f;
    matrix[13] = 0.0f;
    matrix[12] = 0.0f;
    matrix[11] = 0.0f;
    matrix[9] = 0.0f;
    matrix[8] = 0.0f;
    matrix[7] = 0.0f;
    matrix[6] = 0.0f;
    matrix[4] = 0.0f;
    matrix[3] = 0.0f;
    matrix[2] = 0.0f;
    matrix[1] = 0.0f;
    matrix[15] = 1.0f;
    matrix[10] = 1.0f;
    matrix[5] = 1.0f;
    matrix[0] = 1.0f;
    D3DXMatrixInverse(&at<float>(player, 0xF0), 0, matrix);  /* Pl0000+0xF0: inverse orientation */
    float flip = 1.0f;
    float sign;
    if ((normal[1] * 0.0f + normal[0]) + normal[2] * 0.0f <= 0.0f) {
        sign = -1.0f;
    }
    else {
        sign = 1.0f;
        flip = -1.0f;
    }
    float x = normal[0] * sign;
    float y = normal[1] * sign;
    float z = normal[2] * sign;
    float yaw = (float)FUN_00ddbb50((float)(((y + x) * 0.0f + z) /
                                            (sqrt(y * y + x * x + z * z) * sqrt(1.0))));
    if (flip < 0.0f) {
        yaw = yaw - 3.1415927f;
    }
    at<float>(player, 0x94) = yaw;
    at<float>(ctx, 0x70) = yaw;  /* StateMachineContextPl0010+0x70: cut yaw */
    float upBuffer[4];
    float *up = FUN_00a92640((int)player, upBuffer);
    float crossX = up[1] * normal[2] - up[2] * normal[1];
    float crossY = up[2] * normal[0] - up[0] * normal[2];
    float crossZ = up[0] * normal[1] - up[1] * normal[0];
    float tilt = (float)FUN_00ddbb50((float)(((normal[1] * crossY + normal[0] * crossX) + normal[2] * crossZ) /
        (sqrt((crossX * crossX + crossY * crossY) + crossZ * crossZ) *
         sqrt((normal[1] * normal[1] + normal[0] * normal[0]) + normal[2] * normal[2]))));
    float axis[3];
    axis[0] = normal[2] * crossY - normal[1] * crossZ;
    axis[1] = normal[0] * crossZ - normal[2] * crossX;
    axis[2] = normal[1] * crossX - crossY * normal[0];
    D3DXMatrixRotationAxis(matrix, axis, tilt);
    D3DXMatrixInverse(&at<float>(player, 0xF0), 0, matrix);
    if (refresh != 0) {
        ((PlayerUpdateFn)0x00A17A40)(player);  // switchD_0080dbae::default (0x00A17A40)
    }
}

// 00BB9840  FUN_00bb9840  size=122  [callgraph]
// Removes the first 16-byte entry of the array at context+0x178.
void FUN_00bb9840(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    int *array = at<int *>(ctx, 0x178);  /* StateMachineContextPl0010+0x178: array { vftable, data, count, capacity } */
    unsigned int index = 0;
    if (array[2] != 1) {
        float *entry = (float *)array[1];
        do {
            index++;
            entry[0] = entry[4];
            entry[1] = entry[5];
            entry[2] = entry[6];
            entry[3] = entry[7];
            entry += 4;
        } while (index < array[2] - 1U);
    }
    if (array[1] != 0 && array[2] != 0) {
        array[2] = array[2] + -1;
    }
}

// 00BB98C0  FUN_00bb98c0  size=92  [callgraph]
// Pushes `item` into a bounded array { vftable, data, count, capacity }, dropping the oldest
// 16-byte entry when full.
void FUN_00bb98c0(int *array, undefined4 item)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef void (*PushBackFn)(void *self, undefined4 item);
    if ((unsigned int)array[3] <= (unsigned int)array[2]) {
        unsigned int index = 0;
        if (array[2] != 1) {
            int offset = 0;
            do {
                float *entry = (float *)(array[1] + offset);
                entry[0] = *(float *)(array[1] + 0x10 + offset);
                index++;
                offset += 0x10;
                entry[1] = entry[5];
                entry[2] = entry[6];
                entry[3] = entry[7];
            } while (index < array[2] - 1U);
        }
        if (array[1] != 0 && array[2] != 0) {
            array[2] = array[2] + -1;
        }
    }
    vfunc<PushBackFn>(array, 0x8)(array, item);
}

// 00BB9B10  FUN_00bb9b10  size=1078  [callgraph]
// Registers the air/ground slash animation set and aims the slash direction.
void FUN_00bb9b10(undefined4 *context, undefined4 motion, float angle, int onGround)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int self = (int)player;
    int lastName;
    if (onGround == 0) {
        at<int>(ctx, 0x118) = FUN_00a9f560(self, (char *)"AirSlash", 0.05f, 0x8002000, motion);  /* StateMachineContextPl0010+0x118: slash animation */
        FUN_00a9f600(self, -1, motion, 0, 1, 0, 0x124, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 0, 0, 0x11C, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 45, 0, 0x121, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 90, 0, 0x11E, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 135, 0, 0x11F, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 180, 0, 0x123, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -179, 0, 0x11B, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -135, 0, 0x122, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -90, 0, 0x11D, 0.05f, 0x8002000);
        lastName = 0x120;
    }
    else {
        at<int>(ctx, 0x118) = FUN_00a9f560(self, (char *)"GroundSlash", 0.05f, 0x8002000, motion);
        FUN_00a9f600(self, -1, motion, 0, 1, 0, 0xFA, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 0, 0, 0xF2, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 45, 0, 0xF7, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 90, 0, 0xF4, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 135, 0, 0xF5, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, 180, 0, 0xF9, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -179, 0, 0xF1, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -135, 0, 0xF8, 0.05f, 0x8002000);
        FUN_00a9f600(self, -1, motion, 0, -90, 0, 0xF3, 0.05f, 0x8002000);
        lastName = 0xF6;
    }
    FUN_00a9f600(self, -1, motion, 0, -45, 0, lastName, 0.05f, 0x8002000);
    float degrees = (angle + 1.5707964f) * 57.29578f;
    if (180.0f < degrees) {
        degrees = degrees - 360.0f;
    }
    float slashAngle;
    if (degrees >= 0.0f && degrees <= 1.0f) {
        slashAngle = 1.0f;
    }
    else if (!(degrees < 180.0f) || !(-179.0f < degrees)) {
        slashAngle = -179.0f;
    }
    else if (degrees < -160.0f) {
        slashAngle = -179.9f;
    }
    else if (160.0f < degrees && degrees < 180.0f) {
        slashAngle = 180.0f;
    }
    else {
        slashAngle = degrees;
    }
    ((SetRotationFn)FUN_00a947e0)(player, motion, 0.0f, slashAngle, 0.0f);
}

// 00BB9F50  FUN_00bb9f50  size=2831  [callgraph]
// Builds the blade-mode cut plane from a 2D screen segment `segment` = { x0, y0, x1, y1 } and
// publishes it in the global cut-plane description (0x01D61850).
void FUN_00bb9f50(undefined4 *context, float *segment)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef undefined4 (*GetCutModeFn)(void *self);
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    // 4th components of the vectors below are never initialised, exactly as in the original.
    float start[4];      // segment start
    float end[4];        // segment end, later { scale.x, scale.y } handed to FUN_00b93000
    float mid[4];        // segment midpoint, later reused as center / end - start
    float center[4];     // screen center
    float farStart[4];   // start pushed 100x away from the midpoint, later forward offset
    float farEnd[4];     // end pushed 100x away from the midpoint, later midpoint again
    float dir[4];
    float zero[3];
    float projStart[4];
    float projEnd[4];
    float unused114;     // never written
    float up[3];
    float right[3];
    float forward[3];
    float cutMatrix[16];
    float rotation[16];

    at<int>(player, 0x392C) = 3;  /* Pl0000+0x392C: ? */
    float halfWidth = (float)(int)FUN_00f98a90() * 0.5f;
    center[1] = (float)(int)FUN_00f98aa0() * 0.5f;
    center[0] = halfWidth;
    center[2] = 0.0f;
    start[0] = segment[0];
    start[1] = segment[1];
    start[2] = 0.0f;
    end[0] = segment[2];
    end[1] = segment[3];
    end[2] = 0.0f;
    mid[0] = (end[0] + start[0]) * 0.5f;
    mid[1] = (start[1] + end[1]) * 0.5f;
    mid[3] = (end[3] + start[3]) * 0.5f;
    farStart[0] = (start[0] - mid[0]) * 100.0f + start[0];
    farStart[1] = (start[1] - mid[1]) * 100.0f + start[1];
    farStart[2] = 0.0f;
    farStart[3] = (start[3] - mid[3]) * 100.0f + start[3];
    zero[0] = (end[0] - mid[0]) * 100.0f;
    zero[1] = (end[1] - mid[1]) * 100.0f;
    farEnd[0] = zero[0] + end[0];
    farEnd[1] = end[1] + zero[1];
    farEnd[2] = 0.0f;
    farEnd[3] = (end[3] - mid[3]) * 100.0f + end[3];

    dir[0] = mid[0] - farStart[0];
    dir[1] = mid[1] - farStart[1];
    dir[3] = mid[3] - farStart[3];
    dir[2] = 0.0f;
    if (dir[0] != 0.0f || dir[1] != 0.0f) {
        float lenSq = dir[0] * dir[0] + dir[1] * dir[1];
        if (lenSq > 0.0f) {  // inlined Hw::VecNormalize guard
            FUN_00ddf460(dir, dir);
        }
        else {
            vecNormalizeWarning();
            dir[0] = 0.0f;
            dir[1] = 1.0f;
            dir[2] = 0.0f;
        }
    }
    zero[0] = 0.0f;
    zero[1] = 0.0f;
    zero[2] = 0.0f;
    FUN_00b83ee0(start, farStart, dir, zero, 10000.0f);

    dir[0] = mid[0] - farEnd[0];
    dir[1] = mid[1] - farEnd[1];
    dir[3] = mid[3] - farEnd[3];
    dir[2] = 0.0f;
    if (dir[0] != 0.0f || dir[1] != 0.0f) {
        float lenSq = dir[0] * dir[0] + dir[1] * dir[1];
        if (lenSq > 0.0f) {
            FUN_00ddf460(dir, dir);
        }
        else {
            vecNormalizeWarning();
            dir[0] = 0.0f;
            dir[1] = 1.0f;
            dir[2] = 0.0f;
        }
    }
    zero[0] = 0.0f;
    zero[1] = 0.0f;
    zero[2] = 0.0f;
    FUN_00b83ee0(end, farEnd, dir, zero, 10000.0f);

    farEnd[0] = (start[0] + end[0]) * 0.5f;
    farEnd[1] = (start[1] + end[1]) * 0.5f;
    farEnd[2] = (start[2] + end[2]) * 0.5f;
    farEnd[3] = (start[3] + end[3]) * 0.5f;
    float dx = end[0] - farEnd[0];
    float dy = end[1] - farEnd[1];
    float dz = end[2] - farEnd[2];
    float angle = (float)FUN_00ddbb50((float)((dx * 300.0f + dy * 0.0f + dz * 0.0f) /
                                               (sqrt(dx * dx + dy * dy + dz * dz) * sqrt(90000.0))));
    if (end[1] < start[1]) {
        angle = angle * -1.0f;
    }

    dir[0] = (end[0] * 0.4f + center[0]) - (start[0] * 0.4f + center[0]);
    dir[1] = (end[1] * 0.4f + center[1]) - (start[1] * 0.4f + center[1]);
    dir[2] = 0.0f;
    dir[3] = unused114 - unused114;
    if (dir[0] != 0.0f || dir[1] != 0.0f) {
        float lenSq = dir[1] * dir[1] + dir[0] * dir[0];
        if (lenSq > 0.0f) {
            FUN_00ddf460(dir, dir);
        }
        else {
            vecNormalizeWarning();
            dir[0] = 0.0f;
            dir[1] = 1.0f;
            dir[2] = 0.0f;
        }
    }
    FUN_00d9fab0(0x01BEA1D0, (undefined4)projStart, (undefined4)center);  // unproject screen center
    mid[0] = farEnd[0] * 0.0f + center[0];
    mid[1] = farEnd[1] * 0.0f + center[1];
    mid[2] = farEnd[2] * 0.0f + center[2];
    mid[3] = farEnd[3] * 0.0f + center[3];
    FUN_00d9fab0(0x01BEA1D0, (undefined4)projEnd, (undefined4)mid);
    float *origin = FUN_00a925a0((int)player, zero);
    projStart[0] = projStart[0] - origin[0];
    projStart[1] = projStart[1] - origin[1];
    projStart[2] = projStart[2] - origin[2];
    projStart[3] = projStart[3] - origin[3];
    origin = FUN_00a925a0((int)player, zero);
    projEnd[0] = (projEnd[0] - origin[0]) - projStart[0];
    projEnd[1] = (projEnd[1] - origin[1]) - projStart[1];
    projEnd[2] = (projEnd[2] - origin[2]) - projStart[2];
    projEnd[3] = (projEnd[3] - origin[3]) - projStart[3];
    projStart[0] = projEnd[0] + projStart[0];
    projStart[1] = projEnd[1] + projStart[1];
    projStart[2] = projEnd[2] + projStart[2];
    projStart[3] = projEnd[3] + projStart[3];

    int parts = FUN_00a12210((int)player, -1);
    float *partsMatrix = (float *)(parts + 0x10);
    FUN_00ddbaa0((float)-(partsMatrix[2] / sqrt((partsMatrix[8] * partsMatrix[8] + partsMatrix[9] * partsMatrix[9]) +
                                        partsMatrix[10] * partsMatrix[10])));  // result unused
    up[0] = 0.0f;
    up[1] = 0.0f;
    up[2] = 1.0f;
    D3DXVec3TransformNormal(up, up, partsMatrix);
    right[0] = 1.0f;
    right[1] = 0.0f;
    right[2] = 0.0f;
    D3DXVec3TransformNormal(right, right, partsMatrix);
    forward[0] = 0.0f;
    forward[1] = 1.0f;
    forward[2] = 0.0f;
    D3DXVec3TransformNormal(forward, forward, partsMatrix);
    cutMatrix[14] = 0.0f;
    cutMatrix[13] = 0.0f;
    cutMatrix[12] = 0.0f;
    cutMatrix[11] = 0.0f;
    cutMatrix[9] = 0.0f;
    cutMatrix[8] = 0.0f;
    cutMatrix[7] = 0.0f;
    cutMatrix[6] = 0.0f;
    cutMatrix[4] = 0.0f;
    cutMatrix[3] = 0.0f;
    cutMatrix[2] = 0.0f;
    cutMatrix[1] = 0.0f;
    cutMatrix[15] = 1.0f;
    cutMatrix[10] = 1.0f;
    cutMatrix[5] = 1.0f;
    cutMatrix[0] = 1.0f;
    FID_conflict__memcpy(cutMatrix, partsMatrix, 0x40);
    D3DXMatrixRotationX(rotation, at<float>(ctx, 0x3B0) + at<float>(ctx, 0x374));  /* StateMachineContextPl0010+0x3B0/+0x374: ? */
    D3DXMatrixMultiply(cutMatrix, rotation, cutMatrix);
    D3DXMatrixRotationZ(rotation, angle);
    D3DXMatrixMultiply(cutMatrix, rotation, cutMatrix);
    float reach = at<float>(ctx, 0x3A4) + 1.35f;  /* StateMachineContextPl0010+0x3A4: ? */
    farStart[0] = forward[0] * reach;
    farStart[1] = forward[1] * reach;
    farStart[2] = reach * forward[2];
    mid[0] = end[0] - start[0];
    mid[1] = end[1] - start[1];
    mid[2] = end[2] - start[2];
    mid[3] = end[3] - start[3];
    float offsetX;
    float offsetY;
    float offsetZ;
    if (FUN_00b83fb0(start, mid, center, 200.0f) != 0) {
        float along = farEnd[1] * 0.0011111111f;
        float across = 0.0011111111f * farEnd[0];
        offsetX = (farStart[0] - forward[0] * along) - across * right[0];
        offsetY = (farStart[1] - forward[1] * along) - right[1] * across;
        offsetZ = (farStart[2] - along * forward[2]) - across * right[2];
    }
    else {
        offsetX = farStart[0];
        offsetY = farStart[1];
        offsetZ = farStart[2];
    }
    cutMatrix[12] = offsetX + cutMatrix[12];
    cutMatrix[13] = offsetY + cutMatrix[13];
    cutMatrix[14] = offsetZ + cutMatrix[14];
    int mode = vfunc<GetCutModeFn>(player, 0x270)(player);  // Pl0000::vf270
    int playerState = at<int>(player, 0x40C8);  /* Pl0000+0x40C8: ? */
    if (playerState == 4) {
        mode = 3;
    }
    if (at<int>(ctx, 0x528) == 0) {  /* StateMachineContextPl0010+0x528: ? */
        mode = 0;
    }
    if (playerState == 8 && at<int>(ctx, 0x330) == 1) {  /* StateMachineContextPl0010+0x330: ? */
        mode = 3;
    }
    halfWidth = at<float>(ctx, 0x18C);  /* StateMachineContextPl0010+0x18C: ? */
    at<float>(ctx, 0x3C0) = angle;      /* StateMachineContextPl0010+0x3C0: cut angle */
    at<int>(cutPlaneInfo(), 0x0) = 1;   // DAT_01d61850
    float scaleX = farEnd[0] * 0.0011111111f;
    end[0] = scaleX;
    float scaleY = 0.0011111111f * farEnd[1];
    end[1] = scaleY;
    FID_conflict__memcpy(cutPlaneInfo() + 0x10, cutMatrix, 0x40);  // DAT_01d61860
    at<float>(cutPlaneInfo(), 0x50) = halfWidth;  // DAT_01d618a0
    at<int>(cutPlaneInfo(), 0x58) = mode;         // DAT_01d618a8
    at<float>(cutPlaneInfo(), 0x54) = angle;      // DAT_01d618a4
    at<int>(cutPlaneInfo(), 0x5C) = 1;            // DAT_01d618ac
    at<int>(cutPlaneInfo(), 0x60) = -1;           // DAT_01d618b0
    end[0] = scaleX;
    at<float>(cutPlaneInfo(), 0x64) = end[0];     // DAT_01d618b4
    at<float>(cutPlaneInfo(), 0x68) = end[1];     // DAT_01d618b8
    undefined4 *playerContext = at<undefined4 *>(player, 0x7D0);  /* Pl0000+0x7D0: state machine context */
    end[1] = scaleY;
    float extra = 0.0f;
    if (playerContext != 0 && isKindOf(playerContext, 0x0, kStateMachineContextPl0010Type) != 0) {
        extra = (float &)playerContext[0xDD];  /* StateMachineContextPl0010+0x374: ? */
    }
    ((CutPlaneFn)0x00B93000)(context, cutMatrix, 100.0f, extra, angle, mode, end);  // FUN_00b93000
}

// 00BBAA60  FUN_00bbaa60  size=682  [callgraph]
// Builds the world matrix of every attached effect entry of the player (result discarded).
void FUN_00bbaa60(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int entries[16];
    float baseMatrix[16];
    float localMatrix[16];
    float rotation[16];
    int count = FUN_00a96130((int)player, (undefined4)entries, 0x10);
    int index = 0;
    int entry;
    if (0 < count) {
        do {
            entry = entries[index];
            FID_conflict__memcpy(baseMatrix, &at<float>(player, 0x10), 0x40);  /* Pl0000+0x10: world matrix */
            int mirrored = 0;
            int animation = FUN_00a92f90((int)player);
            if (FUN_00e3a1e0(animation, 0, 0x40) != 0) {
                mirrored = 1;
            }
            short partsNo = *(short *)(entry + 6);
            if (mirrored != 0) {
                partsNo = FUN_00a96170((int)player, partsNo);
            }
            int source = (int)player;
            if (partsNo != -1) {
                source = FUN_00a12210((int)player, (int)partsNo);
            }
            if (source != 0) {
                undefined4 *from = (undefined4 *)(source + 0x10);
                undefined4 *to = (undefined4 *)baseMatrix;
                for (int words = 0x10; words != 0; words--) {
                    *to = *from;
                    from++;
                    to++;
                }
            }
            float posX = *(float *)(entry + 0xC);
            float posY = *(float *)(entry + 0x10);
            float posZ = *(float *)(entry + 0x14);
            float rotX = *(float *)(entry + 0x18);
            float rotY = *(float *)(entry + 0x1C);
            float rotZ = *(float *)(entry + 0x20);
            if (mirrored != 0) {
                rotY = rotY * -1.0f;
                posX = posX * -1.0f;
            }
            localMatrix[14] = 0.0f;
            localMatrix[13] = 0.0f;
            localMatrix[12] = 0.0f;
            localMatrix[11] = 0.0f;
            localMatrix[9] = 0.0f;
            localMatrix[8] = 0.0f;
            localMatrix[7] = 0.0f;
            localMatrix[6] = 0.0f;
            localMatrix[4] = 0.0f;
            localMatrix[3] = 0.0f;
            localMatrix[2] = 0.0f;
            localMatrix[1] = 0.0f;
            localMatrix[15] = 1.0f;
            localMatrix[10] = 1.0f;
            localMatrix[5] = 1.0f;
            localMatrix[0] = 1.0f;
            if (rotZ != 0.0f) {
                D3DXMatrixRotationZ(rotation, rotZ);
                D3DXMatrixMultiply(localMatrix, rotation, localMatrix);
            }
            if (rotY != 0.0f) {
                D3DXMatrixRotationY(rotation, rotY);
                D3DXMatrixMultiply(localMatrix, rotation, localMatrix);
            }
            if (rotX != 0.0f) {
                D3DXMatrixRotationX(rotation, rotX);
                D3DXMatrixMultiply(localMatrix, rotation, localMatrix);
            }
            localMatrix[12] = posX;
            localMatrix[13] = posY;
            localMatrix[14] = posZ;
            D3DXMatrixMultiply(localMatrix, localMatrix, baseMatrix);
        } while (*(char *)(entry + 2) != '\x03' && (index = index + 1, index < count));
    }
}

// 00BBAD20  FUN_00bbad20  size=417  [callgraph]
// Takes the state node as a second argument (the generated one-parameter prototype drops it).
void FUN_00bbad20(undefined4 *context, undefined4 node)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(ctx, 0x500) == 0 &&  /* StateMachineContextPl0010+0x500: ? */
        (at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE50)) != 0) {  /* Pl0000+0xCF8/+0xE50: input masks */
        if (at<int>(player, 0x40C8) == 8) {  /* Pl0000+0x40C8: ? */
            if (FUN_00b92c60(context) != 0) {
                return;
            }
        }
        if ((at<unsigned char>(player, 0xCFC) & 0xC0) != 0) {  /* Pl0000+0xCFC: input bits */
            float segment[4];    // { x0, y0, x1, y1 }
            float lower[4];      // lower[3] is never initialised
            float upper[3];
            float rotation[16];
            segment[0] = 0.0f;
            at<int>(ctx, 0x568) = 0;  /* StateMachineContextPl0010+0x568: ? */
            segment[1] = -1000.0f;
            segment[2] = 0.0f;
            segment[3] = 1000.0f;
            upper[1] = 1000.0f;
            lower[0] = 0.0f;
            lower[2] = 0.0f;
            upper[0] = 0.0f;
            upper[2] = 0.0f;
            lower[1] = -1000.0f;
            D3DXMatrixRotationZ(rotation, at<float>(ctx, 0x3F8) * 0.017453292f);  /* StateMachineContextPl0010+0x3F8: degrees */
            D3DXVec3TransformNormal(lower, lower, rotation);
            D3DXMatrixRotationZ(rotation, at<float>(ctx, 0x3F8) * 0.017453292f);
            D3DXVec3TransformNormal(upper, upper, rotation);
            segment[0] = lower[0];
            segment[1] = lower[1];
            segment[2] = upper[0];
            segment[3] = upper[1];
            FUN_00bb98c0(at<int *>(ctx, 0x178), (undefined4)segment);  /* StateMachineContextPl0010+0x178: segment history */
            FUN_00bb98c0(at<int *>(ctx, 0x17C), (undefined4)segment);  /* StateMachineContextPl0010+0x17C: segment history */
            int *array = at<int *>(ctx, 0x170);  /* StateMachineContextPl0010+0x170: array */
            if (array[1] != 0) {
                array[2] = 0;
            }
            FUN_00d82510(node, 0x31, 0x32);
        }
    }
}

// 00BBAED0  FUN_00bbaed0  size=180  [callgraph]
void FUN_00bbaed0(undefined4 *context, undefined4 node, undefined4 priority, int force, int countUp)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(ctx, 0x500) == 0) {
        if (at<int>(player, 0x40C8) == 8 && FUN_00b92c60(context) != 0) {
            return;
        }
        if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE50)) != 0 &&
            ((at<unsigned char>(player, 0xCFC) & 0x80) != 0 || force != 0)) {
            FUN_00d82510(node, 0x45, priority);
            if (countUp != 0) {
                at<int>(ctx, 0x570) = at<int>(ctx, 0x570) + 1;  /* StateMachineContextPl0010+0x570: ? */
            }
        }
    }
}

// 00BBAF90  FUN_00bbaf90  size=180  [callgraph]
void FUN_00bbaf90(undefined4 *context, undefined4 node, undefined4 priority, int force, int countUp)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(ctx, 0x500) == 0) {
        if (at<int>(player, 0x40C8) == 8 && FUN_00b92c60(context) != 0) {
            return;
        }
        if ((at<unsigned int>(player, 0xCF8) & at<unsigned int>(player, 0xE50)) != 0 &&
            ((at<unsigned char>(player, 0xCFC) & 0x40) != 0 || force != 0)) {
            FUN_00d82510(node, 0x46, priority);
            if (countUp != 0) {
                at<int>(ctx, 0x570) = at<int>(ctx, 0x570) + 1;
            }
        }
    }
}

// 00BBB050  FUN_00bbb050  size=684  [callgraph]
// Aligns the locked slash target (resolved from context+0x4BC) with the player's matrix.
void FUN_00bbb050(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int handleObject = FUN_00a81330(&at<uint>(ctx, 0x4BC));  /* StateMachineContextPl0010+0x4BC: target handle */
    if (handleObject == 0) {
        return;
    }
    int *target = (int *)FUN_00a7c8a0(handleObject);
    if (target == 0 || isKindOf(target, 0x4, kSlashTargetType) == 0) {
        return;
    }
    int parts = FUN_00a12210((int)player, -1);
    float *m = (float *)(parts + 0x10);
    float m9 = m[9];
    float m10 = m[10];
    float scaleX = (float)sqrt((m[0] * m[0] + m[1] * m[1]) + m[2] * m[2]);
    float scaleY = (float)sqrt((m[4] * m[4] + m[5] * m[5]) + m[6] * m[6]);
    double scaleZ = sqrt((m[8] * m[8] + m9 * m9) + m10 * m10);  // kept in x87 precision (never stored)
    float m6n = (float)(m[6] / scaleZ);
    float m10n = (float)(m[10] / scaleZ);
    float euler[3];
    euler[1] = (float)FUN_00ddbaa0((float)-(m[2] / scaleZ));
    float m1n = m[1] / scaleY;
    float m0n = m[0] / scaleX;
    euler[0] = (float)atan2((double)m6n, (double)m10n);
    euler[2] = (float)atan2((double)m1n, (double)m0n);
    float axis[3];
    float rotation[16];
    float yAxis[4];  // yAxis[3] is never initialised
    float xAxis[4];  // xAxis[3] is never initialised
    axis[0] = 0.0f;
    axis[1] = 1.0f;
    axis[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, euler, 5);
    D3DXVec3TransformNormal(yAxis, axis, rotation);
    axis[0] = 1.0f;
    axis[1] = 0.0f;
    axis[2] = 0.0f;
    FUN_00ddc1d0((undefined4 *)rotation, euler, 5);
    D3DXVec3TransformNormal(xAxis, axis, rotation);
    float position[4];  // position[3] is only written when context+0x568 is set
    position[0] = 0.0f;
    position[1] = yAxis[1] * 1.35f + at<float>(player, 0x44);  /* Pl0000+0x44: position.y */
    position[2] = 0.0f;
    float pitch = at<float>(ctx, 0x374);  /* StateMachineContextPl0010+0x374: ? */
    float yaw = ((WrapAngleFn)FUN_00ddba30)((at<float>(ctx, 0x3F8) + 90.0f) * 0.017453292f);  /* StateMachineContextPl0010+0x3F8: degrees */
    float angles[4];  // angles[3] is never initialised
    angles[0] = pitch;
    angles[1] = 0.0f;
    angles[2] = yaw;
    if (at<int>(ctx, 0x568) != 0) {  /* StateMachineContextPl0010+0x568: use published cut plane */
        position[0] = at<float>(cutPlaneInfo(), 0x64);  // DAT_01d618b4
        position[1] = at<float>(cutPlaneInfo(), 0x68);  // DAT_01d618b8
        position[2] = 0.0f;
        position[3] = xAxis[3];
    }
    FUN_005ca2a0((int)target, m, (undefined4 *)position, (undefined4 *)angles);
    target[0x234] = 1;   /* target+0x8D0: ? */
    target[0x235] = 10;  /* target+0x8D4: ? */
    if (at<int>(ctx, 0x528) == 0) {  /* StateMachineContextPl0010+0x528: ? */
        FUN_005ca1a0((int)target, 1);
    }
}

// 00BBB3A0  FUN_00bbb3a0  size=144  [callgraph]
bool FUN_00bbb3a0(undefined4 *context)
{
    using namespace ZangekiYokoStatePl0010_p1;
    typedef undefined4 (*CheckFn)(void *self, float frameTime);
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(player, 0x40C8) != 9) {  /* Pl0000+0x40C8: ? */
        if (FUN_00a81330(&at<uint>(ctx, 0x404)) == 0) {  /* StateMachineContextPl0010+0x404: handle */
            return vfunc<CheckFn>(player, 0x320)(player, 0.016666668f) != 0;  // Pl0000::vf320
        }
    }
    return false;
}

// 00BBB430  FUN_00bbb430  size=196  [callgraph]
void FUN_00bbb430(undefined4 *context, undefined4 node, undefined4 priority)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(ctx, 0x2F4) == 0 && at<int>(ctx, 0x2F8) == 0 &&  /* StateMachineContextPl0010+0x2F4..+0x304: ? */
        at<int>(ctx, 0x2FC) == 0 &&
        at<int>(ctx, 0x300) == 0 && at<int>(ctx, 0x304) < 1 &&
        at<float>(ctx, 0x5D8) <= 0.0f &&  /* StateMachineContextPl0010+0x5D8: ? */
        at<int>(player, 0x40C8) != 8 && at<int>(player, 0x40C8) != 0xF &&
        at<int>(ctx, 0x3C4) != 0) {  /* StateMachineContextPl0010+0x3C4: ? */
        at<int>(ctx, 0x3C4) = 0;
        FUN_00d82510(node, 0x3F, priority);
    }
}

// 00BBB500  FUN_00bbb500  size=103  [callgraph]
void FUN_00bbb500(undefined4 *context, undefined4 node)
{
    using namespace ZangekiYokoStatePl0010_p1;
    StateMachineContextPl0010 *ctx = asContext(context);
    if (FUN_00d821d0(node, 0x3F) != 0) {
        at<int>(ctx, 0x3C4) = 0;
        return;
    }
    if (at<int>(ctx, 0x188) != 0) {  /* StateMachineContextPl0010+0x188: ? */
        at<int>(ctx, 0x3C4) = ((CanStartFn)FUN_00bbb3a0)(context, node);
    }
}

// D3DX9_43.DLL imports
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);
extern "C" float *__stdcall D3DXMatrixMultiply(float *out, const float *m1, const float *m2);
extern "C" float *__stdcall D3DXMatrixRotationX(float *out, float angle);
extern "C" float *__stdcall D3DXMatrixRotationZ(float *out, float angle);
// CRT (x87 fsqrt)
extern "C" double __cdecl sqrt(double x);
// CRT (x87 fabs)
extern "C" double __cdecl fabs(double x);

// StaticArray.cpp: not present in the generated functions.h
void FUN_00bd3af0(undefined4 *param_1, float *param_2, undefined4 *param_3, undefined4 *param_4, int param_5);

extern int          DAT_01d61ac4;   // raised by EntryCutTargetSlot
extern unsigned int DAT_01bea090;
extern unsigned int DAT_01bea094;
extern int          DAT_01b7c168;   // allocation tag passed to FUN_00dd3500
extern int          DAT_01b77e30;
extern int          DAT_01dc08bc;

namespace ZangekiYokoStatePl0010_p2 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Virtual function at byte offset `slot` of obj's vftable (thiscall: `this` is passed first).
template <class Fn> inline Fn vfunc(const void *obj, int slot) { return *(Fn *)(*(char *const *)obj + slot); }

// Bit pattern of a stack argument declared as undefined4 but used as a float.
inline float asFloat(undefined4 bits) { return *(float *)&bits; }

// Type descriptors returned by the type-info virtuals.
undefined4 *const kStateMachineContextPl0010Type = (undefined4 *)0x01BE9EF4;  // DAT_01be9ef4 (vftable slot 0x0)
undefined4 *const kPl0000Type                    = (undefined4 *)0x01BE9DB8;  // DAT_01be9db8 (vftable slot 0x4)
undefined4 *const kSlashTargetType               = (undefined4 *)0x01B35260;  // DAT_01b35260 (vftable slot 0x4)

// Global objects used as `this` of thiscall callees.
const int kFrameTimer   = 0x01BE9448;   // FUN_00e049b0: frame delta
const int kCamera       = 0x01BEB908;   // FUN_00c58e90
const int kEntityList   = 0x01BE9A98;   // FUN_00a7ca20
const int kBreakManager = 0x01D616D0;   // FUN_00c5bc40

// Slot vftables stored by the inlined slot constructors in vf08.
const undefined4 kSlashFirstHitSlotVftable     = 0x016A2100;
const undefined4 kDatsuTargetCreateSlotVftable = 0x016A2120;
const undefined4 kSlashKogekkoBallSlotVftable  = 0x016A2140;
const undefined4 kEntryCutTargetSlotVftable    = 0x016A2160;

// Global blade-mode cut matrix (DAT_01d61860, part of the cut-plane description at 0x01D61850).
inline undefined4 *cutPlaneMatrix() { return (undefined4 *)0x01D61860; }

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

// "[Hw::VecNormalize] zero vector" warning string (0x0163D0AC) printed by FUN_00dd5650.
inline void vecNormalizeWarning()
{
    typedef void (*PrintFn)(const char *format);
    ((PrintFn)FUN_00dd5650)((const char *)0x0163D0AC);
}

// Callees whose generated prototypes do not match the machine-code call sites.
typedef float *(*GetVec84Fn)(void *self);                                             // Pl0000 vftable +0x84
typedef void (*SetVec88Fn)(void *self, float *value);                                 // Pl0000 vftable +0x88
typedef void (*PlayerVf214Fn)(void *self, int a, float b, int c);                     // Pl0000 vftable +0x214
typedef undefined4 (*CheckFn)(void *self, float frameTime);                           // Pl0000 vftable +0x320
typedef void (*ListAddFn)(int listId, void *object);                                  // FUN_00d89ec0
typedef void *(*AllocFn)(int size, int *tag);                                         // FUN_00dd3500
typedef void (*CameraFn)(int self, void *target, int value, float y, float angle, float distance);  // FUN_00c58e90
typedef undefined4 (*FrameReachedFn)(int self, int motion, float frame);              // FUN_00a952e0
typedef int (*CurrentFrameFn)(int self, int motion);                                  // FUN_00a959f0
typedef void (*PlayerFn)(int self);                                                   // FUN_0085c270
typedef void (*CutAtFn)(undefined4 *context, float *target, int mode);                // FUN_00bd43f0
typedef void (*FollowUpFn)(undefined4 *context, void *node, int priority, int flag);  // FUN_00bd6eb0
typedef void (*CameraShakeFn)(undefined4 *context, float a, float b, float c, float d);  // FUN_00bbc0e0 (last two unused)
// FUN_00b85350 (thiscall on the player): the first three floats, the fourth value, a flag and a blend time.
typedef void (*PlayerB85350Fn)(void *self, float duration, float a, float b, float c, int flag, float blend);

}  // namespace ZangekiYokoStatePl0010_p2

// 00BBB570  FUN_00bbb570  size=107  [callgraph]
bool FUN_00bbb570(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    return vfunc<CheckFn>(player, 0x320)(player, 0.016666668f) != 0;  // Pl0000::vf320
}

// 00BBB5E0  FUN_00bbb5e0  size=1585  [callgraph]
// Scans the recorded 2D stroke points (context+0x170, 8-byte { x, y } entries) for a long, nearly
// straight stroke; on success pushes it into the segment histories at +0x178 / +0x17C.
undefined4 FUN_00bbb5e0(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    /* StateMachineContextPl0010+0x170: array { vftable, data, count, capacity } of stroke points */
    unsigned int count = at<unsigned int>(at<void *>(ctx, 0x170), 0x8);
    int found = 0;
    float ax;            // stroke start
    float ay;
    float bx;            // stroke end
    float by;
    float fy;            // stroke end y as used by the line test
    float dx;
    float dx2;
    float dy2;
    float px;
    float py;
    float t;
    float lenSq;
    float midX;
    float midY;
    float midW;
    bool nearOrigin;
    unsigned int i;
    unsigned int next;
    unsigned int j;
    unsigned int k;
    unsigned int span;
    float *p;
    float *q;
    float *r;
    int *points;
    // 4th components of start/end are never initialised, exactly as in the original.
    float start[4];
    float end[4];
    float farStart[4];
    float farEnd[4];
    float dir[4];
    float zero[3];

    if (2 < count) {
        bx = 0.0f;
        by = 0.0f;
        if (count != 1) {
            p = at<float *>(at<void *>(ctx, 0x170), 0x4);
            fy = 0.0f;
            i = 0;
            do {
                ax = p[0];
                ay = p[1];
                next = i + 1;
                if (next < count) {
                    span = next - i;
                    q = p + 2;
                    j = next;
                    do {
                        if (7 < span) break;
                        bx = q[0];
                        fy = q[1];
                        dx = bx - ax;
                        by = fy;
                        if (1200.0f < sqrt((fy - ay) * (fy - ay) + dx * dx)) {
                            nearOrigin = true;
                            found = 1;
                            if (i <= j) {
                                dy2 = (ay - fy) * (ay - fy);
                                dx2 = (ax - bx) * (ax - bx);
                                r = p;
                                k = i;
                                do {
                                    px = r[0];
                                    py = r[1];
                                    if (nearOrigin && sqrt(px * px + py * py) < 950.0f) {
                                        nearOrigin = false;
                                    }
                                    t = -ay;
                                    if (dx2 <= dy2) {
                                        if (200.0f < fabs(px - ((dx / (-fy - t)) * (-py - t) + ax))) {
                                            found = 0;
                                            break;
                                        }
                                    }
                                    else if (200.0f < fabs(py - -(t + (px - ax) * ((-fy - t) / dx)))) {
                                        found = 0;
                                        break;
                                    }
                                    k = k + 1;
                                    r = r + 2;
                                } while (k <= j);
                            }
                            if (at<int>(ctx, 0x3F4) != 0 && nearOrigin) {  /* StateMachineContextPl0010+0x3F4: ? */
                                found = 0;
                                goto nextStart;
                            }
                            if (found != 0) goto accept;
                        }
                        j = j + 1;
                        span = span + 1;
                        q = q + 2;
                    } while (j < count);
                }
                if (found != 0) goto accept;
            nextStart:
                p = p + 2;
                i = next;
            } while (next < count - 1);
        }
    }
    return 0;

accept:
    if (at<int>(ctx, 0x570) == 0) {  /* StateMachineContextPl0010+0x570: ? */
        // Extend the stroke 100x around its midpoint and clip both ends (FUN_00b83ee0).
        midX = (ax + bx) * 0.5f;
        midY = (ay + fy) * 0.5f;
        midW = (end[3] + start[3]) * 0.5f;
        start[0] = ax - midX;
        start[1] = ay - midY;
        farStart[3] = start[3] - midW;
        end[0] = bx - midX;
        end[1] = fy - midY;
        farEnd[3] = end[3] - midW;
        farStart[0] = start[0] * 100.0f + start[0];
        farStart[1] = start[1] + start[1] * 100.0f;
        farStart[2] = 0.0f;
        farStart[3] = farStart[3] * 100.0f + farStart[3];
        farEnd[0] = end[0] * 100.0f + end[0];
        farEnd[1] = end[1] + end[1] * 100.0f;
        farEnd[2] = 0.0f;
        farEnd[3] = farEnd[3] * 100.0f + farEnd[3];

        dir[0] = -farStart[0];
        dir[1] = -farStart[1];
        dir[3] = -farStart[3];
        dir[2] = 0.0f;
        if (dir[0] != 0.0f || dir[1] != 0.0f) {
            lenSq = dir[1] * dir[1] + dir[0] * dir[0];
            if (lenSq > 0.0f) {  // inlined Hw::VecNormalize guard
                FUN_00ddf460(dir, dir);
            }
            else {
                vecNormalizeWarning();
                dir[0] = 0.0f;
                dir[1] = 1.0f;
                dir[2] = 0.0f;
            }
        }
        zero[0] = 0.0f;
        zero[1] = 0.0f;
        zero[2] = 0.0f;
        FUN_00b83ee0(start, farStart, dir, zero, 1000.0f);

        dir[0] = -farEnd[0];
        dir[1] = -farEnd[1];
        dir[3] = -farEnd[3];
        dir[2] = 0.0f;
        if (dir[0] != 0.0f || dir[1] != 0.0f) {
            lenSq = dir[1] * dir[1] + dir[0] * dir[0];
            if (lenSq > 0.0f) {
                FUN_00ddf460(dir, dir);
            }
            else {
                vecNormalizeWarning();
                dir[0] = 0.0f;
                dir[1] = 1.0f;
                dir[2] = 0.0f;
            }
        }
        zero[0] = 0.0f;
        zero[1] = 0.0f;
        zero[2] = 0.0f;
        FUN_00b83ee0(end, farEnd, dir, zero, 1000.0f);
        ax = start[0];
        ay = start[1];
        bx = end[0];
        by = end[1];
        fy = end[1];
    }
    start[2] = bx;
    start[0] = ax;
    start[1] = ay;
    start[3] = fy;
    FUN_00bb98c0(at<int *>(ctx, 0x178), (undefined4)start);  /* StateMachineContextPl0010+0x178: segment history */
    start[0] = ax;
    start[1] = ay;
    start[2] = bx;
    start[3] = by;
    FUN_00bb98c0(at<int *>(ctx, 0x17C), (undefined4)start);  /* StateMachineContextPl0010+0x17C: segment history */
    points = at<int *>(ctx, 0x170);
    if (points[1] != 0) {
        points[2] = 0;
    }
    return 1;
}

// 00BBBC20  FUN_00bbbc20  size=712  [callgraph]
// Looks for a short stroke that jumps far from the screen center after resting near it (<50 px);
// on success pushes the reversed segment into the histories at +0x178 / +0x17C.
undefined4 FUN_00bbbc20(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    int *points = at<int *>(ctx, 0x170);  /* StateMachineContextPl0010+0x170: stroke points { vftable, data, count, capacity } */
    unsigned int count = (unsigned int)points[2];
    if (2 < count) {
        float curX = 0.0f;
        float curY = 0.0f;
        unsigned int first = 0;
        float prevX = 0.0f;
        float prevY = 0.0f;
        float prev2X = 0.0f;
        float prev2Y = 0.0f;
        if (count != 1) {
            float *p = (float *)points[1];
            unsigned int firstNext = 1;
            do {
                float ax = p[0];
                float ay = p[1];
                if (firstNext < count) {
                    int span = firstNext - first;
                    unsigned int j = firstNext;
                    float *q = p;
                    do {
                        float *nextPoint = q + 2;
                        if (1 < j) {
                            prev2X = prevX;
                            prev2Y = prevY;
                        }
                        if (j != 0) {
                            prevX = curX;
                            prevY = curY;
                        }
                        curX = *nextPoint;
                        curY = q[3];
                        float spanF = (float)span;  // unsigned -> float conversion
                        if (span < 0) {
                            spanF = spanF + 4294967296.0f;
                        }
                        if (spanF < 5.0f &&
                            750.0f < sqrt((curY - ay) * (curY - ay) + (curX - ax) * (curX - ax)) &&
                            750.0f < sqrt(ax * ax + ay * ay) &&
                            fabs(curX) < 50.0f && fabs(curY) < 50.0f &&
                            fabs(prevX) < 50.0f && fabs(prevY) < 50.0f && fabs(prev2X) < 50.0f &&
                            fabs(prev2Y) < 50.0f) {
                            float y = q[3];
                            float x = *nextPoint;
                            if (points[1] != 0) {
                                points[2] = 0;
                            }
                            float segment[4];
                            segment[0] = x;
                            segment[1] = y;
                            segment[2] = -ax;
                            segment[3] = -ay;
                            FUN_00bb98c0(at<int *>(ctx, 0x178), (undefined4)segment);  /* StateMachineContextPl0010+0x178: segment history */
                            segment[2] = -ax;
                            segment[3] = -ay;
                            segment[0] = x;
                            segment[1] = y;
                            FUN_00bb98c0(at<int *>(ctx, 0x17C), (undefined4)segment);  /* StateMachineContextPl0010+0x17C: segment history */
                            return 1;
                        }
                        j = j + 1;
                        span = span + 1;
                        q = nextPoint;
                    } while (j < count);
                }
                first = first + 1;
                p = p + 2;
                firstNext = firstNext + 1;
            } while (first < count - 1);
        }
    }
    return 0;
}

// 00BBBEF0  FUN_00bbbef0  size=269  [callgraph]
void FUN_00bbbef0(undefined4 *param_1, int param_2)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    float duration = 60.0f;
    float a = 0.01f;
    float b = 0.01f;
    if (param_2 != 0) {
        a = 0.1f;
        b = 0.1f;
        duration = 50.0f;
    }
    FUN_00b8bcd0((int)player);
    /* StateMachineContextPl0010+0xE0 / +0x188 / +0x330 / +0x5D0: ? */
    if (at<int>(ctx, 0xE0) == 0 && at<int>(ctx, 0x188) == 0 && at<int>(ctx, 0x330) != 0x13) {
        b = at<float>(ctx, 0x5D0);
    }
    at<float>(player, 0x341C) = 1.0f;  /* Pl0000+0x341C: ? */
    ((PlayerB85350Fn)FUN_00b85350)(player, duration, a, b, 0.0f, 1, 0.3f);
    at<float>(player, 0x3428) = 0.0f;  /* Pl0000+0x3428: ? */
    at<float>(player, 0x342C) = 0.0f;  /* Pl0000+0x342C: ? */
    at<float>(ctx, 0x5CC) = duration;  /* StateMachineContextPl0010+0x5CC: timer */
}

// 00BBC000  FUN_00bbc000  size=218  [callgraph]
// Calls FUN_00c5bc40(obj, 1) on every entity of type 0xF0086 / 0xF0087 / 0xF0089 closer to the
// player than context+0x574.
void FUN_00bbc000(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    int list = FUN_00a7ca20(kEntityList);
    int *last = *(int **)(list + 0x18);
    for (int *node = *(int **)(list + 0x14); node != last; node = (int *)node[2]) {
        int typeId = *(int *)(*node + 0x24);
        if (typeId == 0xF0086 || typeId == 0xF0087 || typeId == 0xF0089) {
            float *position = (float *)FUN_00a7c8b0(*node);
            float dx = at<float>(player, 0x40) - position[0];  /* Pl0000+0x40: position */
            float dy = at<float>(player, 0x44) - position[1];
            float dz = at<float>(player, 0x48) - position[2];
            if (sqrt(dx * dx + dy * dy + dz * dz) < at<float>(ctx, 0x574)) {  /* StateMachineContextPl0010+0x574: radius */
                FUN_00c5bc40(kBreakManager, *node, 1);
            }
        }
    }
}

// 00BBC0E0  FUN_00bbc0e0  size=236  [callgraph]
// param_2 / param_3 are floats; callers push two more floats that are not read.
void FUN_00bbc0e0(undefined4 *param_1, undefined4 param_2, undefined4 param_3)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    float a;
    float b;
    if (at<int>(ctx, 0x52C) == 0) {  /* StateMachineContextPl0010+0x52C: ? */
        if (at<int>(ctx, 0x530) == 0) {  /* StateMachineContextPl0010+0x530: ? */
            a = at<float>(player, 0x4060);  /* Pl0000+0x4060..+0x4074: three value pairs */
            b = at<float>(player, 0x4064);
        }
        else {
            a = at<float>(player, 0x4068);
            b = at<float>(player, 0x406C);
            if ((DAT_01bea094 & 0x800) != 0) {
                int mode = at<int>(player, 0x40C8);  /* Pl0000+0x40C8: ? */
                if (mode != 0x14 && mode != 0xC && mode != 8) {
                    a = 1.0f;
                    b = 1.0f;
                }
            }
        }
    }
    else {
        a = at<float>(player, 0x4070);
        b = at<float>(player, 0x4074);
    }
    at<float>(player, 0x341C) = 1.0f;  /* Pl0000+0x341C: ? */
    ((PlayerB85350Fn)FUN_00b85350)(player, asFloat(param_3), a, b, at<float>(player, 0x3450), 0,
                                   asFloat(param_2));  /* Pl0000+0x3450: ? */
}

// 00BBC2A0  FUN_00bbc2a0  size=108  [callgraph]
void FUN_00bbc2a0(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    // A null player reads address 0x341C, exactly as in the original.
    at<float>(ctx, 0x524) = at<float>(player, 0x341C);  /* StateMachineContextPl0010+0x524 <- Pl0000+0x341C */
}

// 00BBC310  FUN_00bbc310  size=115  [callgraph]
void FUN_00bbc310(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (0.0f < at<float>(player, 0x341C)) {  /* Pl0000+0x341C: ? */
        at<undefined4>(player, 0x341C) = at<undefined4>(ctx, 0x524);  /* StateMachineContextPl0010+0x524: saved value */
    }
}

// 00BBC390  FUN_00bbc390  size=605  [callgraph]
// Rebuilds the blade matrix from the player's root part and publishes it (DAT_01d61860).
void FUN_00bbc390(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    /* StateMachineContextPl0010+0x38C / +0x390: two objects (+0x8D8 float angle) */
    int index = 0;
    if (FUN_00a8cbe0(at<int>(ctx, 0x38C), 0)) {
        if (!FUN_00a8cbe0(at<int>(ctx, 0x390), 0)) {
            index = 1;
        }
    }
    float roll = at<float>(at<void *>(ctx, 0x38C + index * 4), 0x8D8);
    int parts = FUN_00a12210((int)player, -1);
    float *partsMatrix = (float *)(parts + 0x10);
    FUN_00ddbaa0((float)-(partsMatrix[2] / sqrt((partsMatrix[8] * partsMatrix[8] + partsMatrix[9] * partsMatrix[9]) +
                                                partsMatrix[10] * partsMatrix[10])));  // result unused
    float up[3];       // computed but unused
    float right[3];    // computed but unused
    float forward[3];
    float matrix[16];
    float rotation[16];
    up[0] = 0.0f;
    up[1] = 0.0f;
    up[2] = 1.0f;
    D3DXVec3TransformNormal(up, up, partsMatrix);
    right[0] = 1.0f;
    right[1] = 0.0f;
    right[2] = 0.0f;
    D3DXVec3TransformNormal(right, right, partsMatrix);
    forward[0] = 0.0f;
    forward[1] = 1.0f;
    forward[2] = 0.0f;
    D3DXVec3TransformNormal(forward, forward, partsMatrix);
    matrix[14] = 0.0f;
    matrix[13] = 0.0f;
    matrix[12] = 0.0f;
    matrix[11] = 0.0f;
    matrix[9] = 0.0f;
    matrix[8] = 0.0f;
    matrix[7] = 0.0f;
    matrix[6] = 0.0f;
    matrix[4] = 0.0f;
    matrix[3] = 0.0f;
    matrix[2] = 0.0f;
    matrix[1] = 0.0f;
    matrix[15] = 1.0f;
    matrix[10] = 1.0f;
    matrix[5] = 1.0f;
    matrix[0] = 1.0f;
    FID_conflict__memcpy(matrix, partsMatrix, 0x40);
    D3DXMatrixRotationX(rotation, at<float>(ctx, 0x3B0) + at<float>(ctx, 0x374));  /* StateMachineContextPl0010+0x3B0/+0x374: ? */
    D3DXMatrixMultiply(matrix, rotation, matrix);
    D3DXMatrixRotationZ(rotation, roll);
    D3DXMatrixMultiply(matrix, rotation, matrix);
    float reach = at<float>(ctx, 0x3A4) + 1.35f;  /* StateMachineContextPl0010+0x3A4: ? */
    matrix[12] = forward[0] * reach + matrix[12];
    matrix[13] = forward[1] * reach + matrix[13];
    matrix[14] = reach * forward[2] + matrix[14];
    undefined4 *from = (undefined4 *)matrix;
    undefined4 *to = cutPlaneMatrix();  // DAT_01d61860
    for (int words = 0x10; words != 0; words--) {
        *to = *from;
        from++;
        to++;
    }
    FUN_005ee3d0(at<int>(ctx, 0x38C + index * 4), matrix);
}

// 00BBC5F0  FUN_00bbc5f0  size=132  [callgraph]
undefined4 FUN_00bbc5f0(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    int state;
    /* Pl0000+0x40C8: ?  StateMachineContextPl0010+0x330: ? */
    if (at<int>(player, 0x40C8) != 8 && (state = at<int>(ctx, 0x330), state != 3) && state != 4 &&
        state != 5 && at<int>(player, 0x40C8) != 0x12) {
        return 0;
    }
    return 1;
}

// 00BBC680  FUN_00bbc680  size=132  [callgraph]
undefined4 FUN_00bbc680(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    int state;
    if (at<int>(player, 0x40C8) != 8 && (state = at<int>(ctx, 0x330), state != 3) && state != 4 &&
        state != 5 && at<int>(player, 0x40C8) != 0x12) {
        return 0;
    }
    return 2;
}

// 00BBC710  FUN_00bbc710  size=105  [callgraph]
undefined4 FUN_00bbc710(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(player, 0x40C8) != 8 && at<int>(player, 0x40C8) != 0x12) {  /* Pl0000+0x40C8: ? */
        return 0;
    }
    return 1;
}

// 00BBC780  FUN_00bbc780  size=105  [callgraph]
undefined4 FUN_00bbc780(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(player, 0x40C8) != 8 && at<int>(player, 0x40C8) != 0x12) {
        return 0;
    }
    return 1;
}

// 00BBC7F0  FUN_00bbc7f0  size=96  [callgraph]
void FUN_00bbc7f0(undefined4 *param_1, int param_2)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    void *owner = at<void *>(ctx, 0xC);  /* StateMachineContext+0xC: owner */
    if (owner != 0) {
        isKindOf(owner, 0x4, kPl0000Type);  // result unused
    }
    int stateId = *(int *)(param_2 + 0x24);  /* param_2+0x24: state id */
    if (stateId != 0x33 && stateId != 0x32) {
        DAT_01dc08bc = 0;
    }
}

// 00BBC850  FUN_00bbc850  size=160  [callgraph]
undefined4 FUN_00bbc850(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    int mode = at<int>(player, 0x40C8);  /* Pl0000+0x40C8: ? */
    if (mode != 0xD && mode != 9 && mode != 0xF && mode != 0xC) {
        if (FUN_00a81330(&at<uint>(ctx, 0x404)) == 0) {  /* StateMachineContextPl0010+0x404: handle */
            if (FUN_00bbb570(param_1) && at<int>(ctx, 0xE0) == 0) {  /* StateMachineContextPl0010+0xE0: ? */
                return 0;
            }
        }
    }
    return 1;
}

// 00BBC8F0  FUN_00bbc8f0  size=106  [callgraph]
undefined4 FUN_00bbc8f0(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    if (at<int>(player, 0x40C8) == 8) {  /* Pl0000+0x40C8: ? */
        return at<undefined4>(ctx, 0xE8);  /* StateMachineContextPl0010+0xE8: ? */
    }
    return 1;
}

// 00BBC960  FUN_00bbc960  size=140  [callgraph]
// Replaces the player's vf84 vector by { 0, y, 0 } through vf88.
void FUN_00bbc960(undefined4 *param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_1);
    Pl0000 *player = ownerOf(ctx);
    float *current = vfunc<GetVec84Fn>(player, 0x84)(player);  // Pl0000::vf84
    float value[4];  // value[3] is never initialised
    value[1] = current[1];
    value[0] = 0.0f;
    value[2] = 0.0f;
    vfunc<SetVec88Fn>(player, 0x88)(player, value);  // Pl0000::vf88
}

// 00BBC9F0  FUN_00bbc9f0  size=366  [callgraph]
// Writes the player's 2D stick vector (normalized direction scaled by |x|+|y|, capped at 1000).
void FUN_00bbc9f0(float *param_1, undefined4 *param_2)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    float x;
    float y;
    /* Pl0000+0x3BD4..+0x3BE0: two stick vectors selected by DAT_01b77e30 */
    if (DAT_01b77e30 == 1 || DAT_01b77e30 == 3) {
        x = at<float>(player, 0x3BD4);
        y = at<float>(player, 0x3BD8);
    }
    else {
        x = at<float>(player, 0x3BDC);
        y = at<float>(player, 0x3BE0);
    }
    float dir[4];
    dir[2] = 0.0f;
    dir[3] = dir[3] - dir[3];  // uninitialised stack slot, as in the original
    dir[0] = x;
    dir[1] = y;
    if (x != 0.0f || y != 0.0f) {
        float lenSq = x * x + y * y;
        if (lenSq > 0.0f) {  // inlined Hw::VecNormalize guard
            FUN_00ddf460(dir, dir);
        }
        else {
            vecNormalizeWarning();
            dir[0] = 0.0f;
            dir[1] = 1.0f;
        }
    }
    float magnitude = (float)(fabs(y) + fabs(x));
    if (1000.0f < magnitude) {
        param_1[0] = dir[0] * 1000.0f;
        param_1[1] = dir[1] * 1000.0f;
        return;
    }
    param_1[0] = dir[0] * magnitude;
    param_1[1] = magnitude * dir[1];
}

// 00BE5C40  ZangekiYokoStatePl0010::vf08  size=948  [class]
bool ZangekiYokoStatePl0010::vf08(undefined4 param_1)
{
    using namespace ZangekiYokoStatePl0010_p2;
    undefined4 *context = (undefined4 *)param_1;
    if (!StateMachineNode::vf08(param_1)) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = ownerOf(ctx);
    int motion = (int)FUN_00bbc710(context);
    frameA() = 11.0f;
    motion30() = motion;
    delayTimer() = 0.0f;
    frameAReached() = 0;
    frameB() = 45.0f;
    delayDone() = 1;
    frameBReached() = 0;
    firstHit() = 0;
    field58() = 0;
    /* StateMachineContextPl0010+0x308: cut-target table index, +0x30C: ? (0 = reset index) */
    if (100 < at<unsigned int>(ctx, 0x308)) {
        at<unsigned int>(ctx, 0x308) = 0;
    }
    if (at<int>(ctx, 0x30C) == 0) {
        at<unsigned int>(ctx, 0x308) = 0;
    }
    /* StateMachineContextPl0010+0x318: table {+4 float data, +8 count} */
    void *table = at<void *>(ctx, 0x318);
    float target[4];
    FUN_00b92af0((int *)target, context,
                 at<float *>(table, 0x4)[at<unsigned int>(ctx, 0x308) % at<unsigned int>(table, 0x8)]);
    at<unsigned int>(ctx, 0x308) = at<unsigned int>(ctx, 0x308) + 1;
    cutTarget()[0] = target[0];
    cutTarget()[1] = target[1];
    int useAlternate = 0;
    cutTarget()[2] = target[2];
    cutTarget()[3] = target[3];
    flag84() = 0;
    counter80() = -1;
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
    motion34() = motion30() + 1;
    FUN_00bd3af0(context, target, (undefined4 *)&motion30(), (undefined4 *)&motion34(), useAlternate);
    at<int>(ctx, 0x5C4) = 0;  /* StateMachineContextPl0010+0x5C4: ? */
    int value4F0 = at<int>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
    float *vec84 = vfunc<GetVec84Fn>(player, 0x84)(player);  // Pl0000::vf84
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
    object9C() = (int *)slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kDatsuTargetCreateSlotVftable;  // inlined DatsuTargetCreateSlot constructor
    }
    objectA0() = (int *)slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kSlashKogekkoBallSlotVftable;  // inlined SlashKogekkoBallSlot constructor
    }
    objectA4() = (int *)slot;
    slot = ((AllocFn)FUN_00dd3500)(4, &DAT_01b7c168);
    if (slot == 0) {
        slot = 0;
    }
    else {
        *(undefined4 *)slot = kEntryCutTargetSlotVftable;  // inlined EntryCutTargetSlot constructor
    }
    objectA8() = (int *)slot;
    if (object9C() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x13, object9C());
    }
    if (objectA0() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x14, objectA0());
    }
    if (objectA4() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x1D, objectA4());
    }
    if (objectA8() != 0) {
        ((ListAddFn)FUN_00d89ec0)(0x12, objectA8());
    }
    /* StateMachineContextPl0010+0x3F8 / +0x3C0: angle in degrees from radians */
    at<float>(ctx, 0x3F8) = at<float>(ctx, 0x3C0) * 57.29578f - 90.0f;
    at<float>(player, 0x2C04) = 10.0f;  /* Pl0000+0x2C04: ? */
    vf214Count() = 0;
    vf214Pending() = 0;
    flagB8() = 0;
    /* StateMachineContextPl0010+0x38C / +0x390: objects whose +0x4F0 handle is copied */
    FUN_00a7c960(&handle94(), (undefined4 *)FUN_00a7c7f0(at<int>(at<void *>(ctx, 0x38C), 0x4F0)));
    FUN_00a7c960(&handle98(), (undefined4 *)FUN_00a7c7f0(at<int>(at<void *>(ctx, 0x390), 0x4F0)));
    return true;
}

// 00BE6000  ZangekiYokoStatePl0010::qteSafeCheck  size=1532  [class]
void ZangekiYokoStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace ZangekiYokoStatePl0010_p2;
    StateMachineContextPl0010 *ctx = asContext(param_2);
    Pl0000 *player = ownerOf(ctx);
    StateMachineContextPl0010 *ctx2 = asContext(param_2);
    if (at<int>(ctx2, 0x56C) != 0) {  /* StateMachineContextPl0010+0x56C: ? */
        FUN_00d82510((int)this, 0x35, 100);
    }
    if (at<int>(ctx, 0x528) != 0 &&  /* StateMachineContextPl0010+0x528: ? */
        ((FrameReachedFn)FUN_00a952e0)((int)player, motion30(), 10.0f) != 0) {
        /* StateMachineContextPl0010+0x4BC: target handle */
        undefined4 handle = FUN_00a81330(&at<uint>(ctx, 0x4BC));
        if (handle != 0) {
            int targetObject = (int)FUN_00a7c8a0((int)handle);
            if (targetObject != 0 && isKindOf((void *)targetObject, 0x4, kSlashTargetType) != 0) {
                FUN_005ca1a0(targetObject, 2);
            }
        }
    }
    if (DAT_01d61ac4 != 0) {
        frameBReached() = 0;
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
    if (motion30() != -1) {
        if (((FrameReachedFn)FUN_00a952e0)((int)player, motion30(), cutFrame()) != 0) {
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
            flag84() == 0) {
            flag84() = 1;
            counter80() = 1;
        }
        counter80() = counter80() - 1;
        if (counter80() < 0) {
            counter80() = 0;
        }
        if (flag84() != 0 && flag78() == 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motion30())) {
            flag78() = 1;
            flag7C() = 1;
            ((PlayerFn)FUN_0085c270)((int)player);
            at<int>(ctx, 0x3E4) = 0;
            at<int>(ctx, 0x2F4) = 1;  /* StateMachineContextPl0010+0x2F4: ? */
        }
        if (flag7C() != 0 &&
            12.0f <= (float)((CurrentFrameFn)FUN_00a959f0)((int)player, motion30())) {
            flag7C() = 0;
            FUN_00bbbef0(param_2, 0);
            flagB8() = 1;
        }
    }
    if (frameAReached() == 0 &&
        ((FrameReachedFn)FUN_00a952e0)((int)player, motion30(), frameA()) != 0) {
        frameAReached() = 1;
    }
    if (frameBReached() == 0 &&
        ((FrameReachedFn)FUN_00a952e0)((int)player, motion30(), frameB()) != 0) {
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
        if (200.0f < fabs(stick[1]) + fabs(stick[0])) {
            FUN_00d82510((int)this, 0x36, 0x19);
        }
    }
    if (((FrameReachedFn)FUN_00a952e0)((int)player, motion30(), 60.0f) != 0 && firstHit() != 0) {
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
        if (flagB8() != 0 && at<float>(ctx, 0x5CC) < 0.0f) {  /* StateMachineContextPl0010+0x5CC: timer */
            flagB8() = 0;
            ((CameraShakeFn)FUN_00bbc0e0)(param_2, 0.3f, 180.0f, 1.0f, 0.1f);
        }
    }
    FUN_00bbb430(param_2, (undefined4)this, 100);
    FUN_00bbc390(param_2);
    StateMachineNode::qteSafeCheck(param_2);
}
