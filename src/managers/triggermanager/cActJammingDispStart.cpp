// src/managers/triggermanager/cActJammingDispStart.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActJammingDispStart.h"

extern undefined DAT_01dbe1c8;                 // cActJammingDispStart static descriptor returned by vf00
extern int DAT_01dc0ec8;                   // jamming display flag

// 00C804E0  Trigger::cActJammingDispStart::vf18  size=13  [class]
int Trigger::cActJammingDispStart::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    // Ghidra typed this void; the machine code is `mov eax,1; mov [0x01DC0EC8],eax; ret 4`,
    // i.e. it also returns 1 like the other vf18 implementations.
    DAT_01dc0ec8 = 1;  // jamming display on
    return 1;
}

// 00C8CCE0  Trigger::cActJammingDispStart::vf08  size=1  [class]
void Trigger::cActJammingDispStart::vf08()
{
}

// 00C8CCF0  Trigger::cActJammingDispStart::vf0C  size=1  [class]
void Trigger::cActJammingDispStart::vf0C()
{
}

// 00C8CD00  Trigger::cActJammingDispStart::vf10  size=1  [class]
void Trigger::cActJammingDispStart::vf10()
{
}

// 00C8CD10  Trigger::cActJammingDispStart::vf14  size=1  [class]
void Trigger::cActJammingDispStart::vf14()
{
}

// 00C937D0  Trigger::cActJammingDispStart::vf00  size=6  [class]
void *Trigger::cActJammingDispStart::vf00()
{
    return &DAT_01dbe1c8;
}

// 00C937E0  Trigger::cActJammingDispStart::vf04  size=31  [class]
Trigger::cActJammingDispStart *Trigger::cActJammingDispStart::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
