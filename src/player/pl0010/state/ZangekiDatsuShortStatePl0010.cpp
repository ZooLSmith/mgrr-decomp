// src/player/pl0010/state/ZangekiDatsuShortStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiDatsuShortStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// CRT (the compiler emitted fpatan inline)
extern "C" double __cdecl atan2(double y, double x);
// defined in src/lib/StaticArray.cpp, not yet in include/auto/functions.h
int FUN_00bd5d10(undefined4 *param_1, undefined4 param_2, float param_3, float param_4, float param_5,
                 int param_6, int param_7);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ea4[];  // ZangekiDatsuShortStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01be9ca8[];  // BehaviorDatsu
// global objects passed in ECX
extern unsigned char DAT_01b35df8[];  // ray-cast world (ECX of RayCastSingleHitWork 0x0090B130)
extern unsigned char DAT_01dd0814[];  // random generator (ECX of FUN_00dde300)
extern char          DAT_01bea1d0[];  // camera (ECX of FUN_00da8810, argument of FUN_00db3e80)
extern unsigned char DAT_01bea750[];  // ECX of FUN_00db3e80
extern unsigned char DAT_01b36a60[];  // ECX of FUN_00941450 (DebrisHandleList)
extern unsigned char DAT_01b36a24[];  // ECX of FUN_0093bdd0
// plain globals
extern unsigned int DAT_01bea060;  // global flags (bit 0x400 while this state is active)
extern int          DAT_01dc08bc;
extern int          DAT_01dc08c0;
extern int          DAT_01dc08d4;
extern int          DAT_018b56b4;

namespace ZangekiDatsuShortStatePl0010_p1 {

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

// RayCastSingleHitWork::ctor_0090B130 (FILEMAP: RayCastSingleHitWork::RayCastSingleHitWork_2):
// ECX = ray-cast world, (hit out, info out, 0, 0, query) -> non-zero on hit, ret 0x14
static void *const kRayCastSingleHit = (void *)0x0090B130;
// Pl0000::qteZangekiSafeCheckForward (declared static, but called with ECX = player)
static void *const kPl0000QteZangekiSafeCheckForward = (void *)0x00B89A20;

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline StateMachineContextPl0010 *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (StateMachineContextPl0010 *)obj : 0;
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

// obj (non-null) when it is a BehaviorDatsu (type record from slot 4), else 0
inline BehaviorDatsu *asBehaviorDatsu(const void *obj)
{
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9ca8);
    return isKind != 0 ? (BehaviorDatsu *)obj : 0;
}

// Query block of the ray cast (stack layout of SafeCheck).
struct RayQuery {
    float       start[4];
    float       end[4];
    unsigned int filter;    // 0xFFFF0006
    int         field14;    // 0
    int         field18;    // 0x60
    int         field1C;    // 0
    const char *name;       // "zangekiDatsuJumpSafeCheck"
    int         field24;    // 0
};

}  // namespace ZangekiDatsuShortStatePl0010_p1

// 00B82E80  ZangekiDatsuShortStatePl0010::thunk_vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiDatsuShortStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B82E90  ZangekiDatsuShortStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiDatsuShortStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B82EA0  ZangekiDatsuShortStatePl0010::vf24  size=19  [class]
bool ZangekiDatsuShortStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B82EC0  ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010  size=41  [class]
ZangekiDatsuShortStatePl0010::ZangekiDatsuShortStatePl0010(undefined4 owner) : StateMachineNode(owner)
{
    // vftable = ZangekiDatsuShortStatePl0010::vftable (0x016A1D3C)
    FUN_00a7c930((undefined4 *)&targetHandle());
    FUN_00a7c930((undefined4 *)&handle50());
}

// 00B82EF0  ZangekiDatsuShortStatePl0010::vf00  size=6  [class]
undefined *ZangekiDatsuShortStatePl0010::vf00()
{
    return DAT_01be9ea4;
}

