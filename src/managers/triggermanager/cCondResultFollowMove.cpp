// src/managers/triggermanager/cCondResultFollowMove.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondResultFollowMove.h"

extern int DAT_01dc1310;  // result display flag

// 00C7AE80  Trigger::cCondResultFollowMove::vf14  size=6  [class]
int Trigger::cCondResultFollowMove::vf14()
{
    return DAT_01dc1310;
}

// 00C7AE90  Trigger::cCondResultFollowMove::vf1C  size=10  [class]
void Trigger::cCondResultFollowMove::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
}

// 00C85AF0  Trigger::cCondResultFollowMove::vf00  size=31  [class]
Trigger::cCondResultFollowMove *Trigger::cCondResultFollowMove::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
