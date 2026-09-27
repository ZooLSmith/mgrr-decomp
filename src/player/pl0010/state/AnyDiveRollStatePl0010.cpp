// src/player/pl0010/state/AnyDiveRollStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "AnyDiveRollStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 / vf04 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9ddc[];  // AnyDiveRollStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace AnyDiveRollStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// __thiscall call of a function (symbol or address) with ECX = self
template <class R, class F, class... A> inline R thiscall(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// Type-record virtual (no arguments besides `this`) at byte offset `slot` of obj's vftable.
typedef undefined *(__thiscall *TypeRecordFn)(const void *self);
inline undefined *typeRecord(const void *obj, int slot) { return (*(TypeRecordFn **)obj)[slot / 4](obj); }

// Checked downcasts (0 when the object is null or of another type).
inline void *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, typeRecord(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (void *)obj : 0;
}
inline char *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, typeRecord(obj, 0x4), DAT_01be9db8);
    return isKind != 0 ? (char *)obj : 0;
}

// The player that owns the state machine: context (StateMachineContextPl0010) +0xC, checked
// against Pl0000.  The context is not null-checked before the load (as in the original).
inline char *ownerPlayer(const void *context)
{
    return asPl0000(at<void *>(asContext(context), 0xC));  /* StateMachineContext+0xC: owner */
}

}  // namespace AnyDiveRollStatePl0010_p1

// 00B80BA0  AnyDiveRollStatePl0010::vf08  size=19  [class]
bool AnyDiveRollStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B80BC0  AnyDiveRollStatePl0010::vf18  size=5  [class]
// (jmp 0x00D822E0; Ghidra showed the inlined body of StateMachineNode::vf18)
undefined4 AnyDiveRollStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);
}

// 00B80BD0  AnyDiveRollStatePl0010::vf24  size=19  [class]
bool AnyDiveRollStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B80C10  AnyDiveRollStatePl0010::vf00  size=6  [class]
undefined *AnyDiveRollStatePl0010::vf00()
{
    return DAT_01be9ddc;
}

// 00B90BC0  AnyDiveRollStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *AnyDiveRollStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA8700  AnyDiveRollStatePl0010::SafeCheck  size=244  [class]
// Enter: motion 0x30, motion controller mode 1, and saves +0x417C..+0x4184 into +0x4188..+0x4190.
void AnyDiveRollStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace AnyDiveRollStatePl0010_p1;
    float scale[3];

    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        char *player = ownerPlayer(context);
        thiscall<int>(FUN_00aa3f60, player, 0x30);
        char *controller = at<char *>(player, 0x764);  /* Pl0000+0x764: motion controller ? */
        if (at<int>(controller, 0x104) != 1) {
            at<int>(controller, 0x104) = 1;
            at<float>(at<char *>(controller, 0xD0), 4) = 0.0f;
        }
        thiscall<void>(FUN_00aa92c0, player, 3);
        scale[0] = 1.0f;
        scale[1] = 1.25f;
        scale[2] = 1.0f;
        thiscall<void>(FUN_00a95ff0, player, scale);
        /* Pl0000+0x417C..+0x4184: ?, saved into +0x4188..+0x4190 */
        at<float>(player, 0x418C) = at<float>(player, 0x4180);
        at<float>(player, 0x4188) = at<float>(player, 0x417C);
        at<float>(player, 0x4190) = at<float>(player, 0x4184);
    }
    StateMachineNode::SafeCheck(context);
}

// 00BA8800  AnyDiveRollStatePl0010::vf20  size=161  [class]
// Leave: motion controller mode 0 and restores +0x417C..+0x4184.
undefined4 AnyDiveRollStatePl0010::vf20(undefined4 *context)
{
    using namespace AnyDiveRollStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    char *player = ownerPlayer(context);
    if (at<int>(at<char *>(player, 0x764), 0x104) != 0) {
        at<int>(at<char *>(player, 0x764), 0x104) = 0;
    }
    at<float>(player, 0x4180) = at<float>(player, 0x418C);
    at<float>(player, 0x417C) = at<float>(player, 0x4188);
    at<float>(player, 0x4184) = at<float>(player, 0x4190);
    return 1;
}

// 00BC93E0  AnyDiveRollStatePl0010::vf14  size=187  [class]
void AnyDiveRollStatePl0010::vf14(undefined4 *context)
{
    using namespace AnyDiveRollStatePl0010_p1;
    char *player = ownerPlayer(context);
    if (thiscall<bool>(FUN_00a94ce0, player, 0)) {
        FUN_00bb8d00(context, (int)this, 0x19, 0, 1);
        if (!FUN_008e2740(at<int>(player, 0x764))) {
            /* Pl0000+0x41E0: ground hit, +0x41E4: distance to it (Pl0010::GroundTest);
               Pl0000+0x40D4: parameter block (+0x160) */
            // (fcomp + test ah,0x41: also taken when unordered, hence !(a > b))
            if (at<int>(player, 0x41E0) == 0 ||
                !(at<float>(at<char *>(player, 0x40D4), 0x160) > at<float>(player, 0x41E4))) {
                thiscall<void>(FUN_00d82510, this, 0xe, 100);
            }
        }
    }
    StateMachineNode::vf14(context);
}

// 00BDC910  AnyDiveRollStatePl0010::qteSafeCheck  size=197  [class]
void AnyDiveRollStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace AnyDiveRollStatePl0010_p1;
    char *player = ownerPlayer(context);
    if (thiscall<undefined4>(FUN_00a95270, player, 0x30, 6) != 0) {
        char *params = at<char *>(player, 0x40D4);  /* Pl0000+0x40D4: parameter block */
        float value2C = at<float>(params, 0x2C);
        at<float>(player, 0x4180) = at<float>(params, 0x30);
        at<float>(player, 0x417C) = value2C;
        at<float>(player, 0x4184) = 0.0f;
        FUN_00b8af00((int)player);
    }
    FUN_00bd3730(context, (undefined4)this, 0xd, 0xc);
    FUN_00bd37f0(context, (undefined4)this, 0xd);
    FUN_00bd3910(context, (undefined4)this, 0xb, 10);
    FUN_00bd39d0(context, (undefined4)this, 10);
    StateMachineNode::qteSafeCheck(context);
}