// 00B915F0  ZangekiDatsuShortStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiDatsuShortStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB2F50  ZangekiDatsuShortStatePl0010::SafeCheck  size=1223  [class]
// First update: finds the landing point below the player, picks and starts the datsu motion
// (blend of three motions, or motion 0x525 with an effect) and aims the debris at the target.
void ZangekiDatsuShortStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiDatsuShortStatePl0010_p1;

    if (fld<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        StateMachineContextPl0010 *ctx = asContextPl0010(context);
        Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContext+0xC: owner */

        frameStart() = 0.0f;
        frameEnd() = 0.0f;
        field44() = 0.0f;
        float targetY = *(float *)(FUN_00ac70a0((int)target()) + 4);

        landingPos()[0] = fld<float>(player, 0x40);  /* cObj+0x40: position float[4] */
        landingPos()[1] = fld<float>(player, 0x44);
        landingPos()[2] = fld<float>(player, 0x48);
        landingPos()[3] = fld<float>(player, 0x4C);

        // Ray cast 10 units straight down from the player.
        float hitPos[4];
        unsigned char hitInfo[16];
        float unsetW;  // never initialised in the original (stack slot +0x3C)
        RayQuery ray;
        ray.field14 = 0;
        ray.field1C = 0;
        ray.field24 = 0;
        ray.filter = 0xFFFF0006;
        ray.field18 = 0x60;
        ray.name = "zangekiDatsuJumpSafeCheck";
        ray.start[0] = fld<float>(player, 0x40);
        ray.start[1] = fld<float>(player, 0x44);
        ray.start[2] = fld<float>(player, 0x48);
        ray.start[3] = fld<float>(player, 0x4C);
        ray.end[0] = ray.start[0];
        ray.end[1] = ray.start[1] - 10.0f;
        ray.end[2] = ray.start[2];
        ray.end[3] = ray.start[3] - unsetW;
        int hit = thiscall<int>(kRayCastSingleHit, DAT_01b35df8, hitPos, hitInfo, 0, 0, &ray);
        if (hit != 0 && fld<float>(player, 0x44) - landingPos()[1] < 2.0f) {
            landingPos()[0] = hitPos[0];
            landingPos()[1] = hitPos[1];
            landingPos()[2] = hitPos[2];
            landingPos()[3] = hitPos[3];
        }

        float rate = 0.16666667f;  // 1/6
        float drop = targetY - landingPos()[1];
        float blend;
        if (drop < 0.6f) {
            blend = 0.0f;
        }
        else if (1.6f < drop) {
            blend = 2.0f;
        }
        else {
            blend = drop * 1.25f;
        }
        float random = (float)FUN_00dde300((uint *)DAT_01dd0814, 0.0f, 1.0f);
        if (fld<int>(target(), 0x974) == 0x20070) {  /* BehaviorDatsu+0x974: ? */
            random = 1.0f;
        }
        float cameraValue;
        if (fld<int>(ctx, 0x370) < 1) {  /* StateMachineContextPl0010+0x370: datsu count */
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 20.0f);
            cameraValue = 20.0f;
        }
        else {
            rate = 0.33333334f;  // 1/3
            thiscall<void>(FUN_00da8810, DAT_01bea1d0, 40.0f);
            cameraValue = 40.0f;
        }
        thiscall<void>(FUN_00db3e80, DAT_01bea750, cameraValue, 1, DAT_01bea1d0);

        uint *handleB98 = &fld<uint>(player, 0xB98);  /* Pl0000+0xB98: handleB98 */
        if (1.6f < blend && 0.4f < random) {
            thiscall<void>(FUN_00aa4080, player, 0x525, 0, rate, 1.0f, 0x8000000, -1.0f, 1.0f);
            if (FUN_00a81330(handleB98) != 0 && FUN_00a7c8a0((int)FUN_00a81330(handleB98)) != 0) {
                int objId = fld<int>(player, 0x4F0);  /* cObj+0x4F0: field4F0 */
                int owner = thiscall<int>(FUN_004b5380, player);
                thiscall<void>(FUN_00aa45f0, (void *)owner, 0x11017, 0x539, objId, 0, 0.0f, 1.0f, 0x8000000,
                               -1.0f, 1.0f);
                fld<int>(player, 0xB9C) = 4;  /* Pl0000+0xB9C: ? */
            }
        }
        else {
            FUN_00a9f4c0((int)player, (char *)"Datsu_Blend", rate, 0x8002000, motionSlot());
            FUN_00a9f600((int)player, -1, motionSlot(), 0, 2, 0, 0x507, rate, 0x8002000);
            FUN_00a9f600((int)player, -1, motionSlot(), 0, 1, 0, 0x508, rate, 0x8002000);
            FUN_00a9f600((int)player, -1, motionSlot(), 0, 0, 0, 0x509, rate, 0x8002000);
            thiscall<void>(FUN_00a947e0, player, motionSlot(), 0.0f, blend, 0.0f);
            if (FUN_00a81330(handleB98) != 0 && FUN_00a7c8a0((int)FUN_00a81330(handleB98)) != 0) {
                int objId = fld<int>(player, 0x4F0);
                int owner = 0;
                if (FUN_00a81330(handleB98) != 0) {
                    owner = FUN_00a7c8a0((int)FUN_00a81330(handleB98));
                }
                thiscall<void>(FUN_00aa45f0, (void *)owner, 0x11017, 0x537, objId, 0, 0.0f, 1.0f, 0x8000000,
                               -1.0f, 1.0f);
                fld<int>(player, 0xB9C) = 4;
            }
        }

        frameStart() = 0.0f;
        frameEnd() = 40.0f;
        field44() = 70.0f;
        if (target() != 0) {
            undefined4 handleCopy;
            FUN_00a7c940(&handleCopy, &fld<undefined4>(target(), 0x968));  /* BehaviorDatsu+0x968: handle */
            uint entry = FUN_00a81330((uint *)&handleCopy);
            if (entry != 0) {
                int obj = FUN_00a7c8a0((int)entry);
                if (obj != 0) {
                    int debris = fld<int>((void *)obj, 0x83C);
                    int playerKey = FUN_009f8b40((int)player);
                    FUN_00941450((int)DAT_01b36a60, debris, playerKey);
                }
            }
        }
    }
    StateMachineNode::SafeCheck(context);
}

