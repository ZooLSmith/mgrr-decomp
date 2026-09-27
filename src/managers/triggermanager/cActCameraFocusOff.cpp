// src/managers/triggermanager/cActCameraFocusOff.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActCameraFocusOff.h"

extern undefined DAT_01dbe0b8;           // cActCameraFocusOff static descriptor returned by vf00
extern int DAT_01dbd898;                    // ? camera focus override counter (Trigger::Act::CAM_FOCUS sets it to 0); Ghidra: _DAT_01dbd898

// 00C7F030  Trigger::cActCameraFocusOff::vf18  size=18  [class]
int Trigger::cActCameraFocusOff::vf18()
{
    // (machine code: `ret 4` -- one stack argument, unused; cAction.h declares vf18() without it)
    DAT_01dbd898 = 0x78;  // 120
    return 1;
}

// 00C8A230  Trigger::cActCameraFocusOff::vf08  size=1  [class]
void Trigger::cActCameraFocusOff::vf08()
{
}

// 00C8A240  Trigger::cActCameraFocusOff::vf0C  size=1  [class]
void Trigger::cActCameraFocusOff::vf0C()
{
}

// 00C8A250  Trigger::cActCameraFocusOff::vf10  size=1  [class]
void Trigger::cActCameraFocusOff::vf10()
{
}

// 00C8A260  Trigger::cActCameraFocusOff::vf14  size=1  [class]
void Trigger::cActCameraFocusOff::vf14()
{
}

// 00C92040  Trigger::cActCameraFocusOff::vf00  size=6  [class]
void *Trigger::cActCameraFocusOff::vf00()
{
    return &DAT_01dbe0b8;
}

// 00C92050  Trigger::cActCameraFocusOff::vf04  size=31  [class]
Trigger::cActCameraFocusOff *Trigger::cActCameraFocusOff::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
