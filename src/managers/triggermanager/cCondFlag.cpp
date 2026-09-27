// src/managers/triggermanager/cCondFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondFlag.h"

extern int DAT_018abf38;  // story flag bit array (pointer to words)

namespace cCondFlag_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondFlag_p1

// 00C7A7B0  Trigger::cCondFlag::vf1C  size=16  [class]
void Trigger::cCondFlag::vf1C(int *record)
{
    using namespace cCondFlag_p1;

    conditionRecord(this) = record;
    flagNo() = record[2];
}

// 00C85680  Trigger::cCondFlag::vf00  size=31  [class]
Trigger::cCondFlag *Trigger::cCondFlag::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C856A0  Trigger::cCondFlag::vf14  size=34  [class]
bool Trigger::cCondFlag::vf14()
{
    // bit `flagNo` of the flag bit array, most significant bit first in each 32-bit word
    return ((0x80000000U >> (flagNo() & 0x1f)) & ((unsigned int *)DAT_018abf38)[flagNo() >> 5]) != 0;
}
