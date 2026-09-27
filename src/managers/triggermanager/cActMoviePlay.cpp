// src/managers/triggermanager/cActMoviePlay.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActMoviePlay.h"

extern undefined DAT_01dbe18c;                 // cActMoviePlay static descriptor returned by vf00

// 00C8C1A0  Trigger::cActMoviePlay::vf08  size=1  [class]
void Trigger::cActMoviePlay::vf08()
{
}

// 00C8C1B0  Trigger::cActMoviePlay::vf0C  size=1  [class]
void Trigger::cActMoviePlay::vf0C()
{
}

// 00C8C1C0  Trigger::cActMoviePlay::vf10  size=1  [class]
void Trigger::cActMoviePlay::vf10()
{
}

// 00C8C1D0  Trigger::cActMoviePlay::vf14  size=1  [class]
void Trigger::cActMoviePlay::vf14()
{
}

// 00C932B0  Trigger::cActMoviePlay::vf00  size=6  [class]
void *Trigger::cActMoviePlay::vf00()
{
    return &DAT_01dbe18c;
}

// 00C932C0  Trigger::cActMoviePlay::vf04  size=31  [class]
Trigger::cActMoviePlay *Trigger::cActMoviePlay::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