// 00BB3420  ZangekiDatsuShortStatePl0010::vf20  size=414  [class]
// Leave: stops the motion, restores the controller and releases the target.
undefined4 ZangekiDatsuShortStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiDatsuShortStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));

    if (FUN_00a92f90((int)player) != 0) {
        int slot = motionSlot();
        int anim = FUN_00a92f90((int)player);
        FUN_00e26e90(anim);
        thiscall<void>(FUN_00e35de0, (char *)anim + 0xF4, (char *)anim + 0x98, slot, 10.0f);
    }
    motionSlot() = -1;
    DAT_01dc08bc = 0;
    DAT_01dc08d4 = 0;
    fld<int>(ctx, 0x2F4) = 0;  /* StateMachineContextPl0010+0x2F4: ? */
    DAT_01bea060 = DAT_01bea060 & 0xFFFFFBFF;
    FUN_008e5c50(fld<int>(player, 0x764), 6);  /* Pl0000+0x764: controller */
    FUN_008e6d00(fld<int>(player, 0x764));
    if (FUN_00a81330(&targetHandle()) != 0 &&
        FUN_00a81330(&fld<uint>(ctx, 0x338)) != 0) {  /* StateMachineContextPl0010+0x338: target handle */
        BehaviorDatsu *datsu = target();
        if (datsu != 0 && fld<int>(datsu, 0x988) != 0) {  /* BehaviorDatsu+0x988: ? */
            thiscall<void>(FUN_0093bdd0, DAT_01b36a24, fld<int>(player, 0x4F0),
                           fld<int>(datsu, 0x87C), fld<int>(datsu, 0x884));  /* BehaviorAppBase+0x87C / +0x884 */
            thiscall<void>(FUN_00ace4a0, target(), 0x6F, player);
        }
    }
    int controller = fld<int>(player, 0x764);
    if (fld<int>((void *)controller, 0x104) != 0) {
        fld<int>((void *)controller, 0x104) = 0;
    }
    fld<int>(ctx, 0x188) = 0;  /* StateMachineContextPl0010+0x188: ? */
    FUN_008e4580(fld<int>(player, 0x764), &fld<undefined4>(player, 0x40), 1);
    vcall<void>(player, 0x314);
    fld<float>(player, 0x890) = 0.0f;  /* BehaviorAppBase+0x890: move890 float[4] */
    fld<float>(player, 0x894) = 0.0f;
    fld<float>(player, 0x898) = 0.0f;
    fld<float>(player, 0x89C) = 1.0f;
    fld<int>(ctx, 0x3EC) = 0;  /* StateMachineContextPl0010+0x3EC: ? */
    return 1;
}

