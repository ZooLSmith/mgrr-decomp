// src/player/pl0010/state/SlashStartSlotPl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "SlashStartSlotPl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01dc53d8[];  // type record of the event sender tested by vf18

namespace SlashStartSlotPl0010_p1 {

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

// event ids handled by vf18
const int kEventSetValue = 0x11;
const int kEventVibrate = 0xE;

}  // namespace SlashStartSlotPl0010_p1

// 00B79DF0  SlashStartSlotPl0010::vf10  size=1  [class]
void SlashStartSlotPl0010::vf10()
{
}

// 00B79E00  SlashStartSlotPl0010::vf14  size=1  [class]
void SlashStartSlotPl0010::vf14()
{
}

// 00B84AC0  SlashStartSlotPl0010::vf18  size=99  [class]
// Event handler.
void SlashStartSlotPl0010::vf18(int eventId, undefined4 *sender)
{
    using namespace SlashStartSlotPl0010_p1;

    if (sender != 0) {
        int isKind = FUN_00dd6d80((undefined4 *)vcall<void *>(sender, 0x0), (undefined4 *)DAT_01dc53d8);
        if (isKind != 0 && eventId == kEventSetValue) {
            void *owner = fld<void *>(this, 4);  /* Slot+0x4: owner (the player) */
            fld<float>(owner, 0x41A8) = fld<float>(sender, 4);  /* Pl0000+0x41A8: ? */
            return;
        }
    }
    if (eventId == kEventVibrate) {
        FUN_00dda360(0, 0x3F800000, 0x3F800000, 2);  // (0, 1.0f, 1.0f, 2)
    }
}

// 00B84B70  SlashStartSlotPl0010::vf00  size=31  [class]
// Scalar deleting destructor.
undefined4 *SlashStartSlotPl0010::vf00(byte flags)
{
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}
