// src/managers/triggermanager/cActCameraAngleOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraAngleOff.h"

extern undefined DAT_01dbe0c0;           // cActCameraAngleOff static descriptor returned by vf00
extern int DAT_01dbd878;                    // ? camera angle override counter (Trigger::Act::CAM_ANG sets it to 0); Ghidra: _DAT_01dbd878

// 00C7F090  Trigger::cActCameraAngleOff::vf18  size=18  [class]
int Trigger::cActCameraAngleOff::vf18()
{
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    DAT_01dbd878 = 0x78;  // 120
    return 1;
}

// 00C8A370  Trigger::cActCameraAngleOff::vf08  size=1  [class]
void Trigger::cActCameraAngleOff::vf08()
{
}

// 00C8A380  Trigger::cActCameraAngleOff::vf0C  size=1  [class]
void Trigger::cActCameraAngleOff::vf0C()
{
}

// 00C8A390  Trigger::cActCameraAngleOff::vf10  size=1  [class]
void Trigger::cActCameraAngleOff::vf10()
{
}

// 00C8A3A0  Trigger::cActCameraAngleOff::vf14  size=1  [class]
void Trigger::cActCameraAngleOff::vf14()
{
}

// 00C920C0  Trigger::cActCameraAngleOff::vf00  size=6  [class]
void *Trigger::cActCameraAngleOff::vf00()
{
    return &DAT_01dbe0c0;
}

// 00C920D0  Trigger::cActCameraAngleOff::vf04  size=31  [class]
Trigger::cActCameraAngleOff *Trigger::cActCameraAngleOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