// 00BCD870  ZangekiDatsuShortStatePl0010::vf08  size=835  [class]
// Enter: takes the target from the context, starts the slow-motion, sound and camera settings.
bool ZangekiDatsuShortStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiDatsuShortStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    StateMachineContextPl0010 *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));

    motionSlot() = 0;
    qteFinished() = 0;
    thiscall<void>(FUN_00e25500, (char *)player + 0x3BF0, 0.0f);  /* Pl0000+0x3BF0: embedded object */
    fld<int>(ctx, 0x2F4) = 1;
    DAT_01dc08c0 = 1;
    cdeclcall<void>(FUN_00e5e050, "core_se_btl_char_datsu_out", 0);
    savedSlowTimer() = fld<float>(player, 0x341C);  /* Pl0000+0x341C: slowTimer341C */
    grabStarted() = 0;
    grabEnded() = 0;
    if (!(0.0f < fld<float>(player, 0x3454))) {  /* Pl0000+0x3454: timer3454 */
        fld<float>(player, 0x343C) = 0.0f;  /* Pl0000+0x343C: timer343C */
        fld<float>(player, 0x3440) = 1.0f;  /* Pl0000+0x3440: field3440 */
    }
    fld<float>(player, 0x341C) = 1.0f;
    thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
    FUN_00bbc2a0((undefined4 *)contextArg);

    uint *ctxTargetHandle = &fld<uint>(ctx, 0x338);
    uint entry = FUN_00a81330(ctxTargetHandle);
    if (entry != 0) {
        FUN_00a7c960((undefined4 *)&targetHandle(), (undefined4 *)ctxTargetHandle);
        void *obj = (void *)FUN_00a7c8a0((int)entry);
        if (obj != 0) {
            target() = asBehaviorDatsu(obj);
            FUN_00ac6f30((int)target());
        }
    }
    thiscall<void>(FUN_00db3e80, DAT_01bea750, 80.0f, 0, DAT_01bea1d0);

    StateMachineContextPl0010 *ctx2 = asContextPl0010((void *)contextArg);
    if (fld<int>(ctx2, 0x4C4) != 4) {  /* StateMachineContextPl0010+0x4C4: bgm state */
        FUN_00b92d70((undefined4 *)contextArg);
        fld<int>(ctx2, 0x4C4) = 4;
        cdeclcall<undefined4>(FUN_00e5e1b0, "bgm_Datsu_Enter");
    }
    FUN_00bbc960((undefined4 *)contextArg);
    if (target() != 0) {
        undefined4 handleCopy;
        FUN_00a7c940(&handleCopy, &fld<undefined4>(target(), 0x968));
    }
    FUN_008e5c50(fld<int>(player, 0x764), 6);
    FUN_00a83990((int)player + 0x2EE0);  /* Pl0000+0x2EE0 / +0x2FC0 / +0x30A0: embedded objects */
    FUN_00a83990((int)player + 0x2FC0);
    FUN_00a83990((int)player + 0x30A0);
    entry = FUN_00a81330(&fld<uint>(ctx, 0x338));
    if (entry != 0) {
        FUN_00a7c960(&fld<undefined4>(player, 0x1108), (undefined4 *)FUN_00a7c7f0((int)entry));  /* Pl0000+0x1108: handle */
        fld<float>(player, 0x110C) = 0.3f;  /* Pl0000+0x110C..0x1134: ? */
        fld<int>(player, 0x1118) = 0;
        fld<float>(player, 0x1110) = 0.1f;
        fld<int>(player, 0x1134) = 1;
        fld<int>(player, 0x111C) = 1;
        fld<float>(player, 0x1114) = 0.3f;
    }
    fld<float>(player, 0x3E70) = fld<float>(player, 0x40);  /* Pl0000+0x3E70: float[4] position copy */
    fld<float>(player, 0x3E74) = fld<float>(player, 0x44);
    fld<float>(player, 0x3E78) = fld<float>(player, 0x48);
    fld<float>(player, 0x3E7C) = fld<float>(player, 0x4C);
    if (fld<int>(this, 0x2C) != 0x34) {  /* StateMachineNode+0x2C: ? (previous state id) */
        fld<float>(player, 0x3E60) = 0.0f;  /* Pl0000+0x3E60: float[4] */
        fld<float>(player, 0x3E64) = 0.0f;
        fld<float>(player, 0x3E68) = 0.0f;
        fld<float>(player, 0x3E6C) = 1.0f;
    }
    DAT_01bea060 = DAT_01bea060 | 0x400;
    DAT_018b56b4 = 1;
    fld<float>(ctx, 0x540) = 0.0f;  /* StateMachineContextPl0010+0x540: float[4] */
    fld<float>(ctx, 0x544) = 0.0f;
    fld<float>(ctx, 0x548) = 0.0f;
    fld<float>(ctx, 0x54C) = 1.0f;
    fld<int>(ctx, 0xF4) = 0;  /* StateMachineContextPl0010+0xF4..0x10C: ? */
    fld<int>(ctx, 0xF8) = 0;
    fld<float>(ctx, 0x104) = 0.0f;
    fld<float>(ctx, 0x108) = 0.0f;
    fld<float>(ctx, 0x10C) = 3.0f;
    fld<int>(player, 0x3DF4) = 0;  /* Pl0000+0x3DF4 / +0x3DF8: ? */
    fld<int>(player, 0x3DF8) = 0;
    fld<short>(player, 0x10A8) = -1;  /* Pl0000+0x10A8: short */
    return true;
}

