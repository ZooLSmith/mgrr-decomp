// src/player/pl0010/state/GlobalStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GlobalStatePl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
// type records (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e14[];  // GlobalStatePl0010 (returned by vf00)
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000
extern unsigned char DAT_01b7bd48[];  // heap passed to FUN_00dd3580
extern int DAT_01885d20;              // global object pointer (+0x14: base gravity)
// Havok world lock (the guard's destructor is inlined in vf08)
extern "C" unsigned int _tls_index;  // 01F8EF48
extern int DAT_01885d68;             // cHavok: 1 = no world locking
extern int DAT_01b35fac;             // cHavok: world present
extern int DAT_01885db8;             // cHavok: in the unlock period
extern char DAT_01885d70[];          // cHavok lock object (ECX of FUN_00dd72e0 / FUN_00dd7320)
// compiler intrinsic: fs:[0x2C] = TEB ThreadLocalStoragePointer
extern "C" unsigned long __readfsdword(unsigned long offset);

namespace GlobalStatePl0010_p1 {

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

// obj when it is a StateMachineContextPl0010 (type record from vftable slot 0), else 0
inline char *asContextPl0010(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = thiscall<int>(FUN_00dd6d80, vcall<void *>(obj, 0x0), DAT_01be9ef4);
    return isKind != 0 ? (char *)obj : 0;
}

// obj when it is a Pl0000 (type record from cObj::vf04, slot 4), else 0
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

// Pl0000+0x764: movement controller (+0xF4: gravity)
inline char *controllerOf(Pl0000 *player)
{
    return fld<char *>(player, 0x764);
}

// Action pairs appended to actionPairs() by vf08, in this order.
const unsigned int kActionPairs[] = {
    0x000A0006, 0x000B0007, 0x000C0008, 0x000D0009, 0x0013000F, 0x00140010, 0x00150011, 0x00160012,
    0x02000100, 0x02010101, 0x02020102, 0x02030103, 0x02040104, 0x02050105, 0x02060106, 0x02070107,
    0x02080108, 0x02090109, 0x020A010A, 0x020B010B, 0x020C010C, 0x020D010D, 0x020E010E, 0x020F010F,
    0x02100110, 0x02110111, 0x02120112,
    0x05080501, 0x05090502, 0x050A0503, 0x050B0504, 0x050C0505, 0x050D0506, 0x050E0507, 0x05130511,
    0x05140512, 0x05160515,
    0x07010700,
};

}  // namespace GlobalStatePl0010_p1

// 00B81550  GlobalStatePl0010::SafeCheck  size=5  [class]
// A tail jump to StateMachineNode::SafeCheck (the raw body shown by Ghidra is the base's).
void GlobalStatePl0010::SafeCheck(undefined4 *contextArg)
{
    StateMachineNode::SafeCheck(contextArg);
}

// 00B81560  GlobalStatePl0010::qteSafeCheck  size=5  [class]
// A tail jump to StateMachineNode::qteSafeCheck.
void GlobalStatePl0010::qteSafeCheck(undefined4 *contextArg)
{
    StateMachineNode::qteSafeCheck(contextArg);
}

// 00B81570  GlobalStatePl0010::vf14  size=5  [class]
// A tail jump to StateMachineNode::vf14.
void GlobalStatePl0010::vf14(undefined4 *contextArg)
{
    StateMachineNode::vf14(contextArg);
}

// 00B81580  GlobalStatePl0010::vf18  size=5  [class]
// A tail jump to StateMachineNode::vf18.
undefined4 GlobalStatePl0010::vf18(undefined4 contextArg)
{
    return StateMachineNode::vf18(contextArg);
}

// 00B81590  GlobalStatePl0010::vf1C  size=5  [class]
// A tail jump to StateMachineNode::vf1C.
undefined4 GlobalStatePl0010::vf1C(undefined4 contextArg)
{
    return StateMachineNode::vf1C(contextArg);
}

