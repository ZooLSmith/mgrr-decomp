// src/managers/triggermanager/cActVrBm6000On.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActVrBm6000On.h"

extern undefined DAT_01dbe2cc;  // cActVrBm6000On static descriptor returned by vf00

// 00C8F7F0  Trigger::cActVrBm6000On::vf08  size=1  [class]
void Trigger::cActVrBm6000On::vf08()
{
}

// 00C8F800  Trigger::cActVrBm6000On::vf0C  size=1  [class]
void Trigger::cActVrBm6000On::vf0C()
{
}

// 00C8F810  Trigger::cActVrBm6000On::vf10  size=1  [class]
void Trigger::cActVrBm6000On::vf10()
{
}

// 00C8F820  Trigger::cActVrBm6000On::vf14  size=1  [class]
void Trigger::cActVrBm6000On::vf14()
{
}

// 00C94B80  Trigger::cActVrBm6000On::vf00  size=6  [class]
void *Trigger::cActVrBm6000On::vf00()
{
    return &DAT_01dbe2cc;
}

// 00C94B90  Trigger::cActVrBm6000On::vf04  size=31  [class]
Trigger::cActVrBm6000On *Trigger::cActVrBm6000On::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
