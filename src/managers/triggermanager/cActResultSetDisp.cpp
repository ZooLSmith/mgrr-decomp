// src/managers/triggermanager/cActResultSetDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResultSetDisp.h"

extern undefined DAT_01dbe14c;  // cActResultSetDisp static descriptor returned by vf00

// 00C8BBD0  Trigger::cActResultSetDisp::vf08  size=1  [class]
void Trigger::cActResultSetDisp::vf08()
{
}

// 00C8BBE0  Trigger::cActResultSetDisp::vf0C  size=1  [class]
void Trigger::cActResultSetDisp::vf0C()
{
}

// 00C8BBF0  Trigger::cActResultSetDisp::vf10  size=1  [class]
void Trigger::cActResultSetDisp::vf10()
{
}

// 00C8BC00  Trigger::cActResultSetDisp::vf14  size=1  [class]
void Trigger::cActResultSetDisp::vf14()
{
}

// 00C92D40  Trigger::cActResultSetDisp::vf00  size=6  [class]
void *Trigger::cActResultSetDisp::vf00()
{
    return &DAT_01dbe14c;
}

// 00C92D50  Trigger::cActResultSetDisp::vf04  size=31  [class]
Trigger::cActResultSetDisp *Trigger::cActResultSetDisp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
