// src/managers/triggermanager/cCondNowPastSubstage.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondNowPastSubstage.h"

// 00C7A890  Trigger::cCondNowPastSubstage::vf14  size=3  [class]
int Trigger::cCondNowPastSubstage::vf14()
{
    return 0;
}

// 00C7A8A0  Trigger::cCondNowPastSubstage::vf1C  size=16  [class]
void Trigger::cCondNowPastSubstage::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    substageName() = (char *)(record + 2);    // record+0x08
}

// 00C85710  Trigger::cCondNowPastSubstage::vf00  size=31  [class]
Trigger::cCondNowPastSubstage *Trigger::cCondNowPastSubstage::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