// 00BF0530  ZangekiDatsuShortStatePl0010::qteSafeCheck  size=1749  [class]
// Update: while the steering window of the motion runs, blends the player position/yaw towards
// the target part; then handles the grab QTE (input 0xB), the grab start (input 0x20) and the
// grab count-down.
void ZangekiDatsuShortStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiDatsuShortStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContextPl0010(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));
    int anim = FUN_00a92f90((int)player);
    FUN_00e26e90(anim);
    FUN_00e22f10(anim + 0x338, 0);
    if (FUN_00a81330(&targetHandle()) == 0 && qteFinished() == 0) {
        FUN_00d82510((int)this, 0xB, 100);
        StateMachineNode::qteSafeCheck(context);
        return;
    }

    if (FUN_00a94e10((int)player, motionSlot(), frameStart(), frameEnd()) != 0) {
        float elapsed = (float)thiscall<int>(FUN_00a959f0, player, motionSlot());
        undefined4 handleCopy;
        FUN_00a7c940(&handleCopy, (undefined4 *)FUN_00a7c7f0(fld<int>(target(), 0x4F0)));  /* cObj+0x4F0: field4F0 */
        uint entry = FUN_00a81330((uint *)&handleCopy);
        if (entry != 0) {
            int obj = FUN_00a7c8a0((int)entry);
            if (obj != 0) {
                int partsNo = fld<int>((void *)obj, 0x980);
                int parts = FUN_00a12210(FUN_00a7c800((int)entry), partsNo);
                float goalX = fld<float>((void *)parts, 0x40);
                float goalZ = fld<float>((void *)parts, 0x48);
                float rootPos[4];
                float bonePos[4];
                float unsetW;  // never initialised in the original (stack slot +0x6C)
                FUN_004fc8e0((undefined4 *)rootPos, (int)player, 0xFFFFFFFF);
                FUN_004fc8e0((undefined4 *)bonePos, (int)player, 0xF00);

                // bonePos = rootPos + (goal - horizontal (bone - root) - rootPos) * t
                float dX = bonePos[0] - rootPos[0];
                float dZ = bonePos[2] - rootPos[2];
                float dW = unsetW - rootPos[3];
                float toX = (goalX - dX) - rootPos[0];
                float toY = (landingPos()[1] - 0.0f) - rootPos[1];
                float toZ = (goalZ - dZ) - rootPos[2];
                float toW = (bonePos[3] - dW) - rootPos[3];
                float t = elapsed / (frameEnd() - frameStart());
                bonePos[0] = rootPos[0] + toX * t;
                bonePos[1] = rootPos[1] + toY * t;
                bonePos[2] = rootPos[2] + toZ * t;
                bonePos[3] = rootPos[3] + toW * t;
                vcall<void>(player, 0x6C, bonePos);

                float *rotation = vcall<float *>(player, 0x84);
                float newRotation[4];
                newRotation[0] = rotation[0];
                newRotation[1] = rotation[1];
                newRotation[2] = rotation[2];
                newRotation[3] = rotation[3];
                float yaw = (float)atan2(goalX - rootPos[0], goalZ - rootPos[2]);
                newRotation[1] = (yaw - rotation[1]) * (elapsed / (frameEnd() - frameStart())) + rotation[1];
                vcall<void>(player, 0x88, newRotation);
            }
        }
    }

    if (thiscall<int>(FUN_00a952e0, player, motionSlot(), fld<float>(ctx, 0x33C)) != 0 &&  /* StateMachineContextPl0010+0x33C: float */
        target() != 0) {
        FUN_00ae4660((int *)target(), 0x6F, (int)player);
    }

    if (qteFinished() == 0) {
        if (FUN_00a81330(&fld<uint>(ctx, 0x338)) == 0) {
            FUN_00d82510((int)this, 0xB, 100);
        }
        if (qteFinished() == 0) {
            if (FUN_00a8c760((int)player, 0x16) && target() != 0) {
                FUN_00ae24f0((int)target());
            }
            if (qteFinished() == 0 && FUN_00a8c760((int)player, 0xB)) {
                BehaviorDatsu *datsu = target();
                if (datsu != 0 && fld<int>(datsu, 0x988) != 0) {
                    thiscall<void>(FUN_0093bdd0, DAT_01b36a24, fld<int>(player, 0x4F0),
                                   fld<int>(datsu, 0x87C), fld<int>(datsu, 0x884));
                    thiscall<void>(FUN_00ace4a0, target(), 0x6F, player);
                    FUN_00a7c950(&fld<undefined4>(ctx, 0x338));
                }
                FUN_00b7aa80((int)player);
                fld<float>(player, 0x341C) = 1.0f;
                thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 1.0f, 0, 0, 0.1f);
                FUN_00bbc2a0(context);
                FUN_00b92e00(context);
                FUN_00b90990((int)player);
                qteFinished() = 1;
                thiscall<void>(kPl0000QteZangekiSafeCheckForward, player);
                FUN_00b89850((int *)player);
            }
        }
    }

    if (FUN_00a94ce0((int)player, motionSlot())) {
        FUN_00d82510((int)this, 0xB, 100);
        fld<int>(ctx, 0x370) = 0;
    }
    vcall<void>(player, 0x220, 10.0f);

    if (FUN_00a8c760((int)player, 0x20) && grabStarted() == 0) {
        int objId = fld<int>(player, 0x4F0);
        int targetEntry = FUN_00a81330(&targetHandle());
        float *rotation = vcall<float *>(player, 0x84);
        int found = FUN_00bd5d10(context, objId, rotation[1], 6.2831855f, 5.0f, targetEntry, 0);
        if (0 < fld<int>((void *)found, 0xC)) {
            grabStarted() = 1;
            fld<float>(player, 0x40A4) = fld<float>(player, 0x40A8);  /* Pl0000+0x40A0..0x40B0: grab timing floats */
            fld<float>(player, 0x341C) = 1.0f;
            thiscall<void>(FUN_00b85350, player, 180.0f, 0.01f, 0.01f, 0, 0, 0.1f);
            FUN_00bbc2a0(context);
        }
    }

    if (grabStarted() != 0 && grabEnded() == 0) {
        if (0.0f < fld<float>(player, 0x40A4)) {
            if (0.0f < fld<float>(player, 0x341C)) {
                fld<float>(player, 0x341C) = 5.0f;
            }
        }
        else {
            fld<float>(player, 0x40A4) = -1.0f;
            fld<float>(player, 0x341C) = 1.0f;
            thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
            FUN_00bbc2a0(context);
            DAT_01dc08bc = 0;
            grabEnded() = 1;
        }
        if (fld<float>(player, 0x3424) <= fld<float>(player, 0x40A0)) {  /* Pl0000+0x3424: ? (skips on NaN: fcomp/test ah,1) */
            float countdown = fld<float>(player, 0x40A4) - 1.0f;
            fld<float>(player, 0x40A4) = countdown;
            if (countdown < fld<float>(player, 0x40A8) - fld<float>(player, 0x40AC) &&
                fld<float>(player, 0x40A8) - fld<float>(player, 0x40B0) < countdown) {
                if (cdeclcall<int>(FUN_00be6620, context, this, 100, 0, (int)FUN_00a81330(&targetHandle())) != 0) {
                    unsigned char message[0x150];
                    FUN_004039a0((int)message, 0x99, (int)player, 0);
                    FUN_00e020f0((int)message, fld<int>(player, 0x4F0));
                    FUN_00a8c8b0((int)player, 0x10010, (int)message);
                    DAT_018b56b4 = 1;
                    fld<float>(player, 0x40A4) = -1.0f;
                    fld<float>(player, 0x341C) = 1.0f;
                    thiscall<void>(FUN_00b85350, player, 180.0f, 1.0f, 0.01f, 0, 0, 0.1f);
                    FUN_00bbc2a0(context);
                    BehaviorDatsu *datsu = target();
                    if (datsu != 0) {
                        thiscall<void>(FUN_0093bdd0, DAT_01b36a24, fld<int>(player, 0x4F0),
                                       fld<int>(datsu, 0x87C), fld<int>(datsu, 0x884));
                        thiscall<void>(FUN_00ace4a0, target(), 0x6F, player);
                    }
                    fld<int>(ctx, 0x370) = fld<int>(ctx, 0x370) + 1;
                }
            }
        }
    }

    if (FUN_00a81330(&targetHandle()) != 0) {
        FUN_00bbc310(context);
    }
    StateMachineNode::qteSafeCheck(context);
}
