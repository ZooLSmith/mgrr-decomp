// src/managers/triggermanager/cTriggerTask_PlAnim.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cTriggerTask_PlAnim.h"

extern unsigned int DAT_01bea070;  // stop-flag bit array (0x200000 = player animation by trigger)

namespace cTriggerTask_PlAnim_p1 {

// address stored in the vftable slot at byte offset `offset` of `object`
inline int vslot(int *object, int offset) { return *(int *)(*object + offset); }

// FUN_00a7c8a0 (__fastcall, ECX = entity): the entity's behavior object (the player here);
// the raw decompilation dropped ECX
inline int *player(int entity) { return (int *)FUN_00a7c8a0(entity); }

// call a __thiscall function (Ghidra dropped the ECX argument in the raw calls)
template <class R, class F, class... A> inline R callThis(F fn, const void *self, A... args)
{
    typedef R (__thiscall *Fn)(const void *, A...);
    return ((Fn)fn)(self, args...);
}

// virtual call through the vftable slot at byte offset `offset` (ECX = object)
template <class R, class... A> inline R vcall(int *object, int offset, A... args)
{
    typedef R (__thiscall *Fn)(int *, A...);
    return ((Fn)vslot(object, offset))(object, args...);
}

}  // namespace cTriggerTask_PlAnim_p1

// 00C775C0  Trigger::cTriggerTask_PlAnim::vf04  size=12  [class]
void Trigger::cTriggerTask_PlAnim::vf04()
{
    flags() = flags() | 1;
    animRequest() = 0;
}

// 00C775D0  Trigger::cTriggerTask_PlAnim::vf08  size=12  [class]
void Trigger::cTriggerTask_PlAnim::vf08()
{
    owner() = 0;
    flags() = 0;
    animRequest() = 0;
}

// 00C83E60  Trigger::cTriggerTask_PlAnim::vf00  size=38  [class]
Trigger::cTriggerTask_PlAnim *Trigger::cTriggerTask_PlAnim::vf00(unsigned char flags)
{
    animRequest() = 0;
    // vftable = Trigger::cTriggerTask::vftable (0x016A8908)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C83E90  FUN_00c83e90  size=127  [between]
// __thiscall in the binary (ECX = the cTriggerTask_PlAnim): stores the request and, when the
// player is in a state that allows it, prepares the player for the scripted animation.
void FUN_00c83e90(int task, undefined4 request)
{
    using namespace cTriggerTask_PlAnim_p1;
    *(undefined4 *)(task + 0xC) = request;  // cTriggerTask_PlAnim::animRequest()
    int *pl = player((int)request);  // ECX = the request (an entity)
    int state = pl[300];  // player+0x4B0: current state id
    bool allowed = FUN_009f9350(state);
    if (allowed == 1) {
        if (state == 0x10100 || state == 0x10010) {
            int result = vcall<int>(pl, 0x32C);
            if (result == 1) {
                callThis<void>(FUN_00b8a040, pl, 0, 0.0f, 0);  // middle argument is a float (fldz)
            }
            vcall<void>(pl, 0x318);
            callThis<void>(FUN_00a8cb50, pl, 0x134);
        }
        DAT_01bea070 = DAT_01bea070 | 0x200000;
    }
}

// 00C83F10  Trigger::cTriggerTask_PlAnim::vf0C  size=208  [class]
void Trigger::cTriggerTask_PlAnim::vf0C()
{
    using namespace cTriggerTask_PlAnim_p1;
    if ((*(unsigned char *)&flags() & 2) == 0 && animRequest() != 0) {
        int busy = ((int (__fastcall *)(int))FUN_00a7c7e0)(animRequest());  // ECX = animRequest(); full EAX tested
        if (busy == 0) {
            flags() = flags() | 2;
            return;
        }
        int *pl = player(animRequest());
        if (pl != 0) {
            int state = pl[300];  // player+0x4B0: current state id
            int result = FUN_00a92f90((int)pl);  // __fastcall, ECX = pl
            if (result != 0) {
                FUN_00e26e90(result);                            // __fastcall, ECX = result
                callThis<void>(FUN_00e22f10, (char *)result + 0x338, 0);  // ECX = result+0x338
            }
            result = callThis<int>(FUN_00a94ce0, pl, 0);  // full EAX compared with 1
            if (result == 1) {
                result = FUN_009f9350(state);
                if (result == 1) {
                    if (state == 0x10100 || state == 0x10010) {
                        vcall<void>(pl, 0x388, 0);
                        vcall<void>(pl, 0x314);
                    }
                    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
                }
                callThis<void>(FUN_00da8810, (void *)0x01BEA1D0, 10.0f);  // ECX = object at 0x01BEA1D0
                flags() = flags() | 2;
            }
        }
    }
}
