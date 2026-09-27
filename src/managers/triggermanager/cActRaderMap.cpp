// src/managers/triggermanager/cActRaderMap.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActRaderMap.h"

extern undefined DAT_01dbe124;  // cActRaderMap static descriptor returned by vf00

// 00C8B590  Trigger::cActRaderMap::vf08  size=1  [class]
void Trigger::cActRaderMap::vf08()
{
}

// 00C8B5A0  Trigger::cActRaderMap::vf0C  size=1  [class]
void Trigger::cActRaderMap::vf0C()
{
}

// 00C8B5B0  Trigger::cActRaderMap::vf10  size=1  [class]
void Trigger::cActRaderMap::vf10()
{
}

// 00C8B5C0  Trigger::cActRaderMap::vf14  size=1  [class]
void Trigger::cActRaderMap::vf14()
{
}

// 00C92AC0  Trigger::cActRaderMap::vf00  size=6  [class]
void *Trigger::cActRaderMap::vf00()
{
    return &DAT_01dbe124;
}

// 00C92AD0  Trigger::cActRaderMap::vf04  size=31  [class]
Trigger::cActRaderMap *Trigger::cActRaderMap::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
