// src/managers/triggermanager/cCondHackStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondHackStart.h"

namespace cCondHackStart_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondHackStart_p1

// 00C7AFE0  Trigger::cCondHackStart::vf10  size=1  [class]
void Trigger::cCondHackStart::vf10()
{
}

// 00C7AFF0  Trigger::cCondHackStart::vf14  size=3  [class]
int Trigger::cCondHackStart::vf14()
{
    return 0;
}

// 00C7B000  Trigger::cCondHackStart::vf1C  size=16  [class]
void Trigger::cCondHackStart::vf1C(int *record)
{
    using namespace cCondHackStart_p1;

    conditionRecord(this) = record;
    field10() = record[2];
}

// 00C85B30  Trigger::cCondHackStart::vf00  size=31  [class]
Trigger::cCondHackStart *Trigger::cCondHackStart::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
