// src/managers/triggermanager/cCondIsCodec.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsCodec.h"

extern unsigned int DAT_01bea060;  // global flags

namespace cCondIsCodec_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondIsCodec_p1

// 00C7D8C0  Trigger::cCondIsCodec::vf10  size=1  [class]
void Trigger::cCondIsCodec::vf10()
{
}

// 00C7D8D0  Trigger::cCondIsCodec::vf14  size=12  [class]
unsigned int Trigger::cCondIsCodec::vf14()
{
    return DAT_01bea060 >> 0x12 & 1;   // bit 18 of the global flags
}

// 00C7D8E0  Trigger::cCondIsCodec::vf1C  size=10  [class]
void Trigger::cCondIsCodec::vf1C(int *record)
{
    using namespace cCondIsCodec_p1;

    conditionRecord(this) = record;
}

// 00C86A70  Trigger::cCondIsCodec::vf00  size=31  [class]
Trigger::cCondIsCodec *Trigger::cCondIsCodec::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}
