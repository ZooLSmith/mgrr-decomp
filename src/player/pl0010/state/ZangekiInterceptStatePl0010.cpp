// src/player/pl0010/state/ZangekiInterceptStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "ZangekiInterceptStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Imports
// ---------------------------------------------------------------------------------------------
// CRT (the compiler emitted fsqrt / fabs inline)
extern "C" double __cdecl sqrt(double x);
extern "C" double __cdecl fabs(double x);

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / cObj::vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ed0[];  // ZangekiInterceptStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b35260[];  // type of the lock-on target that has FUN_005ca330
// object table: FUN_00a7f600 (find by id)
extern unsigned char DAT_01be9a98[];
extern unsigned char DAT_01beb908[];  // ECX of FUN_00c58e90
extern unsigned char DAT_01d616d0[];  // ECX of FUN_00c5bbb0
extern unsigned int DAT_01bea090;     // bit 31: read the gauge from Pl0000+0x3830 instead of summing it
extern int DAT_01d61924;              // non-zero: the intercept timer does not run

namespace ZangekiInterceptStatePl0010_p1 {

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

// __cdecl call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R cdeclcall(F fn, A... args)
{
    typedef R (__cdecl *Fn)(A...);
    return ((Fn)fn)(args...);
}

// __thiscall call of a function whose generated prototype has the wrong parameter list
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// obj when its type record (from the vftable slot at `typeSlot`) derives from `type`, else 0
inline char *downcast(const void *obj, unsigned int typeSlot, const void *type)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, typeSlot), (undefined4 *)type);
    return isKind != 0 ? (char *)obj : 0;
}

inline StateMachineContextPl0010 *asContext(const void *obj)
{
    return (StateMachineContextPl0010 *)downcast(obj, 0x0, DAT_01be9ef4);
}

inline Pl0000 *asPl0000(const void *obj)
{
    return (Pl0000 *)downcast(obj, 0x4, DAT_01be9db8);
}

// Resolves a handle (FUN_00a81330) to its object (FUN_00a7c8a0); 0 when either step fails.
// The machine code calls FUN_00a7c8a0 only when FUN_00a81330 returned non-zero.
inline int handleObject(void *handle)
{
    int id = FUN_00a81330((uint *)handle);
    if (id == 0) {
        return 0;
    }
    return FUN_00a7c8a0(id);
}

}  // namespace ZangekiInterceptStatePl0010_p1

// 00B83520  ZangekiInterceptStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void ZangekiInterceptStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);
}

// 00B83530  ZangekiInterceptStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 ZangekiInterceptStatePl0010::vf18(undefined4 arg)
{
    return StateMachineNode::vf18(arg);
}

// 00B83540  ZangekiInterceptStatePl0010::vf24  size=19  [class]
bool ZangekiInterceptStatePl0010::vf24(undefined4 arg)
{
    return StateMachineNode::vf24(arg) != 0;
}

// 00B83580  ZangekiInterceptStatePl0010::vf00  size=6  [class]
undefined *ZangekiInterceptStatePl0010::vf00()
{
    return DAT_01be9ed0;
}

// 00B91830  ZangekiInterceptStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *ZangekiInterceptStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BB6B30  ZangekiInterceptStatePl0010::vf20  size=259  [class]
// Leave: resets the player mode, restores the lock-on target (FUN_005ca330(1.0)) and, when
// SafeCheck changed it, the weapons' speed (3.0).
undefined4 ZangekiInterceptStatePl0010::vf20(undefined4 *context)
{
    using namespace ZangekiInterceptStatePl0010_p1;

    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    fld<int>(player, 0x40C8) = 0;       /* Pl0000+0x40C8: mode */
    fld<float>(player, 0x341C) = 0.0f;  /* Pl0000+0x341C: slow timer */
    fld<int>(ctx, 0x2FC) = 0;           /* StateMachineContextPl0010+0x2FC: ? */
    int handle = FUN_00a81330((uint *)((char *)ctx + 0x4BC));  /* StateMachineContextPl0010+0x4BC: target handle */
    if (handle != 0) {
        void *target = (void *)FUN_00a7c8a0(handle);
        if (target != 0 &&
            FUN_00dd6d80((undefined4 *)vcall<void *>(target, 0x4), (undefined4 *)DAT_01b35260) != 0) {
            thiscall<void>(FUN_005ca330, target, 1.0f);
        }
    }
    if (weaponSpeedSet() != 0) {
        int weapon = fld<int>(ctx, 0x38C);  /* StateMachineContextPl0010+0x38C: weapon 0 */
        if (weapon != 0) {
            FUN_005edc60(weapon, 3.0f);
        }
        weapon = fld<int>(ctx, 0x390);  /* StateMachineContextPl0010+0x390: weapon 1 */
        if (weapon != 0) {
            FUN_005edc60(weapon, 3.0f);
        }
    }
    return 1;
}

