// src/player/pl0010/state/ZangekiDatsuJumpStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiDatsuJumpStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// d3dx9_43.dll import
extern "C" float *__stdcall D3DXVec3TransformNormal(float *out, const float *v, const float *m);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by the type-info virtuals (FUN_00dd6d80(record, target) walks the parents)
extern unsigned char DAT_01be9ea0[];  // ZangekiDatsuJumpStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01be9ca8[];  // BehaviorDatsu
// global objects passed in ECX
extern unsigned char DAT_01bea1d0[];  // camera/slow-motion controller (FUN_00da8810, FUN_00da0d70)
extern unsigned char DAT_01bea750[];  // FUN_00db3e80
extern unsigned char DAT_01b36a24[];  // FUN_0093bdd0
extern unsigned char DAT_01b36a60[];  // FUN_00941450
extern unsigned char DAT_01b35df8[];  // collision world (ray casts 0x0090B130 / 0x0090B490)
// plain globals
extern unsigned int DAT_01bea060;  // global flags
extern int          DAT_01dc08bc;
extern int          DAT_01dc08c0;
extern int          DAT_01dc08d4;
extern int          DAT_018b56b4;
extern int          DAT_01bea860;  // set when the landing point is above water

namespace ZangekiDatsuJumpStatePl0010_p1 {

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

// Callees without (or with a wrong) generated declaration.
void *const kRayCastSingleHit    = (void *)0x0090B130;  // (world) ray cast: (hit, normal, 0, 0, work) -> hit?
void *const kRayCastSingleHit4   = (void *)0x0090B490;  // RayCastSingleHitWork::RayCastSingleHitWork_4 (world)
void *const kSetCameraNo         = (void *)0x00E36B80;  // Animation::Motion::Unit::setCameraNo (unit, motion, camera)
void *const kQteSafeCheckForward = (void *)0x00B89A20;  // Pl0000::qteZangekiSafeCheckForward (ECX = player)
void *const kFun00bd5d10         = (void *)0x00BD5D10;  // FUN_00bd5d10 (cdecl, 7 arguments)

// obj->typeVirtual(slot)->isKindOf(type)
inline int isKindOf(const void *obj, unsigned int typeSlot, unsigned char *type)
{
    return FUN_00dd6d80((undefined4 *)vcall<void *>(obj, typeSlot), (undefined4 *)type);
}

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    return isKindOf(obj, 0x0, DAT_01be9ef4) != 0 ? (StateMachineContextPl0010 *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    return isKindOf(obj, 0x4, DAT_01be9db8) != 0 ? (Pl0000 *)obj : 0;
}

// Sets the camera of the motion unit of the player's animation (FUN_00a92f90(player) + 0xF4).
inline void setCameraNo(Pl0000 *player, int motion, int camera)
{
    thiscall<void>(kSetCameraNo, (void *)(FUN_00a92f90((int)player) + 0xF4), motion, camera);
}

// Controller object of a Behavior (Behavior+0x764).
inline int controllerOf(Pl0000 *player)
{
    return fld<int>(player, 0x764);  /* Behavior+0x764: controller */
}

}  // namespace ZangekiDatsuJumpStatePl0010_p1

// 00B82DF0  ZangekiDatsuJumpStatePl0010::vf14  size=5  [class]
void ZangekiDatsuJumpStatePl0010::vf14(undefined4 *param_2)
{
    StateMachineNode::vf14(param_2);  // jmp 0x00D822A0
}

// 00B82E00  ZangekiDatsuJumpStatePl0010::vf18  size=5  [class]
undefined4 ZangekiDatsuJumpStatePl0010::vf18(undefined4 param_2)
{
    return StateMachineNode::vf18(param_2);  // jmp 0x00D822E0
}

// 00B82E10  ZangekiDatsuJumpStatePl0010::vf24  size=19  [class]
bool ZangekiDatsuJumpStatePl0010::vf24(undefined4 param_1)
{
    return StateMachineNode::vf24(param_1) != 0;
}

// 00B82E30  ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010  size=41  [class]
ZangekiDatsuJumpStatePl0010::ZangekiDatsuJumpStatePl0010(undefined4 param_2)
    : StateMachineNode(param_2)
{
    // vftable = ZangekiDatsuJumpStatePl0010::vftable (0x016A1D10)
    FUN_00a7c930(&targetHandle());
    FUN_00a7c930(&handle58());
}

// 00B82E60  ZangekiDatsuJumpStatePl0010::vf00  size=6  [class]
undefined *ZangekiDatsuJumpStatePl0010::vf00()
{
    return (undefined *)DAT_01be9ea0;  // type descriptor
}

