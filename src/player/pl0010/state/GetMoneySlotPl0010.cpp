// src/player/pl0010/state/GetMoneySlotPl0010.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "GetMoneySlotPl0010.h"

// ---------------------------------------------------------------------------------------------
// Data referenced by this part
// ---------------------------------------------------------------------------------------------
extern unsigned char DAT_01dc53d8[];  // type record of the event sender tested by vf18

namespace GetMoneySlotPl0010_p1 {

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

// event id handled by vf18
const int kEventGetMoney = 0xE;

}  // namespace GetMoneySlotPl0010_p1

// 00B79D80  GetMoneySlotPl0010::vf10  size=1  [class]
void GetMoneySlotPl0010::vf10()
{
}

// 00B79D90  GetMoneySlotPl0010::vf14  size=1  [class]
void GetMoneySlotPl0010::vf14()
{
}

// 00B79DA0  GetMoneySlotPl0010::vf00  size=45  [class]
// Scalar deleting destructor.  The machine code stores GetMoneySlotPl0010::vftable and then calls
// slot 0 of it (this very function) with flags 1 before storing Slot::vftable. // ?
undefined4 *GetMoneySlotPl0010::vf00(byte flags)
{
    using namespace GetMoneySlotPl0010_p1;

    // vftable = GetMoneySlotPl0010::vftable (0x016A1324)
    vcall<void>(this, 0x0, 1);
    // vftable = Slot::vftable (0x0163B780)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);
    }
    return (undefined4 *)this;
}

// 00B84A40  GetMoneySlotPl0010::vf18  size=113  [class]
// Event handler: on event 0xE the sender's object (sender+0x8) is notified through its vf238,
// the owner's pickup counter is incremented and a vibration (FUN_00dda360) is played.
void GetMoneySlotPl0010::vf18(int eventId, undefined4 *sender)
{
    using namespace GetMoneySlotPl0010_p1;

    if (eventId == kEventGetMoney) {
        if (sender != 0) {
            if (thiscall<int>(FUN_00dd6d80, vcall<void *>(sender, 0x0), DAT_01dc53d8) != 0 && sender[2] != 0) {
                void *picked = (void *)FUN_00a7c8a0((int)sender[2]);
                if (picked != 0) {
                    vcall<void>(picked, 0x238);  // Behavior::vf238 (slot 0x238)
                }
            }
        }
        char *owner = fld<char *>(this, 4);  /* Slot+0x4: owner */
        if (owner != 0) {
            fld<int>(owner, 0x3BD0) = fld<int>(owner, 0x3BD0) + 1;  /* owner+0x3BD0: money pickup counter */
            cdeclcall<void>(FUN_00dda360, 0, 1.0f, 1.0f, 10);
        }
    }
}