// 00BCFB70  ZangekiInterceptStatePl0010::vf08  size=287  [class]
// Enter: player mode 0x14, the "SP" bgm once per context (context +0x4C4), camera setup and
// state 0x43 from the factory (context +0x4) pushed with FUN_00d82bf0.
bool ZangekiInterceptStatePl0010::vf08(undefined4 contextArg)
{
    using namespace ZangekiInterceptStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    undefined4 *context = (undefined4 *)contextArg;
    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
    fld<int>(player, 0x40C8) = 0x14;  /* Pl0000+0x40C8: mode */
    StateMachineContextPl0010 *ctx2 = asContext(context);
    if (fld<int>(ctx2, 0x4C4) != 1) {  /* StateMachineContextPl0010+0x4C4: SP bgm played */
        FUN_00b92d70(context);
        fld<int>(ctx2, 0x4C4) = 1;
        FUN_00e5e1b0((undefined4)"bgm_Zangeki_SP_Enter");
    }
    cdeclcall<void>(FUN_00bbc0e0, context, 0.1f, 180.0f, 1.0f, 0.1f);
    FUN_00bbc2a0(context);
    // context +0x4: the state factory; its slot 0 creates the state with the given id
    void *factory = (void *)context[1];
    int *node = vcall<int *>(factory, 0x0, 0x43);
    FUN_00d82bf0((int)this, node, (undefined4)context);
    fld<int>(ctx, 0x2FC) = 0;  /* StateMachineContextPl0010+0x2FC: ? */
    stickMoved() = 0.0f;
    timer() = 300.0f;
    weaponSpeedSet() = 0;
    return true;
}

// 00BCFC90  ZangekiInterceptStatePl0010::SafeCheck  size=555  [class]
// First frame (StateMachineNode+0x20 still 0): weapons' speed 5.0 when object 0x201A0 exists,
// or 0.9 x the distance to object 0x20020 (or to the point 3 ahead of the player); then resets
// the context's +0x190 object and sends request 0x10010 built with FUN_004039a0.
void ZangekiInterceptStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace ZangekiInterceptStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started flag */
        StateMachineContextPl0010 *ctx = asContext(context);
        Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */
        if (FUN_00a7f600((int)DAT_01be9a98, 0x201A0) != 0) {
            weaponSpeedSet() = 1;
            int weapon = fld<int>(ctx, 0x38C);  /* StateMachineContextPl0010+0x38C: weapon 0 */
            if (weapon != 0) {
                FUN_005edc60(weapon, 5.0f);
            }
            weapon = fld<int>(ctx, 0x390);  /* StateMachineContextPl0010+0x390: weapon 1 */
            if (weapon != 0) {
                FUN_005edc60(weapon, 5.0f);
            }
        }
        int found = FUN_00a7f600((int)DAT_01be9a98, 0x20020);
        if (found != 0) {
            float point[3];
            float *forward = FUN_00a925a0((int)player, point);
            point[0] = fld<float>(player, 0x40) + forward[0] * 3.0f;  /* Pl0000+0x40: position */
            point[1] = fld<float>(player, 0x44) + forward[1] * 3.0f;
            point[2] = forward[2] * 3.0f + fld<float>(player, 0x48);
            char *object = (char *)FUN_00a7c8a0(found);
            float x;
            float y;
            float z;
            if (object != 0) {
                x = fld<float>(object, 0x40);
                y = fld<float>(object, 0x44);
                z = fld<float>(object, 0x48);
            }
            else {
                x = point[0];
                y = point[1];
                z = point[2];
            }
            weaponSpeedSet() = 1;
            double dx = x - fld<float>(player, 0x40);
            double dy = y - fld<float>(player, 0x44);
            double dz = z - fld<float>(player, 0x48);
            float speed = (float)(sqrt(dy * dy + dx * dx + dz * dz) * 0.9f);
            int weapon = fld<int>(ctx, 0x38C);  /* StateMachineContextPl0010+0x38C: weapon 0 */
            if (weapon != 0) {
                FUN_005edc60(weapon, speed);
            }
            weapon = fld<int>(ctx, 0x390);  /* StateMachineContextPl0010+0x390: weapon 1 */
            if (weapon != 0) {
                FUN_005edc60(weapon, speed);
            }
        }
        char *object190 = (char *)ctx + 0x190;  /* StateMachineContextPl0010+0x190: embedded object */
        vcall<void>(object190, 0x8, 0.0f, 0.0f, 0);

        unsigned char request[348];  // ? object built by FUN_004039a0 (FUN_004039a0 / FUN_00dffb30 / FUN_00e03080)
        FUN_004039a0((int)request, 1, (int)player, 0);
        FUN_00dffb30((int)request, (undefined4)object190);
        thiscall<void>(FUN_00e03080, request, fld<undefined4>(player, 0x4F0), 0);  /* Pl0000+0x4F0: ? */
        int target = FUN_00a81330((uint *)((char *)player + 0xFF0));  /* Pl0000+0xFF0: handle */
        if (target != 0) {
            thiscall<void>(FUN_00e03080, request, target, 1);
        }
        FUN_00a8c8b0((int)player, 0x10010, (int)request);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BFF980  ZangekiInterceptStatePl0010::qteSafeCheck  size=1437  [class]
