// src/player/pl0010/state/DeadStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "DeadStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e04[];  // DeadStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010

namespace DeadStatePl0010_p1 {

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

// 00EAA060 cEspControler::cEspControler (ECX = object)
inline void constructEspControler(void *obj)
{
    ((void (__thiscall *)(void *))0x00EAA060)(obj);
}

// 00EAA9B0 cEspControler::~cEspControler (ECX = object)
inline void destructEspControler(void *obj)
{
    ((void (__thiscall *)(void *))0x00EAA9B0)(obj);
}

}  // namespace DeadStatePl0010_p1

// 00B81280  DeadStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void DeadStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B81290  DeadStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14 (the raw body shown by Ghidra is the base's).
void DeadStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B812A0  DeadStatePl0010::thunk_vf18  size=5  [class]
// vftable slot 0x18: a tail jump to StateMachineNode::vf18 (the raw body shown by Ghidra is the base's).
undefined4 DeadStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B812B0  DeadStatePl0010::vf20  size=19  [class]
undefined4 DeadStatePl0010::vf20(undefined4 *contextArg)
{
    return StateMachineNode::vf20(contextArg) != 0;
}

// 00B812D0  DeadStatePl0010::vf24  size=19  [class]
bool DeadStatePl0010::vf24(undefined4 contextArg)
{
    return StateMachineNode::vf24(contextArg) != 0;
}

// 00B812F0  DeadStatePl0010::DeadStatePl0010  size=33  [class]
DeadStatePl0010::DeadStatePl0010(undefined4 arg) : StateMachineNode(arg)
{
    using namespace DeadStatePl0010_p1;

    // vftable = DeadStatePl0010::vftable (0x016A1608)
    constructEspControler(espControler());
}

// 00B81320  DeadStatePl0010::vf00  size=6  [class]
undefined *DeadStatePl0010::vf00()
{
    return DAT_01be9e04;
}

// 00B90E10  DeadStatePl0010::vf08  size=133  [class]
// Enter: sets the death flags of the context.
bool DeadStatePl0010::vf08(undefined4 contextArg)
{
    using namespace DeadStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010((void *)contextArg);
    if (0.0f < fld<float>(ctx, 0x324)) {  /* StateMachineContextPl0010+0x324 / +0x328: ? (reset to +0x328 when positive) */
        fld<float>(ctx, 0x324) = fld<float>(ctx, 0x328);
    }
    fld<int>(ctx, 0x32C) = 1;  /* StateMachineContextPl0010+0x32C: ? */
    fld<int>(ctx, 0x2F4) = 0;  /* StateMachineContextPl0010+0x2F4: ? */
    fld<int>(ctx, 0x2F8) = 0;  /* StateMachineContextPl0010+0x2F8: ? */
    fld<int>(ctx, 0x304) = 0;  /* StateMachineContextPl0010+0x304: ? */
    fld<int>(ctx, 0x2F0) = 1;  /* StateMachineContextPl0010+0x2F0: ? (death flag, set on enter and every frame) */
    return true;
}

// 00B90EA0  DeadStatePl0010::qteSafeCheck  size=65  [class]
void DeadStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    using namespace DeadStatePl0010_p1;

    char *ctx = asContextPl0010(contextArg);
    fld<int>(ctx, 0x2F0) = 1;  /* StateMachineContextPl0010+0x2F0: ? (death flag, set on enter and every frame) */
    StateMachineNode::qteSafeCheck(contextArg);
}

// 00B90EF0  DeadStatePl0010::vf04  size=39  [class]
// Scalar deleting destructor.
undefined4 *DeadStatePl0010::vf04(byte flags)
{
    using namespace DeadStatePl0010_p1;

    destructEspControler(espControler());
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
