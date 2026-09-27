// src/managers/triggermanager/cActSetGameoverNormalFlag.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActSetGameoverNormalFlag.h"

extern undefined DAT_01dbe1e0;  // cActSetGameoverNormalFlag static descriptor returned by vf00

// 00C80700  Trigger::cActSetGameoverNormalFlag::vf18  size=8  [class]
int Trigger::cActSetGameoverNormalFlag::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    return 1;
}

// 00C8D280  Trigger::cActSetGameoverNormalFlag::vf08  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf08()
{
}

// 00C8D290  Trigger::cActSetGameoverNormalFlag::vf0C  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf0C()
{
}

// 00C8D2A0  Trigger::cActSetGameoverNormalFlag::vf10  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf10()
{
}

// 00C8D2B0  Trigger::cActSetGameoverNormalFlag::vf14  size=1  [class]
void Trigger::cActSetGameoverNormalFlag::vf14()
{
}

// 00C93A10  Trigger::cActSetGameoverNormalFlag::vf00  size=6  [class]
void *Trigger::cActSetGameoverNormalFlag::vf00()
{
    return &DAT_01dbe1e0;
}

// 00C93A20  Trigger::cActSetGameoverNormalFlag::vf04  size=31  [class]
Trigger::cActSetGameoverNormalFlag *Trigger::cActSetGameoverNormalFlag::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