// 00B815A0  GlobalStatePl0010::vf24  size=53  [class]
// Frees the action-pair table.
bool GlobalStatePl0010::vf24(undefined4 arg)
{
    if (StateMachineNode::vf24(arg) == 0) {
        return false;
    }
    if (actionPairs() != 0) {
        FUN_00dd4940((int)actionPairs());
        actionPairs() = 0;
    }
    return true;
}

// 00B81600  GlobalStatePl0010::vf00  size=6  [class]
undefined *GlobalStatePl0010::vf00()
{
    return DAT_01be9e14;
}

// 00B90F80  GlobalStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *GlobalStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BAAAD0  GlobalStatePl0010::vf08  size=1202  [class]
// Enter: resets the saved dash gear, builds and registers the action-pair table and sets the
// controller's gravity to 5x the global base value (under the Havok world lock).
bool GlobalStatePl0010::vf08(undefined4 contextArg)
{
    using namespace GlobalStatePl0010_p1;

    if (StateMachineNode::vf08(contextArg) == 0) {
        return false;
    }
    char *ctx = asContextPl0010((void *)contextArg);
    Pl0000 *player = playerOf(ctx);
    fld<int>(ctx, 0x40) = 2;       /* StateMachineContextPl0010+0x40: saved gearLevel */
    fld<float>(ctx, 0x38) = 0.0f;  /* StateMachineContextPl0010+0x38: saved gearCharge */
    fld<float>(ctx, 0x3C) = 0.0f;  /* StateMachineContextPl0010+0x3C: saved gearCooldown */
    fld<int>(player, 0x507C) = 0;  /* Pl0000+0x507C: ? */
    actionPairCount() = 0;
    actionPairs() = cdeclcall<int *>(FUN_00dd3580, 200, DAT_01b7bd48);
    for (unsigned int i = 0; i < sizeof(kActionPairs) / sizeof(kActionPairs[0]); i++) {
        actionPairs()[actionPairCount()] = (int)kActionPairs[i];
        actionPairCount() = actionPairCount() + 1;
    }
    thiscall<void>(FUN_00a95e20, player, actionPairs(), actionPairCount());
    unsigned char lockGuard[4];  // scoped Havok world lock
    FUN_004066f0((undefined4)lockGuard);
    fld<float>(controllerOf(player), 0xF4) = fld<float>((void *)DAT_01885d20, 0x14) * 5.0f;
    thiscall<void>(FUN_008e5270, controllerOf(player), 4);
    // ~lock guard (inlined)
    if (DAT_01885d68 != 1) {
        int *lockDepth = (int *)(*(char **)(__readfsdword(0x2C) + _tls_index * 4) + 4);
        *lockDepth = *lockDepth - 1;
        if (*lockDepth == 0 && DAT_01b35fac != 0 && DAT_01885db8 == 0) {
            FUN_00dd7320((int)DAT_01885d70);
        }
    }
    return true;
}

// 00BAAF90  GlobalStatePl0010::vf20  size=248  [class]
// Leave: stops the upper-body motion slots, scales the gravity back by 0.75 and frees the table.
undefined4 GlobalStatePl0010::vf20(undefined4 *contextArg)
{
    using namespace GlobalStatePl0010_p1;

    if (StateMachineNode::vf20(contextArg) == 0) {
        return 0;
    }
    char *ctx = asContextPl0010(contextArg);
    Pl0000 *player = playerOf(ctx);
    thiscall<void>(FUN_00a8c9b0, player, 0, 8, 0.2f, 0.0f);
    thiscall<void>(FUN_00a94bc0, player, 4, 0.0f);
    thiscall<void>(FUN_00a94bc0, player, 3, 0.0f);
    thiscall<void>(FUN_00a94bc0, player, 2, 0.0f);
    fld<float>(controllerOf(player), 0xF4) = fld<float>(controllerOf(player), 0xF4) * 0.75f;
    thiscall<void>(FUN_008e5370, controllerOf(player), 4);
    if (actionPairs() != 0) {
        FUN_00dd4940((int)actionPairs());
        actionPairs() = 0;
    }
    fld<int>(ctx, 0x34) = 0;  /* StateMachineContextPl0010+0x34: dash was running */
    return 1;
}
