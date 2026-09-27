// src/managers/triggermanager/cActCameraDistanceOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraDistanceOff.h"

extern undefined DAT_01dbe0b0;           // cActCameraDistanceOff static descriptor returned by vf00
extern int DAT_01dbd8a4;                    // ? camera distance override counter (Trigger::Act::CAM_DIST sets it to 0); Ghidra: _DAT_01dbd8a4

// 00C7F010  Trigger::cActCameraDistanceOff::vf18  size=18  [class]
int Trigger::cActCameraDistanceOff::vf18()
{
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    DAT_01dbd8a4 = 0x78;  // 120
    return 1;
}

// 00C8A0F0  Trigger::cActCameraDistanceOff::vf08  size=1  [class]
void Trigger::cActCameraDistanceOff::vf08()
{
}

// 00C8A100  Trigger::cActCameraDistanceOff::vf0C  size=1  [class]
void Trigger::cActCameraDistanceOff::vf0C()
{
}

// 00C8A110  Trigger::cActCameraDistanceOff::vf10  size=1  [class]
void Trigger::cActCameraDistanceOff::vf10()
{
}

// 00C8A120  Trigger::cActCameraDistanceOff::vf14  size=1  [class]
void Trigger::cActCameraDistanceOff::vf14()
{
}

// 00C91FC0  Trigger::cActCameraDistanceOff::vf00  size=6  [class]
void *Trigger::cActCameraDistanceOff::vf00()
{
    return &DAT_01dbe0b0;
}

// 00C91FD0  Trigger::cActCameraDistanceOff::vf04  size=31  [class]
Trigger::cActCameraDistanceOff *Trigger::cActCameraDistanceOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