// Per-frame update.  Rebuilt from the machine code where Ghidra lost the ECX arguments.
void ZangekiInterceptStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace ZangekiInterceptStatePl0010_p1;

    StateMachineContextPl0010 *ctx = asContext(context);
    Pl0000 *player = asPl0000(fld<void *>(ctx, 0xC));  /* StateMachineContextPl0010+0xC: owner */

    // gauge: the sum of the active entries (+0x14 == 0) of the list at Pl0000+0x3820 (0x18 bytes each)
    double gauge = 0.0;
    if ((DAT_01bea090 & 0x80000000) == 0) {
        char *entry = fld<char *>(player, 0x3820);                   /* Pl0000+0x3820: entries */
        char *end = entry + fld<int>(player, 0x3828) * 0x18;         /* Pl0000+0x3828: count */
        for (; entry != end; entry = entry + 0x18) {
            if (*(int *)(entry + 0x14) == 0) {
                gauge = gauge + *(float *)(entry + 4);
            }
        }
    }
    else {
        gauge = fld<float>(player, 0x3830);  /* Pl0000+0x3830: gauge */
    }
    if (gauge == 0.0) {
        FUN_00b92be0(context, (undefined4)this, 100, 1);
    }
    if (100.0f < fabs(fld<float>(player, 0x3BD4)) || 100.0f < fabs(fld<float>(player, 0x3BD8))) {  /* Pl0000+0x3BD4/+0x3BD8: stick axes */
        stickMoved() = 1.0f;
    }

    if (stickMoved() == 0.0f) {
        float angles[2];  // [0] yaw, [1] second angle from FUN_00dde510
        char *lockHandle = (char *)player + 0xFE0;  /* Pl0000+0xFE0: lock-on handle */
        if (FUN_00a81330((uint *)lockHandle) != 0 && FUN_00a7c8a0(FUN_00a81330((uint *)lockHandle)) != 0) {
            // turn toward the locked object and remember its position
            char *object = (char *)FUN_00a7c8a0(FUN_00a81330((uint *)lockHandle));
            thunk_FUN_00dde510(&angles[0], &angles[1], (float *)(object + 0x40), (float *)((char *)player + 0x40));
            FUN_00b8bb40((int)player, -angles[0]);
            object = (char *)FUN_00a7c8a0(FUN_00a81330((uint *)lockHandle));
            fld<float>(ctx, 0x580) = fld<float>(object, 0x40);  /* StateMachineContextPl0010+0x580: target position */
            fld<float>(ctx, 0x584) = fld<float>(object, 0x44);
            fld<float>(ctx, 0x588) = fld<float>(object, 0x48);
            fld<float>(ctx, 0x58C) = fld<float>(object, 0x4C);
        }
        else {
            fld<int>(ctx, 0x5C4) = 0;  /* StateMachineContextPl0010+0x5C4: found count */
            int owner = fld<int>(player, 0x4F0);  /* Pl0000+0x4F0: ? */
            float range = fld<float>(ctx, 0x574) * 1.2f * 30.0f;  /* StateMachineContextPl0010+0x574: ? */
            // Pl0000 slot 0x84 (00A92950) takes no arguments; the two floats pushed before the call
            // are the last two arguments of FUN_00c58e90 (right-to-left argument evaluation).
            char *result = vcall<char *>(player, 0x84);
            thiscall<void>(FUN_00c58e90, DAT_01beb908, (char *)ctx + 0x5B8, owner, fld<float>(result, 4),
                           0.7853982f, range);
            if (0 < fld<int>(ctx, 0x5C4)) {
                float position[4];
                FUN_00c15010(fld<int>(ctx, 0x5BC), position);  /* StateMachineContextPl0010+0x5BC: ? */
                thunk_FUN_00dde510(&angles[0], &angles[1], position, (float *)((char *)player + 0x40));
                FUN_00b8bb40((int)player, -angles[0]);
                fld<float>(ctx, 0x580) = position[0];
                fld<float>(ctx, 0x584) = position[1];
                fld<float>(ctx, 0x588) = position[2];
                fld<float>(ctx, 0x58C) = position[3];
            }
            else {
                float *last = (float *)((char *)ctx + 0x580);
                if (last[0] == 0.0f && last[1] == 0.0f && last[2] == 0.0f) {
                    FUN_00b8bb40((int)player, -0.17453292f);
                    if (DAT_01d61924 == 0) {
                        float remaining = timer() - fld<float>(player, 0x910);  /* Pl0000+0x910: frame time */
                        timer() = remaining;
                        if (remaining < 0.0f) {
                            fld<int>(ctx, 0x2FC) = 0;  /* StateMachineContextPl0010+0x2FC: ? */
                        }
                    }
                }
                else {
                    FUN_00c15010(fld<int>(ctx, 0x5BC), last);
                    thunk_FUN_00dde510(&angles[0], &angles[1], last, (float *)((char *)player + 0x40));
                    FUN_00b8bb40((int)player, -angles[0]);
                }
            }
        }
    }

    if (FUN_00a7f600((int)DAT_01be9a98, 0x2070A) != 0) {
        int handle = FUN_00a81330((uint *)((char *)ctx + 0x4BC));  /* StateMachineContextPl0010+0x4BC: target handle */
        if (handle != 0) {
            void *target = (void *)FUN_00a7c8a0(handle);
            if (target != 0 &&
                FUN_00dd6d80((undefined4 *)vcall<void *>(target, 0x4), (undefined4 *)DAT_01b35260) != 0) {
                thiscall<void>(FUN_005ca330, target, 3.96f);
            }
        }
    }
    else {
        float position[3];
        float scale;
        int target;
        char *lockHandle = (char *)player + 0xFE0;  /* Pl0000+0xFE0: lock-on handle */
        if (FUN_00a81330((uint *)lockHandle) != 0 && FUN_00a7c8a0(FUN_00a81330((uint *)lockHandle)) != 0) {
            char *object = (char *)FUN_00a7c8a0(FUN_00a81330((uint *)lockHandle));
            float *p = vcall<float *>(object, 0x68);
            position[0] = p[0];
            position[1] = p[1];
            position[2] = p[2];
            target = handleObject((char *)ctx + 0x4BC);  /* StateMachineContextPl0010+0x4BC: target handle */
            if (target == 0 || (target = (int)FUN_00860b50((int *)target)) == 0) {
                goto done;
            }
            double dx = position[0] - fld<float>(player, 0x40);
            double dy = position[1] - fld<float>(player, 0x44);
            double dz = position[2] - fld<float>(player, 0x48);
            scale = (float)(sqrt(dx * dx + dy * dy + dz * dz) * 0.33f);
        }
        else if (0 < fld<int>(ctx, 0x5C4)) {  /* StateMachineContextPl0010+0x5C4: found count */
            FUN_00c15010(fld<int>(ctx, 0x5BC), position);  /* StateMachineContextPl0010+0x5BC: ? */
            target = handleObject((char *)ctx + 0x4BC);
            if (target == 0 || (target = (int)FUN_00860b50((int *)target)) == 0) {
                goto done;
            }
            double dx = position[0] - fld<float>(player, 0x40);
            double dy = position[1] - fld<float>(player, 0x44);
            double dz = position[2] - fld<float>(player, 0x48);
            scale = (float)(sqrt(dx * dx + dy * dy + dz * dz) * 0.33f);
        }
        else {
            target = handleObject((char *)ctx + 0x4BC);
            if (target == 0 || (target = (int)FUN_00860b50((int *)target)) == 0) {
                goto done;
            }
            scale = 1.0f;
        }
        thiscall<void>(FUN_005ca330, (void *)target, scale);
    }
done:
    FUN_00c5bbb0((int)DAT_01d616d0, 0x10);
    if (fld<int>(asContext(context), 0x2F4) == 0) {  /* StateMachineContextPl0010+0x2F4: ? */
        FUN_00bbb050(context);
    }
    FUN_00bd5f40(context, 35.0f, -60.0f, 0, 0);
    FUN_00bbc310(context);
    cdeclcall<void>(FUN_00bf24f0, context, 1.0f);
    StateMachineNode::qteSafeCheck(context);
}