// 00B915D0  ZangekiDatsuJumpStatePl0010::vf04  size=31  [class]
undefined4 *ZangekiDatsuJumpStatePl0010::vf04(byte param_2)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((param_2 & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return (undefined4 *)this;
}

// 00BB2E30  ZangekiDatsuJumpStatePl0010::vf20  size=282  [class]
undefined4 ZangekiDatsuJumpStatePl0010::vf20(undefined4 *param_1)
{
    using namespace ZangekiDatsuJumpStatePl0010_p1;

    if (StateMachineNode::vf20(param_1) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(param_1);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    motionNo() = -1;
    DAT_01dc08bc = 0;
    DAT_01dc08d4 = 0;
    fld<int>(ctx, 0x2F4) = 0;  /* StateMachineContextPl0010+0x2F4: ? */
    DAT_01bea060 = DAT_01bea060 & 0xFDFFFBFF;
    thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
    thiscall<void>(FUN_00db3e80, DAT_01bea750, 0.0f, 0, DAT_01bea1d0);
    if (FUN_00a81330((uint *)&targetHandle()) != 0 &&
        FUN_00a81330(&fld<uint>(ctx, 0x338)) != 0) {  /* StateMachineContextPl0010+0x338: target handle */
        BehaviorDatsu *datsu = target();
        if (datsu != 0 && fld<int>(datsu, 0x988) != 0) {  /* BehaviorDatsu+0x988: ? */
            thiscall<void>(FUN_0093bdd0, DAT_01b36a24, fld<undefined4>(player, 0x4F0),  /* Pl0000+0x4F0: ? */
                           fld<undefined4>(datsu, 0x87C), fld<undefined4>(datsu, 0x884));
            thiscall<void>(FUN_00ace4a0, target(), 0x6F, player);
        }
    }
    FUN_00da0d70((int)DAT_01bea1d0);
    return 1;
}

// 00BCD390  ZangekiDatsuJumpStatePl0010::vf08  size=1243  [class]
bool ZangekiDatsuJumpStatePl0010::vf08(undefined4 param_1)
{
    using namespace ZangekiDatsuJumpStatePl0010_p1;
    undefined4 *context = (undefined4 *)param_1;

    if (StateMachineNode::vf08(param_1) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

    motionNo() = 0;
    datsuEntered() = 0;
    followUp() = 0;
    thiscall<void>(FUN_00e25500, (char *)player + 0x3BF0, 0.0f);  /* Pl0000+0x3BF0: ? */
    fld<int>(ctx, 0x2F4) = 1;  /* StateMachineContextPl0010+0x2F4: ? */
    timer5C() = 30.0f;
    DAT_01dc08c0 = 1;
    FUN_00e5e050((undefined4)"core_se_btl_char_datsu_out", 0);  // sound
    DAT_01bea060 = DAT_01bea060 | 0x2000400;
    if (!(0.0f < fld<float>(player, 0x3454))) {  /* Pl0000+0x3454: ? (NaN takes this branch too) */
        fld<float>(player, 0x343C) = 0.0f;     /* Pl0000+0x343C: ? */
        fld<float>(player, 0x3440) = 1.0f;     /* Pl0000+0x3440: ? */
    }
    fld<float>(player, 0x341C) = 1.0f;  /* Pl0000+0x341C: ? */
    thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
    FUN_00bbc2a0(context);

    // resolve the datsu target from the context's handle
    uint *contextTarget = &fld<uint>(ctx, 0x338);  /* StateMachineContextPl0010+0x338: target handle */
    target() = 0;
    int object = FUN_00a81330(contextTarget);
    if (object != 0) {
        int candidate = FUN_00a7c8a0(object);
        BehaviorDatsu *datsu = 0;
        if (candidate != 0) {
            datsu = isKindOf((void *)candidate, 0x4, DAT_01be9ca8) != 0 ? (BehaviorDatsu *)candidate : 0;
        }
        target() = datsu;
    }
    FUN_00a7c960(&targetHandle(), (undefined4 *)contextTarget);

    cameraNo() = 0;
    if (target() != 0) {
        int kind = fld<int>(target(), 0x974);  /* BehaviorDatsu+0x974: datsu kind */
        if (kind == 0x20030 || kind == 0x20033 || kind == 0x20035 || kind == 0x20080 || kind == 0x20081 ||
            kind == 0x20100) {
            cameraNo() = 1;
        }
    }
    phase() = 0;
    step() = 0;
    fromParts() = (uint)(*(int *)((char *)this + 0x2C) == 0x34);  /* StateMachineNode+0x2C: previous state */
    if (vcall<undefined4>(player, 0x320, 0.016666668f) == 0 || fromParts() != 0) {  // Pl0000::vf320
        phase() = 2;
    }

    float *position = &fld<float>(player, 0x40);  /* cObj+0x40: position */
    vec70()[0] = 0.0f;
    vec70()[1] = 0.0f;
    vec70()[2] = 0.0f;
    vec70()[3] = 1.0f;
    vec80()[3] = 1.0f;
    vec80()[0] = 0.0f;
    vec80()[1] = 0.0f;
    vec80()[2] = 0.0f;
    vec90()[0] = 0.0f;
    vec90()[1] = 0.0f;
    vec90()[2] = 0.0f;
    vec90()[3] = 1.0f;
    vecA0()[0] = 0.0f;
    vecA0()[1] = 0.0f;
    jumpPos()[0] = position[0];
    jumpPos()[1] = position[1];
    jumpPos()[2] = position[2];
    jumpPos()[3] = position[3];
    startPos()[0] = position[0];
    startPos()[1] = position[1];
    startPos()[2] = position[2];
    startPos()[3] = position[3];
    FUN_008e4580(controllerOf(player), (undefined4 *)position, 1);
    FUN_008e3c10(controllerOf(player));
    FUN_008e5c50(controllerOf(player), 6);
    fld<int>(player, 0x10F4) = 0;  /* Pl0000+0x10F4: ? */
    thiscall<void>(FUN_00db3e80, DAT_01bea750, 80.0f, 0, DAT_01bea1d0);

    StateMachineContextPl0010 *ctx2 = asContextPl0010(context);
    if (fld<int>(ctx2, 0x4C4) != 4) {  /* StateMachineContextPl0010+0x4C4: bgm state */
        FUN_00b92d70(context);
        fld<int>(ctx2, 0x4C4) = 4;
        FUN_00e5e1b0((undefined4)"bgm_Datsu_Enter");
    }
    if (target() != 0) {
        undefined4 handle = (undefined4)ctx2;  // the handle reuses ctx2's stack slot
        FUN_00a7c940(&handle, &fld<undefined4>(target(), 0x968));  /* BehaviorDatsu+0x968: handle */
        int resolved = FUN_00a81330((uint *)&handle);
        if (resolved != 0) {
            int owner = FUN_00a7c8a0(resolved);
            if (owner != 0) {
                undefined4 value = fld<undefined4>((void *)owner, 0x83C);  /* +0x83C: ? */
                FUN_00941450((int)DAT_01b36a60, value, FUN_009f8b40((int)player));
            }
        }
    }
    FUN_00ac6f30((int)target());
    FUN_00a83990((int)player + 0x2EE0);  /* Pl0000+0x2EE0: ? */
    FUN_00a83990((int)player + 0x2FC0);  /* Pl0000+0x2FC0: ? */
    FUN_00a83990((int)player + 0x30A0);  /* Pl0000+0x30A0: ? */
    FUN_00bbc960(context);
    // the handle object here is the argument's own stack slot
    FUN_00a7c940((undefined4 *)&param_1, &fld<undefined4>(target(), 0x968));
    DAT_018b56b4 = 1;
    fld<float>(player, 0x3E70) = position[0];  /* Pl0000+0x3E70: float[4] */
    fld<float>(player, 0x3E74) = position[1];
    fld<float>(player, 0x3E78) = position[2];
    fld<float>(player, 0x3E7C) = position[3];
    if (fromParts() == 0) {
        fld<float>(player, 0x3E60) = 0.0f;  /* Pl0000+0x3E60: float[4] */
        fld<float>(player, 0x3E64) = 0.0f;
        fld<float>(player, 0x3E68) = 0.0f;
        fld<float>(player, 0x3E6C) = 1.0f;
    }
    fld<float>(ctx, 0x540) = 0.0f;  /* StateMachineContextPl0010+0x540: float[4] */
    fld<float>(ctx, 0x544) = 0.0f;
    fld<float>(ctx, 0x548) = 0.0f;
    fld<float>(ctx, 0x54C) = 1.0f;
    fld<int>(ctx, 0xF4) = 0;        /* StateMachineContextPl0010+0xF4: ? */
    fld<int>(ctx, 0xF8) = 0;        /* StateMachineContextPl0010+0xF8: ? */
    fld<float>(ctx, 0x104) = 0.0f;  /* StateMachineContextPl0010+0x104: ? */
    fld<float>(ctx, 0x108) = 0.0f;
    fld<float>(ctx, 0x10C) = 3.0f;
    fld<int>(player, 0x3DF4) = 0;   /* Pl0000+0x3DF4: ? */
    fld<int>(player, 0x3DF8) = 0;   /* Pl0000+0x3DF8: ? */
    fld<short>(player, 0x10A8) = -1;  /* Pl0000+0x10A8: ? */
    int kind = fld<int>(target(), 0x974);
    if (kind != 0x20080 && kind != 0x20081) {
        fld<float>(ctx, 0x360) = 0.0f;  /* StateMachineContextPl0010+0x360: pending position float[4] */
        fld<float>(ctx, 0x364) = 0.0f;
        fld<float>(ctx, 0x368) = 0.0f;
        fld<float>(ctx, 0x36C) = 1.0f;
        return true;
    }
    return true;
}

// 00BEF4C0  ZangekiDatsuJumpStatePl0010::qteSafeCheck  size=4184  [class]
// Per-frame update. phase 0: init; 1: motion 0x521 (jump in); 2: motion 0x522 (approach, safe
// position ray casts "zangekiDatsuStartSafeCheck"); 3: motion 0x523 (datsu input, landing checks);
// 4: leave (request state 0xB).
void ZangekiDatsuJumpStatePl0010::qteSafeCheck(undefined4 *param_2)
{
    using namespace ZangekiDatsuJumpStatePl0010_p1;
    undefined4 *context = param_2;

    // One block of the stack frame (esp+0x20 .. esp+0xBC) holding the ray cast vectors. The machine
    // code reuses its slots, so some reads see values left by earlier uses (kept as in the binary).
    float frame[40];
    float *vecA = &frame[0];   // esp+0x20
    float *vecB = &frame[4];   // esp+0x30
    float *vecC = &frame[8];   // esp+0x40
    float *vecD = &frame[12];  // esp+0x50
    float *vecE = &frame[16];  // esp+0x60
    float *hit = &frame[20];   // esp+0x70 ray cast result; hit[6], hit[7] double as handles
    unsigned char rayWork[0x40];  // esp+0xC0 ray cast request (FUN_00445d40)
    float partsPos[4];            // esp+0x100 (FUN_0085c460 output)
    float blend;
    float speed;
    float *vec;
    int anim;
    int resolved;
    int owner;
    int filterId;
    uint filter;
    int motion;
    int camera;
    float *pending;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */
    uint *contextTarget = &fld<uint>(ctx, 0x338);        /* StateMachineContextPl0010+0x338: target handle */

    if (FUN_00a81330((uint *)&targetHandle()) == 0 && datsuEntered() == 0) {
        FUN_00d82510((int)this, 0xB, 100);
        StateMachineNode::qteSafeCheck(context);
        return;
    }

    switch (phase()) {
    case 0:
        phaseDone() = 0;
        phase() = 1;
        step() = 0;
        goto tail;
    case 1:
        break;
    case 2:
        goto phase2;
    case 3:
        goto phase3;
    case 4:
        goto phase4;
    default:
        goto tail;
    }

    // ---- phase 1: jump-in motion 0x521 ----
    switch (step()) {
    case 0:
        blend = 0.0f;
        if (fld<int>(ctx, 0x370) < 1) {  /* StateMachineContextPl0010+0x370: datsu chain count */
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
            speed = 0.0f;
        }
        else {
            blend = 0.16666667f;
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 10.0f);
            speed = 10.0f;
        }
        thiscall<void>(FUN_00db3e80, DAT_01bea750, speed, 0, DAT_01bea1d0);
        thiscall<void>(FUN_00aa4080, player, 0x521, motionNo(), blend, 1.0f, 0x8000000, -1.0f, 1.0f);
        step() = step() + 1;
        // fall through
    case 1:
        anim = FUN_00a92f90((int)player);
        FUN_00e26e90(anim);
        FUN_00e22f10(anim + 0x338, 0);
        if (FUN_00a94ce0((int)player, motionNo())) {
            phaseDone() = 1;
            phase() = 2;
            step() = 0;
        }
        if (FUN_00a81330(contextTarget) == 0) {
            FUN_00d82510((int)this, 0xB, 100);
        }
        break;
    }
    if (phaseDone() == 0) {
        goto tail;
    }

phase2:
    // ---- phase 2: approach motion 0x522 ----
    switch (step()) {
    case 0:
        thiscall<void>(FUN_00aa4080, player, 0x522, 0, 0.0f, 1.0f, 0x8004000,
                       fromParts() != 0 ? 0.16666667f : -1.0f, 1.0f);
        thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
        thiscall<void>(FUN_00db3e80, DAT_01bea750, 0.0f, 0, DAT_01bea1d0);
        step() = step() + 1;
        phaseDone() = 0;
        // fall through
    case 1:
        // offset (-0.192, 2.913, 2.073) rotated into the player's frame
        vecB[0] = -0.192f;
        vecB[1] = 2.913f;
        vecB[2] = 2.073f;
        vecB[3] = hit[11];  // stale stack value
        D3DXVec3TransformNormal(vecB, vecB, &fld<float>(player, 0x10));  /* cObj+0x10: rotation matrix */
        vec = (float *)FUN_00ac70a0((int)target());
        vecC[0] = vec[0];
        vecC[1] = vec[1];
        vecC[2] = vec[2];
        vecC[3] = vec[3];
        vec = (float *)FUN_00ac70a0((int)target());
        vecA[0] = vec[0] - vecB[0];
        vecA[1] = vec[1] - vecB[1];
        vecA[2] = vec[2] - vecB[2];
        vecA[3] = vec[3] - vecB[3];
        FUN_00a7c940((undefined4 *)&hit[7], &fld<undefined4>(target(), 0x968));  /* BehaviorDatsu+0x968: handle */
        filterId = -1;
        resolved = FUN_00a81330((uint *)&hit[7]);
        if (resolved != 0) {
            owner = FUN_00a7c8a0(resolved);
            if (owner != 0) {
                filterId = FUN_009f8b40(owner);
            }
        }
        thiscall<void>(FUN_00445d40, rayWork, vecC, vecA, filterId << 0x10 | 5, 0, 0x60, 0,
                       "zangekiDatsuStartSafeCheck", 0);
        if (thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, vecD, 0, 0, rayWork) != 0) {
            vecA[0] = hit[0];
            vecA[2] = hit[2];
            vecA[3] = hit[11];
        }
        vcall<void>(player, 0x7C, vecA, vcall<undefined4>(player, 0x84));  // Pl0000::vf7C(pos, vf84())
        if (FUN_00a92f90((int)player) != 0) {
            thiscall<void>(FUN_00404b90, (void *)FUN_00a92f90((int)player), 0);
            motion = motionNo();
            camera = cameraNo();
            setCameraNo(player, motion, camera);
        }
        step() = step() + 1;
        break;
    case 2:
        if (FUN_00a92f90((int)player) != 0) {
            thiscall<void>(FUN_00404b90, (void *)FUN_00a92f90((int)player), 0);
            motion = motionNo();
            camera = cameraNo();
            setCameraNo(player, motion, camera);
        }
        if (FUN_00a94e10((int)player, motionNo(), 0.0f, 52.0f) != 0) {
            // target position plus the offset between bone -1 and bone 0xF00
            vec = (float *)FUN_00a12210((int)player, -1);
            vecA[0] = vec[0x10];
            vecA[1] = vec[0x11];
            vecA[2] = vec[0x12];
            vecA[3] = vec[0x13];
            vec = (float *)FUN_00a12210((int)player, 0xF00);
            vecC[0] = vecA[0] - vec[0x10];
            vecC[1] = vecA[1] - vec[0x11];
            vecC[2] = vecA[2] - vec[0x12];
            vecC[3] = vecA[3] - vec[0x13];
            vec = (float *)FUN_00ac70a0((int)target());
            vecA[0] = vec[0];
            vecA[1] = vec[1];
            vecA[2] = vec[2];
            vecA[3] = vec[3];
            vecB[0] = vec[0] + vecC[0];
            vecB[1] = vec[1] + vecC[1];
            vecB[2] = vec[2] + vecC[2];
            vecB[3] = vec[3] + vecC[3];
            FUN_00a7c940((undefined4 *)&hit[6], &fld<undefined4>(target(), 0x968));
            filterId = -1;
            resolved = FUN_00a81330((uint *)&hit[6]);
            if (resolved != 0) {
                owner = FUN_00a7c8a0(resolved);
                if (owner != 0) {
                    filterId = FUN_009f8b40(owner);
                }
            }
            filter = FUN_00410130(5, filterId, 0, 0, 0);
            thiscall<void>(FUN_00445d40, rayWork, vecA, vecB, filter, 0, 0x60, 0, "zangekiDatsuStartSafeCheck", 0);
            if (thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, vecD, 0, 0, rayWork) != 0) {
                vecB[0] = hit[0];
                vecB[2] = hit[2];
                vecB[3] = hit[11];
            }
            vcall<void>(player, 0x7C, vecB, vcall<undefined4>(player, 0x84));  // Pl0000::vf7C(pos, vf84())
        }
        if (thiscall<undefined4>(FUN_00a952e0, player, motionNo(), 52.0f) != 0) {
            FUN_00ae4660((int *)target(), 0x6F, (int)player);
            FUN_008e6d00(controllerOf(player));
            FUN_008e0af0(controllerOf(player), 0);
            vcall<void>(player, 0x318);  // Pl0000::vf318
            FUN_008e5c50(controllerOf(player), 6);
            FUN_008e5610(controllerOf(player), 1);
            FUN_008e5610(controllerOf(player), 2);
        }
        if (FUN_00a94ce0((int)player, motionNo())) {
            phaseDone() = 1;
            phase() = 3;
            step() = 0;
        }
        if (FUN_00a81330(contextTarget) == 0) {
            FUN_00d82510((int)this, 0xB, 100);
        }
        break;
    }
    if (phaseDone() == 0) {
        goto tail;
    }

phase3:
    // ---- phase 3: datsu motion 0x523 ----
    switch (step()) {
    case 0:
        thiscall<void>(FUN_00aa4080, player, 0x523, motionNo(), 0.0f, 1.0f, 0x8000000, -1.0f, 1.0f);
        if (thiscall<void *>(FUN_004b5380, player) != 0) {
            undefined4 motionArg = fld<undefined4>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
            void *motionObject = thiscall<void *>(FUN_004b5380, player);
            thiscall<void>(FUN_00aa45f0, motionObject, 0x11017, 0x538, motionArg, 0, 0.0f, 1.0f, 0x8000000,
                           -1.0f, 1.0f);
            fld<int>(player, 0xB9C) = 4;  /* Pl0000+0xB9C: ? */
        }
        thiscall<void>(FUN_00da8810, DAT_01bea1d0, 0.0f);
        thiscall<void>(FUN_00db3e80, DAT_01bea750, 0.0f, 0, DAT_01bea1d0);
        pending = &fld<float>(ctx, 0x360);  /* StateMachineContextPl0010+0x360: pending position float[4] */
        if (pending[0] == 0.0f && pending[1] == 0.0f && pending[2] == 0.0f) {
            if (fromParts() == 0) {
                // straight down from bone 0: "zangekiDatsuJumpSafeCheck"
                vec = (float *)FUN_00a12210((int)player, 0);
                vecE[0] = vec[0x10];
                vecE[1] = vec[0x11] + 1.0f;
                vecE[2] = vec[0x12];
                vecE[3] = vec[0x13] + hit[15];  // stale stack value
                vecD[0] = vec[0x10];
                vecD[1] = vec[0x11] - 10.0f;
                vecD[2] = vec[0x12];
                vecD[3] = vec[0x13] - hit[15];
                filter = FUN_00410130(6, -1, 0, 0, 0);
                thiscall<void>(FUN_00445d40, rayWork, vecE, vecD, filter, 0, 0x60, 0, "zangekiDatsuJumpSafeCheck", 0);
                if (thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, vecC, 0, 0, rayWork) != 0) {
                    hit[16] = fld<float>(player, 0x40);  /* cObj+0x40: position */
                    hit[17] = hit[1];
                    hit[18] = fld<float>(player, 0x48);
                    vcall<void>(player, 0x7C, &hit[16], vcall<undefined4>(player, 0x84));
                }
                else {
                    hit[8] = fld<float>(player, 0x40);
                    hit[9] = jumpPos()[1];
                    hit[10] = fld<float>(player, 0x48);
                    vcall<void>(player, 0x7C, &hit[8], vcall<undefined4>(player, 0x84));
                }
            }
            else {
                // coming from the parts state: between the two parts points ("Pl0000::qteSafeCheck")
                vec = thiscall<float *>(FUN_0085c460, player, partsPos);
                vecA[0] = vec[0];
                vecA[1] = vec[1] + 1.5f;
                vecA[2] = vec[2];
                vecA[3] = vec[3] + partsPos[3];
                vec = thiscall<float *>(FUN_0085c430, player, &hit[12]);
                vecB[0] = vec[0];
                vecB[1] = vec[1] + 1.5f;
                vecB[2] = vec[2];
                vecB[3] = vec[3] + hit[15];
                filter = FUN_00410130(6, -1, 0, 0, 0);
                thiscall<void>(FUN_00445d40, rayWork, vecB, vecA, filter, 0, 0x60, 0, "Pl0000::qteSafeCheck", 0);
                if (thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, vecE, 0, 0, rayWork) != 0) {
                    jumpPos()[0] = vecE[0] * 0.5f + hit[0];
                    jumpPos()[1] = vecE[1] * 0.5f + jumpPos()[1];
                    jumpPos()[2] = vecE[2] * 0.5f + hit[2];
                    jumpPos()[3] = vecE[3] * 0.5f + hit[3];
                    fld<float>(player, 0x3E70) = 0.0f;  /* Pl0000+0x3E70: float[4] */
                    fld<float>(player, 0x3E74) = 0.0f;
                    fld<float>(player, 0x3E78) = 0.0f;
                    fld<float>(player, 0x3E7C) = 1.0f;
                }
                if (((float *)FUN_00ac70a0((int)target()))[1] > jumpPos()[1]) {
                    jumpPos()[1] = ((float *)FUN_00ac70a0((int)target()))[1];
                }
                vecC[0] = jumpPos()[0];
                vecC[1] = jumpPos()[1] + 0.5f;
                vecC[2] = jumpPos()[2];
                vecC[3] = jumpPos()[3];
                vecD[0] = jumpPos()[0];
                vecD[1] = jumpPos()[1] - 10.0f;
                vecD[2] = jumpPos()[2];
                vecD[3] = jumpPos()[3];
                if (thiscall<int>(kRayCastSingleHit4, DAT_01b35df8, vecC, 0, 0, 0, vecC, vecD, 0x1E,
                                  "jumpDatsuFloorCheck") != 0) {
                    vcall<void>(player, 0x7C, vecC, vcall<undefined4>(player, 0x84));
                }
                else {
                    vcall<void>(player, 0x7C, jumpPos(), vcall<undefined4>(player, 0x84));
                }
            }
            thiscall<void>(kQteSafeCheckForward, player);  // Pl0000::qteZangekiSafeCheckForward
            FUN_00b89850((int *)player);
        }
        else {
            vcall<void>(player, 0x7C, pending, vcall<undefined4>(player, 0x84));
            pending[0] = 0.0f;
            pending[1] = 0.0f;
            pending[2] = 0.0f;
            pending[3] = 1.0f;
        }
        phaseDone() = 0;
        if (controllerOf(player) != 0) {
            FUN_008e0af0(controllerOf(player), 1);
        }
        vcall<void>(player, 0x314);  // Pl0000::vf314
        step() = step() + 1;
        // fall through
    case 1:
        anim = FUN_00a92f90((int)player);
        FUN_00e26e90(anim);
        FUN_00e22f10(anim + 0x338, 0);
        motion = motionNo();
        camera = cameraNo();
        setCameraNo(player, motion, camera);

        // water check straight down from the player: "zangekiDatsuJumpOnWaterCheck"
        vecE[0] = fld<float>(player, 0x40);
        vecE[1] = fld<float>(player, 0x44) + 5.0f;
        vecE[2] = fld<float>(player, 0x48);
        vecE[3] = fld<float>(player, 0x4C) + hit[15];  // stale stack value
        vecD[0] = fld<float>(player, 0x40);
        vecD[1] = (fld<float>(player, 0x44) + 5.0f) - 10.0f;
        vecD[2] = fld<float>(player, 0x48);
        vecD[3] = (fld<float>(player, 0x4C) + hit[15]) - hit[15];
        thiscall<void>(FUN_00445d40, rayWork, vecE, vecD, 0xFFFF000A, 0, 0x60, 0, "zangekiDatsuJumpOnWaterCheck", 0);
        if (thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hit, vecC, 0, 0, rayWork) != 0 &&
            fld<float>(player, 0x44) + 0.2f < hit[1]) {
            DAT_01bea860 = 1;
        }

        if (datsuEntered() == 0) {
            if (FUN_00a81330(contextTarget) == 0) {
                FUN_00d82510((int)this, 0xB, 100);
            }
            if (datsuEntered() == 0) {
                if (FUN_00a8c760((int)player, 0x16) && target() != 0) {
                    FUN_00ae24f0((int)target());
                }
                if (datsuEntered() == 0 && FUN_00a8c760((int)player, 0xB)) {  // datsu input
                    BehaviorDatsu *datsu = target();
                    if (datsu != 0 && fld<int>(datsu, 0x988) != 0) {  /* BehaviorDatsu+0x988: ? */
                        thiscall<void>(FUN_0093bdd0, DAT_01b36a24, fld<undefined4>(player, 0x4F0),
                                       fld<undefined4>(datsu, 0x87C), fld<undefined4>(datsu, 0x884));
                        thiscall<void>(FUN_00ace4a0, target(), 0x6F, player);
                        FUN_00a7c950((undefined4 *)contextTarget);
                    }
                    FUN_00b92e00(context);
                    FUN_00b7aa80((int)player);
                    FUN_008e5c50(controllerOf(player), 6);
                    FUN_008e6d00(controllerOf(player));
                    FUN_008e5720(controllerOf(player), 1);
                    FUN_008e5720(controllerOf(player), 2);
                    fld<int>(player, 0x10F4) = 1;  /* Pl0000+0x10F4: ? */
                    datsuEntered() = 1;
                }
            }
        }
        if (FUN_00a94ce0((int)player, motionNo())) {
            phaseDone() = 1;
            phase() = 4;
            step() = 0;
        }
        if (FUN_00a8c760((int)player, 0x20)) {  // follow-up input
            if (followUp() != 0) {
                goto followUpActive;
            }
            undefined4 followArg = fld<undefined4>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
            undefined4 handleValid = FUN_00a81330((uint *)&targetHandle());
            float *reference = vcall<float *>(player, 0x84);
            int result = cdeclcall<int>(kFun00bd5d10, context, followArg, reference[1], 6.2831855f, 5.0f,
                                        handleValid, 0);
            if (0 < fld<int>((void *)result, 0xC)) {
                followUp() = 1;
                fld<float>(player, 0x40A4) = fld<float>(player, 0x40A8);  /* Pl0000+0x40A4 / +0x40A8: ? */
                fld<float>(player, 0x341C) = 1.0f;
                thiscall<void>(FUN_00b85350, player, 180.0f, 0.01f, 0.01f, 0, 0, 0.1f);
                FUN_00bbc2a0(context);
            }
        }
        if (followUp() == 0) {
            break;
        }
    followUpActive:
        if (0.0f < fld<float>(player, 0x40A4)) {
            thiscall<void>(FUN_00b7ab30, player, 5.0f);
        }
        else {
            fld<float>(player, 0x40A4) = -1.0f;
            fld<float>(player, 0x341C) = 1.0f;
            thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
            FUN_00bbc2a0(context);
        }
        if (fld<float>(player, 0x3424) <= fld<float>(player, 0x40A0)) {  /* Pl0000+0x3424 / +0x40A0: ? */
            float counter = fld<float>(player, 0x40A4) - 1.0f;
            fld<float>(player, 0x40A4) = counter;
            if (counter < fld<float>(player, 0x40A8) - fld<float>(player, 0x40AC) &&  /* Pl0000+0x40AC: ? */
                fld<float>(player, 0x40A8) - fld<float>(player, 0x40B0) < counter) {  /* Pl0000+0x40B0: ? */
                undefined4 handleValid = FUN_00a81330((uint *)&targetHandle());
                if (cdeclcall<int>(FUN_00be6620, context, this, 100, 0, handleValid) != 0) {
                    DAT_018b56b4 = 1;
                    fld<float>(player, 0x40A4) = -1.0f;
                    fld<float>(player, 0x341C) = 1.0f;
                    thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
                    FUN_00bbc2a0(context);
                    fld<int>(ctx, 0x370) = fld<int>(ctx, 0x370) + 1;  /* StateMachineContextPl0010+0x370: datsu chain count */
                }
            }
        }
        break;
    }
    if (phaseDone() == 0) {
        goto tail;
    }

phase4:
    // ---- phase 4: leave ----
    if (fromParts() != 0) {
        fld<int>(player, 0x3DF4) = 0;  /* Pl0000+0x3DF4: ? */
        fld<int>(player, 0x3DF8) = 0;  /* Pl0000+0x3DF8: ? */
        thiscall<void>(FUN_00ba6810, player, 1, 0);
        fld<int>(ctx, 0x32C) = 1;      /* StateMachineContextPl0010+0x32C: ? */
        FUN_00b90990((int)player);
    }
    fld<int>(ctx, 0x3EC) = 0;          /* StateMachineContextPl0010+0x3EC: ? */
    FUN_00d82510((int)this, 0xB, 100);
    fld<int>(ctx, 0x370) = 0;

tail:
    if (FUN_00a81330((uint *)&targetHandle()) != 0) {
        FUN_00bbc310(context);
    }
    vcall<void>(player, 0x220, 10.0f);  // Pl0000::vf220
    StateMachineNode::qteSafeCheck(context);
}
