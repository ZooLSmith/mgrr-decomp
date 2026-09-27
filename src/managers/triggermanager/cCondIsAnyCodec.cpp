// src/managers/triggermanager/cCondIsAnyCodec.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsAnyCodec.h"

extern unsigned int DAT_01bea060;  // global flags

namespace cCondIsAnyCodec_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondIsAnyCodec_p1

// 00C7D920  Trigger::cCondIsAnyCodec::vf10  size=1  [class]
void Trigger::cCondIsAnyCodec::vf10()
{
}

// 00C7D930  Trigger::cCondIsAnyCodec::vf14  size=12  [class]
unsigned int Trigger::cCondIsAnyCodec::vf14()
{
    return DAT_01bea060 >> 7 & 1;   // bit 7 of the global flags
}

// 00C7D940  Trigger::cCondIsAnyCodec::vf1C  size=10  [class]
void Trigger::cCondIsAnyCodec::vf1C(int *record)
{
    using namespace cCondIsAnyCodec_p1;

    conditionRecord(this) = record;
}

// 00C86A90  Trigger::cCondIsAnyCodec::vf00  size=31  [class]
Trigger::cCondIsAnyCodec *Trigger::cCondIsAnyCodec::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
