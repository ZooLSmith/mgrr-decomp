// src/managers/triggermanager/cActCamOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCamOff.h"

extern undefined DAT_01dbe04c;           // cActCamOff static descriptor returned by vf00
extern undefined4 DAT_01dbd8a8;          // camera object (ECX of FUN_00ac9fe0; also tested by Trigger::Act::CAM)

// 00C7EB10  Trigger::cActCamOff::vf18  size=23  [class]
int Trigger::cActCamOff::vf18()
{
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    if (DAT_01dbd8a8 != 0) {
        FUN_00ac9fe0((int)DAT_01dbd8a8);  // __fastcall, ECX = DAT_01dbd8a8 (from the machine code)
    }
    return 1;
}

// 00C893D0  Trigger::cActCamOff::vf08  size=1  [class]
void Trigger::cActCamOff::vf08()
{
}

// 00C893E0  Trigger::cActCamOff::vf0C  size=1  [class]
void Trigger::cActCamOff::vf0C()
{
}

// 00C893F0  Trigger::cActCamOff::vf10  size=1  [class]
void Trigger::cActCamOff::vf10()
{
}

// 00C89400  Trigger::cActCamOff::vf14  size=1  [class]
void Trigger::cActCamOff::vf14()
{
}

// 00C917B0  Trigger::cActCamOff::vf00  size=6  [class]
void *Trigger::cActCamOff::vf00()
{
    return &DAT_01dbe04c;
}

// 00C917C0  Trigger::cActCamOff::vf04  size=31  [class]
Trigger::cActCamOff *Trigger::cActCamOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
