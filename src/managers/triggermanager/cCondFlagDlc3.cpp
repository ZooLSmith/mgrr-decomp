// src/managers/triggermanager/cCondFlagDlc3.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondFlagDlc3.h"

extern int DAT_018abf98;  // DLC3 flag bit array (pointer to words)

namespace cCondFlagDlc3_p1 {

// Trigger::cCondition+0x04: the trigger record this condition was built from
inline int *&conditionRecord(void *self) { return *(int **)((char *)self + 0x4); }

} // namespace cCondFlagDlc3_p1

// 00C7E850  Trigger::cCondFlagDlc3::vf1C  size=16  [class]
void Trigger::cCondFlagDlc3::vf1C(int *record)
{
    using namespace cCondFlagDlc3_p1;

    conditionRecord(this) = record;
    flagNo() = record[2];
}

// 00C86F40  Trigger::cCondFlagDlc3::vf00  size=31  [class]
Trigger::cCondFlagDlc3 *Trigger::cCondFlagDlc3::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // operator delete
    }
    return this;
}

// 00C86F60  Trigger::cCondFlagDlc3::vf14  size=34  [class]
bool Trigger::cCondFlagDlc3::vf14()
{
    // bit `flagNo` of the flag bit array, most significant bit first in each 32-bit word
    return ((0x80000000U >> (flagNo() & 0x1f)) & ((unsigned int *)DAT_018abf98)[flagNo() >> 5]) != 0;
}
