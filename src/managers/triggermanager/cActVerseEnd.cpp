// src/managers/triggermanager/cActVerseEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVerseEnd.h"

extern undefined DAT_01dbe054;  // cActVerseEnd static descriptor returned by vf00

// 00C7EB40  Trigger::cActVerseEnd::vf18  size=5  [class]
int Trigger::cActVerseEnd::vf18()
{
    // machine code: `xor eax,eax; ret 4` (one unused stack argument)
    return 0;
}

// 00C91830  Trigger::cActVerseEnd::vf00  size=6  [class]
void *Trigger::cActVerseEnd::vf00()
{
    return &DAT_01dbe054;
}

// 00C91840  Trigger::cActVerseEnd::vf04  size=31  [class]
Trigger::cActVerseEnd *Trigger::cActVerseEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
