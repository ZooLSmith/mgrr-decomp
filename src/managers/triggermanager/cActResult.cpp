// src/managers/triggermanager/cActResult.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResult.h"

extern undefined DAT_01dbe088;  // cActResult static descriptor returned by vf00

// 00C7EE50  Trigger::cActResult::vf18  size=5  [class]
int Trigger::cActResult::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    return 0;
}

// 00C89AB0  Trigger::cActResult::vf08  size=1  [class]
void Trigger::cActResult::vf08()
{
}

// 00C89AC0  Trigger::cActResult::vf0C  size=1  [class]
void Trigger::cActResult::vf0C()
{
}

// 00C89AD0  Trigger::cActResult::vf10  size=1  [class]
void Trigger::cActResult::vf10()
{
}

// 00C89AE0  Trigger::cActResult::vf14  size=1  [class]
void Trigger::cActResult::vf14()
{
}

// 00C91B70  Trigger::cActResult::vf00  size=6  [class]
void *Trigger::cActResult::vf00()
{
    return &DAT_01dbe088;
}

// 00C91B80  Trigger::cActResult::vf04  size=31  [class]
Trigger::cActResult *Trigger::cActResult::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
