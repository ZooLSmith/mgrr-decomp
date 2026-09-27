// src/player/pl0010/state/MostHighWallPopStatePl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "MostHighWallPopStatePl0010.h"

// type records returned by vf00 (FUN_00dd6d80(record, target) walks the parent chain)
extern unsigned char DAT_01be9e3c[];  // MostHighWallPopStatePl0010
extern unsigned char DAT_01be9ef4[];  // StateMachineContextPl0010
extern unsigned char DAT_01be9db8[];  // Pl0000

namespace MostHighWallPopStatePl0010_p1 {

// Field at byte offset `offset` of an object whose class header is not owned by this file.
template <class T> inline T &at(const void *base, int offset) { return *(T *)((char *)base + offset); }

// Type-record virtual (no arguments besides `this`) at byte offset `slot` of obj's vftable.
typedef undefined *(__thiscall *TypeRecordFn)(const void *self);
inline undefined *typeRecord(const void *obj, int slot) { return (*(TypeRecordFn **)obj)[slot / 4](obj); }

// Checked downcasts (0 when the object is null or of another type).
inline void *asContext(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)typeRecord(obj, 0x0), (undefined4 *)DAT_01be9ef4);
    return isKind != 0 ? (void *)obj : 0;
}
inline Pl0000 *asPl0000(const void *obj)
{
    if (obj == 0) {
        return 0;
    }
    int isKind = FUN_00dd6d80((undefined4 *)typeRecord(obj, 0x4), (undefined4 *)DAT_01be9db8);
    return isKind != 0 ? (Pl0000 *)obj : 0;
}

// The player that owns the state machine: context (StateMachineContextPl0010) +0xC, checked
// against Pl0000.  The context is not null-checked before the load (as in the original).
inline Pl0000 *ownerPlayer(const void *context)
{
    return asPl0000(at<void *>(asContext(context), 0xC));  /* StateMachineContext+0xC: owner */
}

}  // namespace MostHighWallPopStatePl0010_p1

// 00B81B40  MostHighWallPopStatePl0010::vf08  size=19  [class]
bool MostHighWallPopStatePl0010::vf08(undefined4 context)
{
    return StateMachineNode::vf08(context) != 0;
}

// 00B81B60  MostHighWallPopStatePl0010::vf14  size=5  [class]
void MostHighWallPopStatePl0010::vf14(undefined4 *context)
{
    StateMachineNode::vf14(context);  // jmp 0x00D822A0
}

// 00B81B70  MostHighWallPopStatePl0010::vf18  size=5  [class]
undefined4 MostHighWallPopStatePl0010::vf18(undefined4 context)
{
    return StateMachineNode::vf18(context);  // jmp 0x00D822E0
}

// 00B81B80  MostHighWallPopStatePl0010::vf24  size=19  [class]
bool MostHighWallPopStatePl0010::vf24(undefined4 context)
{
    return StateMachineNode::vf24(context) != 0;
}

// 00B81BC0  MostHighWallPopStatePl0010::vf00  size=6  [class]
undefined *MostHighWallPopStatePl0010::vf00()
{
    return DAT_01be9e3c;
}

// 00B910C0  MostHighWallPopStatePl0010::vf04  size=31  [class]
// Scalar deleting destructor.
undefined4 *MostHighWallPopStatePl0010::vf04(byte flags)
{
    // vftable = StateMachineNode::vftable (0x01648DC8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00BACEE0  MostHighWallPopStatePl0010::SafeCheck  size=111  [class]
void MostHighWallPopStatePl0010::SafeCheck(undefined4 *context)
{
    using namespace MostHighWallPopStatePl0010_p1;
    if (at<int>(this, 0x20) == 0) {  /* StateMachineNode+0x20: ? */
        Pl0000 *player = ownerPlayer(context);
        at<int>(player, 0x4170) = 1;  /* Pl0000+0x4170: ? flag */
    }
    StateMachineNode::SafeCheck(context);
}

// 00BACF50  MostHighWallPopStatePl0010::qteSafeCheck  size=125  [class]
void MostHighWallPopStatePl0010::qteSafeCheck(undefined4 *context)
{
    using namespace MostHighWallPopStatePl0010_p1;
    Pl0000 *player = ownerPlayer(context);
    FUN_008e0b70(at<int>(player, 0x764), 0);  /* Pl0000+0x764: motion controller ? */
    FUN_008e0ba0(at<int>(player, 0x764), 0);
    StateMachineNode::qteSafeCheck(context);
}

// 00BACFD0  MostHighWallPopStatePl0010::vf20  size=121  [class]
undefined4 MostHighWallPopStatePl0010::vf20(undefined4 *context)
{
    using namespace MostHighWallPopStatePl0010_p1;
    if (StateMachineNode::vf20(context) == 0) {
        return 0;
    }
    Pl0000 *player = ownerPlayer(context);
    at<int>(player, 0x4170) = 0;  /* Pl0000+0x4170: ? flag */
    return 1;
}
