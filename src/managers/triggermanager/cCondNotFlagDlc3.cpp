// src/managers/triggermanager/cCondNotFlagDlc3.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondNotFlagDlc3.h"

extern int DAT_018abf98;  // DLC3 flag bit array (pointer to words)

// 00C7E890  Trigger::cCondNotFlagDlc3::vf1C  size=16  [class]
void Trigger::cCondNotFlagDlc3::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    flagNo() = record[2];                     // record+0x08
}

// 00C86F90  Trigger::cCondNotFlagDlc3::vf00  size=31  [class]
Trigger::cCondNotFlagDlc3 *Trigger::cCondNotFlagDlc3::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}

// 00C86FB0  Trigger::cCondNotFlagDlc3::vf14  size=33  [class]
// True when flag bit flagNo is clear (bit 31 - (n & 31) of word n >> 5, most significant bit first).
bool Trigger::cCondNotFlagDlc3::vf14()
{
    unsigned int *words = (unsigned int *)DAT_018abf98;
    return ((0x80000000U >> (flagNo() & 0x1f)) & words[flagNo() >> 5]) == 0;
}
