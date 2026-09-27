// src/managers/triggermanager/cActQTEButtonDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActQTEButtonDisp.h"

extern undefined DAT_01dbe16c;  // cActQTEButtonDisp static descriptor returned by vf00

// 00C8C100  Trigger::cActQTEButtonDisp::vf08  size=1  [class]
void Trigger::cActQTEButtonDisp::vf08()
{
}

// 00C8C110  Trigger::cActQTEButtonDisp::vf0C  size=1  [class]
void Trigger::cActQTEButtonDisp::vf0C()
{
}

// 00C8C120  Trigger::cActQTEButtonDisp::vf10  size=1  [class]
void Trigger::cActQTEButtonDisp::vf10()
{
}

// 00C8C130  Trigger::cActQTEButtonDisp::vf14  size=1  [class]
void Trigger::cActQTEButtonDisp::vf14()
{
}

// 00C930B0  Trigger::cActQTEButtonDisp::vf00  size=6  [class]
void *Trigger::cActQTEButtonDisp::vf00()
{
    return &DAT_01dbe16c;
}

// 00C930C0  Trigger::cActQTEButtonDisp::vf04  size=31  [class]
Trigger::cActQTEButtonDisp *Trigger::cActQTEButtonDisp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
