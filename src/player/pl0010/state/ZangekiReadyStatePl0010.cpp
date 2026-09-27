// src/player/pl0010/state/ZangekiReadyStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiReadyStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ee4[];  // ZangekiReadyStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // Et0006
// timer objects read by FUN_00e049b0 (ECX = object; returns the float at (*object)+0x18)
extern unsigned char DAT_01be9448[];
extern unsigned char DAT_01be944c[];

namespace ZangekiReadyStatePl0010_p1 {

// field at an absolute byte offset
template <class T> inline T &fld(const void *base, int offset)
{
    return *(T *)((char *)base + offset);
}

// virtual call through the vftable slot at byte offset `slot` (ECX = obj)
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

// obj when it is a Pl0000 (type record from vftable slot 4), else 0
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

// FUN_00d82510 (StateMachineNode): request state `stateId` when `priority` >= the pending
// request's priority (+0x28); the id goes to +0x24.
inline void requestState(StateMachineNode *node, int stateId, int priority)
{
    thiscall<void>(FUN_00d82510, node, stateId, priority);
}

// FUN_00a952e0(handle, frame): nonzero when the player's motion `handle` reached `frame`
inline int motionReached(Pl0000 *player, int handle, float frame)
{
    return thiscall<int>(FUN_00a952e0, player, handle, frame);
}

// FUN_00bbc0e0 (cdecl, 5 arguments): the call every slow-motion end uses
inline void endSlowMotion(undefined4 *contextArg)
{
    cdeclcall<void>(FUN_00bbc0e0, contextArg, 0.1f, 180.0f, 1.0f, 0.1f);
}

// The four release calls made once the motion passed its release frame.
inline void releaseCalls(undefined4 *contextArg, ZangekiReadyStatePl0010 *self)
{
    cdeclcall<void>(FUN_00bd6eb0, contextArg, self, 0x32, 0);
    cdeclcall<void>(FUN_00bbaed0, contextArg, self, 0x32, 0, 0);
    cdeclcall<void>(FUN_00bbaf90, contextArg, self, 0x32, 0, 0);
    cdeclcall<void>(FUN_00bd6dd0, contextArg, self, 0x19);
}

// Clears +0x8D0 of the object behind the context's effect-disk handle when it is an Et0006.
inline void clearEffectDisk(char *ctx)
{
    /* StateMachineContextPl0010+0x4BC: effectDiskDummyHandle */
    int entity = (int)FUN_00a81330((uint *)(ctx + 0x4BC));
    if (entity != 0) {
        int *object = (int *)FUN_00a7c8a0(entity);
        if (object != 0) {
            if (thiscall<int>(FUN_00dd6d80, vcall<void *>(object, 0x4), DAT_01b35260) != 0) {
                object[0x234] = 0;  /* Et0006+0x8D0: ? */
            }
        }
    }
}

}  // namespace ZangekiReadyStatePl0010_p1

// 00B83800  ZangekiReadyStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiReadyStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B83810  ZangekiReadyStatePl0010::vf24  size=19  [class]
bool ZangekiReadyStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B83850  ZangekiReadyStatePl0010::vf00  size=6  [class]
undefined *ZangekiReadyStatePl0010::vf00()
{
    return DAT_01be9ee4;
}

