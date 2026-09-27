// src/managers/triggermanager/cCondIsSubstage.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsSubstage.h"

// 00C7A7F0  Trigger::cCondIsSubstage::vf14  size=3  [class]
int Trigger::cCondIsSubstage::vf14()
{
    return 0;
}

// 00C7A800  Trigger::cCondIsSubstage::vf1C  size=16  [class]
void Trigger::cCondIsSubstage::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    substageName() = (char *)(record + 2);    // record+0x08
}

// 00C856D0  Trigger::cCondIsSubstage::vf00  size=31  [class]
Trigger::cCondIsSubstage *Trigger::cCondIsSubstage::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
