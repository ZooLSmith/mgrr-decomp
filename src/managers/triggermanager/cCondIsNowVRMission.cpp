// src/managers/triggermanager/cCondIsNowVRMission.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsNowVRMission.h"

namespace cCondIsNowVRMission_p1 {

// FUN_0095c2a0 is jumped to with ECX untouched (still `this`); it ignores ECX and reads the globals
// FUN_0095bfa0 returns, so passing FUN_0095bfa0's result as ECX here is behaviourally equivalent.
inline bool isNowVRMission(undefined4 missionManager)
{
    return ((bool (__thiscall *)(undefined4))FUN_0095c2a0)(missionManager);
}

}  // namespace cCondIsNowVRMission_p1

// 00C7D780  Trigger::cCondIsNowVRMission::vf10  size=1  [class]
void Trigger::cCondIsNowVRMission::vf10()
{
}

// 00C7D790  Trigger::cCondIsNowVRMission::vf14  size=10  [class]
// call FUN_0095bfa0 / jmp FUN_0095c2a0: the raw decompilation typed this void; the tail call's
// result is returned.
int Trigger::cCondIsNowVRMission::vf14()
{
    using namespace cCondIsNowVRMission_p1;
    undefined4 missionManager = FUN_0095bfa0();
    return isNowVRMission(missionManager);
}

// 00C7D7A0  Trigger::cCondIsNowVRMission::vf1C  size=10  [class]
void Trigger::cCondIsNowVRMission::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C86A30  Trigger::cCondIsNowVRMission::vf00  size=31  [class]
Trigger::cCondIsNowVRMission *Trigger::cCondIsNowVRMission::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