// 00B918E0  ZangekiReadyStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiReadyStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB8000  ZangekiReadyStatePl0010::SafeCheck  size=259  [class]
void ZangekiReadyStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiReadyStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: ? (set to 1 by the base SafeCheck) */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        int zangekiMode = fld<int>(player, 0x40C8);  /* Pl0000+0x40C8: zangeki mode */
        if ((zangekiMode == 4 || zangekiMode == 0x11) &&
            fld<int>(ctx, 0x330) != 0x25) {  /* StateMachineContextPl0010+0x330: ? */
            requestState(this, 0x3D, 100);
        }
        if (fld<int>(ctx, 0x330) == 3) {
            requestState(this, 0x3D, 100);
        }
        /* Pl0000+0x764: controller */
        if (!FUN_008e2740(fld<int>(player, 0x764))) {
            fld<int>(ctx, 0x188) = 1;    /* StateMachineContextPl0010+0x188: field188 */
            fld<int>(ctx, 0x3EC) = 0xB;  /* StateMachineContextPl0010+0x3EC: field3EC */
            fld<float>(player, 0x894) = 0.0f;  /* Pl0000+0x894: ? */
            if (fld<int>(player, 0x40C8) == 1) {
                FUN_008e6d00(fld<int>(player, 0x764));
                char *controller = fld<char *>(player, 0x764);
                if (fld<int>(controller, 0x104) != 0) {  /* controller+0x104: ? */
                    fld<int>(controller, 0x104) = 0;
                }
            }
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BB8110  ZangekiReadyStatePl0010::vf14  size=126  [class]
void ZangekiReadyStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace ZangekiReadyStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    // FUN_00a94ce0(handle): nonzero when the motion is over
    if (motionHandle() == -1 || thiscall<int>(FUN_00a94ce0, player, motionHandle()) != 0) {
        requestState(this, 0x3D, 0x19);
    }
    StateMachineNode::vf14(contextArg);
}

// 00BD2460  ZangekiReadyStatePl0010::vf20  size=263  [class]
// Leave: stops the motion and, when the slow-motion effect is still pending, ends it.
undefined4 ZangekiReadyStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace ZangekiReadyStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) != 0) {
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        if (FUN_00a92f90((int)player) != 0) {
            int handle = motionHandle();
            int animUnit = (int)FUN_00a92f90((int)player);
            FUN_00e26e90(animUnit);
            thiscall<void>(FUN_00e35de0, (void *)(animUnit + 0xF4), animUnit + 0x98, handle, 2.0f);
            motionHandle() = -1;
        }
        fld<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: field2F8 */
        fld<int>(ctx, 0x300) = 0;  /* StateMachineContextPl0010+0x300: ? */
        if (slowPending() != 0.0f && fld<int>(ctx, 0x528) != 0) {  /* StateMachineContextPl0010+0x528: field528 */
            endSlowMotion(contextArg);
        }
        return 1;
    }
    return 0;
}

// 00BE4C10  ZangekiReadyStatePl0010::vf08  size=230  [class]
// Enter: plays motion 0xED and initialises the fields.
bool ZangekiReadyStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiReadyStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    char *ctx = asContextPl0010(context);
    frameCount() = 0.0f;
    pressed() = 0;
    released() = 0;
    releaseFrame() = 12.0f;
    undefined4 handle = FUN_00bbc780(context);
    motionHandle() = handle;
    motionId() = 0xED;
    FUN_00bd6530(context, 0xED, handle);
    fld<int>(ctx, 0x2F8) = 1;  /* StateMachineContextPl0010+0x2F8: field2F8 */
    fld<int>(ctx, 0x300) = 1;  /* StateMachineContextPl0010+0x300: ? */
    flag50() = 0;
    vec60()[0] = 0.0f;
    vec60()[1] = 0.0f;
    vec60()[2] = 0.0f;
    vec60()[3] = 1.0f;
    value80() = 0.0f;
    idleTime() = 0.0f;
    clearEffectDisk(ctx);
    return true;
}

