// src/player/pl0010/state/AvoidEnemyStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AvoidEnemyStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9dec[];  // AvoidEnemyStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned int DAT_01b7b914[];   // pad states, 4 pads * 0x30 bytes (button word first)

namespace AvoidEnemyStatePl0010_p1 {

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

// __thiscall call (ECX = self) of a function whose functions.h prototype has the wrong
// return / argument types
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// ctx when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *ctx)
{
    if (ctx == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(ctx, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (char *)ctx : 0;
}

// obj when it is a Pl0000 (type record from vftable slot 4), else 0
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player of a state-machine context (StateMachineContext+0xC: owner).
inline Pl0000 *playerOf(const char *ctx)
{
    return asPl0000(fld<void *>(ctx, 0xC));
}

}  // namespace AvoidEnemyStatePl0010_p1

// 00B80E20  AvoidEnemyStatePl0010::vf08  size=42  [class]
// Enter.
bool AvoidEnemyStatePl0010::vf08(undefined4 contextArg)
{
    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    field38() = 0;
    field34() = 0.0f;
    return true;
}

// 00B80E50  AvoidEnemyStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 AvoidEnemyStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B80E60  AvoidEnemyStatePl0010::vf24  size=19  [class]
bool AvoidEnemyStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B80EA0  AvoidEnemyStatePl0010::vf00  size=6  [class]
undefined *AvoidEnemyStatePl0010::vf00()
{
    return DAT_01be9dec;
}

// 00B90C40  AvoidEnemyStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *AvoidEnemyStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA8EF0  AvoidEnemyStatePl0010::SafeCheck  size=251  [class]
// First update: saves the camera angles, starts the vault motion 0x52 and switches the
// controller into its motion-driven mode.
void AvoidEnemyStatePl0010::SafeCheck(undefined4 *contextArg)
{
    using namespace AvoidEnemyStatePl0010_p1;

    if (*(int *)((char *)this + 0x20) == 0) {  /* StateMachineNode+0x20: started */
        char *ctx = asContextPl0010(contextArg);
        Pl0000 *player = playerOf(ctx);
        fld<float>(player, 0x418C) = fld<float>(player, 0x4180);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
        fld<int>(player, 0x5088) = 1;                             /* Pl0000+0x5088: ? */
        fld<int>(player, 0x508C) = 0;                             /* Pl0000+0x508C: ? */
        fld<float>(player, 0x4188) = fld<float>(player, 0x417C);
        fld<int>(player, 0x4170) = 1;                             /* Pl0000+0x4170: camera angles overridden by the state */
        fld<float>(player, 0x4190) = fld<float>(player, 0x4184);
        motionId() = 0x52;
        FUN_00aa3f60((int)player, 0x52);
        nextFrame() = 0.0f;
        chainRequest() = 0;
        char *controller = fld<char *>(player, 0x764);  /* Pl0000+0x764: movement controller */
        if (fld<int>(controller, 0x104) != 1) {
            fld<int>(controller, 0x104) = 1;
            fld<float>(fld<char *>(controller, 0xD0), 4) = 0.0f;
            StateMachineNode::SafeCheck(contextArg);
            return;
        }
    }
    StateMachineNode::SafeCheck(contextArg);
}

// 00BA8FF0  AvoidEnemyStatePl0010::vf14  size=179  [class]
// When the current motion has ended, requests state 0x11 (airborne / off the ground) or 0xE.
void AvoidEnemyStatePl0010::vf14(undefined4 *contextArg)
{
    using namespace AvoidEnemyStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (FUN_00a94db0((int)player, motionId()) != 0) {
        int nextState;
        if (FUN_008e2740(fld<int>(player, 0x764)) ||
            (fld<int>(player, 0x41E0) != 0 &&  /* Pl0000+0x41E0 / +0x41E4: ground probe hit / distance */
             fld<float>(player, 0x41E4) < fld<float>(fld<char *>(player, 0x40D4), 0x160))) {  /* Pl0000+0x40D4: parameter table */
            nextState = 0x11;
        }
        else {
            nextState = 0xE;
        }
        FUN_00d82510((int)this, nextState, 100);
    }
    StateMachineNode::vf14(contextArg);
}

// 00BA90B0  AvoidEnemyStatePl0010::vf20  size=207  [class]
// Leave: restores the controller and the camera angles and clears the context's handle +0x90.
undefined4 AvoidEnemyStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace AvoidEnemyStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    if (fld<int>(fld<char *>(player, 0x764), 0x104) != 0) {  /* Pl0000+0x764: movement controller */
        fld<int>(fld<char *>(player, 0x764), 0x104) = 0;
    }
    fld<float>(player, 0x4180) = fld<float>(player, 0x418C);  /* Pl0000+0x417C..0x4190: camera angles and their saved copy */
    fld<int>(player, 0x5088) = 0;
    fld<int>(player, 0x508C) = 0;
    fld<float>(player, 0x417C) = fld<float>(player, 0x4188);
    fld<int>(player, 0x4170) = 0;
    fld<float>(player, 0x4184) = fld<float>(player, 0x4190);
    // (the machine code uses the stack slot of the argument as the temporary handle)
    undefined4 emptyHandle;
    FUN_00a7c930(&emptyHandle);
    FUN_00a7c960((undefined4 *)(ctx + 0x90), &emptyHandle);  /* StateMachineContextPl0010+0x90: object handle */
    return 1;
}

// 00BDCEA0  AvoidEnemyStatePl0010::qteSafeCheck  size=635  [class]
// Per-frame update: aims the player at the object of the context handle +0x90, drives the
// camera pitch from the motion frame and chains 0x52 -> 0x53 when the button was pressed.
void AvoidEnemyStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace AvoidEnemyStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    FUN_008e0b70(fld<int>(player, 0x764), 0);
    FUN_008e0ba0(fld<int>(player, 0x764), 0);
    if (FUN_00a94db0((int)player, 0x52) != 0 && motionId() == 0x53) {
        FUN_00aa3f60((int)player, 0x53);
    }
    unsigned int *handle = (unsigned int *)(ctx + 0x90);  /* StateMachineContextPl0010+0x90: object handle */
    int target = FUN_00a81330(handle);
    if (target == 0 || !FUN_00a7c7e0(target) || motionId() != 0x52) {
        undefined4 emptyHandle;
        FUN_00a7c930(&emptyHandle);
        FUN_00a7c960((undefined4 *)handle, &emptyHandle);
    }
    else if (nextFrame() <= 0.0f ||
             (0.0f < nextFrame() && thiscall<int>(FUN_00a95200, player, 0x52, nextFrame()) == 0)) {
        float *current = vcall<float *>(player, 0x84);  // Pl0000 vftable slot 0x84 (returns a float[4])
        float direction[4];
        direction[0] = current[0];
        direction[1] = current[1];
        direction[2] = current[2];
        direction[3] = current[3];
        int model = FUN_00a7c8a0(target);
        float aimed[4];
        float *result = FUN_00a8eb50((int)player, aimed, (float *)(model + 0x40));
        direction[1] = result[1];
        vcall<void>(player, 0x88, direction);  // Pl0000 vftable slot 0x88 (takes a float[4])
    }
    if (motionId() == 0x52) {
        if (thiscall<int>(FUN_00a95630, player, 0x52, 0x14) != 0) {
            double pitch = (double)30.0f - (double)FUN_00a95980((int)player, 0x52) * (double)60.0f;
            fld<float>(player, 0xBB4) = (float)pitch;  /* Pl0000+0xBB4: ? */
            if (!(0.0f < fld<float>(player, 0x3454))) {  /* Pl0000+0x3454: timer3454 */
                fld<float>(player, 0x343C) = (float)pitch;  /* Pl0000+0x343C: timer343C */
                fld<float>(player, 0x3440) = 0.05f;          /* Pl0000+0x3440: field3440 */
            }
            nextFrame() = (float)(pitch + (double)20.0f);
        }
        if (FUN_00a95030((int)player, 0x52, 0x14, 0x1E) != 0 && (DAT_01b7b914[0] & 0x80) != 0) {
            chainRequest() = 1;
        }
        if (chainRequest() != 0 && FUN_00a95270((int)player, 0x52, 0x1E) != 0) {
            motionId() = 0x53;
            float startFrame = (float)((double)FUN_00a95980((int)player, 0x52) - (double)0.5f);
            thiscall<int>(FUN_00aa42d0, player, motionId(), startFrame);
        }
    }
    else if (motionId() == 0x53 && FUN_00a95270((int)player, 0x53, 0x1E) != 0 &&
             FUN_00b8b5d0((int)player) == 1) {
        FUN_00d82510((int)this, 10, 100);
    }
    FUN_00bd3910(contextArg, (undefined4)this, 0xB, 10);
    FUN_00bd39d0(contextArg, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(contextArg);
}
