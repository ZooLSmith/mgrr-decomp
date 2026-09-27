// src/managers/triggermanager/cActNoCodecMenu.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActNoCodecMenu.h"

extern undefined DAT_01dbe2b0;                 // cActNoCodecMenu static descriptor returned by vf00

// 00C8F430  Trigger::cActNoCodecMenu::vf08  size=1  [class]
void Trigger::cActNoCodecMenu::vf08()
{
}

// 00C8F440  Trigger::cActNoCodecMenu::vf0C  size=1  [class]
void Trigger::cActNoCodecMenu::vf0C()
{
}

// 00C8F450  Trigger::cActNoCodecMenu::vf10  size=1  [class]
void Trigger::cActNoCodecMenu::vf10()
{
}

// 00C8F460  Trigger::cActNoCodecMenu::vf14  size=1  [class]
void Trigger::cActNoCodecMenu::vf14()
{
}

// 00C949C0  Trigger::cActNoCodecMenu::vf00  size=6  [class]
void *Trigger::cActNoCodecMenu::vf00()
{
    return &DAT_01dbe2b0;
}

// 00C949D0  Trigger::cActNoCodecMenu::vf04  size=31  [class]
Trigger::cActNoCodecMenu *Trigger::cActNoCodecMenu::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
