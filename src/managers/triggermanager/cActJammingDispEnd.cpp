// src/managers/triggermanager/cActJammingDispEnd.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActJammingDispEnd.h"

extern undefined DAT_01dbe1cc;                 // cActJammingDispEnd static descriptor returned by vf00
extern int DAT_01dc0ec8;                   // jamming display flag

// 00C804F0  Trigger::cActJammingDispEnd::vf18  size=18  [class]
int Trigger::cActJammingDispEnd::vf18()
{
    // machine code ends in `ret 4`: vf18 receives one (unused) stack argument
    DAT_01dc0ec8 = 0;  // jamming display off
    return 1;
}

// 00C8CD80  Trigger::cActJammingDispEnd::vf08  size=1  [class]
void Trigger::cActJammingDispEnd::vf08()
{
}

// 00C8CD90  Trigger::cActJammingDispEnd::vf0C  size=1  [class]
void Trigger::cActJammingDispEnd::vf0C()
{
}

// 00C8CDA0  Trigger::cActJammingDispEnd::vf10  size=1  [class]
void Trigger::cActJammingDispEnd::vf10()
{
}

// 00C8CDB0  Trigger::cActJammingDispEnd::vf14  size=1  [class]
void Trigger::cActJammingDispEnd::vf14()
{
}

// 00C93810  Trigger::cActJammingDispEnd::vf00  size=6  [class]
void *Trigger::cActJammingDispEnd::vf00()
{
    return &DAT_01dbe1cc;
}

// 00C93820  Trigger::cActJammingDispEnd::vf04  size=31  [class]
Trigger::cActJammingDispEnd *Trigger::cActJammingDispEnd::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
