// src/managers/triggermanager/cActFileRelease.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFileRelease.h"

extern undefined DAT_01dbe19c;                 // cActFileRelease static descriptor returned by vf00

// 00C7FFA0  Trigger::cActFileRelease::vf18  size=5  [class]
int Trigger::cActFileRelease::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    return 0;
}

// 00C8C420  Trigger::cActFileRelease::vf08  size=1  [class]
void Trigger::cActFileRelease::vf08()
{
}

// 00C8C430  Trigger::cActFileRelease::vf0C  size=1  [class]
void Trigger::cActFileRelease::vf0C()
{
}

// 00C8C440  Trigger::cActFileRelease::vf10  size=1  [class]
void Trigger::cActFileRelease::vf10()
{
}

// 00C8C450  Trigger::cActFileRelease::vf14  size=1  [class]
void Trigger::cActFileRelease::vf14()
{
}

// 00C933B0  Trigger::cActFileRelease::vf00  size=6  [class]
void *Trigger::cActFileRelease::vf00()
{
    return &DAT_01dbe19c;
}

// 00C933C0  Trigger::cActFileRelease::vf04  size=31  [class]
Trigger::cActFileRelease *Trigger::cActFileRelease::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
