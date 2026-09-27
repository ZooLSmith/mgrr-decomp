// src/managers/triggermanager/cActVerseStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVerseStart.h"

extern undefined DAT_01dbe050;  // cActVerseStart static descriptor returned by vf00

// 00C7EB30  Trigger::cActVerseStart::vf18  size=5  [class]
int Trigger::cActVerseStart::vf18()
{
    // machine code: `xor eax,eax; ret 4` (one unused stack argument)
    return 0;
}

// 00C917F0  Trigger::cActVerseStart::vf00  size=6  [class]
void *Trigger::cActVerseStart::vf00()
{
    return &DAT_01dbe050;
}

// 00C91800  Trigger::cActVerseStart::vf04  size=31  [class]
Trigger::cActVerseStart *Trigger::cActVerseStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