// 00BE4D00  ZangekiReadyStatePl0010::qteSafeCheck  size=1052  [class]
// Per frame: watches the motion frames to release the blade and to run the slow-motion effect.
void ZangekiReadyStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace ZangekiReadyStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    float frame = frameCount() + 1.0f;
    frameCount() = frame;
    /* Pl0000+0xE50 maskE50 & +0xCFC inputTrigger */
    if ((fld<unsigned int>(player, 0xE50) & fld<unsigned int>(player, 0xCFC)) != 0) {
        pressed() = 1;
    }
    if (frame > 1.0f) {  // (fcompp: an unordered frame also skips)
        int handle = motionHandle();
        if (fld<int>(ctx, 0x528) == 0) {  /* StateMachineContextPl0010+0x528: field528 */
            if (handle != -1) {
                if (released() == 0 && motionReached(player, handle, releaseFrame()) != 0) {
                    released() = 1;
                    fld<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: field2F8 */
                }
                // FUN_00a8c760(which): nonzero when the attack button `which` is active
                if (thiscall<int>(FUN_00a8c760, player, 1) != 0 || released() != 0) {
                    releaseCalls(contextArg, this);
                }
                if (thiscall<int>(FUN_00a8c760, player, 0) != 0 || released() != 0) {
                    cdeclcall<void>(FUN_00bd6dd0, contextArg, this, 0x19);
                }
            }
        }
        else {
            if (handle != -1) {
                if (released() == 0) {
                    if (motionReached(player, handle, 12.0f) != 0) {
                        released() = 1;
                        fld<int>(ctx, 0x2F8) = 0;
                        fld<int>(player, 0x40BC) = 1;  /* Pl0000+0x40BC: ? */
                    }
                }
                if (released() != 0) {
                    releaseCalls(contextArg, this);
                    if (released() != 0) {
                        cdeclcall<void>(FUN_00bd6dd0, contextArg, this, 0x19);
                    }
                }
            }
            /* Pl0000+0x407C slow start frame, +0x4080 slow end frame, +0x4078 slow length */
            if (fld<int>(ctx, 0x528) != 0 &&
                motionReached(player, motionHandle(), fld<float>(player, 0x407C)) != 0) {
                fld<float>(player, 0x341C) = 1.0f;  /* Pl0000+0x341C: slowTimer341C */
                float scaled = (float)(FUN_00e049b0((int *)DAT_01be944c) * fld<float>(player, 0x4078));
                thiscall<void>(FUN_00b85350, player,
                               fld<float>(player, 0x4080) - fld<float>(player, 0x407C),
                               fld<float>(player, 0x4078), scaled, 0, 0, 0.1f);
                slowPending() = 1.0f;
            }
            if (slowPending() != 0.0f &&
                motionReached(player, motionHandle(), fld<float>(player, 0x4080)) != 0) {
                fld<float>(player, 0x341C) = 1.0f;
                endSlowMotion(contextArg);
                slowPending() = 0.0f;
                timer8C() = 10.0f;
                value90() = 0.1f;
            }
            if (0.0f < timer8C()) {
                timer8C() = timer8C() - 1.0f;
            }
            if (fld<float>(player, 0x343C) < 0.0f && flag50() != 0) {  /* Pl0000+0x343C: timer343C */
                float blend = (1.0f - blend4C()) * 0.25f + blend4C();
                blend4C() = blend;
                if (0.99f < blend) {
                    flag50() = 0;
                    endSlowMotion(contextArg);
                }
            }
        }
    }
    cdeclcall<void>(FUN_00bbb430, contextArg, this, 100);
    /* Pl0000+0xE50 maskE50 & +0xCF8 inputHold */
    if ((fld<unsigned int>(player, 0xE50) & fld<unsigned int>(player, 0xCF8)) == 0) {
        double time = (double)FUN_00e049b0((int *)DAT_01be9448) + idleTime();
        idleTime() = (float)time;
        if (5.0 < time) {
            idleTime() = 5.0f;
            fld<int>(ctx, 0x300) = 0;  /* StateMachineContextPl0010+0x300: ? */
        }
    }
    else {
        idleTime() = 0.0f;
    }
    if (released() == 0) {
        clearEffectDisk(ctx);
    }
    int requested = *(int *)((char *)this + 0x24);  /* StateMachineNode+0x24: requested state */
    if (requested == 0x31 || requested == 0x45 || requested == 0x46) {
        FUN_00b8c400((int)player);
    }
    StateMachineNode::qteSafeCheck(contextArg);
}
