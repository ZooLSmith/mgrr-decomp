// src/managers/triggermanager/cCondIsFileExist.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsFileExist.h"

// 00C7B150  Trigger::cCondIsFileExist::cCondIsFileExist  size=51  [class]
Trigger::cCondIsFileExist::cCondIsFileExist()
{
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    // vftable = Trigger::cCondIsFileExist::vftable (0x016A93C4)
    *(int *)((char *)this + 0x0C) = -1;  // cCondition+0x0C: last result
    *(int *)((char *)this + 0x08) = -1;  // cCondition+0x08: ?
    unsigned int *name = fileName();
    name[0] = 0;
    name[1] = 0;
    name[2] = 0;
    name[3] = 0;
    name[4] = 0;
    name[5] = 0;
    name[6] = 0;
    name[7] = 0;
}

// 00C7B1A0  Trigger::cCondIsFileExist::vf10  size=1  [class]
void Trigger::cCondIsFileExist::vf10()
{
}

// 00C7B1B0  Trigger::cCondIsFileExist::vf14  size=3  [class]
int Trigger::cCondIsFileExist::vf14()
{
    return 0;
}

// 00C7B1C0  Trigger::cCondIsFileExist::vf1C  size=27  [class]
void Trigger::cCondIsFileExist::vf1C(int *record)
{
    *(int **)((char *)this + 0x04) = record;  // cCondition+0x04: condition record
    unsigned int *source = (unsigned int *)(record + 2);  // record+0x08: file name
    unsigned int *dest = fileName();
    for (int words = 8; words != 0; words = words - 1) {
        *dest = *source;
        source = source + 1;
        dest = dest + 1;
    }
}

// 00C85C90  Trigger::cCondIsFileExist::vf00  size=31  [class]
Trigger::cCondIsFileExist *Trigger::cCondIsFileExist::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
