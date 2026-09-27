// src/managers/triggermanager/cActFileRead.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFileRead.h"

extern undefined DAT_01dbe198;                 // cActFileRead static descriptor returned by vf00

// 00C7FF90  Trigger::cActFileRead::vf18  size=5  [class]
int Trigger::cActFileRead::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    return 0;
}

// 00C8C380  Trigger::cActFileRead::vf08  size=1  [class]
void Trigger::cActFileRead::vf08()
{
}

// 00C8C390  Trigger::cActFileRead::vf0C  size=1  [class]
void Trigger::cActFileRead::vf0C()
{
}

// 00C8C3A0  Trigger::cActFileRead::vf10  size=1  [class]
void Trigger::cActFileRead::vf10()
{
}

// 00C8C3B0  Trigger::cActFileRead::vf14  size=1  [class]
void Trigger::cActFileRead::vf14()
{
}

// 00C93370  Trigger::cActFileRead::vf00  size=6  [class]
void *Trigger::cActFileRead::vf00()
{
    return &DAT_01dbe198;
}

// 00C93380  Trigger::cActFileRead::vf04  size=31  [class]
Trigger::cActFileRead *Trigger::cActFileRead::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
