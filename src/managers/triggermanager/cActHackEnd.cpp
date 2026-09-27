// src/managers/triggermanager/cActHackEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActHackEnd.h"

extern undefined DAT_01dbe160;                 // cActHackEnd static descriptor returned by vf00

// 00C7FA00  Trigger::cActHackEnd::vf18  size=8  [class]
int Trigger::cActHackEnd::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    return 1;
}

// 00C8BF20  Trigger::cActHackEnd::vf08  size=1  [class]
void Trigger::cActHackEnd::vf08()
{
}

// 00C8BF30  Trigger::cActHackEnd::vf0C  size=1  [class]
void Trigger::cActHackEnd::vf0C()
{
}

// 00C8BF40  Trigger::cActHackEnd::vf10  size=1  [class]
void Trigger::cActHackEnd::vf10()
{
}

// 00C8BF50  Trigger::cActHackEnd::vf14  size=1  [class]
void Trigger::cActHackEnd::vf14()
{
}

// 00C92FF0  Trigger::cActHackEnd::vf00  size=6  [class]
void *Trigger::cActHackEnd::vf00()
{
    return &DAT_01dbe160;
}

// 00C93000  Trigger::cActHackEnd::vf04  size=31  [class]
Trigger::cActHackEnd *Trigger::cActHackEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
