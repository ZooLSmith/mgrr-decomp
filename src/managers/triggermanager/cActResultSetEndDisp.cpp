// src/managers/triggermanager/cActResultSetEndDisp.cpp -- cleaned from the raw decompilation; see docs/CLEANUP_GUIDE.md
#include "mgrr.h"
#include "cActResultSetEndDisp.h"

extern undefined DAT_01dbe158;  // cActResultSetEndDisp static descriptor returned by vf00
extern int DAT_01dc130c;   // result display flag

// 00C7F9C0  Trigger::cActResultSetEndDisp::vf18  size=18  [class]
int Trigger::cActResultSetEndDisp::vf18()  // machine code ends in `ret 4`: one stack argument, unused (cAction.h declares vf18() without it)
{
    DAT_01dc130c = 0;
    return 1;
}

// 00C8BDE0  Trigger::cActResultSetEndDisp::vf08  size=1  [class]
void Trigger::cActResultSetEndDisp::vf08()
{
}

// 00C8BDF0  Trigger::cActResultSetEndDisp::vf0C  size=1  [class]
void Trigger::cActResultSetEndDisp::vf0C()
{
}

// 00C8BE00  Trigger::cActResultSetEndDisp::vf10  size=1  [class]
void Trigger::cActResultSetEndDisp::vf10()
{
}

// 00C8BE10  Trigger::cActResultSetEndDisp::vf14  size=1  [class]
void Trigger::cActResultSetEndDisp::vf14()
{
}

// 00C92F70  Trigger::cActResultSetEndDisp::vf00  size=6  [class]
void *Trigger::cActResultSetEndDisp::vf00()
{
    return &DAT_01dbe158;
}

// 00C92F80  Trigger::cActResultSetEndDisp::vf04  size=31  [class]
Trigger::cActResultSetEndDisp *Trigger::cActResultSetEndDisp::vf04(unsigned char flags)
{
    // vftable = Trigger::cActionAbstract::vftable (0x016A89A8)
    if ((flags & 1) != 0) {
        FUN_00dd4920((int)this);  // ? operator delete
    }
    return this;
}
