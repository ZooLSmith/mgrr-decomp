// src/managers/triggermanager/cActionAbstract.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActionAbstract.h"

extern undefined DAT_01dbd214;  // cActionAbstract static descriptor returned by vf00

// 00C77D60  Trigger::cActionAbstract::vf00  size=6  [class]
void *Trigger::cActionAbstract::vf00()
{
    return &DAT_01dbd214;
}

// 00C77D70  Trigger::cActionAbstract::vf08  size=1  [class]
void Trigger::cActionAbstract::vf08()
{
}

// 00C77D80  Trigger::cActionAbstract::vf0C  size=1  [class]
void Trigger::cActionAbstract::vf0C()
{
}

// 00C77D90  Trigger::cActionAbstract::vf10  size=1  [class]
void Trigger::cActionAbstract::vf10()
{
}

// 00C77DA0  Trigger::cActionAbstract::vf14  size=1  [class]
void Trigger::cActionAbstract::vf14()
{
}

// 00C77DB0  Trigger::cActionAbstract::vf18  size=5  [class]
int Trigger::cActionAbstract::vf18()
{
    // machine code: `xor eax,eax; ret 4` (one unused stack argument)
    return 0;
}

// 00C77DC0  Trigger::cActionAbstract::vf1C  size=3  [class]
void Trigger::cActionAbstract::vf1C(int *record)
{
    // machine code: `ret 4` (the record argument is ignored)
}

// 00C77DD0  Trigger::cActionAbstract::vf20  size=4  [class]
int Trigger::cActionAbstract::vf20()
{
    return -1;
}

// 00C77DE0  Trigger::cActionAbstract::vf04  size=31  [class]
Trigger::cActionAbstract *Trigger::cActionAbstract::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
