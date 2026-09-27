// src/player/pl0010/state/BodyStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "BodyStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9df8[];  // BodyStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace BodyStatePl0010_p1 {

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

}  // namespace BodyStatePl0010_p1

// 00B80FE0  BodyStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void BodyStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B80FF0  BodyStatePl0010::qteSafeCheck  size=5  [class]
// A tail jump to StateMachineNode::qteSafeCheck (the raw body shown by Ghidra is the base's).
void BodyStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    StateMachineNode::qteSafeCheck(contextArg);
}

// 00B81000  BodyStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void BodyStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B81010  BodyStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 BodyStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81020  BodyStatePl0010::vf20  size=19  [class]
undefined4 BodyStatePl0010::vf20(undefined4 *contextArg)
{
    return StateMachineNode::vf20(contextArg) != 0;
}

// 00B81040  BodyStatePl0010::vf24  size=19  [class]
bool BodyStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B81080  BodyStatePl0010::vf00  size=6  [class]
undefined *BodyStatePl0010::vf00()
{
    return DAT_01be9df8;
}

// 00B90CA0  BodyStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *BodyStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BA95E0  BodyStatePl0010::vf08  size=175  [class]
// Enter: creates the first child state (10 or 0x11) with the context's factory and attaches it.
bool BodyStatePl0010::vf08(undefined4 contextArg)
{
    using namespace BodyStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    float threshold = fld<float>(fld<char *>(player, 0x40D4), 0x14C);  /* Pl0000+0x40D4: parameter table */
    int firstState;
    if (!(threshold * threshold >= fld<float>(player, 0xD28)) &&  // NaN passes, as in the machine code  /* Pl0000+0xD28: ? (compared with the squared parameter) */
        (fld<unsigned int>(player, 0xCF8) & fld<unsigned int>(player, 0xE48)) != 0) {  /* Pl0000+0xCF8 inputHold & +0xE48 maskE48 */
        firstState = 10;
    }
    else {
        firstState = 0x11;
    }
    // StateMachineContext+0x4: state factory; vftable slot 0 creates the node of a state id
    // (it pops only the id: the context pushed before it is the last argument of FUN_00d82bf0)
    void *factory = fld<void *>((void *)contextArg, 4);
    int *node = vcall<int *>(factory, 0x0, firstState);
    FUN_00d82bf0((int)this, node, contextArg);
    return true;
}
