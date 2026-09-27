// src/managers/triggermanager/cCondIsNotFileExist.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cCondIsNotFileExist.h"

// 00C7B1E0  Trigger::cCondIsNotFileExist::cCondIsNotFileExist  size=51  [class]
Trigger::cCondIsNotFileExist::cCondIsNotFileExist()
{
    *(int **)((char *)this + 0x04) = 0;  // cCondition+0x04: condition record
    // vftable = Trigger::cCondIsNotFileExist::vftable (0x016A93EC)
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

// 00C7B230  Trigger::cCondIsNotFileExist::vf10  size=1  [class]
void Trigger::cCondIsNotFileExist::vf10()
{
}

// 00C7B240  Trigger::cCondIsNotFileExist::vf14  size=3  [class]
int Trigger::cCondIsNotFileExist::vf14()
{
    return 0;
}

// 00C7B250  Trigger::cCondIsNotFileExist::vf1C  size=27  [class]
void Trigger::cCondIsNotFileExist::vf1C(int *record)
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

// 00C85CB0  Trigger::cCondIsNotFileExist::vf00  size=31  [class]
Trigger::cCondIsNotFileExist *Trigger::cCondIsNotFileExist::vf00(unsigned char flags)
{
    // vftable = Trigger::cCondition::vftable (0x016A8930)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
