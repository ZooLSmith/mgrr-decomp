// src/managers/triggermanager/cActFuncall.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActFuncall.h"

extern undefined DAT_01dbe094;                 // cActFuncall static descriptor returned by vf00

// 00C89C90  Trigger::cActFuncall::vf08  size=1  [class]
void Trigger::cActFuncall::vf08()
{
}

// 00C89CA0  Trigger::cActFuncall::vf0C  size=1  [class]
void Trigger::cActFuncall::vf0C()
{
}

// 00C89CB0  Trigger::cActFuncall::vf10  size=1  [class]
void Trigger::cActFuncall::vf10()
{
}

// 00C89CC0  Trigger::cActFuncall::vf14  size=1  [class]
void Trigger::cActFuncall::vf14()
{
}

// 00C91D80  Trigger::cActFuncall::vf00  size=6  [class]
void *Trigger::cActFuncall::vf00()
{
    return &DAT_01dbe094;
}

// 00C91D90  Trigger::cActFuncall::vf04  size=31  [class]
Trigger::cActFuncall *Trigger::cActFuncall::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
