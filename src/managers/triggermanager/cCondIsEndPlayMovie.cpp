// src/managers/triggermanager/cCondIsEndPlayMovie.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsEndPlayMovie.h"

// 00C7B0A0  Trigger::cCondIsEndPlayMovie::vf14  size=13  [class]
// The raw decompilation typed this void; the machine code returns FUN_00c1d730's EAX unchanged.
int Trigger::cCondIsEndPlayMovie::vf14()
{
    return FUN_00c1d730(movieId());
}

// 00C7B0B0  Trigger::cCondIsEndPlayMovie::vf1C  size=16  [class]
void Trigger::cCondIsEndPlayMovie::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    movieId() = record[2];                    // record+0x08
}

// 00C85C50  Trigger::cCondIsEndPlayMovie::vf00  size=31  [class]
Trigger::cCondIsEndPlayMovie *Trigger::cCondIsEndPlayMovie::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
